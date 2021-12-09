#include <stdio.h>
#include <SDL.h>

int main(void){

	if(SDL_Init(SDL_INIT_AUDIO) < 0){
		fprintf(stderr, "ERROR: Could not initialize SDL\nREASON: %s", SDL_GetError());
		exit(1);
	}

	SDL_AudioSpec spec = {
		.freq = 48000,
		.format = AUDIO_S16LSB;
	};

	SDL_Quit();

	printf("Hello hello\n");

	return 0;
}
