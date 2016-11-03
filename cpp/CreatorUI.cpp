////// AUTOGENERATED:BEGIN //////
////// DO     NOT     EDIT //////

#include <ui/CocosGUI.h>
#include "creator_utils.h"

USING_NS_CC;

bool CreatorUI_init()
{
    auto director = Director::getInstance();
    auto glview = director->getOpenGLView();
    auto frameSize = glview->getFrameSize();
    glview->setDesignResolutionSize(frameSize.width / (frameSize.height / 640), frameSize.height / (frameSize.height / 640), ResolutionPolicy::NO_BORDER);

    // BEGIN SpriteFrame loading
    auto spriteFrameCache = SpriteFrameCache::getInstance();
    // Files from .plist
    // creator_assets/test_polygon.plist processed manually. No need to include it in the assets folder
    // creator_assets/ui.plist processed manually. No need to include it in the assets folder

    // Files from .png
    auto sf_ghosts = SpriteFrame::create("creator_assets/ghosts.png", Rect(1, 0, 196, 130), false, Vec2(-29, 63), Size(256, 256));
    spriteFrameCache->addSpriteFrame(sf_ghosts, "ghosts");
    auto sf_grossinis_sister2_png = SpriteFrame::create("creator_assets/test_polygon.png", Rect(279, 26, 55, 130), false, Vec2(0, -2), Size(56, 138));
    sf_grossinis_sister2_png->setCenterRectInPixels(Rect(17,62,21,32));
    spriteFrameCache->addSpriteFrame(sf_grossinis_sister2_png, "grossinis_sister2.png");
    auto sf_arial16 = SpriteFrame::create("creator_assets/arial16.png", Rect(0, 0, 510, 61), false, Vec2(-1, 225.5), Size(512, 512));
    spriteFrameCache->addSpriteFrame(sf_arial16, "arial16");
    auto sf_default_sprite = SpriteFrame::create("creator_assets/image/default_sprite.png", Rect(0, 2, 40, 36), false, Vec2(0, 0), Size(40, 40));
    spriteFrameCache->addSpriteFrame(sf_default_sprite, "default_sprite");
    auto sf_default_btn_disabled = SpriteFrame::create("creator_assets/image/default_btn_disabled.png", Rect(0, 0, 40, 40), false, Vec2(0, 0), Size(40, 40));
    sf_default_btn_disabled->setCenterRectInPixels(Rect(4,4,32,28));
    spriteFrameCache->addSpriteFrame(sf_default_btn_disabled, "default_btn_disabled");
    auto sf_default_scrollbar_vertical_bg = SpriteFrame::create("creator_assets/image/default_scrollbar_vertical_bg.png", Rect(0, 0, 15, 30), false, Vec2(0, 0), Size(15, 30));
    sf_default_scrollbar_vertical_bg->setCenterRectInPixels(Rect(0,7,15,15));
    spriteFrameCache->addSpriteFrame(sf_default_scrollbar_vertical_bg, "default_scrollbar_vertical_bg");
    auto sf_grossinis_sister1_png = SpriteFrame::create("creator_assets/test_polygon.png", Rect(336, 1, 50, 116), false, Vec2(0, -11), Size(52, 139));
    sf_grossinis_sister1_png->setCenterRectInPixels(Rect(7,6,34,39));
    spriteFrameCache->addSpriteFrame(sf_grossinis_sister1_png, "grossinis_sister1.png");
    auto sf_grossini = SpriteFrame::create("creator_assets/grossini.png", Rect(1, 1, 461, 219), false, Vec2(-24.5, 17.5), Size(512, 256));
    spriteFrameCache->addSpriteFrame(sf_grossini, "grossini");
    auto sf_default_panel = SpriteFrame::create("creator_assets/image/default_panel.png", Rect(0, 0, 20, 20), false, Vec2(0, 0), Size(20, 20));
    sf_default_panel->setCenterRectInPixels(Rect(4,3,12,14));
    spriteFrameCache->addSpriteFrame(sf_default_panel, "default_panel");
    auto sf_default_btn_pressed = SpriteFrame::create("creator_assets/image/default_btn_pressed.png", Rect(0, 0, 40, 40), false, Vec2(0, 0), Size(40, 40));
    sf_default_btn_pressed->setCenterRectInPixels(Rect(3,4,34,32));
    spriteFrameCache->addSpriteFrame(sf_default_btn_pressed, "default_btn_pressed");
    auto sf_iso_test = SpriteFrame::create("creator_assets/iso-test.png", Rect(2, 1, 319, 116), false, Vec2(-94.5, 69), Size(512, 256));
    spriteFrameCache->addSpriteFrame(sf_iso_test, "iso-test");
    auto sf_test_polygon = SpriteFrame::create("creator_assets/test_polygon.png", Rect(4, 2, 380, 152), false, Vec2(0.5, 0.5), Size(387, 157));
    spriteFrameCache->addSpriteFrame(sf_test_polygon, "test_polygon");
    auto sf_default_btn_normal = SpriteFrame::create("creator_assets/image/default_btn_normal.png", Rect(0, 0, 40, 40), false, Vec2(0, 0), Size(40, 40));
    sf_default_btn_normal->setCenterRectInPixels(Rect(3,3,34,30));
    spriteFrameCache->addSpriteFrame(sf_default_btn_normal, "default_btn_normal");
    auto sf_grossini_dance_08 = SpriteFrame::create("creator_assets/grossini_dance_08.png", Rect(17, 7, 51, 109), false, Vec2(0, -1), Size(85, 121));
    spriteFrameCache->addSpriteFrame(sf_grossini_dance_08, "grossini_dance_08");
    auto sf_default_progressbar_bg = SpriteFrame::create("creator_assets/image/default_progressbar_bg.png", Rect(0, 0, 60, 15), false, Vec2(0, 0), Size(60, 15));
    sf_default_progressbar_bg->setCenterRectInPixels(Rect(5,0,50,15));
    spriteFrameCache->addSpriteFrame(sf_default_progressbar_bg, "default_progressbar_bg");
    auto sf_island_polygon_png = SpriteFrame::create("creator_assets/test_polygon.png", Rect(1, 1, 287, 152), false, Vec2(16, 7), Size(320, 200));
    spriteFrameCache->addSpriteFrame(sf_island_polygon_png, "island_polygon.png");
    auto sf_ui = SpriteFrame::create("creator_assets/ui.png", Rect(2, 2, 124, 221), false, Vec2(0, 15.5), Size(128, 256));
    spriteFrameCache->addSpriteFrame(sf_ui, "ui");
    auto sf_default_scrollbar_bg = SpriteFrame::create("creator_assets/image/default_scrollbar_bg.png", Rect(0, 0, 30, 15), false, Vec2(0, 0), Size(30, 15));
    sf_default_scrollbar_bg->setCenterRectInPixels(Rect(10,0,10,15));
    spriteFrameCache->addSpriteFrame(sf_default_scrollbar_bg, "default_scrollbar_bg");
    auto sf_default_progressbar = SpriteFrame::create("creator_assets/image/default_progressbar.png", Rect(0, 0, 30, 15), false, Vec2(0, 0), Size(30, 15));
    sf_default_progressbar->setCenterRectInPixels(Rect(5,0,20,15));
    spriteFrameCache->addSpriteFrame(sf_default_progressbar, "default_progressbar");
    auto sf_default_sprite_splash = SpriteFrame::create("creator_assets/image/default_sprite_splash.png", Rect(0, 0, 2, 2), false, Vec2(0, 0), Size(2, 2));
    spriteFrameCache->addSpriteFrame(sf_default_sprite_splash, "default_sprite_splash");
    auto sf_default_scrollbar_vertical = SpriteFrame::create("creator_assets/image/default_scrollbar_vertical.png", Rect(2, 0, 11, 30), false, Vec2(0, 0), Size(15, 30));
    sf_default_scrollbar_vertical->setCenterRectInPixels(Rect(0,5,11,20));
    spriteFrameCache->addSpriteFrame(sf_default_scrollbar_vertical, "default_scrollbar_vertical");
    auto sf_default_scrollbar = SpriteFrame::create("creator_assets/image/default_scrollbar.png", Rect(0, 2, 30, 11), false, Vec2(0, 0), Size(30, 15));
    sf_default_scrollbar->setCenterRectInPixels(Rect(10,0,10,11));
    spriteFrameCache->addSpriteFrame(sf_default_scrollbar, "default_scrollbar");
    // END SpriteFrame loading

    return true;
}
Node* CreatorUI_create()
{
    // New node
    auto scene_0_0 = Scene::create();
    scene_0_0->setAnchorPoint(Vec2(0, 0));
    scene_0_0->setColor(Color3B(255, 255, 255));
    scene_0_0->setLocalZOrder(0);
    scene_0_0->setGlobalZOrder(0);
    scene_0_0->setOpacity(255);
    scene_0_0->setOpacityModifyRGB(false);
    scene_0_0->setCascadeOpacityEnabled(true);
    scene_0_0->setTag(-1);
    scene_0_0->setContentSize(Size(0, 0));
    // New node
    auto uibutton_1_1 = ui::Button::create("default_btn_normal", "", "", ui::Widget::TextureResType::PLIST);
    uibutton_1_1->setAnchorPoint(Vec2(0.5, 0.5));
    uibutton_1_1->setScaleY(1);
    uibutton_1_1->setScaleX(1);
    uibutton_1_1->setColor(Color3B(255, 255, 255));
    uibutton_1_1->setName("Button");
    uibutton_1_1->setLocalZOrder(0);
    uibutton_1_1->setGlobalZOrder(0);
    uibutton_1_1->setOpacity(255);
    uibutton_1_1->setOpacityModifyRGB(false);
    uibutton_1_1->setCascadeOpacityEnabled(true);
    uibutton_1_1->setSkewX(0);
    uibutton_1_1->setTag(-1);
    uibutton_1_1->setContentSize(Size(200, 40));
    uibutton_1_1->setSkewY(0);
    uibutton_1_1->setRotationSkewY(0);
    uibutton_1_1->setPosition(Vec2(223, 335));
    uibutton_1_1->setRotationSkewX(0);
    scene_0_0->addChild(uibutton_1_1);
    // New node
    auto label_2_0 = Label::createWithSystemFont("This is a button", "arial", 20);
    label_2_0->setAnchorPoint(Vec2(0.5, 0.5));
    label_2_0->setScaleY(1);
    label_2_0->setScaleX(1);
    label_2_0->setColor(Color3B(0, 0, 0));
    label_2_0->setName("Label");
    label_2_0->setVerticalAlignment(TextVAlignment::CENTER);
    label_2_0->setLocalZOrder(0);
    label_2_0->setGlobalZOrder(0);
    label_2_0->setOpacity(255);
    label_2_0->setOpacityModifyRGB(false);
    label_2_0->setCascadeOpacityEnabled(true);
    label_2_0->setHorizontalAlignment(TextHAlignment::CENTER);
    label_2_0->setSkewX(0);
    label_2_0->setTag(-1);
    label_2_0->setContentSize(Size(200, 40));
    label_2_0->setSkewY(0);
    label_2_0->setRotationSkewY(0);
    label_2_0->setPosition(Vec2(0, 0));
    label_2_0->setRotationSkewX(0);
    uibutton_1_1->addChild(label_2_0);
    return scene_0_0;
}
////// AUTOGENERATED:END//////