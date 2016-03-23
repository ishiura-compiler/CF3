
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
static int16_t x4 = INT16_MIN;
uint16_t x7 = 2U;
int32_t t1 = -11400;
uint64_t t4 = 321LLU;
int32_t x21 = INT32_MAX;
uint32_t x23 = 3414128U;
uint32_t x27 = 6U;
uint32_t t6 = 610U;
static int8_t x38 = INT8_MIN;
volatile int64_t t11 = 18852LL;
int64_t x63 = 590LL;
int16_t x65 = INT16_MAX;
int32_t t15 = -469444207;
static volatile int8_t x71 = INT8_MIN;
volatile int64_t t18 = 8744693111LL;
static uint8_t x86 = 19U;
static volatile uint32_t x87 = 63544U;
int32_t x99 = 146;
static int32_t x100 = -4023857;
static volatile int64_t x103 = INT64_MIN;
uint64_t t24 = 15548LLU;
static uint8_t x109 = 82U;
uint64_t x113 = 10688225948005266LLU;
uint64_t x116 = UINT64_MAX;
int16_t x119 = 10178;
int32_t t27 = 75584449;
volatile int16_t x122 = -1;
int8_t x130 = -1;
static int64_t t30 = 113LL;
int16_t x136 = -1964;
int8_t x140 = INT8_MAX;
uint64_t x159 = 26138342LLU;
int64_t x160 = INT64_MIN;
int64_t t38 = 3054539215737LL;
int8_t x173 = -11;
static volatile uint64_t x175 = 133091810LLU;
volatile int64_t x176 = -2239058301LL;
static volatile uint16_t x183 = 220U;
uint8_t x193 = UINT8_MAX;
int16_t x197 = INT16_MAX;
uint8_t x198 = UINT8_MAX;
volatile uint8_t x203 = 6U;
int64_t x204 = 643244694818LL;
volatile int16_t x206 = INT16_MIN;
int16_t x217 = -4;
volatile uint64_t t51 = 1010LLU;
volatile uint16_t x237 = 1U;
static uint8_t x241 = UINT8_MAX;
static uint32_t x246 = UINT32_MAX;
uint16_t x248 = UINT16_MAX;
volatile uint32_t t56 = 949228U;
volatile int32_t x251 = -1;
volatile uint32_t x258 = 129U;
uint16_t x261 = 21U;
volatile int32_t t60 = 1;
volatile int64_t x271 = INT64_MIN;
static int32_t x280 = -1;
uint32_t x287 = 371U;
uint64_t x288 = 1393LLU;
int64_t t66 = -407LL;
int32_t x296 = -1;
uint16_t x306 = 0U;
static uint32_t x307 = UINT32_MAX;
uint16_t x310 = UINT16_MAX;
volatile uint64_t t71 = 135LLU;
volatile uint64_t t72 = 17248143678486934LLU;
volatile int64_t t73 = -1639LL;
int32_t x321 = 16096368;
int16_t x323 = INT16_MIN;
uint8_t x326 = 20U;
int16_t x330 = INT16_MAX;
uint8_t x333 = 74U;
uint32_t x336 = UINT32_MAX;
static int64_t x337 = -3LL;
uint64_t x345 = 51661LLU;
static int8_t x348 = -26;
uint64_t x355 = 2538306147952LLU;
volatile int8_t x358 = INT8_MAX;
volatile int64_t t84 = -60541LL;
volatile int32_t x371 = 208351;
uint16_t x373 = 5184U;
volatile int8_t x375 = 0;
int16_t x379 = INT16_MIN;
uint64_t x380 = UINT64_MAX;
volatile int8_t x381 = -1;
int32_t x383 = INT32_MAX;
int64_t x398 = -754463474LL;
int32_t x399 = 914;
int64_t t92 = 2043454777264684105LL;
int64_t x404 = INT64_MIN;
static int32_t x405 = INT32_MAX;
int8_t x408 = INT8_MAX;
int64_t t94 = -2236229917603576249LL;
int32_t x417 = -842278;
volatile int16_t x420 = INT16_MAX;
int32_t x421 = -1;
uint64_t x423 = UINT64_MAX;
uint64_t t98 = 41252462LLU;
uint8_t x428 = UINT8_MAX;
volatile int64_t x429 = -266161411718LL;
uint32_t t101 = 2051436052U;
uint64_t x447 = 1201345168978777LLU;
volatile uint64_t t103 = 3LLU;
uint8_t x450 = 16U;
int8_t x451 = 1;
int64_t t104 = 2918748LL;
int8_t x453 = 0;
static int8_t x458 = INT8_MIN;
int64_t t106 = -1658018374112228074LL;
volatile int16_t x461 = INT16_MIN;
volatile int32_t x468 = -1;
volatile int16_t x494 = INT16_MAX;
int16_t x495 = INT16_MIN;
uint8_t x496 = 1U;
int16_t x498 = INT16_MIN;
int32_t x503 = 14208;
uint64_t x504 = 1927LLU;
uint8_t x509 = 0U;
uint32_t x516 = 359227896U;
static int64_t x517 = -1LL;
int8_t x526 = -1;
uint32_t x529 = 3U;
volatile int8_t x531 = INT8_MIN;
int16_t x533 = -1;
volatile int8_t x536 = INT8_MIN;
int32_t t125 = -5233782;
volatile int8_t x540 = INT8_MIN;
int8_t x541 = -1;
int16_t x544 = INT16_MAX;
int16_t x547 = INT16_MIN;
int32_t t130 = 52368895;
int64_t x563 = -1LL;
uint8_t x567 = 3U;
int8_t x570 = 0;
int16_t x573 = INT16_MAX;
int64_t x579 = INT64_MIN;
int64_t t136 = -349750376LL;
uint8_t x582 = 4U;
volatile int16_t x589 = -5;
volatile int16_t x592 = INT16_MIN;
volatile int32_t t139 = -59094;
static uint8_t x597 = 2U;
static int64_t x600 = 294677781008453LL;
int64_t t141 = 200LL;
static volatile int32_t x604 = -1;
static int8_t x611 = INT8_MAX;
int16_t x612 = INT16_MIN;
volatile int64_t t144 = -112869621198478LL;
volatile uint64_t x618 = 398274477LLU;
uint64_t t148 = 4167722LLU;
uint16_t x629 = UINT16_MAX;
volatile int64_t t151 = -2537620130579581LL;
static volatile uint32_t x641 = 209U;
int32_t x652 = INT32_MIN;
static uint32_t x654 = 0U;
static volatile uint64_t x655 = UINT64_MAX;
volatile int16_t x660 = INT16_MIN;
int8_t x661 = INT8_MIN;
static volatile int64_t t156 = 0LL;
uint64_t t157 = 135LLU;
volatile int32_t x676 = INT32_MIN;
int64_t x678 = -1085373904LL;
int8_t x679 = INT8_MAX;
int64_t x680 = INT64_MIN;
uint32_t x682 = 86948094U;
volatile uint64_t t161 = 302LLU;
int16_t x688 = -1;
volatile int16_t x689 = INT16_MAX;
int8_t x705 = -1;
static int64_t x707 = -64LL;
int8_t x708 = INT8_MIN;
static uint64_t x709 = UINT64_MAX;
volatile uint64_t t168 = 2LLU;
int32_t x715 = -1;
static int16_t x724 = 720;
int8_t x732 = INT8_MIN;
static volatile uint64_t x737 = 132LLU;
int8_t x740 = -24;
static int64_t x744 = -29215612863489LL;
volatile int32_t x751 = 1;
volatile int16_t x753 = INT16_MAX;
int64_t x764 = -1775672LL;
volatile int64_t t181 = 51513462336LL;
static int8_t x767 = -1;
int64_t x769 = INT64_MIN;
int64_t x770 = -63294279614439068LL;
static int32_t x776 = 114302524;
uint32_t x777 = 1U;
static int32_t x783 = INT32_MIN;
volatile int32_t t186 = -5403;
int8_t x791 = 0;
volatile int64_t x792 = -1LL;
volatile uint8_t x799 = UINT8_MAX;
uint64_t x800 = 1385LLU;
static uint32_t x801 = 236830117U;
int8_t x808 = 1;
volatile int32_t t191 = -3148655;
static int64_t x809 = 998549184245742LL;
uint8_t x812 = 30U;
uint16_t x823 = UINT16_MAX;
int32_t x830 = -823990;


void f0(void) {
    	uint16_t x1 = UINT16_MAX;
	int16_t x3 = 6682;
	volatile int32_t t0 = -1672;

    t0 = ((x1|(x2|x3))%x4);

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -2435;
	int32_t x6 = INT32_MIN;
	int32_t x8 = INT32_MIN;

    t1 = ((x5|(x6|x7))%x8);

    if (t1 != -2433) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 1U;
	uint8_t x10 = 59U;
	volatile int8_t x11 = INT8_MAX;
	volatile int64_t x12 = -108345592LL;
	volatile int64_t t2 = 86371383LL;

    t2 = ((x9|(x10|x11))%x12);

    if (t2 != 127LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MAX;
	int32_t x14 = 84533973;
	int32_t x15 = INT32_MAX;
	int64_t x16 = INT64_MAX;
	int64_t t3 = 1301420069LL;

    t3 = ((x13|(x14|x15))%x16);

    if (t3 != 2147483647LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint32_t x17 = 29U;
	int64_t x18 = INT64_MIN;
	int64_t x19 = INT64_MIN;
	uint64_t x20 = 18404389381109777LLU;

    t4 = ((x17|(x18|x19))%x20);

    if (t4 != 2772956918777560LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x22 = INT16_MIN;
	static int64_t x24 = 5LL;
	volatile int64_t t5 = 3479118085929125LL;

    t5 = ((x21|(x22|x23))%x24);

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = 82;
	volatile int8_t x26 = -4;
	int32_t x28 = -1;

    t6 = ((x25|(x26|x27))%x28);

    if (t6 != 4294967294U) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x29 = 3748;
	int16_t x30 = INT16_MIN;
	int32_t x31 = INT32_MIN;
	uint16_t x32 = UINT16_MAX;
	int32_t t7 = -9835539;

    t7 = ((x29|(x30|x31))%x32);

    if (t7 != -29020) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MIN;
	int64_t x34 = INT64_MIN;
	volatile int32_t x35 = INT32_MIN;
	int64_t x36 = -114LL;
	volatile int64_t t8 = -85LL;

    t8 = ((x33|(x34|x35))%x36);

    if (t8 != -98LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x37 = INT16_MIN;
	volatile int32_t x39 = INT32_MIN;
	volatile int64_t x40 = INT64_MAX;
	volatile int64_t t9 = -49127223LL;

    t9 = ((x37|(x38|x39))%x40);

    if (t9 != -128LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = 120U;
	volatile uint8_t x42 = 87U;
	int32_t x43 = -1;
	int8_t x44 = 7;
	volatile int32_t t10 = -64;

    t10 = ((x41|(x42|x43))%x44);

    if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x49 = INT16_MIN;
	int64_t x50 = INT64_MIN;
	static uint16_t x51 = 426U;
	int32_t x52 = INT32_MIN;

    t11 = ((x49|(x50|x51))%x52);

    if (t11 != -32342LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x53 = INT32_MAX;
	int8_t x54 = INT8_MIN;
	uint32_t x55 = 18U;
	int32_t x56 = INT32_MAX;
	uint32_t t12 = 1U;

    t12 = ((x53|(x54|x55))%x56);

    if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x57 = INT8_MIN;
	int32_t x58 = 0;
	int16_t x59 = INT16_MIN;
	int16_t x60 = INT16_MAX;
	volatile int32_t t13 = -92203;

    t13 = ((x57|(x58|x59))%x60);

    if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x61 = -5;
	int32_t x62 = -107842406;
	int64_t x64 = INT64_MAX;
	int64_t t14 = 801644467708653195LL;

    t14 = ((x61|(x62|x63))%x64);

    if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x66 = -1;
	static uint8_t x67 = 0U;
	volatile uint8_t x68 = 67U;

    t15 = ((x65|(x66|x67))%x68);

    if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x69 = -1;
	volatile int32_t x70 = 3135;
	volatile int8_t x72 = -1;
	static volatile int32_t t16 = 0;

    t16 = ((x69|(x70|x71))%x72);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x73 = INT32_MIN;
	static int64_t x74 = 335675792126LL;
	int32_t x75 = INT32_MIN;
	int16_t x76 = INT16_MIN;
	int64_t t17 = -2151486270833772LL;

    t17 = ((x73|(x74|x75))%x76);

    if (t17 != -25858LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x81 = INT16_MIN;
	int64_t x82 = -1LL;
	uint8_t x83 = 32U;
	int64_t x84 = -43288LL;

    t18 = ((x81|(x82|x83))%x84);

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x85 = 2674U;
	uint16_t x88 = UINT16_MAX;
	uint32_t t19 = 3426U;

    t19 = ((x85|(x86|x87))%x88);

    if (t19 != 64123U) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x89 = INT16_MAX;
	int16_t x90 = 13;
	int32_t x91 = INT32_MAX;
	int16_t x92 = INT16_MIN;
	int32_t t20 = 312778;

    t20 = ((x89|(x90|x91))%x92);

    if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint64_t x93 = 113378306986LLU;
	static int8_t x94 = -1;
	static uint16_t x95 = 2418U;
	uint16_t x96 = 5U;
	volatile uint64_t t21 = 187855709581275LLU;

    t21 = ((x93|(x94|x95))%x96);

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint32_t x97 = UINT32_MAX;
	int32_t x98 = INT32_MIN;
	uint32_t t22 = 25371U;

    t22 = ((x97|(x98|x99))%x100);

    if (t22 != 4023856U) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint64_t x101 = 75LLU;
	volatile int32_t x102 = -1;
	volatile uint64_t x104 = 1470LLU;
	volatile uint64_t t23 = 772925441134628975LLU;

    t23 = ((x101|(x102|x103))%x104);

    if (t23 != 1275LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x105 = 980LLU;
	volatile int32_t x106 = INT32_MAX;
	uint8_t x107 = 2U;
	volatile uint8_t x108 = 42U;

    t24 = ((x105|(x106|x107))%x108);

    if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x110 = 36U;
	int32_t x111 = INT32_MIN;
	uint64_t x112 = 8LLU;
	volatile uint64_t t25 = 3647965539081575LLU;

    t25 = ((x109|(x110|x111))%x112);

    if (t25 != 6LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static int64_t x114 = 35265628154LL;
	int8_t x115 = INT8_MAX;
	volatile uint64_t t26 = 898143LLU;

    t26 = ((x113|(x114|x115))%x116);

    if (t26 != 10688261131270143LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x117 = INT8_MIN;
	static int16_t x118 = INT16_MAX;
	volatile int16_t x120 = -1;

    t27 = ((x117|(x118|x119))%x120);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x121 = 2333547509694677947LL;
	volatile uint8_t x123 = 3U;
	int32_t x124 = INT32_MAX;
	volatile int64_t t28 = -1000661960231160862LL;

    t28 = ((x121|(x122|x123))%x124);

    if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x125 = INT64_MAX;
	volatile int8_t x126 = -1;
	int8_t x127 = 0;
	static volatile int8_t x128 = -6;
	volatile int64_t t29 = 1871LL;

    t29 = ((x125|(x126|x127))%x128);

    if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x129 = 72U;
	int16_t x131 = -9493;
	volatile int64_t x132 = 125026LL;

    t30 = ((x129|(x130|x131))%x132);

    if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x133 = 2U;
	volatile int64_t x134 = -140LL;
	static int32_t x135 = 22;
	volatile int64_t t31 = -3487655827862536910LL;

    t31 = ((x133|(x134|x135))%x136);

    if (t31 != -138LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x137 = UINT16_MAX;
	int16_t x138 = INT16_MIN;
	volatile uint64_t x139 = 13139LLU;
	static uint64_t t32 = 2268184611710233223LLU;

    t32 = ((x137|(x138|x139))%x140);

    if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint16_t x141 = 0U;
	uint8_t x142 = UINT8_MAX;
	int64_t x143 = INT64_MIN;
	int32_t x144 = 39;
	int64_t t33 = -42180LL;

    t33 = ((x141|(x142|x143))%x144);

    if (t33 != -26LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x145 = UINT32_MAX;
	volatile int32_t x146 = INT32_MIN;
	uint64_t x147 = UINT64_MAX;
	uint64_t x148 = 6834663183512885LLU;
	volatile uint64_t t34 = 4351LLU;

    t34 = ((x145|(x146|x147))%x148);

    if (t34 != 6822804591787885LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint32_t x153 = 7U;
	static uint16_t x154 = 0U;
	int32_t x155 = -1;
	int64_t x156 = 1LL;
	volatile int64_t t35 = 486233817505145LL;

    t35 = ((x153|(x154|x155))%x156);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x157 = INT64_MIN;
	int32_t x158 = INT32_MIN;
	volatile uint64_t t36 = 2190591785626LLU;

    t36 = ((x157|(x158|x159))%x160);

    if (t36 != 9223372034733430502LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x161 = -209422815;
	uint64_t x162 = 35LLU;
	static uint32_t x163 = 0U;
	static int32_t x164 = INT32_MAX;
	volatile uint64_t t37 = 5366LLU;

    t37 = ((x161|(x162|x163))%x164);

    if (t37 != 1938060838LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x165 = 80U;
	static int64_t x166 = INT64_MIN;
	volatile uint32_t x167 = 7U;
	static int16_t x168 = INT16_MIN;

    t38 = ((x165|(x166|x167))%x168);

    if (t38 != -32681LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x169 = INT64_MAX;
	int8_t x170 = INT8_MIN;
	int16_t x171 = INT16_MAX;
	uint16_t x172 = UINT16_MAX;
	static int64_t t39 = 1LL;

    t39 = ((x169|(x170|x171))%x172);

    if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x174 = -1;
	static volatile uint64_t t40 = 24366509800134224LLU;

    t40 = ((x173|(x174|x175))%x176);

    if (t40 != 2239058300LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x177 = INT32_MIN;
	uint16_t x178 = 30887U;
	static int8_t x179 = -1;
	volatile int64_t x180 = INT64_MIN;
	static volatile int64_t t41 = -367LL;

    t41 = ((x177|(x178|x179))%x180);

    if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x181 = 2U;
	uint16_t x182 = 118U;
	volatile uint64_t x184 = UINT64_MAX;
	uint64_t t42 = 267905537147LLU;

    t42 = ((x181|(x182|x183))%x184);

    if (t42 != 254LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x185 = INT8_MAX;
	volatile uint32_t x186 = 810506U;
	volatile int8_t x187 = INT8_MIN;
	volatile int8_t x188 = 3;
	static uint32_t t43 = 4U;

    t43 = ((x185|(x186|x187))%x188);

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x194 = -1LL;
	static uint32_t x195 = 2U;
	volatile uint32_t x196 = 21522486U;
	static int64_t t44 = 44108668737LL;

    t44 = ((x193|(x194|x195))%x196);

    if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x199 = INT32_MAX;
	int32_t x200 = -1;
	int32_t t45 = -4;

    t45 = ((x197|(x198|x199))%x200);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint32_t x201 = 14009U;
	volatile uint8_t x202 = 17U;
	int64_t t46 = -14441543198579950LL;

    t46 = ((x201|(x202|x203))%x204);

    if (t46 != 14015LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x205 = INT32_MIN;
	volatile uint32_t x207 = UINT32_MAX;
	uint64_t x208 = 1581244883LLU;
	uint64_t t47 = 56515089830717LLU;

    t47 = ((x205|(x206|x207))%x208);

    if (t47 != 1132477529LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x209 = INT32_MAX;
	int8_t x210 = -1;
	static uint64_t x211 = UINT64_MAX;
	uint16_t x212 = 75U;
	volatile uint64_t t48 = 882510798048LLU;

    t48 = ((x209|(x210|x211))%x212);

    if (t48 != 15LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x218 = -42289;
	static int8_t x219 = -1;
	int32_t x220 = INT32_MAX;
	static int32_t t49 = 308037;

    t49 = ((x217|(x218|x219))%x220);

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x221 = INT32_MIN;
	int64_t x222 = INT64_MAX;
	uint64_t x223 = 7501674400784102997LLU;
	uint32_t x224 = 10381U;
	uint64_t t50 = 1108318451280LLU;

    t50 = ((x221|(x222|x223))%x224);

    if (t50 != 4698LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x225 = INT32_MAX;
	volatile uint64_t x226 = 3599218423720LLU;
	int64_t x227 = 74617387603LL;
	int8_t x228 = -33;

    t51 = ((x225|(x226|x227))%x228);

    if (t51 != 3674344521727LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x229 = 22U;
	uint32_t x230 = 78622951U;
	static int16_t x231 = INT16_MIN;
	int64_t x232 = -1LL;
	static int64_t t52 = 128440133151538759LL;

    t52 = ((x229|(x230|x231))%x232);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x233 = 1;
	int16_t x234 = -1;
	volatile int64_t x235 = INT64_MIN;
	int8_t x236 = -24;
	int64_t t53 = -1428LL;

    t53 = ((x233|(x234|x235))%x236);

    if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x238 = 0U;
	static uint32_t x239 = UINT32_MAX;
	int8_t x240 = -1;
	uint32_t t54 = 1132813U;

    t54 = ((x237|(x238|x239))%x240);

    if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int32_t x242 = INT32_MAX;
	static int16_t x243 = -1;
	uint64_t x244 = UINT64_MAX;
	static uint64_t t55 = 95492182LLU;

    t55 = ((x241|(x242|x243))%x244);

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x245 = -1;
	uint32_t x247 = 219558U;

    t56 = ((x245|(x246|x247))%x248);

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x249 = -1;
	uint32_t x250 = UINT32_MAX;
	static int16_t x252 = 22;
	static uint32_t t57 = 5U;

    t57 = ((x249|(x250|x251))%x252);

    if (t57 != 3U) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x253 = INT32_MIN;
	int16_t x254 = 38;
	volatile int32_t x255 = INT32_MIN;
	volatile int8_t x256 = 38;
	static int32_t t58 = -1;

    t58 = ((x253|(x254|x255))%x256);

    if (t58 != -22) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x257 = INT64_MIN;
	int16_t x259 = INT16_MIN;
	int32_t x260 = INT32_MIN;
	int64_t t59 = 1892345LL;

    t59 = ((x257|(x258|x259))%x260);

    if (t59 != -32639LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x262 = -1;
	uint16_t x263 = UINT16_MAX;
	volatile int32_t x264 = INT32_MAX;

    t60 = ((x261|(x262|x263))%x264);

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x265 = -1;
	uint16_t x266 = 476U;
	int16_t x267 = INT16_MIN;
	uint8_t x268 = 115U;
	int32_t t61 = -1018577718;

    t61 = ((x265|(x266|x267))%x268);

    if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x269 = 2LLU;
	uint32_t x270 = 141486457U;
	int64_t x272 = INT64_MAX;
	uint64_t t62 = 8530513593LLU;

    t62 = ((x269|(x270|x271))%x272);

    if (t62 != 141486460LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x277 = UINT16_MAX;
	int64_t x278 = -10LL;
	static int64_t x279 = INT64_MIN;
	int64_t t63 = -447072755876741538LL;

    t63 = ((x277|(x278|x279))%x280);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x281 = UINT8_MAX;
	int16_t x282 = -1;
	volatile uint16_t x283 = 1U;
	volatile uint16_t x284 = UINT16_MAX;
	volatile int32_t t64 = -80;

    t64 = ((x281|(x282|x283))%x284);

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x285 = -1599485693634188820LL;
	static int32_t x286 = -1;
	uint64_t t65 = 12LLU;

    t65 = ((x285|(x286|x287))%x288);

    if (t65 != 746LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint8_t x289 = 61U;
	int64_t x290 = -27650LL;
	int8_t x291 = 0;
	int64_t x292 = 10LL;

    t66 = ((x289|(x290|x291))%x292);

    if (t66 != -9LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x293 = INT16_MIN;
	int16_t x294 = -1;
	int8_t x295 = INT8_MAX;
	int32_t t67 = -10579955;

    t67 = ((x293|(x294|x295))%x296);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x297 = -1;
	int16_t x298 = INT16_MIN;
	static uint32_t x299 = 297U;
	uint8_t x300 = UINT8_MAX;
	volatile uint32_t t68 = 173352904U;

    t68 = ((x297|(x298|x299))%x300);

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x301 = -1LL;
	int8_t x302 = -1;
	uint32_t x303 = UINT32_MAX;
	volatile int64_t x304 = INT64_MIN;
	volatile int64_t t69 = 9508944844110856LL;

    t69 = ((x301|(x302|x303))%x304);

    if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int64_t x305 = -1LL;
	int32_t x308 = INT32_MIN;
	int64_t t70 = -309912LL;

    t70 = ((x305|(x306|x307))%x308);

    if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint8_t x309 = UINT8_MAX;
	static uint64_t x311 = UINT64_MAX;
	int32_t x312 = INT32_MIN;

    t71 = ((x309|(x310|x311))%x312);

    if (t71 != 2147483647LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x313 = INT8_MIN;
	volatile uint64_t x314 = UINT64_MAX;
	volatile int16_t x315 = INT16_MAX;
	int32_t x316 = INT32_MAX;

    t72 = ((x313|(x314|x315))%x316);

    if (t72 != 3LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x317 = 74U;
	volatile int32_t x318 = INT32_MIN;
	static uint32_t x319 = 6U;
	int64_t x320 = 15626277LL;

    t73 = ((x317|(x318|x319))%x320);

    if (t73 != 6683777LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x322 = 1U;
	int32_t x324 = INT32_MIN;
	uint32_t t74 = 175880169U;

    t74 = ((x321|(x322|x323))%x324);

    if (t74 != 2147458161U) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x325 = INT64_MIN;
	int16_t x327 = INT16_MIN;
	int64_t x328 = -143844541787884LL;
	int64_t t75 = 2099LL;

    t75 = ((x325|(x326|x327))%x328);

    if (t75 != -32748LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x329 = 1LL;
	int64_t x331 = INT64_MAX;
	int8_t x332 = -1;
	int64_t t76 = -34961768576884888LL;

    t76 = ((x329|(x330|x331))%x332);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x334 = INT16_MIN;
	int16_t x335 = -1;
	uint32_t t77 = 0U;

    t77 = ((x333|(x334|x335))%x336);

    if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x338 = UINT32_MAX;
	volatile int8_t x339 = -1;
	int64_t x340 = INT64_MIN;
	int64_t t78 = 2LL;

    t78 = ((x337|(x338|x339))%x340);

    if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint32_t x341 = 25558456U;
	int64_t x342 = INT64_MAX;
	static int64_t x343 = INT64_MIN;
	volatile uint32_t x344 = 621U;
	int64_t t79 = -785404323LL;

    t79 = ((x341|(x342|x343))%x344);

    if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x346 = UINT32_MAX;
	uint16_t x347 = UINT16_MAX;
	uint64_t t80 = 490004LLU;

    t80 = ((x345|(x346|x347))%x348);

    if (t80 != 4294967295LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x349 = UINT32_MAX;
	int32_t x350 = INT32_MIN;
	int64_t x351 = INT64_MIN;
	int32_t x352 = -1;
	volatile int64_t t81 = 15LL;

    t81 = ((x349|(x350|x351))%x352);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x353 = UINT8_MAX;
	volatile uint16_t x354 = 4370U;
	volatile uint64_t x356 = 950363915433871LLU;
	uint64_t t82 = 68369842461393LLU;

    t82 = ((x353|(x354|x355))%x356);

    if (t82 != 2538306148351LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x357 = -222327693;
	int32_t x359 = INT32_MIN;
	volatile int8_t x360 = -1;
	volatile int32_t t83 = -1;

    t83 = ((x357|(x358|x359))%x360);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x361 = 211;
	int64_t x362 = INT64_MIN;
	uint8_t x363 = 5U;
	int64_t x364 = -16130716935241LL;

    t84 = ((x361|(x362|x363))%x364);

    if (t84 != -5531170259444LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x365 = 2;
	uint64_t x366 = 359957440998001063LLU;
	int64_t x367 = INT64_MIN;
	int32_t x368 = -1;
	uint64_t t85 = 5LLU;

    t85 = ((x365|(x366|x367))%x368);

    if (t85 != 9583329477852776871LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x369 = UINT8_MAX;
	int64_t x370 = INT64_MAX;
	volatile uint32_t x372 = UINT32_MAX;
	volatile int64_t t86 = -267066LL;

    t86 = ((x369|(x370|x371))%x372);

    if (t86 != 2147483647LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x374 = INT8_MIN;
	int64_t x376 = INT64_MAX;
	volatile int64_t t87 = -204670826871LL;

    t87 = ((x373|(x374|x375))%x376);

    if (t87 != -64LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x377 = INT16_MIN;
	static volatile int32_t x378 = INT32_MIN;
	uint64_t t88 = 3247LLU;

    t88 = ((x377|(x378|x379))%x380);

    if (t88 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x382 = 436342990281711041LLU;
	uint16_t x384 = 86U;
	static volatile uint64_t t89 = 681LLU;

    t89 = ((x381|(x382|x383))%x384);

    if (t89 != 83LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x385 = 1118838U;
	volatile int8_t x386 = -1;
	static uint8_t x387 = UINT8_MAX;
	int32_t x388 = -1;
	uint32_t t90 = 221964531U;

    t90 = ((x385|(x386|x387))%x388);

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x389 = 278U;
	int16_t x390 = -1;
	volatile uint16_t x391 = UINT16_MAX;
	int64_t x392 = INT64_MIN;
	volatile int64_t t91 = -413504017049959LL;

    t91 = ((x389|(x390|x391))%x392);

    if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x397 = INT8_MIN;
	static int64_t x400 = -1LL;

    t92 = ((x397|(x398|x399))%x400);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x401 = INT8_MIN;
	uint16_t x402 = 25150U;
	volatile int64_t x403 = INT64_MIN;
	static volatile int64_t t93 = 909764LL;

    t93 = ((x401|(x402|x403))%x404);

    if (t93 != -66LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x406 = INT8_MIN;
	int64_t x407 = INT64_MIN;

    t94 = ((x405|(x406|x407))%x408);

    if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x409 = INT8_MIN;
	volatile uint32_t x410 = UINT32_MAX;
	static uint16_t x411 = 3198U;
	int32_t x412 = INT32_MIN;
	uint32_t t95 = 49U;

    t95 = ((x409|(x410|x411))%x412);

    if (t95 != 2147483647U) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x413 = 0LL;
	volatile uint16_t x414 = UINT16_MAX;
	int8_t x415 = INT8_MIN;
	int32_t x416 = INT32_MIN;
	volatile int64_t t96 = -7057998LL;

    t96 = ((x413|(x414|x415))%x416);

    if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x418 = -4;
	volatile int8_t x419 = 33;
	volatile int32_t t97 = -57228694;

    t97 = ((x417|(x418|x419))%x420);

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x422 = 29;
	static volatile int64_t x424 = -1LL;

    t98 = ((x421|(x422|x423))%x424);

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x425 = UINT16_MAX;
	uint32_t x426 = UINT32_MAX;
	int8_t x427 = 0;
	volatile uint32_t t99 = 2U;

    t99 = ((x425|(x426|x427))%x428);

    if (t99 != 0U) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x430 = INT32_MIN;
	int32_t x431 = -1;
	static uint16_t x432 = 19672U;
	volatile int64_t t100 = 1LL;

    t100 = ((x429|(x430|x431))%x432);

    if (t100 != -1LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x437 = INT32_MIN;
	uint32_t x438 = UINT32_MAX;
	int8_t x439 = INT8_MAX;
	static uint32_t x440 = 21U;

    t101 = ((x437|(x438|x439))%x440);

    if (t101 != 3U) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x441 = INT32_MIN;
	int8_t x442 = -26;
	int16_t x443 = INT16_MAX;
	int64_t x444 = INT64_MIN;
	volatile int64_t t102 = 17200572629604LL;

    t102 = ((x441|(x442|x443))%x444);

    if (t102 != -1LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x445 = -13506567603444LL;
	uint32_t x446 = UINT32_MAX;
	static int32_t x448 = INT32_MAX;

    t103 = ((x445|(x446|x447))%x448);

    if (t103 != 2147479426LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint16_t x449 = UINT16_MAX;
	static volatile int64_t x452 = 926406320869075LL;

    t104 = ((x449|(x450|x451))%x452);

    if (t104 != 65535LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x454 = INT8_MIN;
	static int64_t x455 = -73505582279950091LL;
	int32_t x456 = 922;
	volatile int64_t t105 = -10LL;

    t105 = ((x453|(x454|x455))%x456);

    if (t105 != -11LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x457 = INT64_MIN;
	uint8_t x459 = 2U;
	int8_t x460 = INT8_MAX;

    t106 = ((x457|(x458|x459))%x460);

    if (t106 != -126LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x462 = -1;
	int16_t x463 = INT16_MIN;
	volatile int64_t x464 = INT64_MAX;
	volatile int64_t t107 = -932901093414909934LL;

    t107 = ((x461|(x462|x463))%x464);

    if (t107 != -1LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x465 = -1LL;
	static uint8_t x466 = 37U;
	int64_t x467 = INT64_MIN;
	volatile int64_t t108 = 311869304796463814LL;

    t108 = ((x465|(x466|x467))%x468);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x469 = INT32_MAX;
	int16_t x470 = -1;
	static volatile int64_t x471 = INT64_MAX;
	int8_t x472 = INT8_MAX;
	volatile int64_t t109 = -429LL;

    t109 = ((x469|(x470|x471))%x472);

    if (t109 != -1LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x473 = UINT32_MAX;
	volatile int64_t x474 = INT64_MIN;
	uint32_t x475 = 0U;
	int16_t x476 = -1;
	int64_t t110 = 2026LL;

    t110 = ((x473|(x474|x475))%x476);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x477 = INT32_MAX;
	int32_t x478 = -1;
	volatile int64_t x479 = INT64_MIN;
	volatile int8_t x480 = -1;
	static int64_t t111 = 60330735LL;

    t111 = ((x477|(x478|x479))%x480);

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x481 = 412U;
	static int16_t x482 = 0;
	static int16_t x483 = INT16_MIN;
	int16_t x484 = -1388;
	int32_t t112 = 659436;

    t112 = ((x481|(x482|x483))%x484);

    if (t112 != -432) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x485 = -1;
	static uint16_t x486 = UINT16_MAX;
	static volatile uint16_t x487 = 0U;
	int8_t x488 = -1;
	volatile int32_t t113 = -1;

    t113 = ((x485|(x486|x487))%x488);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x489 = 0;
	int16_t x490 = -1;
	uint32_t x491 = 803U;
	volatile int16_t x492 = INT16_MIN;
	uint32_t t114 = 168436123U;

    t114 = ((x489|(x490|x491))%x492);

    if (t114 != 32767U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x493 = 32481U;
	volatile int32_t t115 = -496;

    t115 = ((x493|(x494|x495))%x496);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x497 = INT32_MAX;
	static int32_t x499 = INT32_MAX;
	int8_t x500 = INT8_MIN;
	int32_t t116 = 7491;

    t116 = ((x497|(x498|x499))%x500);

    if (t116 != -1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x501 = 389LLU;
	volatile uint64_t x502 = UINT64_MAX;
	static uint64_t t117 = 2708297LLU;

    t117 = ((x501|(x502|x503))%x504);

    if (t117 != 917LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x505 = INT8_MIN;
	int32_t x506 = INT32_MIN;
	int32_t x507 = INT32_MIN;
	int32_t x508 = 3403;
	int32_t t118 = -63102;

    t118 = ((x505|(x506|x507))%x508);

    if (t118 != -128) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x510 = INT64_MIN;
	int16_t x511 = 226;
	int32_t x512 = INT32_MAX;
	volatile int64_t t119 = -2205052LL;

    t119 = ((x509|(x510|x511))%x512);

    if (t119 != -2147483423LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x513 = -1;
	uint32_t x514 = 91U;
	uint32_t x515 = 9901U;
	uint32_t t120 = 2937U;

    t120 = ((x513|(x514|x515))%x516);

    if (t120 != 343460439U) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x518 = 288907022;
	static int8_t x519 = INT8_MIN;
	int32_t x520 = INT32_MAX;
	static int64_t t121 = 115450275098624322LL;

    t121 = ((x517|(x518|x519))%x520);

    if (t121 != -1LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x521 = 60U;
	int64_t x522 = INT64_MIN;
	uint32_t x523 = 5469U;
	uint32_t x524 = UINT32_MAX;
	int64_t t122 = -11076229052LL;

    t122 = ((x521|(x522|x523))%x524);

    if (t122 != -2147478147LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint16_t x525 = 3U;
	static uint8_t x527 = 0U;
	int64_t x528 = INT64_MAX;
	volatile int64_t t123 = 486570664LL;

    t123 = ((x525|(x526|x527))%x528);

    if (t123 != -1LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x530 = -1;
	static int8_t x532 = INT8_MIN;
	uint32_t t124 = 8131997U;

    t124 = ((x529|(x530|x531))%x532);

    if (t124 != 127U) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x534 = 452;
	int8_t x535 = INT8_MIN;

    t125 = ((x533|(x534|x535))%x536);

    if (t125 != -1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x537 = INT8_MIN;
	int64_t x538 = 17132788364807LL;
	int32_t x539 = INT32_MIN;
	int64_t t126 = 53882LL;

    t126 = ((x537|(x538|x539))%x540);

    if (t126 != -121LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x542 = 3U;
	int64_t x543 = 2994675706556LL;
	volatile int64_t t127 = -28764160LL;

    t127 = ((x541|(x542|x543))%x544);

    if (t127 != -1LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x545 = 32531121302349LL;
	int64_t x546 = INT64_MAX;
	static volatile int8_t x548 = -1;
	volatile int64_t t128 = -29381LL;

    t128 = ((x545|(x546|x547))%x548);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x549 = -1;
	static volatile int16_t x550 = INT16_MIN;
	volatile uint8_t x551 = 17U;
	uint32_t x552 = UINT32_MAX;
	uint32_t t129 = 756U;

    t129 = ((x549|(x550|x551))%x552);

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x553 = INT32_MIN;
	int16_t x554 = -1;
	int32_t x555 = INT32_MIN;
	uint8_t x556 = UINT8_MAX;

    t130 = ((x553|(x554|x555))%x556);

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint16_t x557 = 0U;
	uint8_t x558 = 13U;
	static int32_t x559 = INT32_MIN;
	volatile int16_t x560 = 1;
	volatile int32_t t131 = -1;

    t131 = ((x557|(x558|x559))%x560);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x561 = 3;
	volatile int8_t x562 = INT8_MAX;
	uint8_t x564 = 36U;
	int64_t t132 = 393057559LL;

    t132 = ((x561|(x562|x563))%x564);

    if (t132 != -1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x565 = 893778LL;
	int32_t x566 = INT32_MIN;
	int32_t x568 = -1;
	int64_t t133 = 4575079805724113592LL;

    t133 = ((x565|(x566|x567))%x568);

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x569 = 1765;
	int8_t x571 = 1;
	int16_t x572 = 244;
	int32_t t134 = 186919659;

    t134 = ((x569|(x570|x571))%x572);

    if (t134 != 57) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x574 = UINT16_MAX;
	static volatile int32_t x575 = 598427977;
	static int64_t x576 = INT64_MAX;
	static int64_t t135 = 4375690441900LL;

    t135 = ((x573|(x574|x575))%x576);

    if (t135 != 598474751LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x577 = INT8_MIN;
	volatile int8_t x578 = -14;
	static int8_t x580 = INT8_MAX;

    t136 = ((x577|(x578|x579))%x580);

    if (t136 != -14LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x581 = UINT16_MAX;
	uint8_t x583 = UINT8_MAX;
	int64_t x584 = INT64_MIN;
	volatile int64_t t137 = 6LL;

    t137 = ((x581|(x582|x583))%x584);

    if (t137 != 65535LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x585 = INT64_MIN;
	int32_t x586 = 520769381;
	static int32_t x587 = INT32_MIN;
	int16_t x588 = INT16_MIN;
	static volatile int64_t t138 = -763046840034472LL;

    t138 = ((x585|(x586|x587))%x588);

    if (t138 != -12443LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x590 = -1;
	uint8_t x591 = 19U;

    t139 = ((x589|(x590|x591))%x592);

    if (t139 != -1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x593 = 32262U;
	volatile int8_t x594 = 1;
	uint64_t x595 = 967760085LLU;
	static int16_t x596 = INT16_MAX;
	volatile uint64_t t140 = 484987687LLU;

    t140 = ((x593|(x594|x595))%x596);

    if (t140 != 29237LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x598 = INT8_MAX;
	volatile int16_t x599 = INT16_MIN;

    t141 = ((x597|(x598|x599))%x600);

    if (t141 != -32641LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint32_t x601 = 3042U;
	int16_t x602 = -1;
	volatile uint16_t x603 = 11U;
	uint32_t t142 = 1676U;

    t142 = ((x601|(x602|x603))%x604);

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x605 = 36U;
	uint64_t x606 = UINT64_MAX;
	int8_t x607 = INT8_MIN;
	static int64_t x608 = INT64_MIN;
	static uint64_t t143 = 68134257764LLU;

    t143 = ((x605|(x606|x607))%x608);

    if (t143 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x609 = INT64_MIN;
	int16_t x610 = INT16_MIN;

    t144 = ((x609|(x610|x611))%x612);

    if (t144 != -32641LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x613 = 114U;
	static int32_t x614 = -1;
	volatile int32_t x615 = INT32_MIN;
	static uint8_t x616 = 20U;
	volatile int32_t t145 = 1272151;

    t145 = ((x613|(x614|x615))%x616);

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x617 = INT16_MIN;
	static uint16_t x619 = 2563U;
	uint32_t x620 = UINT32_MAX;
	uint64_t t146 = 22628632480LLU;

    t146 = ((x617|(x618|x619))%x620);

    if (t146 != 4294946735LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint64_t x621 = 13883471LLU;
	volatile int8_t x622 = INT8_MIN;
	static uint8_t x623 = 111U;
	uint32_t x624 = 1552U;
	volatile uint64_t t147 = 449866485346454LLU;

    t147 = ((x621|(x622|x623))%x624);

    if (t147 != 335LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x625 = 3U;
	volatile int64_t x626 = -95129132382377LL;
	int8_t x627 = INT8_MAX;
	uint64_t x628 = 1490327971632LLU;

    t148 = ((x625|(x626|x627))%x628);

    if (t148 != 1210776245247LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x630 = -1;
	int16_t x631 = INT16_MAX;
	int32_t x632 = INT32_MAX;
	volatile int32_t t149 = 1;

    t149 = ((x629|(x630|x631))%x632);

    if (t149 != -1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x633 = 5;
	int8_t x634 = 0;
	int32_t x635 = -324132720;
	uint32_t x636 = 1U;
	volatile uint32_t t150 = 31887889U;

    t150 = ((x633|(x634|x635))%x636);

    if (t150 != 0U) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x637 = 100520147329LL;
	volatile int8_t x638 = 1;
	int32_t x639 = INT32_MAX;
	static int32_t x640 = 124;

    t151 = ((x637|(x638|x639))%x640);

    if (t151 != 31LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int64_t x642 = -583LL;
	int64_t x643 = INT64_MIN;
	int8_t x644 = -2;
	int64_t t152 = -1243265066LL;

    t152 = ((x641|(x642|x643))%x644);

    if (t152 != -1LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x649 = INT64_MAX;
	static int8_t x650 = INT8_MAX;
	volatile int8_t x651 = INT8_MIN;
	volatile int64_t t153 = -670435LL;

    t153 = ((x649|(x650|x651))%x652);

    if (t153 != -1LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint64_t x653 = 113675727641839LLU;
	static int32_t x656 = 23684506;
	static volatile uint64_t t154 = 15LLU;

    t154 = ((x653|(x654|x655))%x656);

    if (t154 != 2678505LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x657 = INT32_MIN;
	int32_t x658 = 7870;
	int16_t x659 = INT16_MIN;
	int32_t t155 = 70;

    t155 = ((x657|(x658|x659))%x660);

    if (t155 != -24898) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x662 = 12358479267770LL;
	uint16_t x663 = 4U;
	static int64_t x664 = 1946282214923815605LL;

    t156 = ((x661|(x662|x663))%x664);

    if (t156 != -66LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x665 = INT32_MAX;
	uint8_t x666 = 0U;
	uint8_t x667 = UINT8_MAX;
	uint64_t x668 = 166993823192LLU;

    t157 = ((x665|(x666|x667))%x668);

    if (t157 != 2147483647LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x669 = INT8_MAX;
	int32_t x670 = INT32_MIN;
	int32_t x671 = INT32_MIN;
	static volatile int32_t x672 = -231;
	int32_t t158 = 36661442;

    t158 = ((x669|(x670|x671))%x672);

    if (t158 != -106) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x673 = INT8_MIN;
	int64_t x674 = INT64_MIN;
	static uint32_t x675 = 61866U;
	static int64_t t159 = -66939494742540LL;

    t159 = ((x673|(x674|x675))%x676);

    if (t159 != -86LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x677 = INT64_MAX;
	int64_t t160 = 4390900370314LL;

    t160 = ((x677|(x678|x679))%x680);

    if (t160 != -1LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile uint64_t x681 = 141659LLU;
	volatile uint8_t x683 = UINT8_MAX;
	static int64_t x684 = -1LL;

    t161 = ((x681|(x682|x683))%x684);

    if (t161 != 86948351LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint32_t x685 = UINT32_MAX;
	int32_t x686 = INT32_MIN;
	static uint64_t x687 = UINT64_MAX;
	uint64_t t162 = 84792LLU;

    t162 = ((x685|(x686|x687))%x688);

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x690 = UINT64_MAX;
	uint8_t x691 = 36U;
	uint8_t x692 = UINT8_MAX;
	static uint64_t t163 = 6888177LLU;

    t163 = ((x689|(x690|x691))%x692);

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x693 = 659974345U;
	int16_t x694 = -1;
	int8_t x695 = INT8_MIN;
	uint8_t x696 = UINT8_MAX;
	uint32_t t164 = 57224564U;

    t164 = ((x693|(x694|x695))%x696);

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x697 = 3U;
	uint64_t x698 = UINT64_MAX;
	int32_t x699 = INT32_MIN;
	int8_t x700 = -1;
	volatile uint64_t t165 = 435951446672770LLU;

    t165 = ((x697|(x698|x699))%x700);

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x701 = INT64_MAX;
	int32_t x702 = -1;
	volatile int8_t x703 = -1;
	int8_t x704 = INT8_MIN;
	int64_t t166 = -1384117225528179LL;

    t166 = ((x701|(x702|x703))%x704);

    if (t166 != -1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x706 = -810652821LL;
	volatile int64_t t167 = -626918366LL;

    t167 = ((x705|(x706|x707))%x708);

    if (t167 != -1LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x710 = -145802959003LL;
	uint16_t x711 = 56U;
	int32_t x712 = INT32_MIN;

    t168 = ((x709|(x710|x711))%x712);

    if (t168 != 2147483647LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x713 = 11;
	uint16_t x714 = UINT16_MAX;
	int64_t x716 = 15553LL;
	volatile int64_t t169 = -5332698712247832LL;

    t169 = ((x713|(x714|x715))%x716);

    if (t169 != -1LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint64_t x717 = 0LLU;
	int8_t x718 = -41;
	int64_t x719 = -1LL;
	static uint8_t x720 = UINT8_MAX;
	volatile uint64_t t170 = 9776600570746LLU;

    t170 = ((x717|(x718|x719))%x720);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x721 = UINT16_MAX;
	uint32_t x722 = UINT32_MAX;
	static int16_t x723 = INT16_MIN;
	static volatile uint32_t t171 = 2828U;

    t171 = ((x721|(x722|x723))%x724);

    if (t171 != 255U) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x725 = INT8_MIN;
	int16_t x726 = INT16_MAX;
	uint16_t x727 = 490U;
	int64_t x728 = INT64_MAX;
	static volatile int64_t t172 = 18211063LL;

    t172 = ((x725|(x726|x727))%x728);

    if (t172 != -1LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x729 = 61790329;
	int64_t x730 = -191156681LL;
	volatile int8_t x731 = 0;
	volatile int64_t t173 = 3LL;

    t173 = ((x729|(x730|x731))%x732);

    if (t173 != -1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x733 = 0U;
	volatile uint64_t x734 = 6916635338382545LLU;
	int32_t x735 = -1;
	static int64_t x736 = -38752779087764907LL;
	volatile uint64_t t174 = 196LLU;

    t174 = ((x733|(x734|x735))%x736);

    if (t174 != 38752779087764906LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x738 = 108U;
	int16_t x739 = INT16_MIN;
	volatile uint64_t t175 = 20LLU;

    t175 = ((x737|(x738|x739))%x740);

    if (t175 != 18446744073709519084LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint32_t x741 = UINT32_MAX;
	volatile int64_t x742 = -1LL;
	int8_t x743 = INT8_MAX;
	static int64_t t176 = -3071783090609LL;

    t176 = ((x741|(x742|x743))%x744);

    if (t176 != -1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x745 = UINT64_MAX;
	int64_t x746 = INT64_MAX;
	int16_t x747 = 1;
	static int32_t x748 = 255;
	static volatile uint64_t t177 = 420979702LLU;

    t177 = ((x745|(x746|x747))%x748);

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x749 = -30;
	static volatile uint64_t x750 = 2716LLU;
	static uint32_t x752 = 250945U;
	uint64_t t178 = 61215LLU;

    t178 = ((x749|(x750|x751))%x752);

    if (t178 != 126650LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x754 = INT8_MAX;
	uint8_t x755 = 28U;
	uint8_t x756 = 108U;
	int32_t t179 = -3;

    t179 = ((x753|(x754|x755))%x756);

    if (t179 != 43) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x757 = INT8_MIN;
	static volatile int64_t x758 = -7LL;
	static int16_t x759 = -2;
	uint32_t x760 = 790923U;
	volatile int64_t t180 = 281LL;

    t180 = ((x757|(x758|x759))%x760);

    if (t180 != -1LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x761 = UINT16_MAX;
	uint16_t x762 = 1U;
	static int8_t x763 = -5;

    t181 = ((x761|(x762|x763))%x764);

    if (t181 != -1LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x765 = 0U;
	static int8_t x766 = 62;
	uint32_t x768 = 5U;
	uint32_t t182 = 1U;

    t182 = ((x765|(x766|x767))%x768);

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x771 = -1;
	static int64_t x772 = -60936701LL;
	volatile int64_t t183 = -8LL;

    t183 = ((x769|(x770|x771))%x772);

    if (t183 != -1LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x773 = 1086255434LLU;
	static volatile int16_t x774 = -1;
	uint64_t x775 = 262340700766288914LLU;
	uint64_t t184 = 7148833963007577LLU;

    t184 = ((x773|(x774|x775))%x776);

    if (t184 != 4162607LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x778 = -1;
	static uint16_t x779 = 10U;
	static volatile int16_t x780 = INT16_MIN;
	volatile uint32_t t185 = 15525U;

    t185 = ((x777|(x778|x779))%x780);

    if (t185 != 32767U) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int16_t x781 = -1;
	volatile int8_t x782 = -54;
	int16_t x784 = INT16_MAX;

    t186 = ((x781|(x782|x783))%x784);

    if (t186 != -1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x789 = -1457LL;
	volatile int16_t x790 = INT16_MAX;
	static int64_t t187 = -76754980542LL;

    t187 = ((x789|(x790|x791))%x792);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x793 = 10;
	int32_t x794 = INT32_MIN;
	uint8_t x795 = UINT8_MAX;
	volatile int64_t x796 = 429739LL;
	volatile int64_t t188 = -1671972LL;

    t188 = ((x793|(x794|x795))%x796);

    if (t188 != -77610LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x797 = -1LL;
	volatile int16_t x798 = INT16_MIN;
	volatile uint64_t t189 = 31042490835637057LLU;

    t189 = ((x797|(x798|x799))%x800);

    if (t189 != 1005LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x802 = 1;
	uint64_t x803 = 3381115189250827LLU;
	int16_t x804 = INT16_MIN;
	volatile uint64_t t190 = 356735LLU;

    t190 = ((x801|(x802|x803))%x804);

    if (t190 != 3381115291041711LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x805 = 7;
	uint8_t x806 = 15U;
	int32_t x807 = INT32_MAX;

    t191 = ((x805|(x806|x807))%x808);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x810 = INT16_MIN;
	volatile uint16_t x811 = UINT16_MAX;
	volatile int64_t t192 = -46027750753833770LL;

    t192 = ((x809|(x810|x811))%x812);

    if (t192 != -1LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x813 = -1;
	uint8_t x814 = 3U;
	int32_t x815 = INT32_MIN;
	volatile int8_t x816 = 4;
	volatile int32_t t193 = 1;

    t193 = ((x813|(x814|x815))%x816);

    if (t193 != -1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint64_t x817 = UINT64_MAX;
	volatile uint32_t x818 = UINT32_MAX;
	int16_t x819 = INT16_MIN;
	volatile int16_t x820 = INT16_MAX;
	volatile uint64_t t194 = 299LLU;

    t194 = ((x817|(x818|x819))%x820);

    if (t194 != 15LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x821 = 1;
	volatile int64_t x822 = -1LL;
	uint64_t x824 = 229030639044275LLU;
	static uint64_t t195 = 225908451LLU;

    t195 = ((x821|(x822|x823))%x824);

    if (t195 != 158343805554565LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x825 = 9640864LL;
	uint64_t x826 = UINT64_MAX;
	volatile int64_t x827 = INT64_MAX;
	uint32_t x828 = UINT32_MAX;
	static uint64_t t196 = 2960240001954099978LLU;

    t196 = ((x825|(x826|x827))%x828);

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x829 = 11;
	uint64_t x831 = UINT64_MAX;
	int64_t x832 = INT64_MIN;
	volatile uint64_t t197 = 862434978LLU;

    t197 = ((x829|(x830|x831))%x832);

    if (t197 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x833 = INT64_MAX;
	volatile uint8_t x834 = 0U;
	static int16_t x835 = -1;
	int16_t x836 = INT16_MIN;
	volatile int64_t t198 = -29594689676LL;

    t198 = ((x833|(x834|x835))%x836);

    if (t198 != -1LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x837 = 12618U;
	uint64_t x838 = 3548817172963808567LLU;
	int8_t x839 = INT8_MIN;
	uint16_t x840 = 236U;
	volatile uint64_t t199 = 184159923087746LLU;

    t199 = ((x837|(x838|x839))%x840);

    if (t199 != 63LLU) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

