#ifndef GUI_RENDER_BUFFER_H_
#define GUI_RENDER_BUFFER_H_

#include <vector>

namespace example {

enum ShowBufferMode {
  SHOW_BUFFER_COLOR,
  SHOW_BUFFER_NORMAL,
  SHOW_BUFFER_DEPTH,
  SHOW_BUFFER_POSITION,
  SHOW_BUFFER_TEXCOORD,
  SHOW_BUFFER_DIFFUSE,
};

struct RenderBuffer {
  std::vector<float> rgba;  // 4
  std::vector<float> normal;  // 4 
  std::vector<float> depth;  // 4 
  std::vector<float> position;  // 4 
  std::vector<float> texcoord; // 4
  std::vector<float> diffuse; // 4

  void resize(size_t width, size_t height) {
    rgba.resize(width * height * 4);
    normal.resize(width * height * 4);
    depth.resize(width * height * 4);
    position.resize(width * height * 4);
    texcoord.resize(width * height * 4);
    diffuse.resize(width * height * 4);
  }
};

} // namespace example

#endif // GUI_RENDER_BUFFER_H_
