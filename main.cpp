#include <SDL.h>
#include <SDL_vulkan.h>

class App {
public:
  void run() {
    initWindow();
    initVulkan();
    mainLoop();
    cleanup();
  }

private:
  void initWindow(){

  };
  void initVulkan();
  void mainLoop();
  void cleanup();
};

int main(int argc, char *argv[]) {
  SDL_Init(SDL_INIT_VIDEO);

  SDL_Window *window =
      SDL_CreateWindow("csvi", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                       640, 480, SDL_WINDOW_VULKAN | SDL_WINDOW_SHOWN);

  SDL_Renderer *renderer =
      SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);
  SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
  SDL_RenderClear(renderer);
  SDL_RenderPresent(renderer);

  // SDL_Event e;
  // bool quit = false;
  // while (!quit) {
  //   while (SDL_PollEvent(&e)) {
  //     if (e.type == SDL_QUIT) {
  //       quit = true;
  //     }
  //     if (e.type == SDL_KEYDOWN) {
  //       quit = true;
  //     }
  //     if (e.type == SDL_MOUSEBUTTONDOWN) {
  //       quit = true;
  //     }
  //   }
  // }

  SDL_Delay(5000);

  SDL_DestroyWindow(window);
  SDL_Quit();

  return 0;
}
