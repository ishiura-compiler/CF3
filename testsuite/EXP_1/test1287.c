#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = 1615215U;
volatile int32_t t1 = 1554100;
int64_t t2 = INT64_MIN;
volatile int32_t x24 = INT32_MAX;
volatile int32_t t5 = INT32_MAX;
int32_t x26 = INT32_MAX;
static uint32_t x28 = 6648U;
int16_t x34 = INT16_MAX;
int64_t x35 = -10068LL;
volatile uint8_t x45 = 0U;
int64_t x48 = -1LL;
uint16_t x51 = UINT16_MAX;
volatile uint32_t x53 = 462263535U;
uint16_t x56 = UINT16_MAX;
int8_t x64 = 1;
int64_t x65 = -1208941LL;
volatile uint64_t x67 = UINT64_MAX;
int16_t x68 = INT16_MIN;
uint8_t x74 = 1U;
int8_t x75 = INT8_MIN;
uint8_t x76 = 19U;
static volatile int32_t x78 = 14499;
static uint8_t x85 = 2U;
int32_t x97 = 1709699;
static volatile int16_t x98 = -3;
int32_t t24 = -685;
uint64_t x110 = UINT64_MAX;
uint8_t x111 = 7U;
int16_t x113 = -1;
int32_t x114 = -1;
static volatile int32_t t28 = 1504;
int32_t t29 = 63333246;
static int64_t x128 = -1LL;
uint32_t x130 = 17463U;
volatile int8_t x133 = INT8_MIN;
uint64_t x134 = 108LLU;
uint16_t x136 = UINT16_MAX;
int32_t t34 = 171;
int16_t x146 = INT16_MAX;
int32_t x147 = INT32_MIN;
uint16_t x149 = UINT16_MAX;
volatile uint32_t x151 = 0U;
static int32_t x155 = INT32_MIN;
int32_t x158 = INT32_MAX;
volatile int64_t x159 = INT64_MIN;
uint64_t x166 = UINT64_MAX;
int32_t t41 = 558089;
int8_t x170 = 0;
int16_t x172 = -1;
static uint8_t x179 = 59U;
static int8_t x187 = -22;
volatile int32_t t46 = -55;
volatile int64_t x190 = INT64_MAX;
int32_t t47 = -1;
volatile int8_t x194 = 39;
uint32_t x195 = 118685U;
volatile uint32_t t48 = 0U;
uint64_t x213 = 824386879158325018LLU;
static int32_t x214 = INT32_MAX;
static volatile int16_t x216 = INT16_MIN;
volatile int32_t t53 = -29611;
static volatile int64_t x230 = -1336509906LL;
int8_t x232 = 5;
int32_t t57 = 7669;
uint32_t x235 = UINT32_MAX;
static int32_t t58 = INT32_MIN;
static int16_t x238 = INT16_MIN;
int32_t x243 = INT32_MIN;
static int64_t x246 = -1LL;
volatile int32_t t61 = 85;
int8_t x252 = INT8_MIN;
int32_t x253 = -1;
volatile int32_t t63 = -244195320;
uint32_t x259 = 29246761U;
int32_t t64 = INT32_MIN;
volatile int32_t t66 = 3059644;
uint32_t x274 = UINT32_MAX;
int8_t x275 = -1;
int32_t x278 = 688;
uint8_t x297 = UINT8_MAX;
int16_t x298 = 7;
uint64_t x302 = 1497178440516LLU;
int8_t x306 = -1;
volatile int16_t x309 = 3835;
int16_t x318 = INT16_MIN;
int64_t x323 = 17156044749492LL;
int16_t x331 = 0;
static int32_t x338 = 0;
int32_t x339 = -1;
volatile int32_t t84 = INT32_MAX;
int64_t x343 = INT64_MAX;
int8_t x347 = INT8_MIN;
static int32_t t86 = -394734;
uint64_t x355 = 38574574LLU;
int64_t x356 = INT64_MIN;
volatile uint64_t x360 = 3381656300LLU;
uint64_t x361 = UINT64_MAX;
int64_t x362 = -1229928586LL;
int16_t x367 = INT16_MIN;
int64_t x373 = -567250604897234160LL;
int8_t x380 = INT8_MIN;
volatile int32_t t94 = 586388714;
volatile int32_t t95 = 1979771;
volatile uint64_t x393 = 57621480763610331LLU;


void f0(void) {
	static volatile int32_t x1 = -2004394;
	int8_t x3 = -1;
	uint64_t x4 = 1934620296900585941LLU;
	volatile uint64_t t0 = 39778403LLU;

	t0 = (((x1==x2)==x3)^x4);

	if (t0 != 1934620296900585941LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -2916276046482LL;
	static uint32_t x6 = 2982U;
	int64_t x7 = INT64_MAX;
	uint8_t x8 = UINT8_MAX;

	t1 = (((x5==x6)==x7)^x8);

	if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	uint64_t x10 = 6653055015518007013LLU;
	uint8_t x11 = UINT8_MAX;
	int64_t x12 = INT64_MIN;

	t2 = (((x9==x10)==x11)^x12);

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint64_t x13 = 1605449659768640321LLU;
	volatile int16_t x14 = INT16_MAX;
	uint16_t x15 = 306U;
	int8_t x16 = INT8_MIN;
	static int32_t t3 = -51698;

	t3 = (((x13==x14)==x15)^x16);

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x17 = 1481LLU;
	uint8_t x18 = 5U;
	int32_t x19 = -1;
	static int64_t x20 = INT64_MAX;
	volatile int64_t t4 = INT64_MAX;

	t4 = (((x17==x18)==x19)^x20);

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 0;
	uint64_t x22 = 455346LLU;
	volatile int64_t x23 = INT64_MIN;

	t5 = (((x21==x22)==x23)^x24);

	if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = INT16_MIN;
	int32_t x27 = 186559;
	volatile uint32_t t6 = 15203992U;

	t6 = (((x25==x26)==x27)^x28);

	if (t6 != 6648U) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = -7777306685LL;
	int8_t x30 = INT8_MIN;
	int64_t x31 = -603178625409563786LL;
	volatile int16_t x32 = INT16_MIN;
	volatile int32_t t7 = 1;

	t7 = (((x29==x30)==x31)^x32);

	if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	uint32_t x36 = 7U;
	volatile uint32_t t8 = 152287381U;

	t8 = (((x33==x34)==x35)^x36);

	if (t8 != 7U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	volatile uint8_t x38 = UINT8_MAX;
	uint32_t x39 = 110131192U;
	uint64_t x40 = 183112067LLU;
	static uint64_t t9 = 978535527346LLU;

	t9 = (((x37==x38)==x39)^x40);

	if (t9 != 183112067LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = -2473199;
	int8_t x42 = -1;
	uint32_t x43 = 64449U;
	static int16_t x44 = INT16_MIN;
	volatile int32_t t10 = -708693;

	t10 = (((x41==x42)==x43)^x44);

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x46 = INT64_MIN;
	uint8_t x47 = 5U;
	static volatile int64_t t11 = -1LL;

	t11 = (((x45==x46)==x47)^x48);

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = 186729LL;
	volatile int64_t x50 = -1LL;
	int16_t x52 = INT16_MAX;
	volatile int32_t t12 = -437;

	t12 = (((x49==x50)==x51)^x52);

	if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = -1117;
	int8_t x55 = INT8_MAX;
	int32_t t13 = 3;

	t13 = (((x53==x54)==x55)^x56);

	if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = 0;
	static volatile int8_t x58 = INT8_MAX;
	int8_t x59 = INT8_MIN;
	uint32_t x60 = UINT32_MAX;
	volatile uint32_t t14 = UINT32_MAX;

	t14 = (((x57==x58)==x59)^x60);

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 721460922445852914LLU;
	static volatile uint8_t x62 = 0U;
	static volatile uint32_t x63 = UINT32_MAX;
	static volatile int32_t t15 = -1212739;

	t15 = (((x61==x62)==x63)^x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = INT64_MIN;
	volatile int32_t t16 = -297160603;

	t16 = (((x65==x66)==x67)^x68);

	if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -1;
	uint64_t x70 = 201LLU;
	uint64_t x71 = 7560355586570LLU;
	int32_t x72 = INT32_MAX;
	volatile int32_t t17 = INT32_MAX;

	t17 = (((x69==x70)==x71)^x72);

	if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = -21466050LL;
	int32_t t18 = -344;

	t18 = (((x73==x74)==x75)^x76);

	if (t18 != 19) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	volatile int32_t x79 = INT32_MIN;
	uint32_t x80 = 1U;
	uint32_t t19 = 684560787U;

	t19 = (((x77==x78)==x79)^x80);

	if (t19 != 1U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 1U;
	int32_t x82 = INT32_MIN;
	int64_t x83 = INT64_MIN;
	int32_t x84 = INT32_MIN;
	int32_t t20 = INT32_MIN;

	t20 = (((x81==x82)==x83)^x84);

	if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x86 = INT8_MIN;
	volatile int8_t x87 = -1;
	uint16_t x88 = UINT16_MAX;
	volatile int32_t t21 = 6944071;

	t21 = (((x85==x86)==x87)^x88);

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MAX;
	volatile uint16_t x90 = UINT16_MAX;
	static int64_t x91 = INT64_MIN;
	int32_t x92 = 52699508;
	volatile int32_t t22 = 46855232;

	t22 = (((x89==x90)==x91)^x92);

	if (t22 != 52699508) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -54;
	static int8_t x94 = -1;
	int32_t x95 = -9;
	int64_t x96 = 10426805059046LL;
	static int64_t t23 = 9LL;

	t23 = (((x93==x94)==x95)^x96);

	if (t23 != 10426805059046LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x99 = INT16_MIN;
	int16_t x100 = INT16_MIN;

	t24 = (((x97==x98)==x99)^x100);

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 169LLU;
	int8_t x102 = INT8_MIN;
	int32_t x103 = -32889512;
	uint8_t x104 = UINT8_MAX;
	volatile int32_t t25 = -21;

	t25 = (((x101==x102)==x103)^x104);

	if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	static int8_t x106 = INT8_MIN;
	volatile int16_t x107 = 753;
	volatile int32_t x108 = 108553049;
	volatile int32_t t26 = -632224;

	t26 = (((x105==x106)==x107)^x108);

	if (t26 != 108553049) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 1523658900219LLU;
	uint16_t x112 = 196U;
	volatile int32_t t27 = -97;

	t27 = (((x109==x110)==x111)^x112);

	if (t27 != 196) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x115 = 0U;
	int16_t x116 = INT16_MIN;

	t28 = (((x113==x114)==x115)^x116);

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x117 = INT8_MAX;
	int16_t x118 = INT16_MIN;
	int32_t x119 = -1;
	volatile int16_t x120 = INT16_MIN;

	t29 = (((x117==x118)==x119)^x120);

	if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	static uint8_t x122 = 15U;
	int64_t x123 = INT64_MIN;
	volatile int16_t x124 = INT16_MIN;
	int32_t t30 = -4617;

	t30 = (((x121==x122)==x123)^x124);

	if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x125 = -17270372532512LL;
	uint16_t x126 = 1U;
	int16_t x127 = INT16_MAX;
	int64_t t31 = 10216852228665LL;

	t31 = (((x125==x126)==x127)^x128);

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = 41U;
	uint32_t x131 = 5503U;
	volatile uint32_t x132 = UINT32_MAX;
	volatile uint32_t t32 = UINT32_MAX;

	t32 = (((x129==x130)==x131)^x132);

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x135 = 175008LL;
	volatile int32_t t33 = 54557352;

	t33 = (((x133==x134)==x135)^x136);

	if (t33 != 65535) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MAX;
	int32_t x138 = -86347401;
	static int32_t x139 = -2601;
	static int32_t x140 = -1;

	t34 = (((x137==x138)==x139)^x140);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MAX;
	uint32_t x142 = 15U;
	volatile uint64_t x143 = 2621999LLU;
	volatile int8_t x144 = 1;
	int32_t t35 = 239;

	t35 = (((x141==x142)==x143)^x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = UINT16_MAX;
	volatile int16_t x148 = 1;
	volatile int32_t t36 = -183466689;

	t36 = (((x145==x146)==x147)^x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x150 = INT16_MIN;
	uint32_t x152 = 36U;
	uint32_t t37 = 46U;

	t37 = (((x149==x150)==x151)^x152);

	if (t37 != 37U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 495067581913622LLU;
	uint16_t x154 = 0U;
	uint64_t x156 = 910LLU;
	volatile uint64_t t38 = 4LLU;

	t38 = (((x153==x154)==x155)^x156);

	if (t38 != 910LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	volatile int8_t x160 = INT8_MIN;
	int32_t t39 = 13362725;

	t39 = (((x157==x158)==x159)^x160);

	if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x161 = 20;
	volatile uint8_t x162 = 0U;
	int8_t x163 = INT8_MIN;
	static int64_t x164 = -67494107537273714LL;
	volatile int64_t t40 = 10180538674840246LL;

	t40 = (((x161==x162)==x163)^x164);

	if (t40 != -67494107537273714LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x165 = -1LL;
	int32_t x167 = 135;
	int8_t x168 = -1;

	t41 = (((x165==x166)==x167)^x168);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = UINT8_MAX;
	int16_t x171 = -1;
	volatile int32_t t42 = 2586;

	t42 = (((x169==x170)==x171)^x172);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 16U;
	volatile int8_t x174 = INT8_MIN;
	int8_t x175 = -1;
	static int32_t x176 = -1;
	int32_t t43 = 2;

	t43 = (((x173==x174)==x175)^x176);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 1U;
	static uint32_t x178 = 1846143U;
	static int32_t x180 = INT32_MIN;
	int32_t t44 = INT32_MIN;

	t44 = (((x177==x178)==x179)^x180);

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 86U;
	uint8_t x182 = 1U;
	volatile int8_t x183 = 3;
	static int32_t x184 = -1;
	volatile int32_t t45 = 375134835;

	t45 = (((x181==x182)==x183)^x184);

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x185 = -1;
	int16_t x186 = INT16_MIN;
	int8_t x188 = INT8_MAX;

	t46 = (((x185==x186)==x187)^x188);

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = 3U;
	uint16_t x191 = 231U;
	uint8_t x192 = UINT8_MAX;

	t47 = (((x189==x190)==x191)^x192);

	if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x193 = 22U;
	static uint32_t x196 = 15814U;

	t48 = (((x193==x194)==x195)^x196);

	if (t48 != 15814U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -10578856375LL;
	uint16_t x198 = 670U;
	static int16_t x199 = 648;
	static int32_t x200 = INT32_MIN;
	int32_t t49 = INT32_MIN;

	t49 = (((x197==x198)==x199)^x200);

	if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MAX;
	int16_t x202 = INT16_MIN;
	uint16_t x203 = 2235U;
	uint16_t x204 = 170U;
	volatile int32_t t50 = 31402619;

	t50 = (((x201==x202)==x203)^x204);

	if (t50 != 170) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x205 = 115850480812LLU;
	int32_t x206 = INT32_MAX;
	int16_t x207 = -114;
	volatile uint64_t x208 = 1433249LLU;
	uint64_t t51 = 6053137408810LLU;

	t51 = (((x205==x206)==x207)^x208);

	if (t51 != 1433249LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	volatile int64_t x210 = INT64_MIN;
	static uint64_t x211 = 263575020LLU;
	int16_t x212 = 644;
	volatile int32_t t52 = 1;

	t52 = (((x209==x210)==x211)^x212);

	if (t52 != 644) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x215 = -1093;

	t53 = (((x213==x214)==x215)^x216);

	if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x217 = 0;
	int16_t x218 = -1;
	static int32_t x219 = -2131676;
	int16_t x220 = 12004;
	int32_t t54 = 1437206;

	t54 = (((x217==x218)==x219)^x220);

	if (t54 != 12004) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x221 = INT8_MIN;
	int16_t x222 = INT16_MIN;
	volatile int64_t x223 = -3976245000362737LL;
	volatile int64_t x224 = 9LL;
	volatile int64_t t55 = -125320112965LL;

	t55 = (((x221==x222)==x223)^x224);

	if (t55 != 9LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = UINT64_MAX;
	static uint32_t x226 = 33645589U;
	uint64_t x227 = UINT64_MAX;
	static int8_t x228 = INT8_MAX;
	int32_t t56 = -827;

	t56 = (((x225==x226)==x227)^x228);

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x229 = 280997681746700LLU;
	int16_t x231 = -1;

	t57 = (((x229==x230)==x231)^x232);

	if (t57 != 5) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = -1;
	int32_t x234 = 12445793;
	int32_t x236 = INT32_MIN;

	t58 = (((x233==x234)==x235)^x236);

	if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x237 = -3099;
	int32_t x239 = INT32_MAX;
	volatile uint8_t x240 = 53U;
	volatile int32_t t59 = 26;

	t59 = (((x237==x238)==x239)^x240);

	if (t59 != 53) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x241 = INT8_MAX;
	int16_t x242 = INT16_MIN;
	static int16_t x244 = 1;
	volatile int32_t t60 = 415494798;

	t60 = (((x241==x242)==x243)^x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = UINT16_MAX;
	uint32_t x247 = 467U;
	uint8_t x248 = 22U;

	t61 = (((x245==x246)==x247)^x248);

	if (t61 != 22) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x249 = UINT32_MAX;
	int32_t x250 = INT32_MAX;
	uint8_t x251 = 0U;
	volatile int32_t t62 = -419506701;

	t62 = (((x249==x250)==x251)^x252);

	if (t62 != -127) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x254 = INT64_MIN;
	int32_t x255 = -6760;
	volatile uint16_t x256 = 2U;

	t63 = (((x253==x254)==x255)^x256);

	if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x257 = INT8_MIN;
	static volatile uint32_t x258 = 346634931U;
	static volatile int32_t x260 = INT32_MIN;

	t64 = (((x257==x258)==x259)^x260);

	if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = UINT16_MAX;
	int16_t x262 = INT16_MIN;
	static volatile int64_t x263 = 744953002LL;
	static uint16_t x264 = 1452U;
	volatile int32_t t65 = -15;

	t65 = (((x261==x262)==x263)^x264);

	if (t65 != 1452) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MAX;
	int8_t x266 = -1;
	int16_t x267 = INT16_MIN;
	int32_t x268 = 1;

	t66 = (((x265==x266)==x267)^x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 3293U;
	int32_t x270 = -1629733;
	uint8_t x271 = UINT8_MAX;
	int8_t x272 = -3;
	static int32_t t67 = 41;

	t67 = (((x269==x270)==x271)^x272);

	if (t67 != -3) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 1282LLU;
	uint16_t x276 = UINT16_MAX;
	int32_t t68 = 248115;

	t68 = (((x273==x274)==x275)^x276);

	if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x277 = INT32_MAX;
	volatile uint64_t x279 = 5LLU;
	uint64_t x280 = 403621615LLU;
	uint64_t t69 = 203778347722LLU;

	t69 = (((x277==x278)==x279)^x280);

	if (t69 != 403621615LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	uint16_t x282 = 1391U;
	volatile uint64_t x283 = 5620935LLU;
	int16_t x284 = INT16_MIN;
	int32_t t70 = -1200;

	t70 = (((x281==x282)==x283)^x284);

	if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MAX;
	static volatile int32_t x286 = INT32_MAX;
	int64_t x287 = -8LL;
	uint32_t x288 = 179974U;
	static uint32_t t71 = 125756U;

	t71 = (((x285==x286)==x287)^x288);

	if (t71 != 179974U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MAX;
	volatile int64_t x290 = INT64_MAX;
	int8_t x291 = -1;
	int8_t x292 = INT8_MIN;
	int32_t t72 = 1;

	t72 = (((x289==x290)==x291)^x292);

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = UINT16_MAX;
	int64_t x294 = -1LL;
	static volatile int8_t x295 = 9;
	static uint16_t x296 = UINT16_MAX;
	volatile int32_t t73 = 18;

	t73 = (((x293==x294)==x295)^x296);

	if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x299 = 271472LL;
	int16_t x300 = INT16_MIN;
	volatile int32_t t74 = 9274045;

	t74 = (((x297==x298)==x299)^x300);

	if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MIN;
	int32_t x303 = INT32_MIN;
	uint16_t x304 = UINT16_MAX;
	int32_t t75 = -11;

	t75 = (((x301==x302)==x303)^x304);

	if (t75 != 65535) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x305 = -279;
	uint8_t x307 = 2U;
	volatile int16_t x308 = 13;
	int32_t t76 = 697;

	t76 = (((x305==x306)==x307)^x308);

	if (t76 != 13) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x310 = 823863099577968203LLU;
	volatile uint64_t x311 = 1238945148LLU;
	int32_t x312 = 6;
	int32_t t77 = 229;

	t77 = (((x309==x310)==x311)^x312);

	if (t77 != 6) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x313 = INT32_MIN;
	uint64_t x314 = 51720474673LLU;
	int32_t x315 = -1;
	int32_t x316 = -7904;
	int32_t t78 = -22927;

	t78 = (((x313==x314)==x315)^x316);

	if (t78 != -7904) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = 22U;
	int32_t x319 = INT32_MIN;
	uint8_t x320 = 97U;
	int32_t t79 = 14;

	t79 = (((x317==x318)==x319)^x320);

	if (t79 != 97) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MIN;
	static int16_t x322 = INT16_MAX;
	uint8_t x324 = 0U;
	int32_t t80 = -10589;

	t80 = (((x321==x322)==x323)^x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = 3U;
	int32_t x326 = INT32_MIN;
	uint64_t x327 = 24521438521676007LLU;
	volatile int32_t x328 = -1;
	int32_t t81 = 55;

	t81 = (((x325==x326)==x327)^x328);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = 3493;
	int64_t x330 = -15431869614LL;
	volatile int64_t x332 = -1820832489LL;
	int64_t t82 = -9029484921LL;

	t82 = (((x329==x330)==x331)^x332);

	if (t82 != -1820832490LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = 2LLU;
	int64_t x334 = INT64_MIN;
	static int32_t x335 = -3;
	volatile uint64_t x336 = UINT64_MAX;
	uint64_t t83 = UINT64_MAX;

	t83 = (((x333==x334)==x335)^x336);

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MAX;
	static int32_t x340 = INT32_MAX;

	t84 = (((x337==x338)==x339)^x340);

	if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MAX;
	int32_t x342 = INT32_MAX;
	uint32_t x344 = UINT32_MAX;
	volatile uint32_t t85 = UINT32_MAX;

	t85 = (((x341==x342)==x343)^x344);

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	int16_t x346 = -1;
	static uint8_t x348 = 6U;

	t86 = (((x345==x346)==x347)^x348);

	if (t86 != 6) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = -1LL;
	uint64_t x350 = 1839046LLU;
	volatile uint64_t x351 = UINT64_MAX;
	int64_t x352 = -91920LL;
	int64_t t87 = -31438265903361423LL;

	t87 = (((x349==x350)==x351)^x352);

	if (t87 != -91920LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = 4082U;
	uint8_t x354 = 4U;
	static volatile int64_t t88 = INT64_MIN;

	t88 = (((x353==x354)==x355)^x356);

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x357 = 2171;
	volatile int64_t x358 = INT64_MAX;
	volatile int32_t x359 = INT32_MIN;
	volatile uint64_t t89 = 277767772562830LLU;

	t89 = (((x357==x358)==x359)^x360);

	if (t89 != 3381656300LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x363 = -1629;
	uint32_t x364 = UINT32_MAX;
	static volatile uint32_t t90 = UINT32_MAX;

	t90 = (((x361==x362)==x363)^x364);

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x365 = INT16_MIN;
	static uint8_t x366 = UINT8_MAX;
	uint8_t x368 = UINT8_MAX;
	volatile int32_t t91 = -1;

	t91 = (((x365==x366)==x367)^x368);

	if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = 1277U;
	int16_t x370 = INT16_MAX;
	static int64_t x371 = INT64_MIN;
	int8_t x372 = -1;
	static int32_t t92 = -12079;

	t92 = (((x369==x370)==x371)^x372);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x374 = 12;
	static int8_t x375 = INT8_MAX;
	uint8_t x376 = UINT8_MAX;
	volatile int32_t t93 = -79316026;

	t93 = (((x373==x374)==x375)^x376);

	if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = UINT8_MAX;
	int16_t x378 = INT16_MIN;
	volatile uint16_t x379 = 6U;

	t94 = (((x377==x378)==x379)^x380);

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = 56LLU;
	int32_t x382 = 375616671;
	uint8_t x383 = 1U;
	volatile int16_t x384 = INT16_MIN;

	t95 = (((x381==x382)==x383)^x384);

	if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x385 = INT32_MIN;
	static int32_t x386 = INT32_MIN;
	int16_t x387 = INT16_MIN;
	volatile int64_t x388 = INT64_MAX;
	static volatile int64_t t96 = INT64_MAX;

	t96 = (((x385==x386)==x387)^x388);

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x389 = -1;
	int64_t x390 = INT64_MIN;
	int64_t x391 = INT64_MIN;
	int16_t x392 = INT16_MAX;
	volatile int32_t t97 = 1;

	t97 = (((x389==x390)==x391)^x392);

	if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x394 = 253881037935565LLU;
	int32_t x395 = -1;
	int16_t x396 = INT16_MAX;
	int32_t t98 = 1;

	t98 = (((x393==x394)==x395)^x396);

	if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MIN;
	static uint8_t x398 = 1U;
	int32_t x399 = 1850;
	uint8_t x400 = 113U;
	static volatile int32_t t99 = -236411;

	t99 = (((x397==x398)==x399)^x400);

	if (t99 != 113) { NG(); } else { ; }
	
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


    return 0;
}

