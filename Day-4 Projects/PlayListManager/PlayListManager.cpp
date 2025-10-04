#include<iostream>
#include<list>
#include<string>
using namespace std;

int main(){
    list<string> Playlist;
    int op,pos=0;
    char conti;
    string song;

    cout<<"--- Welcome to the Playlist Manager --- "<<endl;
    do{
        cout<<"Enter an option : "<<endl;
        cout<<"1.Add a song at the back \n2.Add a song to the front \n3.Add a song at a certain pos \n4.Remove a song from back ";
        cout<<"\n5.Remove song from front \n6.Display all songs in order \n7.Sort the playlist alphabetically \n8.Delete the playlist\nOption : ";
        cin>>op;
        if(op>=1 && op<=3){
            cout<<"Enter the song to be inserted : ";
            cin.ignore();
            getline(cin,song);
        }
        if(op==3){
            cout<<"Enter the position at which the song is to be inserted : ";
            cin>>pos;
        }
        switch(op){
            case 1 : Playlist.push_back(song);
                    break;
            case 2 : Playlist.push_front(song);
                    break;
            case 3: {
                auto it = Playlist.begin();
                int count = 0;
                while (count < pos && it != Playlist.end()) {
                    ++it;
                    ++count;
                }
                Playlist.insert(it, song);
                break;
            }

            case 4 : if(!Playlist.empty()) 
                        Playlist.pop_back();
                     else
                        cout<<"Error : The list is empty"<<endl;
                    break;
            case 5 : if(!Playlist.empty()) 
                        Playlist.pop_front();
                     else
                        cout<<"Error : The list is empty"<<endl;
                    break;
            case 6 : {
                int count = 0;
                for(auto it=Playlist.begin();it!=Playlist.end();it++){
                    cout<<count<<". "<<*it<<endl;
                    count++;
                }
                break;
            }
            case 7 : Playlist.sort(); break;
            case 8 : Playlist.clear(); break;
            default: cout<<"Error : Invalid option "<<endl;
        }

        cout<<"Do you want to continue(y/n) : ";
        cin>>conti;
    }while(conti=='y'|| conti=='Y');

    cout<<"Exiting the manager ... "<<endl;
    return 0;
}