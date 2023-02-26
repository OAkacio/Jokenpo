#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int jogrand();
string conv(int x);
int ganhador(int x,int y);

int main(){
	//---
	
	bool ites=false;
	char icham;
	
	while(ites==false){
	
		int esc,esc2,conf1,conf2,conf3,pass=1,i,j;
		
		cout<<"\n\nBEM-VINDO AO JOGO DE JOKENPO\n\n";
		
		//Priemira rodada.
		//Escolha 1 do usuário.
		
		cout<<"Selecione sua primeira escolha...\n1.Tesoura\n2.Papel\n3.Pedra\n\nEscreva aqui a sua escolha:";
		cin>>esc;
		cout<<"\n\n";
		
		cout<<"Voce escolheu: "<<conv(esc)<<"\n\n";
		esc2=jogrand();
		cout<<"O jogador 2 escolheu: "<<conv(esc2)<<"\n\n";
		
		//Quem ganhou?
		
		if (ganhador(esc,esc2)==0){
			cout<<"_______________________________________________\nA primeira rodada foi EMPATE !!!\n_______________________________________________\n\n";
			conf1=0;
		}else if(ganhador(esc,esc2)==1){
			cout<<"_______________________________________________\nGanhador da primeira rodada foi o JOGADOR 1 !!!\n_______________________________________________\n\n";
			conf1=1;
		}else if(ganhador(esc,esc2)==2){
			cout<<"_______________________________________________\nGanhador da primeira rodada foi o JOGADOR 2 !!!\n_______________________________________________\n\n";
			conf1=2;
		}
		
		//Segunda rodada.
		
		cout<<"Selecione sua segunda escolha...\n1.Tesoura\n2.Papel\n3.Pedra\n\nEscreva aqui a sua escolha:";
		cin>>esc;
		cout<<"\n\n";
		
		cout<<"Voce escolheu: "<<conv(esc)<<"\n\n";
		esc2=jogrand();
		cout<<"O jogador 2 escolheu: "<<conv(esc2)<<"\n\n";
		
		//Quem ganhou?
		
		if (ganhador(esc,esc2)==0){
			cout<<"_______________________________________________\nA segunda rodada foi EMPATE !!!\n_______________________________________________\n\n";
			conf2=0;
		}else if(ganhador(esc,esc2)==1){
			cout<<"_______________________________________________\nGanhador da segunda rodada foi o JOGADOR 1 !!!\n_______________________________________________\n\n";
			conf2=1;
		}else if(ganhador(esc,esc2)==2){
			cout<<"_______________________________________________\nGanhador da segunda rodada foi o JOGADOR 2 !!!\n_______________________________________________\n\n";
			conf2=2;
		}
		
		//Já teve ganhador total?
		
		if(conf1==conf2){
			if(conf1==1){
				cout<<"_______________________________________________\nGanhador do JOGO foi o JOGADOR 1 !!!\n_______________________________________________\n\n";
				pass=0;
			} else if(conf1==2){
				cout<<"_______________________________________________\nGanhador do JOGO foi o JOGADOR 2 !!!\n_______________________________________________\n\n";
				pass=0;
			} else if (conf1==0){
				cout<<"_______________________________________________\nRODADA FINAL !!!\n_______________________________________________\n\n";
			}
		} else{
			cout<<"_______________________________________________\nRODADA FINAL !!!\n_______________________________________________\n\n";
		}
		
		if(pass!=0){
			int pass2=1;
			cout<<"Selecione sua terceira escolha...\n1.Tesoura\n2.Papel\n3.Pedra\n\nEscreva aqui a sua escolha:";
			cin>>esc;
			cout<<"\n\n";
			
			cout<<"Voce escolheu: "<<conv(esc)<<"\n\n";
			esc2=jogrand();
			cout<<"O jogador 2 escolheu: "<<conv(esc2)<<"\n\n";
			
			//Quem ganhou?
			
			if (ganhador(esc,esc2)==0){
				cout<<"_______________________________________________\nA terceira rodada foi EMPATE !!!\n_______________________________________________\n\n";
				conf3=0;
			}else if(ganhador(esc,esc2)==1){
				cout<<"_______________________________________________\nGanhador da terceira rodada foi o JOGADOR 1 !!!\n_______________________________________________\n\n";
				conf3=1;
			}else if(ganhador(esc,esc2)==2){
				cout<<"_______________________________________________\nGanhador da terceira rodada foi o JOGADOR 2 !!!\n_______________________________________________\n\n";
				conf3=2;
			}
			
			//Quem ganhou o jogo total?
			   
			   if (conf1!=conf2&&conf1!=0&&conf2!=0){   //Dois players diferentes
			   
			   		if(conf3==0){
			   			cout<<"_______________________________________________\nO jogo terminou em EMPATE !!!\n_______________________________________________\n\n";
					   }else if (conf3==1){
					   	cout<<"_______________________________________________\nGanhador do JOGO foi o JOGADOR 1 !!!\n_______________________________________________\n\n";
					   }else if(conf3==2){
					   	cout<<"_______________________________________________\nGanhador do JOGO foi o JOGADOR 2 !!!\n_______________________________________________\n\n";
					   }

			   }
			
				if((conf1==1&&conf2==0)|(conf1==2&&conf2==0)|(conf1==0&&conf2==1)|(conf1==0&&conf2==2)){   //Um player e um empate
						
			      //terceiro é player igual
			      
			    	if(conf1==0){   //primeira rodada deu empate
			    		if(conf2==conf3&&conf3==1){
							cout<<"_______________________________________________\nGanhador do JOGO foi o JOGADOR 1 !!!\n_______________________________________________\n\n";
						}else if(conf2==conf3&&conf3==2){
							cout<<"_______________________________________________\nGanhador do JOGO foi o JOGADOR 2 !!!\n_______________________________________________\n\n";
						}
					}else if(conf2==0){   //segunda rodada deu empate
						if(conf1==conf3&&conf3==1){
							cout<<"_______________________________________________\nGanhador do JOGO foi o JOGADOR 1 !!!\n_______________________________________________\n\n";
						}else if(conf1==conf3&&conf3==2){
							cout<<"_______________________________________________\nGanhador do JOGO foi o JOGADOR 2 !!!\n_______________________________________________\n\n";
						}
					}
			      
			      //terceiro é player diferente
			      
			    	if (conf1!=conf2&&conf1!=conf3&&conf2!=conf3){
			    		cout<<"_______________________________________________\nO jogo terminou em EMPATE !!!\n_______________________________________________\n\n";
					}
			      
			      //terceiro é empate
			      
			    	if(conf1==0&&conf3==0){   //primeira rodada deu empate
			    		if(conf2==1){
			    			cout<<"_______________________________________________\nGanhador do JOGO foi o JOGADOR 1 !!!\n_______________________________________________\n\n";
						}else if(conf2==2){
							cout<<"_______________________________________________\nGanhador do JOGO foi o JOGADOR 2 !!!\n_______________________________________________\n\n";
						}
					}else if(conf2==0&&conf3==0){   //Segunda rodada deu empate
						if(conf1==1){
			    			cout<<"_______________________________________________\nGanhador do JOGO foi o JOGADOR 1 !!!\n_______________________________________________\n\n";
						}else if(conf1==2){
							cout<<"_______________________________________________\nGanhador do JOGO foi o JOGADOR 2 !!!\n_______________________________________________\n\n";
						}
					}
			      
				}
			   
			   if(conf1==conf2&&conf1==0){   //Dois empates
			   
			   		if(conf3==1){
			   			cout<<"_______________________________________________\nGanhador do JOGO foi o JOGADOR 1 !!!\n_______________________________________________\n\n";
					   }else if(conf3==2){
					   	cout<<"_______________________________________________\nGanhador do JOGO foi o JOGADOR 2 !!!\n_______________________________________________\n\n";
					   }else if(conf3==0){
					   	cout<<"_______________________________________________\nO jogo terminou em EMPATE !!!\n_______________________________________________\n\n";
					   }
			    	
			   }
			}
			
	
		//replay
		
		cout<<"Caso você queira jogar novamente aperte 's'. Caso não queira jogar novamente aperte qualquer outra tecla: ";
		cin>>icham;
		
		if(icham!='s'){
			ites=true;
		}else{
			ites=false;
		}		
		
	}
	
	//---
	return 0;
}

int jogrand(){
    srand(time(NULL));
    
    int esc2=rand() % 3 + 1;
    
    return esc2;
}

string conv(int x){
	string esc;
	if(x==1){
		esc="Tesoura";
	}
	if(x==2){
		esc="Papel";
	}
	if(x==3){
		esc="Pedra";
	}
	return esc;
}

int ganhador(int x,int y){
	int pganhador;
	if(x==1){
		if(y==1){
			pganhador=0;
		}else if(y==2){
			pganhador=1;
		}else if(y==3){
			pganhador=2;
		}
	}
	if(x==2){
		if(y==1){
			pganhador=2;
		}else if(y==2){
			pganhador=0;
		}else if(y==3){
			pganhador=1;
		}
	}
	if(x==3){
		if(y==1){
			pganhador=1;
		}else if(y==2){
			pganhador=2;
		}else if(y==3){
			pganhador=0;
		}
	}
	return pganhador;
}
