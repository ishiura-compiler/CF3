
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

int32_t x3 = -1;
static int8_t x8 = -1;
volatile int32_t x9 = 15879;
int16_t x12 = INT16_MIN;
static int32_t t2 = -6;
volatile int64_t x14 = INT64_MIN;
volatile uint8_t x17 = 0U;
int16_t x26 = -1;
volatile uint8_t x29 = 1U;
volatile int16_t x33 = -122;
volatile int32_t t7 = -130882;
volatile int64_t x41 = -316420860393LL;
uint16_t x44 = 1U;
static uint8_t x49 = 2U;
int8_t x57 = INT8_MAX;
int8_t x70 = -37;
int32_t x77 = -6607;
uint8_t x81 = 1U;
int16_t x96 = INT16_MAX;
int8_t x98 = -15;
int16_t x99 = INT16_MIN;
static int16_t x117 = INT16_MAX;
int32_t x119 = -1;
int32_t t26 = -9713;
int8_t x128 = INT8_MIN;
int16_t x134 = 29;
int64_t x140 = INT64_MIN;
static volatile int16_t x143 = INT16_MAX;
volatile int64_t t31 = 61112LL;
volatile uint32_t x150 = 1U;
volatile uint32_t x153 = 451700U;
int64_t x171 = INT64_MAX;
volatile uint32_t t37 = 1201U;
int64_t x188 = 3LL;
int64_t x192 = INT64_MIN;
volatile int32_t x196 = INT32_MAX;
static int16_t x225 = INT16_MIN;
int32_t t50 = -6362646;
int16_t x242 = INT16_MIN;
int32_t t51 = -1;
int16_t x245 = INT16_MIN;
static uint16_t x247 = 166U;
int32_t x248 = INT32_MIN;
uint64_t x252 = UINT64_MAX;
static int32_t x264 = INT32_MIN;
uint32_t x268 = 53875981U;
static volatile int8_t x269 = -1;
uint8_t x273 = UINT8_MAX;
static volatile uint64_t t59 = 6LLU;
volatile int8_t x285 = -1;
uint64_t x290 = 37586LLU;
static volatile uint16_t x292 = 2U;
int8_t x293 = 36;
int16_t x296 = -902;
uint32_t x298 = 7383658U;
int64_t x302 = INT64_MIN;
int8_t x304 = -1;
int16_t x305 = INT16_MAX;
int8_t x306 = INT8_MAX;
volatile uint8_t x311 = UINT8_MAX;
static volatile int64_t t67 = 1496456114859823LL;
int16_t x314 = INT16_MAX;
volatile int32_t x315 = 216904;
static volatile uint32_t x323 = UINT32_MAX;
static int64_t x326 = 1566793604LL;
volatile int32_t t71 = 3;
int64_t x331 = INT64_MIN;
static uint8_t x334 = 46U;
static int32_t t73 = 3;
int64_t x342 = -1LL;
int16_t x344 = -1;
volatile uint8_t x350 = UINT8_MAX;
static int16_t x351 = -1;
uint32_t x352 = 2U;
static volatile int32_t t75 = 78306693;
volatile int32_t x356 = -7832417;
uint16_t x361 = 1U;
uint8_t x362 = 4U;
static int16_t x370 = -2;
static uint16_t x373 = 1U;
uint32_t x375 = UINT32_MAX;
volatile int32_t t85 = -6705570;
volatile int32_t t86 = 10200033;
int16_t x408 = 1;
int32_t x411 = INT32_MIN;
static uint32_t t89 = 939954U;
static int32_t x420 = INT32_MIN;
int64_t t91 = 1525067891LL;
uint8_t x437 = UINT8_MAX;
uint32_t t96 = 198951U;
uint32_t x453 = 63U;
uint32_t x457 = 1869183U;
uint32_t x458 = 867308U;
static int64_t x484 = INT64_MIN;
uint16_t x488 = 837U;
static volatile uint16_t x496 = 72U;
uint64_t x498 = 3422687LLU;
uint32_t x500 = UINT32_MAX;
volatile int64_t x501 = 48210120548176481LL;
uint64_t x504 = UINT64_MAX;
volatile int32_t t107 = -108;
int32_t x517 = INT32_MAX;
volatile int32_t t109 = 716113537;
static int32_t x527 = INT32_MAX;
volatile uint64_t t111 = 77294LLU;
static volatile int8_t x529 = -1;
int8_t x545 = INT8_MIN;
volatile int32_t t114 = -446250789;
uint16_t x550 = UINT16_MAX;
int16_t x552 = INT16_MIN;
volatile int32_t t115 = -3392;
uint64_t x560 = UINT64_MAX;
int8_t x564 = INT8_MAX;
int8_t x567 = -1;
int32_t x570 = -201903;
int64_t x571 = -1LL;
int16_t x574 = INT16_MIN;
uint64_t x590 = UINT64_MAX;
static uint16_t x592 = UINT16_MAX;
volatile uint32_t t123 = 120U;
static volatile uint32_t x602 = 272518209U;
static int8_t x603 = 3;
volatile int32_t t126 = 370557;
uint8_t x618 = 30U;
static int8_t x620 = INT8_MIN;
uint16_t x629 = 244U;
uint64_t x632 = 3592605780825066LLU;
volatile int32_t x644 = INT32_MAX;
volatile int32_t x646 = -150003;
uint32_t x647 = 12701U;
volatile int32_t t137 = 112372559;
int8_t x653 = -1;
int16_t x654 = INT16_MAX;
int8_t x657 = INT8_MIN;
int32_t x666 = -1;
static uint8_t x668 = 3U;
int64_t x671 = INT64_MAX;
int8_t x673 = INT8_MIN;
int32_t t143 = 0;
int32_t t145 = 38764906;
int8_t x686 = INT8_MIN;
uint32_t x697 = 12U;
volatile int64_t x707 = INT64_MIN;
uint16_t x708 = 240U;
volatile int64_t t152 = 150244884659LL;
static uint16_t x724 = 4U;
static int32_t x727 = INT32_MIN;
uint8_t x730 = 3U;
volatile int8_t x737 = INT8_MIN;
volatile int32_t t158 = -221210608;
int32_t x748 = -1;
volatile int32_t x753 = -1;
uint8_t x754 = UINT8_MAX;
uint16_t x755 = 495U;
int16_t x758 = INT16_MAX;
uint8_t x759 = UINT8_MAX;
int16_t x765 = 75;
uint64_t x781 = 8325015608LLU;
int8_t x791 = INT8_MIN;
volatile int16_t x800 = INT16_MIN;
uint64_t x805 = UINT64_MAX;
int64_t x810 = -7637LL;
int32_t x813 = INT32_MAX;
uint64_t x816 = 9LLU;
volatile uint16_t x823 = 0U;
static volatile int16_t x824 = INT16_MAX;
volatile uint32_t t177 = 8631U;
uint32_t x841 = 2U;
uint64_t x845 = 642821LLU;
static int64_t x848 = INT64_MIN;
volatile int32_t x861 = -1;
volatile int16_t x863 = -1;
int32_t x866 = 44;
static int8_t x868 = -11;
int64_t x870 = INT64_MAX;
int32_t x873 = INT32_MAX;
uint32_t x875 = UINT32_MAX;
int8_t x881 = INT8_MIN;
int8_t x882 = 1;
int16_t x883 = INT16_MAX;
int32_t t190 = 8;
uint8_t x885 = UINT8_MAX;
int16_t x894 = INT16_MAX;
static uint64_t x895 = 577LLU;
volatile int32_t t193 = -152;
int32_t t194 = 2855;
volatile int32_t t195 = 1877133;
int32_t x913 = -67;
volatile uint16_t x915 = 1541U;
int16_t x916 = INT16_MAX;


void f0(void) {
    	int64_t x1 = -1011293LL;
	uint64_t x2 = UINT64_MAX;
	volatile int64_t x4 = -266527702LL;
	int64_t t0 = -23849LL;

    t0 = (x1-(x2!=(x3%x4)));

    if (t0 != -1011293LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -1;
	static uint64_t x6 = 1425941002457050218LLU;
	int32_t x7 = 897209070;
	int32_t t1 = 901067174;

    t1 = (x5-(x6!=(x7%x8)));

    if (t1 != -2) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x10 = INT32_MAX;
	volatile int32_t x11 = INT32_MIN;

    t2 = (x9-(x10!=(x11%x12)));

    if (t2 != 15878) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x13 = -1;
	volatile uint16_t x15 = 44U;
	volatile uint64_t x16 = 51341843274166095LLU;
	static int32_t t3 = -293601;

    t3 = (x13-(x14!=(x15%x16)));

    if (t3 != -2) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x18 = 0U;
	uint16_t x19 = 1U;
	volatile uint8_t x20 = 7U;
	volatile int32_t t4 = 13167;

    t4 = (x17-(x18!=(x19%x20)));

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x25 = -1LL;
	int32_t x27 = INT32_MIN;
	uint32_t x28 = 539U;
	int64_t t5 = 9362159LL;

    t5 = (x25-(x26!=(x27%x28)));

    if (t5 != -2LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x30 = 711LLU;
	int8_t x31 = INT8_MIN;
	uint64_t x32 = 604030552293656LLU;
	static volatile int32_t t6 = -149;

    t6 = (x29-(x30!=(x31%x32)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x34 = UINT32_MAX;
	uint8_t x35 = UINT8_MAX;
	uint8_t x36 = 6U;

    t7 = (x33-(x34!=(x35%x36)));

    if (t7 != -123) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x37 = INT32_MAX;
	int32_t x38 = -1;
	uint32_t x39 = 148U;
	int64_t x40 = -1LL;
	static int32_t t8 = -8;

    t8 = (x37-(x38!=(x39%x40)));

    if (t8 != 2147483646) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x42 = 4113604LLU;
	int64_t x43 = -1083333120510623060LL;
	int64_t t9 = 7066318547564LL;

    t9 = (x41-(x42!=(x43%x44)));

    if (t9 != -316420860394LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x50 = -2;
	int32_t x51 = INT32_MIN;
	static volatile int32_t x52 = INT32_MIN;
	volatile int32_t t10 = -8;

    t10 = (x49-(x50!=(x51%x52)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x53 = UINT32_MAX;
	int8_t x54 = INT8_MAX;
	volatile int8_t x55 = -1;
	volatile int64_t x56 = INT64_MIN;
	volatile uint32_t t11 = 22U;

    t11 = (x53-(x54!=(x55%x56)));

    if (t11 != 4294967294U) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x58 = INT16_MIN;
	uint16_t x59 = 179U;
	int64_t x60 = INT64_MAX;
	volatile int32_t t12 = 1;

    t12 = (x57-(x58!=(x59%x60)));

    if (t12 != 126) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x61 = -1;
	int32_t x62 = -181;
	int8_t x63 = -1;
	int64_t x64 = INT64_MAX;
	volatile int32_t t13 = 2;

    t13 = (x61-(x62!=(x63%x64)));

    if (t13 != -2) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x65 = UINT8_MAX;
	uint64_t x66 = 759153221LLU;
	int16_t x67 = 0;
	volatile uint16_t x68 = UINT16_MAX;
	static volatile int32_t t14 = 764;

    t14 = (x65-(x66!=(x67%x68)));

    if (t14 != 254) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x69 = -92646415099LL;
	uint32_t x71 = 3828822U;
	int32_t x72 = INT32_MIN;
	int64_t t15 = 2620LL;

    t15 = (x69-(x70!=(x71%x72)));

    if (t15 != -92646415100LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x73 = -128955;
	uint16_t x74 = UINT16_MAX;
	volatile int16_t x75 = INT16_MAX;
	uint8_t x76 = UINT8_MAX;
	volatile int32_t t16 = 28;

    t16 = (x73-(x74!=(x75%x76)));

    if (t16 != -128956) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x78 = 17LLU;
	volatile int64_t x79 = -1LL;
	volatile int32_t x80 = INT32_MIN;
	int32_t t17 = 4871;

    t17 = (x77-(x78!=(x79%x80)));

    if (t17 != -6608) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x82 = UINT16_MAX;
	static int8_t x83 = INT8_MAX;
	static int64_t x84 = -26LL;
	static volatile int32_t t18 = 2;

    t18 = (x81-(x82!=(x83%x84)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x89 = INT16_MIN;
	int8_t x90 = -1;
	volatile int32_t x91 = 10;
	int16_t x92 = INT16_MIN;
	static volatile int32_t t19 = -4590834;

    t19 = (x89-(x90!=(x91%x92)));

    if (t19 != -32769) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x93 = 661399U;
	int64_t x94 = -144223928198785LL;
	int64_t x95 = INT64_MAX;
	volatile uint32_t t20 = 1826205U;

    t20 = (x93-(x94!=(x95%x96)));

    if (t20 != 661398U) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x97 = UINT16_MAX;
	static int8_t x100 = -15;
	int32_t t21 = 420628;

    t21 = (x97-(x98!=(x99%x100)));

    if (t21 != 65534) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x101 = -1;
	uint32_t x102 = 1864274898U;
	static uint64_t x103 = 132349146790LLU;
	static int16_t x104 = -1;
	volatile int32_t t22 = 130793;

    t22 = (x101-(x102!=(x103%x104)));

    if (t22 != -2) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x105 = 52834201783915074LL;
	uint8_t x106 = 53U;
	int8_t x107 = -1;
	uint64_t x108 = UINT64_MAX;
	int64_t t23 = 61160369LL;

    t23 = (x105-(x106!=(x107%x108)));

    if (t23 != 52834201783915073LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x109 = 523713LLU;
	volatile int64_t x110 = 25048938705LL;
	volatile int32_t x111 = INT32_MAX;
	int64_t x112 = INT64_MAX;
	uint64_t t24 = 2672113016981446452LLU;

    t24 = (x109-(x110!=(x111%x112)));

    if (t24 != 523712LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x113 = 30323U;
	uint8_t x114 = UINT8_MAX;
	volatile int32_t x115 = INT32_MIN;
	int16_t x116 = INT16_MIN;
	volatile int32_t t25 = -170225;

    t25 = (x113-(x114!=(x115%x116)));

    if (t25 != 30322) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x118 = UINT32_MAX;
	uint64_t x120 = 252416372821LLU;

    t26 = (x117-(x118!=(x119%x120)));

    if (t26 != 32766) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint8_t x125 = UINT8_MAX;
	int32_t x126 = -7718;
	int8_t x127 = -1;
	volatile int32_t t27 = -108005;

    t27 = (x125-(x126!=(x127%x128)));

    if (t27 != 254) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x129 = 2U;
	volatile int64_t x130 = -3983LL;
	int16_t x131 = 82;
	int16_t x132 = INT16_MIN;
	int32_t t28 = -7051;

    t28 = (x129-(x130!=(x131%x132)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x133 = -446596456259LL;
	int16_t x135 = INT16_MIN;
	int16_t x136 = INT16_MAX;
	volatile int64_t t29 = 190106411010LL;

    t29 = (x133-(x134!=(x135%x136)));

    if (t29 != -446596456260LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x137 = 54U;
	volatile int16_t x138 = INT16_MIN;
	int64_t x139 = 1525615284590LL;
	volatile uint32_t t30 = 48005362U;

    t30 = (x137-(x138!=(x139%x140)));

    if (t30 != 53U) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x141 = 828510533990LL;
	static uint16_t x142 = 266U;
	static int64_t x144 = INT64_MIN;

    t31 = (x141-(x142!=(x143%x144)));

    if (t31 != 828510533989LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x145 = -5786;
	static volatile int32_t x146 = -18;
	int64_t x147 = INT64_MAX;
	volatile int16_t x148 = -1;
	int32_t t32 = -417241;

    t32 = (x145-(x146!=(x147%x148)));

    if (t32 != -5787) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x149 = -1711907LL;
	volatile int64_t x151 = INT64_MAX;
	volatile int64_t x152 = -7841438LL;
	int64_t t33 = -7950571LL;

    t33 = (x149-(x150!=(x151%x152)));

    if (t33 != -1711908LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x154 = 15840154799558358LLU;
	int64_t x155 = INT64_MIN;
	uint8_t x156 = 6U;
	uint32_t t34 = 231857U;

    t34 = (x153-(x154!=(x155%x156)));

    if (t34 != 451699U) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x157 = -1;
	int16_t x158 = INT16_MIN;
	volatile uint32_t x159 = 55415778U;
	int32_t x160 = -462648;
	static int32_t t35 = -1;

    t35 = (x157-(x158!=(x159%x160)));

    if (t35 != -2) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x161 = -1;
	int8_t x162 = INT8_MAX;
	int32_t x163 = INT32_MIN;
	int8_t x164 = INT8_MAX;
	int32_t t36 = 642413845;

    t36 = (x161-(x162!=(x163%x164)));

    if (t36 != -2) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x169 = UINT32_MAX;
	int16_t x170 = INT16_MAX;
	int8_t x172 = -1;

    t37 = (x169-(x170!=(x171%x172)));

    if (t37 != 4294967294U) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x173 = 26;
	volatile uint16_t x174 = UINT16_MAX;
	int16_t x175 = -1;
	int16_t x176 = INT16_MIN;
	static int32_t t38 = -10838227;

    t38 = (x173-(x174!=(x175%x176)));

    if (t38 != 25) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x177 = INT16_MIN;
	uint64_t x178 = UINT64_MAX;
	int64_t x179 = 1760188349860LL;
	static int8_t x180 = INT8_MAX;
	volatile int32_t t39 = -75395828;

    t39 = (x177-(x178!=(x179%x180)));

    if (t39 != -32769) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x181 = -11;
	uint8_t x182 = 2U;
	static int16_t x183 = 1;
	volatile uint32_t x184 = 227225937U;
	int32_t t40 = 0;

    t40 = (x181-(x182!=(x183%x184)));

    if (t40 != -12) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x185 = -1;
	static int16_t x186 = INT16_MIN;
	int8_t x187 = 24;
	int32_t t41 = 3;

    t41 = (x185-(x186!=(x187%x188)));

    if (t41 != -2) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x189 = INT8_MIN;
	int32_t x190 = INT32_MIN;
	static int8_t x191 = INT8_MAX;
	int32_t t42 = 425;

    t42 = (x189-(x190!=(x191%x192)));

    if (t42 != -129) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x193 = -1LL;
	int8_t x194 = INT8_MAX;
	int64_t x195 = 46268LL;
	volatile int64_t t43 = -5073528LL;

    t43 = (x193-(x194!=(x195%x196)));

    if (t43 != -2LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x197 = 415425538LLU;
	volatile int32_t x198 = -6915507;
	volatile uint16_t x199 = 8U;
	int8_t x200 = INT8_MIN;
	volatile uint64_t t44 = 87159052400808986LLU;

    t44 = (x197-(x198!=(x199%x200)));

    if (t44 != 415425537LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x209 = INT64_MAX;
	int32_t x210 = INT32_MIN;
	static int16_t x211 = INT16_MAX;
	volatile int16_t x212 = -1;
	int64_t t45 = 522630897LL;

    t45 = (x209-(x210!=(x211%x212)));

    if (t45 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint64_t x213 = 42902LLU;
	uint16_t x214 = 491U;
	int16_t x215 = INT16_MAX;
	int16_t x216 = -954;
	uint64_t t46 = 88893LLU;

    t46 = (x213-(x214!=(x215%x216)));

    if (t46 != 42901LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x226 = INT8_MAX;
	int32_t x227 = INT32_MIN;
	uint16_t x228 = UINT16_MAX;
	int32_t t47 = 478;

    t47 = (x225-(x226!=(x227%x228)));

    if (t47 != -32769) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x229 = INT16_MAX;
	volatile int64_t x230 = -1LL;
	uint64_t x231 = 109341947744993245LLU;
	int64_t x232 = INT64_MIN;
	int32_t t48 = 4493109;

    t48 = (x229-(x230!=(x231%x232)));

    if (t48 != 32766) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x233 = -61;
	uint8_t x234 = 0U;
	static int32_t x235 = INT32_MIN;
	uint16_t x236 = 115U;
	volatile int32_t t49 = 49;

    t49 = (x233-(x234!=(x235%x236)));

    if (t49 != -62) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x237 = INT16_MIN;
	int8_t x238 = -1;
	int32_t x239 = -1;
	volatile int16_t x240 = INT16_MIN;

    t50 = (x237-(x238!=(x239%x240)));

    if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x241 = INT8_MIN;
	int64_t x243 = -1LL;
	volatile int8_t x244 = INT8_MAX;

    t51 = (x241-(x242!=(x243%x244)));

    if (t51 != -129) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x246 = INT64_MAX;
	int32_t t52 = 491;

    t52 = (x245-(x246!=(x247%x248)));

    if (t52 != -32769) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x249 = 144U;
	uint64_t x250 = UINT64_MAX;
	uint16_t x251 = UINT16_MAX;
	volatile uint32_t t53 = 1824705U;

    t53 = (x249-(x250!=(x251%x252)));

    if (t53 != 143U) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x253 = 63;
	uint32_t x254 = UINT32_MAX;
	uint16_t x255 = UINT16_MAX;
	volatile int64_t x256 = 91210106893LL;
	int32_t t54 = 3906381;

    t54 = (x253-(x254!=(x255%x256)));

    if (t54 != 62) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x261 = 50;
	int16_t x262 = 5;
	int32_t x263 = INT32_MIN;
	volatile int32_t t55 = -1;

    t55 = (x261-(x262!=(x263%x264)));

    if (t55 != 49) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x265 = 14;
	int64_t x266 = 16139098289880LL;
	int64_t x267 = INT64_MAX;
	volatile int32_t t56 = 8457094;

    t56 = (x265-(x266!=(x267%x268)));

    if (t56 != 13) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x270 = INT64_MIN;
	int16_t x271 = -1;
	uint16_t x272 = 57U;
	volatile int32_t t57 = 5790;

    t57 = (x269-(x270!=(x271%x272)));

    if (t57 != -2) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x274 = INT64_MIN;
	int16_t x275 = INT16_MAX;
	static int64_t x276 = INT64_MAX;
	volatile int32_t t58 = -79471569;

    t58 = (x273-(x274!=(x275%x276)));

    if (t58 != 254) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint64_t x277 = UINT64_MAX;
	uint64_t x278 = 7083923505200060072LLU;
	static int32_t x279 = INT32_MIN;
	static int16_t x280 = INT16_MIN;

    t59 = (x277-(x278!=(x279%x280)));

    if (t59 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x281 = 0U;
	uint64_t x282 = 9399LLU;
	uint16_t x283 = 5U;
	uint16_t x284 = 2U;
	volatile int32_t t60 = -572350310;

    t60 = (x281-(x282!=(x283%x284)));

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile uint32_t x286 = 445U;
	volatile int16_t x287 = INT16_MIN;
	int32_t x288 = INT32_MAX;
	int32_t t61 = 5;

    t61 = (x285-(x286!=(x287%x288)));

    if (t61 != -2) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x289 = -1;
	uint64_t x291 = 4870243062692LLU;
	volatile int32_t t62 = 423244593;

    t62 = (x289-(x290!=(x291%x292)));

    if (t62 != -2) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x294 = INT8_MIN;
	static int64_t x295 = INT64_MAX;
	int32_t t63 = 58;

    t63 = (x293-(x294!=(x295%x296)));

    if (t63 != 35) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x297 = 1616962872772401681LL;
	int64_t x299 = INT64_MIN;
	int16_t x300 = INT16_MIN;
	int64_t t64 = -30LL;

    t64 = (x297-(x298!=(x299%x300)));

    if (t64 != 1616962872772401680LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x301 = -1;
	int16_t x303 = -1;
	int32_t t65 = 1452;

    t65 = (x301-(x302!=(x303%x304)));

    if (t65 != -2) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x307 = 30U;
	uint64_t x308 = UINT64_MAX;
	int32_t t66 = 507;

    t66 = (x305-(x306!=(x307%x308)));

    if (t66 != 32766) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x309 = -1LL;
	int32_t x310 = INT32_MAX;
	int8_t x312 = INT8_MIN;

    t67 = (x309-(x310!=(x311%x312)));

    if (t67 != -2LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x313 = INT8_MIN;
	int64_t x316 = INT64_MIN;
	static volatile int32_t t68 = 352;

    t68 = (x313-(x314!=(x315%x316)));

    if (t68 != -129) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x317 = 1056767627758LLU;
	static uint8_t x318 = 2U;
	volatile int16_t x319 = INT16_MIN;
	int64_t x320 = INT64_MAX;
	static volatile uint64_t t69 = 2056290083587987LLU;

    t69 = (x317-(x318!=(x319%x320)));

    if (t69 != 1056767627757LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x321 = INT32_MAX;
	volatile int8_t x322 = 60;
	uint8_t x324 = 22U;
	int32_t t70 = -1193;

    t70 = (x321-(x322!=(x323%x324)));

    if (t70 != 2147483646) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x325 = INT32_MAX;
	uint32_t x327 = UINT32_MAX;
	static int64_t x328 = 4846LL;

    t71 = (x325-(x326!=(x327%x328)));

    if (t71 != 2147483646) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x329 = -1LL;
	static int8_t x330 = -1;
	int32_t x332 = -13;
	int64_t t72 = 3815571808132810LL;

    t72 = (x329-(x330!=(x331%x332)));

    if (t72 != -2LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x333 = INT8_MIN;
	static int32_t x335 = -143521426;
	static uint16_t x336 = 37U;

    t73 = (x333-(x334!=(x335%x336)));

    if (t73 != -129) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x341 = 6539LLU;
	int16_t x343 = INT16_MIN;
	volatile uint64_t t74 = 172614448232374003LLU;

    t74 = (x341-(x342!=(x343%x344)));

    if (t74 != 6538LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x349 = 3U;

    t75 = (x349-(x350!=(x351%x352)));

    if (t75 != 2) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x353 = 1659211076U;
	int16_t x354 = INT16_MIN;
	volatile uint16_t x355 = 109U;
	uint32_t t76 = 112U;

    t76 = (x353-(x354!=(x355%x356)));

    if (t76 != 1659211075U) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x357 = -4053;
	volatile uint8_t x358 = 10U;
	int32_t x359 = -1;
	int8_t x360 = 1;
	volatile int32_t t77 = -830285;

    t77 = (x357-(x358!=(x359%x360)));

    if (t77 != -4054) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint16_t x363 = 37U;
	static int64_t x364 = -6080LL;
	static volatile int32_t t78 = -1006474032;

    t78 = (x361-(x362!=(x363%x364)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x369 = INT8_MIN;
	uint16_t x371 = UINT16_MAX;
	static volatile int16_t x372 = INT16_MIN;
	volatile int32_t t79 = -6761;

    t79 = (x369-(x370!=(x371%x372)));

    if (t79 != -129) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x374 = -35;
	int32_t x376 = INT32_MIN;
	static int32_t t80 = 14;

    t80 = (x373-(x374!=(x375%x376)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x377 = 384061U;
	static uint16_t x378 = UINT16_MAX;
	volatile uint64_t x379 = 7804LLU;
	volatile int8_t x380 = INT8_MIN;
	volatile uint32_t t81 = 4264U;

    t81 = (x377-(x378!=(x379%x380)));

    if (t81 != 384060U) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x385 = INT64_MIN;
	int8_t x386 = -1;
	volatile int16_t x387 = -1;
	int64_t x388 = INT64_MAX;
	int64_t t82 = INT64_MIN;

    t82 = (x385-(x386!=(x387%x388)));

    if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x389 = -1LL;
	volatile int32_t x390 = -1405;
	int16_t x391 = 6514;
	uint64_t x392 = 11993767LLU;
	int64_t t83 = 530LL;

    t83 = (x389-(x390!=(x391%x392)));

    if (t83 != -2LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x393 = -1;
	int64_t x394 = INT64_MIN;
	volatile uint32_t x395 = UINT32_MAX;
	int8_t x396 = INT8_MAX;
	volatile int32_t t84 = 162783701;

    t84 = (x393-(x394!=(x395%x396)));

    if (t84 != -2) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x397 = -1;
	static volatile uint8_t x398 = UINT8_MAX;
	int32_t x399 = -17714511;
	static int64_t x400 = INT64_MIN;

    t85 = (x397-(x398!=(x399%x400)));

    if (t85 != -2) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x401 = UINT16_MAX;
	uint8_t x402 = 0U;
	static int64_t x403 = INT64_MIN;
	int8_t x404 = INT8_MIN;

    t86 = (x401-(x402!=(x403%x404)));

    if (t86 != 65535) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x405 = INT8_MIN;
	volatile int8_t x406 = 28;
	int32_t x407 = -127492051;
	int32_t t87 = 7;

    t87 = (x405-(x406!=(x407%x408)));

    if (t87 != -129) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x409 = INT8_MIN;
	int8_t x410 = 6;
	int16_t x412 = INT16_MIN;
	volatile int32_t t88 = 52;

    t88 = (x409-(x410!=(x411%x412)));

    if (t88 != -129) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x413 = 110420U;
	uint32_t x414 = 1789U;
	static volatile uint16_t x415 = UINT16_MAX;
	int16_t x416 = INT16_MIN;

    t89 = (x413-(x414!=(x415%x416)));

    if (t89 != 110419U) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x417 = -1;
	volatile int16_t x418 = 1;
	static int16_t x419 = INT16_MIN;
	volatile int32_t t90 = 16;

    t90 = (x417-(x418!=(x419%x420)));

    if (t90 != -2) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x421 = 319LL;
	int16_t x422 = -21;
	static int16_t x423 = INT16_MAX;
	volatile int8_t x424 = INT8_MIN;

    t91 = (x421-(x422!=(x423%x424)));

    if (t91 != 318LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x429 = -27;
	uint32_t x430 = 6845U;
	int32_t x431 = INT32_MIN;
	uint8_t x432 = UINT8_MAX;
	volatile int32_t t92 = 19126385;

    t92 = (x429-(x430!=(x431%x432)));

    if (t92 != -28) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint64_t x433 = 16421456814LLU;
	int8_t x434 = 2;
	uint8_t x435 = 0U;
	int32_t x436 = INT32_MIN;
	uint64_t t93 = 1422757LLU;

    t93 = (x433-(x434!=(x435%x436)));

    if (t93 != 16421456813LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x438 = -5;
	static int64_t x439 = INT64_MAX;
	int32_t x440 = -1;
	int32_t t94 = 2086220;

    t94 = (x437-(x438!=(x439%x440)));

    if (t94 != 254) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x441 = -1;
	int64_t x442 = INT64_MAX;
	int64_t x443 = INT64_MIN;
	int8_t x444 = INT8_MIN;
	volatile int32_t t95 = 966761;

    t95 = (x441-(x442!=(x443%x444)));

    if (t95 != -2) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint32_t x445 = 3U;
	int64_t x446 = INT64_MIN;
	volatile int32_t x447 = INT32_MIN;
	int8_t x448 = 2;

    t96 = (x445-(x446!=(x447%x448)));

    if (t96 != 2U) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x454 = INT16_MIN;
	static int32_t x455 = 548854253;
	int8_t x456 = INT8_MIN;
	volatile uint32_t t97 = 1588U;

    t97 = (x453-(x454!=(x455%x456)));

    if (t97 != 62U) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x459 = INT64_MIN;
	volatile uint8_t x460 = 28U;
	uint32_t t98 = 6U;

    t98 = (x457-(x458!=(x459%x460)));

    if (t98 != 1869182U) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x469 = -1LL;
	int16_t x470 = INT16_MAX;
	static int32_t x471 = 60950;
	int8_t x472 = -1;
	static volatile int64_t t99 = 63218LL;

    t99 = (x469-(x470!=(x471%x472)));

    if (t99 != -2LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x481 = 11285U;
	static int64_t x482 = 84637516343206021LL;
	int8_t x483 = -1;
	int32_t t100 = 1;

    t100 = (x481-(x482!=(x483%x484)));

    if (t100 != 11284) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x485 = 31216U;
	int8_t x486 = -1;
	uint8_t x487 = UINT8_MAX;
	volatile int32_t t101 = -907;

    t101 = (x485-(x486!=(x487%x488)));

    if (t101 != 31215) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x489 = 0U;
	static uint64_t x490 = 17868LLU;
	static uint32_t x491 = 108957U;
	uint64_t x492 = 8358668460077LLU;
	volatile int32_t t102 = 28342767;

    t102 = (x489-(x490!=(x491%x492)));

    if (t102 != -1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x493 = 6;
	uint32_t x494 = 236740U;
	static int32_t x495 = INT32_MIN;
	volatile int32_t t103 = 143;

    t103 = (x493-(x494!=(x495%x496)));

    if (t103 != 5) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x497 = -11;
	uint64_t x499 = UINT64_MAX;
	int32_t t104 = 30;

    t104 = (x497-(x498!=(x499%x500)));

    if (t104 != -12) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x502 = 510;
	int8_t x503 = -1;
	int64_t t105 = 3LL;

    t105 = (x501-(x502!=(x503%x504)));

    if (t105 != 48210120548176480LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x505 = 18895949U;
	uint16_t x506 = 27769U;
	int16_t x507 = 11331;
	int32_t x508 = -1;
	static uint32_t t106 = 715U;

    t106 = (x505-(x506!=(x507%x508)));

    if (t106 != 18895948U) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x509 = -1072462;
	int64_t x510 = -1LL;
	static uint64_t x511 = UINT64_MAX;
	int64_t x512 = INT64_MIN;

    t107 = (x509-(x510!=(x511%x512)));

    if (t107 != -1072463) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x513 = INT8_MIN;
	int8_t x514 = -1;
	int64_t x515 = INT64_MIN;
	volatile uint8_t x516 = 92U;
	static int32_t t108 = 1837;

    t108 = (x513-(x514!=(x515%x516)));

    if (t108 != -129) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x518 = INT8_MAX;
	volatile int64_t x519 = INT64_MAX;
	volatile uint8_t x520 = 4U;

    t109 = (x517-(x518!=(x519%x520)));

    if (t109 != 2147483646) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x521 = 85107U;
	static uint64_t x522 = 2609031LLU;
	uint8_t x523 = UINT8_MAX;
	static uint16_t x524 = 6U;
	uint32_t t110 = 992U;

    t110 = (x521-(x522!=(x523%x524)));

    if (t110 != 85106U) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x525 = 2LLU;
	static int64_t x526 = -8844221LL;
	volatile uint64_t x528 = 24LLU;

    t111 = (x525-(x526!=(x527%x528)));

    if (t111 != 1LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x530 = -1LL;
	int8_t x531 = INT8_MIN;
	int32_t x532 = INT32_MAX;
	int32_t t112 = -87913;

    t112 = (x529-(x530!=(x531%x532)));

    if (t112 != -2) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x537 = 88U;
	int32_t x538 = INT32_MIN;
	int32_t x539 = INT32_MAX;
	int16_t x540 = INT16_MIN;
	volatile int32_t t113 = 0;

    t113 = (x537-(x538!=(x539%x540)));

    if (t113 != 87) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x546 = 275551355737384351LL;
	volatile int32_t x547 = -54;
	int64_t x548 = INT64_MIN;

    t114 = (x545-(x546!=(x547%x548)));

    if (t114 != -129) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x549 = INT16_MAX;
	uint64_t x551 = 1LLU;

    t115 = (x549-(x550!=(x551%x552)));

    if (t115 != 32766) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x557 = UINT64_MAX;
	uint8_t x558 = 14U;
	int16_t x559 = -11265;
	volatile uint64_t t116 = 13LLU;

    t116 = (x557-(x558!=(x559%x560)));

    if (t116 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x561 = INT8_MAX;
	int16_t x562 = INT16_MIN;
	uint64_t x563 = UINT64_MAX;
	int32_t t117 = 123087;

    t117 = (x561-(x562!=(x563%x564)));

    if (t117 != 126) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x565 = INT64_MAX;
	int32_t x566 = 24708;
	int16_t x568 = INT16_MIN;
	volatile int64_t t118 = 839772982163LL;

    t118 = (x565-(x566!=(x567%x568)));

    if (t118 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x569 = 1297961U;
	int8_t x572 = INT8_MIN;
	volatile uint32_t t119 = 119U;

    t119 = (x569-(x570!=(x571%x572)));

    if (t119 != 1297960U) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x573 = -1;
	int8_t x575 = -1;
	uint8_t x576 = 1U;
	int32_t t120 = -4;

    t120 = (x573-(x574!=(x575%x576)));

    if (t120 != -2) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x581 = UINT64_MAX;
	uint32_t x582 = 424292055U;
	static volatile int16_t x583 = INT16_MIN;
	int8_t x584 = -1;
	volatile uint64_t t121 = 1138497716134697027LLU;

    t121 = (x581-(x582!=(x583%x584)));

    if (t121 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x585 = -1LL;
	volatile int16_t x586 = INT16_MIN;
	static volatile int8_t x587 = INT8_MAX;
	static int32_t x588 = INT32_MAX;
	static int64_t t122 = 69380831LL;

    t122 = (x585-(x586!=(x587%x588)));

    if (t122 != -2LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint32_t x589 = 3586896U;
	int64_t x591 = -1LL;

    t123 = (x589-(x590!=(x591%x592)));

    if (t123 != 3586896U) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x593 = 66216246U;
	int64_t x594 = INT64_MIN;
	int16_t x595 = INT16_MIN;
	int8_t x596 = INT8_MAX;
	uint32_t t124 = 411172314U;

    t124 = (x593-(x594!=(x595%x596)));

    if (t124 != 66216245U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x597 = 247U;
	int64_t x598 = 1036960734797237057LL;
	volatile uint8_t x599 = 5U;
	int32_t x600 = -1;
	volatile int32_t t125 = 7;

    t125 = (x597-(x598!=(x599%x600)));

    if (t125 != 246) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x601 = UINT16_MAX;
	uint8_t x604 = UINT8_MAX;

    t126 = (x601-(x602!=(x603%x604)));

    if (t126 != 65534) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x609 = 47;
	int16_t x610 = -8141;
	static int8_t x611 = INT8_MIN;
	static volatile int8_t x612 = INT8_MIN;
	int32_t t127 = -224109;

    t127 = (x609-(x610!=(x611%x612)));

    if (t127 != 46) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x613 = 37;
	int32_t x614 = INT32_MIN;
	static int16_t x615 = -1;
	static int16_t x616 = -1;
	static int32_t t128 = 176058;

    t128 = (x613-(x614!=(x615%x616)));

    if (t128 != 36) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x617 = -82282686239761470LL;
	static int8_t x619 = -1;
	volatile int64_t t129 = 4266217514522751LL;

    t129 = (x617-(x618!=(x619%x620)));

    if (t129 != -82282686239761471LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x621 = -5185;
	int64_t x622 = -1098429LL;
	uint32_t x623 = 24U;
	uint32_t x624 = 583782U;
	volatile int32_t t130 = 0;

    t130 = (x621-(x622!=(x623%x624)));

    if (t130 != -5186) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x625 = 45172936;
	int32_t x626 = INT32_MIN;
	static volatile int16_t x627 = INT16_MAX;
	uint64_t x628 = UINT64_MAX;
	int32_t t131 = 1;

    t131 = (x625-(x626!=(x627%x628)));

    if (t131 != 45172935) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x630 = UINT32_MAX;
	int8_t x631 = -1;
	volatile int32_t t132 = 418;

    t132 = (x629-(x630!=(x631%x632)));

    if (t132 != 243) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint8_t x633 = UINT8_MAX;
	uint64_t x634 = UINT64_MAX;
	int16_t x635 = INT16_MAX;
	int32_t x636 = INT32_MIN;
	volatile int32_t t133 = -916101879;

    t133 = (x633-(x634!=(x635%x636)));

    if (t133 != 254) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x637 = -6732478;
	static int32_t x638 = INT32_MIN;
	static uint64_t x639 = 12759396264137LLU;
	static volatile int64_t x640 = INT64_MIN;
	static int32_t t134 = -91521914;

    t134 = (x637-(x638!=(x639%x640)));

    if (t134 != -6732479) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x641 = INT8_MIN;
	int8_t x642 = -14;
	int64_t x643 = -1LL;
	int32_t t135 = -48287;

    t135 = (x641-(x642!=(x643%x644)));

    if (t135 != -129) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x645 = 1LL;
	int32_t x648 = INT32_MIN;
	static volatile int64_t t136 = 970434869444190LL;

    t136 = (x645-(x646!=(x647%x648)));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x649 = -12;
	static int16_t x650 = INT16_MIN;
	volatile int64_t x651 = INT64_MIN;
	int32_t x652 = -1;

    t137 = (x649-(x650!=(x651%x652)));

    if (t137 != -13) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x655 = INT64_MAX;
	static uint32_t x656 = UINT32_MAX;
	int32_t t138 = 1308446;

    t138 = (x653-(x654!=(x655%x656)));

    if (t138 != -2) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x658 = -9;
	int64_t x659 = 288396962925328327LL;
	uint8_t x660 = 7U;
	int32_t t139 = 2548631;

    t139 = (x657-(x658!=(x659%x660)));

    if (t139 != -129) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x661 = 862026U;
	static volatile int16_t x662 = 12740;
	volatile int8_t x663 = 1;
	static int32_t x664 = -1;
	volatile uint32_t t140 = 156U;

    t140 = (x661-(x662!=(x663%x664)));

    if (t140 != 862025U) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x665 = 2878149381438LLU;
	int8_t x667 = -35;
	uint64_t t141 = 110594052447045838LLU;

    t141 = (x665-(x666!=(x667%x668)));

    if (t141 != 2878149381437LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x669 = 658788320204074734LL;
	uint32_t x670 = UINT32_MAX;
	int8_t x672 = -1;
	int64_t t142 = -197327017048LL;

    t142 = (x669-(x670!=(x671%x672)));

    if (t142 != 658788320204074733LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x674 = INT16_MIN;
	uint16_t x675 = UINT16_MAX;
	volatile int32_t x676 = 224556929;

    t143 = (x673-(x674!=(x675%x676)));

    if (t143 != -129) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint8_t x677 = 88U;
	static int32_t x678 = 299;
	static int16_t x679 = -1;
	int32_t x680 = -22458;
	int32_t t144 = 447;

    t144 = (x677-(x678!=(x679%x680)));

    if (t144 != 87) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x681 = 13508;
	int64_t x682 = 13LL;
	int8_t x683 = INT8_MIN;
	int16_t x684 = -1;

    t145 = (x681-(x682!=(x683%x684)));

    if (t145 != 13507) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x685 = UINT16_MAX;
	uint64_t x687 = UINT64_MAX;
	static int32_t x688 = -1;
	int32_t t146 = 17187;

    t146 = (x685-(x686!=(x687%x688)));

    if (t146 != 65534) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x689 = 61003U;
	int64_t x690 = INT64_MIN;
	int16_t x691 = -1;
	volatile int32_t x692 = -30;
	uint32_t t147 = 6U;

    t147 = (x689-(x690!=(x691%x692)));

    if (t147 != 61002U) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int64_t x693 = INT64_MAX;
	int32_t x694 = INT32_MAX;
	volatile int16_t x695 = INT16_MAX;
	int64_t x696 = INT64_MIN;
	volatile int64_t t148 = 16569794756LL;

    t148 = (x693-(x694!=(x695%x696)));

    if (t148 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x698 = UINT64_MAX;
	static uint8_t x699 = 55U;
	int32_t x700 = 490;
	volatile uint32_t t149 = 2079174U;

    t149 = (x697-(x698!=(x699%x700)));

    if (t149 != 11U) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x705 = -12;
	int32_t x706 = INT32_MIN;
	volatile int32_t t150 = 5401612;

    t150 = (x705-(x706!=(x707%x708)));

    if (t150 != -13) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int32_t x709 = INT32_MAX;
	int64_t x710 = -1LL;
	int64_t x711 = 51982147966447380LL;
	int32_t x712 = 53;
	int32_t t151 = 657190811;

    t151 = (x709-(x710!=(x711%x712)));

    if (t151 != 2147483646) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x713 = -1LL;
	uint8_t x714 = 6U;
	static uint64_t x715 = 14LLU;
	static uint8_t x716 = UINT8_MAX;

    t152 = (x713-(x714!=(x715%x716)));

    if (t152 != -2LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x717 = INT16_MIN;
	volatile uint16_t x718 = 5U;
	volatile int8_t x719 = -2;
	uint8_t x720 = UINT8_MAX;
	int32_t t153 = 199023;

    t153 = (x717-(x718!=(x719%x720)));

    if (t153 != -32769) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x721 = INT64_MAX;
	uint32_t x722 = 3720U;
	static uint16_t x723 = 251U;
	volatile int64_t t154 = -4LL;

    t154 = (x721-(x722!=(x723%x724)));

    if (t154 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x725 = INT16_MAX;
	int32_t x726 = INT32_MIN;
	uint64_t x728 = UINT64_MAX;
	static int32_t t155 = -800989;

    t155 = (x725-(x726!=(x727%x728)));

    if (t155 != 32767) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x729 = 14;
	int64_t x731 = 64000569198751548LL;
	uint32_t x732 = 5115U;
	static int32_t t156 = 270;

    t156 = (x729-(x730!=(x731%x732)));

    if (t156 != 13) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint16_t x733 = UINT16_MAX;
	int8_t x734 = INT8_MIN;
	volatile uint32_t x735 = 1874U;
	uint8_t x736 = 48U;
	int32_t t157 = -1;

    t157 = (x733-(x734!=(x735%x736)));

    if (t157 != 65534) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x738 = INT32_MIN;
	int32_t x739 = -3180782;
	uint64_t x740 = UINT64_MAX;

    t158 = (x737-(x738!=(x739%x740)));

    if (t158 != -129) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x741 = 2575799;
	volatile int16_t x742 = -4;
	int64_t x743 = INT64_MAX;
	static int32_t x744 = INT32_MIN;
	int32_t t159 = 35418;

    t159 = (x741-(x742!=(x743%x744)));

    if (t159 != 2575798) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x745 = -1772;
	volatile int16_t x746 = INT16_MIN;
	int16_t x747 = INT16_MIN;
	volatile int32_t t160 = 0;

    t160 = (x745-(x746!=(x747%x748)));

    if (t160 != -1773) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int8_t x749 = INT8_MIN;
	int16_t x750 = INT16_MIN;
	static uint64_t x751 = 57687LLU;
	static uint16_t x752 = 3083U;
	volatile int32_t t161 = 60390850;

    t161 = (x749-(x750!=(x751%x752)));

    if (t161 != -129) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x756 = -6;
	volatile int32_t t162 = -8;

    t162 = (x753-(x754!=(x755%x756)));

    if (t162 != -2) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x757 = 0;
	volatile int16_t x760 = 6694;
	int32_t t163 = 15410386;

    t163 = (x757-(x758!=(x759%x760)));

    if (t163 != -1) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint64_t x761 = 167LLU;
	static uint16_t x762 = 5560U;
	uint64_t x763 = 1LLU;
	int32_t x764 = -128044;
	volatile uint64_t t164 = 226254278164973LLU;

    t164 = (x761-(x762!=(x763%x764)));

    if (t164 != 166LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x766 = INT64_MIN;
	int32_t x767 = INT32_MAX;
	int64_t x768 = INT64_MIN;
	int32_t t165 = 911830315;

    t165 = (x765-(x766!=(x767%x768)));

    if (t165 != 74) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x773 = UINT64_MAX;
	int64_t x774 = INT64_MIN;
	int64_t x775 = INT64_MIN;
	int8_t x776 = 1;
	static volatile uint64_t t166 = 2878578693183LLU;

    t166 = (x773-(x774!=(x775%x776)));

    if (t166 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x777 = 110LLU;
	static volatile int8_t x778 = INT8_MAX;
	static int32_t x779 = INT32_MIN;
	static int32_t x780 = 20012;
	uint64_t t167 = 2721358538733062568LLU;

    t167 = (x777-(x778!=(x779%x780)));

    if (t167 != 109LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x782 = INT16_MAX;
	uint8_t x783 = UINT8_MAX;
	volatile uint16_t x784 = 14U;
	uint64_t t168 = 226202LLU;

    t168 = (x781-(x782!=(x783%x784)));

    if (t168 != 8325015607LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x785 = -247678816825LL;
	volatile int8_t x786 = INT8_MIN;
	int16_t x787 = INT16_MAX;
	int16_t x788 = -196;
	volatile int64_t t169 = -325608LL;

    t169 = (x785-(x786!=(x787%x788)));

    if (t169 != -247678816826LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x789 = -63;
	int32_t x790 = INT32_MIN;
	static uint16_t x792 = UINT16_MAX;
	int32_t t170 = 4194;

    t170 = (x789-(x790!=(x791%x792)));

    if (t170 != -64) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint64_t x793 = 6180402917963354862LLU;
	int32_t x794 = -29;
	volatile int64_t x795 = -1LL;
	int64_t x796 = -1LL;
	volatile uint64_t t171 = 7679309527668193LLU;

    t171 = (x793-(x794!=(x795%x796)));

    if (t171 != 6180402917963354861LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x797 = -1LL;
	uint32_t x798 = UINT32_MAX;
	uint8_t x799 = UINT8_MAX;
	static volatile int64_t t172 = -2163805691806483LL;

    t172 = (x797-(x798!=(x799%x800)));

    if (t172 != -2LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x801 = 53061833951LLU;
	int32_t x802 = -1;
	static int32_t x803 = -222648266;
	uint8_t x804 = 1U;
	volatile uint64_t t173 = 53296459972316566LLU;

    t173 = (x801-(x802!=(x803%x804)));

    if (t173 != 53061833950LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x806 = UINT8_MAX;
	volatile uint64_t x807 = 7823391494868382LLU;
	volatile uint64_t x808 = UINT64_MAX;
	uint64_t t174 = 11451691539300236LLU;

    t174 = (x805-(x806!=(x807%x808)));

    if (t174 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x809 = 1;
	static int8_t x811 = 1;
	volatile uint16_t x812 = 2090U;
	static volatile int32_t t175 = -5572;

    t175 = (x809-(x810!=(x811%x812)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x814 = INT16_MIN;
	uint16_t x815 = 3796U;
	int32_t t176 = 848289;

    t176 = (x813-(x814!=(x815%x816)));

    if (t176 != 2147483646) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x821 = UINT32_MAX;
	uint64_t x822 = 65340LLU;

    t177 = (x821-(x822!=(x823%x824)));

    if (t177 != 4294967294U) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x833 = -1;
	int16_t x834 = -1;
	int64_t x835 = INT64_MIN;
	uint16_t x836 = 4U;
	int32_t t178 = -7;

    t178 = (x833-(x834!=(x835%x836)));

    if (t178 != -2) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x837 = INT16_MIN;
	volatile int32_t x838 = 9;
	int8_t x839 = INT8_MAX;
	static volatile int64_t x840 = INT64_MIN;
	static int32_t t179 = 1;

    t179 = (x837-(x838!=(x839%x840)));

    if (t179 != -32769) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x842 = 9;
	volatile uint8_t x843 = 2U;
	static int16_t x844 = 1638;
	uint32_t t180 = 12U;

    t180 = (x841-(x842!=(x843%x844)));

    if (t180 != 1U) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint8_t x846 = UINT8_MAX;
	static int64_t x847 = INT64_MIN;
	uint64_t t181 = 3945275399789593790LLU;

    t181 = (x845-(x846!=(x847%x848)));

    if (t181 != 642820LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x849 = 18U;
	uint64_t x850 = UINT64_MAX;
	uint32_t x851 = UINT32_MAX;
	int8_t x852 = INT8_MIN;
	volatile int32_t t182 = -77589;

    t182 = (x849-(x850!=(x851%x852)));

    if (t182 != 17) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x853 = 48U;
	int8_t x854 = -24;
	uint16_t x855 = 108U;
	int64_t x856 = INT64_MIN;
	int32_t t183 = -5675;

    t183 = (x853-(x854!=(x855%x856)));

    if (t183 != 47) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x857 = INT8_MIN;
	int8_t x858 = INT8_MAX;
	volatile uint64_t x859 = 3391350887LLU;
	int32_t x860 = INT32_MAX;
	int32_t t184 = -6;

    t184 = (x857-(x858!=(x859%x860)));

    if (t184 != -129) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x862 = 83;
	int32_t x864 = INT32_MIN;
	volatile int32_t t185 = 22411422;

    t185 = (x861-(x862!=(x863%x864)));

    if (t185 != -2) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x865 = INT16_MIN;
	int32_t x867 = INT32_MIN;
	static int32_t t186 = 1524;

    t186 = (x865-(x866!=(x867%x868)));

    if (t186 != -32769) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x869 = 14435U;
	uint16_t x871 = 2U;
	int64_t x872 = -277662LL;
	volatile int32_t t187 = -2;

    t187 = (x869-(x870!=(x871%x872)));

    if (t187 != 14434) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x874 = UINT32_MAX;
	int16_t x876 = INT16_MAX;
	int32_t t188 = -130365;

    t188 = (x873-(x874!=(x875%x876)));

    if (t188 != 2147483646) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x877 = UINT32_MAX;
	int64_t x878 = -53497698179554395LL;
	uint32_t x879 = 20824402U;
	int16_t x880 = -3;
	volatile uint32_t t189 = 1043686U;

    t189 = (x877-(x878!=(x879%x880)));

    if (t189 != 4294967294U) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x884 = -1;

    t190 = (x881-(x882!=(x883%x884)));

    if (t190 != -129) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x886 = INT64_MIN;
	int8_t x887 = 1;
	static volatile int32_t x888 = INT32_MIN;
	int32_t t191 = 2024270;

    t191 = (x885-(x886!=(x887%x888)));

    if (t191 != 254) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x889 = 123139675;
	volatile int32_t x890 = -1;
	static volatile uint8_t x891 = 7U;
	int32_t x892 = -1;
	int32_t t192 = -168;

    t192 = (x889-(x890!=(x891%x892)));

    if (t192 != 123139674) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x893 = INT32_MAX;
	int64_t x896 = INT64_MIN;

    t193 = (x893-(x894!=(x895%x896)));

    if (t193 != 2147483646) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x905 = -116;
	uint16_t x906 = 3U;
	int16_t x907 = INT16_MIN;
	uint8_t x908 = UINT8_MAX;

    t194 = (x905-(x906!=(x907%x908)));

    if (t194 != -117) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x909 = -1;
	uint16_t x910 = 1U;
	int8_t x911 = -1;
	volatile uint8_t x912 = 6U;

    t195 = (x909-(x910!=(x911%x912)));

    if (t195 != -2) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x914 = 94319;
	static volatile int32_t t196 = 59;

    t196 = (x913-(x914!=(x915%x916)));

    if (t196 != -68) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x917 = -1;
	int16_t x918 = INT16_MIN;
	int32_t x919 = -1;
	int64_t x920 = -1LL;
	static volatile int32_t t197 = 10998;

    t197 = (x917-(x918!=(x919%x920)));

    if (t197 != -2) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x921 = 25U;
	uint16_t x922 = 2041U;
	volatile int8_t x923 = -1;
	int32_t x924 = INT32_MAX;
	volatile uint32_t t198 = 467U;

    t198 = (x921-(x922!=(x923%x924)));

    if (t198 != 24U) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x925 = -6;
	uint16_t x926 = 200U;
	int8_t x927 = -1;
	uint64_t x928 = 49221767932937LLU;
	volatile int32_t t199 = -30;

    t199 = (x925-(x926!=(x927%x928)));

    if (t199 != -7) { NG(); } else { ; }
	
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

