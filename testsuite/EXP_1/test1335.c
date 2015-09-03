#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MIN;
uint32_t x9 = 0U;
volatile int32_t x10 = -15682539;
static int64_t x14 = INT64_MIN;
uint8_t x17 = UINT8_MAX;
int8_t x18 = 1;
static int8_t x37 = INT8_MIN;
uint64_t x39 = UINT64_MAX;
int64_t x51 = INT64_MIN;
static volatile int32_t x57 = -1;
int32_t x60 = -1;
int64_t x61 = -1LL;
int16_t x64 = -5;
int32_t x67 = INT32_MIN;
volatile int32_t t16 = -31452;
static volatile uint64_t x71 = 116LLU;
int32_t x72 = INT32_MAX;
volatile int32_t t17 = 1087;
static uint8_t x82 = 1U;
volatile int32_t t20 = 924500065;
int64_t x85 = INT64_MAX;
uint64_t x90 = UINT64_MAX;
uint8_t x93 = 41U;
int16_t x101 = -468;
static uint32_t x107 = 1719624U;
int8_t x114 = INT8_MIN;
volatile uint32_t x116 = 1445226U;
uint32_t x118 = UINT32_MAX;
int64_t x123 = -1LL;
uint16_t x127 = 5U;
static uint64_t x128 = 455712727078073LLU;
volatile int8_t x129 = INT8_MIN;
static int16_t x130 = INT16_MIN;
volatile uint32_t x131 = 1U;
static int32_t x145 = 1;
volatile int32_t t36 = 13613373;
int64_t x151 = -1LL;
int8_t x153 = INT8_MIN;
volatile int16_t x163 = INT16_MAX;
volatile int32_t t41 = -1823;
int64_t x171 = INT64_MAX;
int8_t x172 = -26;
static volatile uint32_t x177 = 724822U;
int16_t x178 = 3474;
static volatile uint64_t x182 = UINT64_MAX;
static int64_t x190 = INT64_MAX;
static int32_t x197 = -417;
uint64_t x200 = 1027300775064LLU;
static int64_t x201 = -1LL;
int32_t x202 = -1;
int32_t t50 = -17648625;
uint64_t x210 = 1876106062477LLU;
static int64_t x217 = -1LL;
int8_t x220 = INT8_MIN;
int32_t t54 = -2681172;
static volatile int32_t t55 = 103217419;
uint16_t x225 = 3U;
int32_t t58 = -755974503;
static int64_t x245 = INT64_MIN;
volatile uint16_t x246 = 17081U;
int32_t t61 = 176492;
static int8_t x262 = 11;
uint32_t x264 = UINT32_MAX;
static int32_t t65 = 59699126;
int16_t x269 = -3838;
int8_t x281 = 0;
static uint8_t x284 = 13U;
int32_t t70 = 119032;
volatile int32_t x292 = -19;
int32_t t72 = -1521;
uint16_t x295 = 3139U;
uint64_t x297 = 32123LLU;
int32_t t74 = 8;
static uint32_t x306 = UINT32_MAX;
int32_t t77 = 6;
volatile uint32_t x313 = 119776577U;
volatile int32_t t79 = 0;
uint32_t x321 = UINT32_MAX;
int32_t t80 = -14;
static int8_t x326 = -1;
static int16_t x327 = INT16_MAX;
uint16_t x328 = 10U;
static volatile int32_t t82 = -7;
int16_t x334 = 204;
volatile int16_t x336 = INT16_MIN;
volatile int64_t x340 = INT64_MIN;
static int32_t t85 = 12714;
int64_t x345 = INT64_MIN;
int32_t t86 = -7407;
static int64_t x354 = INT64_MIN;
static int32_t t88 = -2562914;
volatile uint8_t x360 = 2U;
volatile int64_t x367 = INT64_MIN;
uint8_t x393 = UINT8_MAX;
uint32_t x395 = 209U;
uint16_t x399 = 0U;
int32_t x400 = -484;


void f0(void) {
	int64_t x2 = INT64_MIN;
	uint32_t x3 = 21854555U;
	uint8_t x4 = 39U;
	volatile int32_t t0 = -973161;

	t0 = (((x1==x2)|x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = -1LL;
	int16_t x6 = 63;
	static int64_t x7 = -1LL;
	static int8_t x8 = -1;
	int32_t t1 = -3537764;

	t1 = (((x5==x6)|x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x11 = INT64_MAX;
	uint8_t x12 = 19U;
	volatile int32_t t2 = -5369;

	t2 = (((x9==x10)|x11)<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	int16_t x15 = INT16_MIN;
	uint16_t x16 = 653U;
	int32_t t3 = 690808218;

	t3 = (((x13==x14)|x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x19 = UINT16_MAX;
	static int16_t x20 = INT16_MIN;
	volatile int32_t t4 = -7;

	t4 = (((x17==x18)|x19)<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	volatile int16_t x22 = INT16_MAX;
	static uint64_t x23 = UINT64_MAX;
	int16_t x24 = 6;
	int32_t t5 = -105;

	t5 = (((x21==x22)|x23)<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = INT64_MIN;
	static int64_t x26 = INT64_MIN;
	int64_t x27 = -206LL;
	static volatile int32_t x28 = -1;
	int32_t t6 = 48;

	t6 = (((x25==x26)|x27)<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x29 = INT32_MIN;
	uint8_t x30 = 0U;
	static int64_t x31 = -1LL;
	uint16_t x32 = 35U;
	int32_t t7 = -4;

	t7 = (((x29==x30)|x31)<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = -1;
	uint8_t x34 = UINT8_MAX;
	static volatile int16_t x35 = INT16_MAX;
	int64_t x36 = INT64_MIN;
	volatile int32_t t8 = 239;

	t8 = (((x33==x34)|x35)<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x38 = UINT8_MAX;
	static int32_t x40 = INT32_MIN;
	volatile int32_t t9 = 11715821;

	t9 = (((x37==x38)|x39)<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 1U;
	volatile uint16_t x42 = 1U;
	int16_t x43 = 124;
	int32_t x44 = 114;
	static int32_t t10 = 131081093;

	t10 = (((x41==x42)|x43)<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = INT32_MIN;
	static int64_t x46 = -79971LL;
	int16_t x47 = INT16_MAX;
	uint64_t x48 = 178724077288036639LLU;
	volatile int32_t t11 = 178;

	t11 = (((x45==x46)|x47)<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x49 = UINT32_MAX;
	volatile uint32_t x50 = 13U;
	int64_t x52 = INT64_MIN;
	static int32_t t12 = -236137496;

	t12 = (((x49==x50)|x51)<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MAX;
	int64_t x54 = 224170245LL;
	int8_t x55 = -29;
	uint8_t x56 = 0U;
	volatile int32_t t13 = 33539144;

	t13 = (((x53==x54)|x55)<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x58 = 139869U;
	int16_t x59 = INT16_MIN;
	int32_t t14 = 14791907;

	t14 = (((x57==x58)|x59)<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x62 = UINT64_MAX;
	int64_t x63 = -1LL;
	int32_t t15 = -693;

	t15 = (((x61==x62)|x63)<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	static int16_t x66 = -14;
	uint8_t x68 = 74U;

	t16 = (((x65==x66)|x67)<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 7U;
	int32_t x70 = INT32_MIN;

	t17 = (((x69==x70)|x71)<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = 32;
	int8_t x74 = INT8_MAX;
	static int32_t x75 = -5006;
	volatile int32_t x76 = INT32_MAX;
	int32_t t18 = -520;

	t18 = (((x73==x74)|x75)<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x77 = UINT8_MAX;
	volatile int64_t x78 = INT64_MIN;
	static uint32_t x79 = 0U;
	uint16_t x80 = 1514U;
	volatile int32_t t19 = 5;

	t19 = (((x77==x78)|x79)<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	static uint32_t x83 = 3843446U;
	static int8_t x84 = INT8_MIN;

	t20 = (((x81==x82)|x83)<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x86 = 106U;
	static uint8_t x87 = UINT8_MAX;
	static int32_t x88 = INT32_MAX;
	volatile int32_t t21 = -1948;

	t21 = (((x85==x86)|x87)<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x89 = -1;
	static int8_t x91 = -1;
	int8_t x92 = -1;
	volatile int32_t t22 = 25169;

	t22 = (((x89==x90)|x91)<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x94 = -1;
	int32_t x95 = -47;
	uint8_t x96 = 11U;
	int32_t t23 = 1535936;

	t23 = (((x93==x94)|x95)<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = -1LL;
	volatile int32_t x98 = 2889;
	uint32_t x99 = 29293077U;
	static uint32_t x100 = 12U;
	int32_t t24 = 0;

	t24 = (((x97==x98)|x99)<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x102 = 305U;
	int64_t x103 = -1LL;
	static int64_t x104 = INT64_MAX;
	static volatile int32_t t25 = 5176181;

	t25 = (((x101==x102)|x103)<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = -1LL;
	volatile uint64_t x106 = UINT64_MAX;
	volatile uint32_t x108 = 50498431U;
	static volatile int32_t t26 = 103;

	t26 = (((x105==x106)|x107)<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -1LL;
	static volatile int32_t x110 = 2003;
	static int16_t x111 = 969;
	int16_t x112 = INT16_MAX;
	volatile int32_t t27 = -3498745;

	t27 = (((x109==x110)|x111)<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 26256281U;
	int16_t x115 = -3;
	static int32_t t28 = -15529;

	t28 = (((x113==x114)|x115)<x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 40U;
	int8_t x119 = 0;
	uint16_t x120 = 8609U;
	int32_t t29 = -1068774;

	t29 = (((x117==x118)|x119)<x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x121 = 14388U;
	int32_t x122 = INT32_MIN;
	uint64_t x124 = 34779012673290323LLU;
	int32_t t30 = 6;

	t30 = (((x121==x122)|x123)<x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MAX;
	uint32_t x126 = 128912U;
	volatile int32_t t31 = -411739;

	t31 = (((x125==x126)|x127)<x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x132 = 23422U;
	int32_t t32 = -5;

	t32 = (((x129==x130)|x131)<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x133 = 20;
	volatile uint32_t x134 = 235U;
	volatile int32_t x135 = INT32_MIN;
	int64_t x136 = 8418809949650875LL;
	volatile int32_t t33 = 1;

	t33 = (((x133==x134)|x135)<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x137 = INT16_MAX;
	int16_t x138 = INT16_MAX;
	int8_t x139 = -13;
	uint32_t x140 = UINT32_MAX;
	int32_t t34 = -8553;

	t34 = (((x137==x138)|x139)<x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -1;
	uint8_t x142 = 1U;
	int16_t x143 = -1;
	int8_t x144 = INT8_MIN;
	volatile int32_t t35 = -840;

	t35 = (((x141==x142)|x143)<x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x146 = UINT16_MAX;
	static uint8_t x147 = 94U;
	uint32_t x148 = 4460U;

	t36 = (((x145==x146)|x147)<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	uint32_t x150 = 37031U;
	int64_t x152 = -10252555027253LL;
	volatile int32_t t37 = 27;

	t37 = (((x149==x150)|x151)<x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x154 = INT8_MAX;
	uint8_t x155 = 51U;
	int16_t x156 = -2;
	volatile int32_t t38 = 74;

	t38 = (((x153==x154)|x155)<x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x157 = INT32_MAX;
	volatile uint32_t x158 = UINT32_MAX;
	int8_t x159 = 14;
	uint16_t x160 = 27U;
	int32_t t39 = -124116678;

	t39 = (((x157==x158)|x159)<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = UINT16_MAX;
	static uint64_t x162 = 1012203121394LLU;
	int16_t x164 = -1;
	int32_t t40 = -395485;

	t40 = (((x161==x162)|x163)<x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 3LLU;
	uint16_t x166 = 0U;
	int32_t x167 = -424115884;
	volatile uint16_t x168 = UINT16_MAX;

	t41 = (((x165==x166)|x167)<x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 125U;
	uint16_t x170 = 3395U;
	int32_t t42 = -13712789;

	t42 = (((x169==x170)|x171)<x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = UINT64_MAX;
	static volatile uint64_t x174 = 9668688LLU;
	int64_t x175 = INT64_MAX;
	int16_t x176 = INT16_MIN;
	int32_t t43 = -63;

	t43 = (((x173==x174)|x175)<x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x179 = UINT32_MAX;
	static int64_t x180 = -1LL;
	static int32_t t44 = 12;

	t44 = (((x177==x178)|x179)<x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MAX;
	uint16_t x183 = 7565U;
	int32_t x184 = INT32_MIN;
	static int32_t t45 = -17;

	t45 = (((x181==x182)|x183)<x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = UINT32_MAX;
	int64_t x186 = INT64_MIN;
	int8_t x187 = INT8_MAX;
	uint16_t x188 = 799U;
	volatile int32_t t46 = 205;

	t46 = (((x185==x186)|x187)<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = 3742630U;
	int16_t x191 = -1;
	int8_t x192 = -1;
	volatile int32_t t47 = 58984019;

	t47 = (((x189==x190)|x191)<x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MAX;
	int16_t x194 = -1;
	volatile int8_t x195 = INT8_MAX;
	volatile uint8_t x196 = UINT8_MAX;
	int32_t t48 = 0;

	t48 = (((x193==x194)|x195)<x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x198 = 229117485664912328LL;
	uint8_t x199 = UINT8_MAX;
	volatile int32_t t49 = 0;

	t49 = (((x197==x198)|x199)<x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x203 = INT16_MIN;
	uint16_t x204 = UINT16_MAX;

	t50 = (((x201==x202)|x203)<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x205 = INT16_MIN;
	static int16_t x206 = -1;
	volatile int32_t x207 = 342176;
	int32_t x208 = INT32_MIN;
	volatile int32_t t51 = 9172;

	t51 = (((x205==x206)|x207)<x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = UINT32_MAX;
	int32_t x211 = -1;
	int16_t x212 = -6;
	volatile int32_t t52 = -801805;

	t52 = (((x209==x210)|x211)<x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = 1U;
	int16_t x214 = INT16_MIN;
	int64_t x215 = 13150234196LL;
	volatile int8_t x216 = 20;
	volatile int32_t t53 = 2338;

	t53 = (((x213==x214)|x215)<x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x218 = INT32_MAX;
	int8_t x219 = INT8_MIN;

	t54 = (((x217==x218)|x219)<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -7;
	volatile uint64_t x222 = 4196875594251145635LLU;
	uint16_t x223 = 20873U;
	int16_t x224 = -1;

	t55 = (((x221==x222)|x223)<x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x226 = 1U;
	int64_t x227 = INT64_MIN;
	int8_t x228 = INT8_MIN;
	static volatile int32_t t56 = 59292;

	t56 = (((x225==x226)|x227)<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = 13095;
	uint16_t x230 = 0U;
	int64_t x231 = -2704751136601924404LL;
	int64_t x232 = 110454LL;
	volatile int32_t t57 = 10613310;

	t57 = (((x229==x230)|x231)<x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x233 = INT16_MAX;
	volatile int8_t x234 = -22;
	volatile int16_t x235 = INT16_MIN;
	static int8_t x236 = -38;

	t58 = (((x233==x234)|x235)<x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MAX;
	int32_t x238 = INT32_MIN;
	int8_t x239 = INT8_MIN;
	static int64_t x240 = -1LL;
	volatile int32_t t59 = 49262;

	t59 = (((x237==x238)|x239)<x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = 223534303LLU;
	static uint16_t x242 = 16U;
	int64_t x243 = INT64_MIN;
	int64_t x244 = -111232LL;
	static volatile int32_t t60 = -224;

	t60 = (((x241==x242)|x243)<x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x247 = 52;
	static int16_t x248 = -1;

	t61 = (((x245==x246)|x247)<x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = 12700;
	int32_t x250 = -56;
	uint32_t x251 = 1U;
	int32_t x252 = 65514056;
	volatile int32_t t62 = 15004441;

	t62 = (((x249==x250)|x251)<x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = 7U;
	static int16_t x254 = INT16_MAX;
	int32_t x255 = 456891;
	int64_t x256 = INT64_MIN;
	static int32_t t63 = 88044;

	t63 = (((x253==x254)|x255)<x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	int16_t x258 = -2;
	volatile int32_t x259 = 63323;
	volatile uint64_t x260 = UINT64_MAX;
	int32_t t64 = -9;

	t64 = (((x257==x258)|x259)<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = -601;
	int16_t x263 = INT16_MIN;

	t65 = (((x261==x262)|x263)<x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MIN;
	int8_t x266 = INT8_MAX;
	static int64_t x267 = INT64_MIN;
	static volatile int16_t x268 = INT16_MIN;
	volatile int32_t t66 = 116040;

	t66 = (((x265==x266)|x267)<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x270 = -1;
	int16_t x271 = INT16_MAX;
	int16_t x272 = INT16_MAX;
	volatile int32_t t67 = -3672;

	t67 = (((x269==x270)|x271)<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x273 = INT16_MAX;
	volatile int64_t x274 = 68522664734086LL;
	int32_t x275 = 1259109;
	int64_t x276 = INT64_MIN;
	static volatile int32_t t68 = 998;

	t68 = (((x273==x274)|x275)<x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = UINT8_MAX;
	static volatile int16_t x278 = -1;
	volatile int8_t x279 = INT8_MIN;
	int64_t x280 = INT64_MAX;
	volatile int32_t t69 = -4;

	t69 = (((x277==x278)|x279)<x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x282 = 1347U;
	static int32_t x283 = INT32_MAX;

	t70 = (((x281==x282)|x283)<x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	int32_t x286 = -119236;
	static uint8_t x287 = 2U;
	int16_t x288 = INT16_MIN;
	int32_t t71 = -31420;

	t71 = (((x285==x286)|x287)<x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = 723U;
	int64_t x290 = INT64_MIN;
	uint8_t x291 = UINT8_MAX;

	t72 = (((x289==x290)|x291)<x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x293 = INT16_MAX;
	int8_t x294 = 14;
	int8_t x296 = -1;
	static volatile int32_t t73 = 171;

	t73 = (((x293==x294)|x295)<x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x298 = 1129;
	volatile int16_t x299 = -1;
	int8_t x300 = INT8_MIN;

	t74 = (((x297==x298)|x299)<x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = 101U;
	int8_t x302 = 29;
	int8_t x303 = -3;
	uint64_t x304 = 7309436LLU;
	int32_t t75 = -263218;

	t75 = (((x301==x302)|x303)<x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	static volatile int8_t x307 = -2;
	uint64_t x308 = UINT64_MAX;
	int32_t t76 = 7;

	t76 = (((x305==x306)|x307)<x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = UINT32_MAX;
	static volatile int16_t x310 = -1;
	volatile int32_t x311 = 217;
	volatile uint8_t x312 = 30U;

	t77 = (((x309==x310)|x311)<x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x314 = UINT64_MAX;
	volatile int8_t x315 = 0;
	uint64_t x316 = UINT64_MAX;
	volatile int32_t t78 = 42;

	t78 = (((x313==x314)|x315)<x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x317 = -4;
	int16_t x318 = INT16_MIN;
	static int8_t x319 = INT8_MAX;
	volatile uint32_t x320 = 7U;

	t79 = (((x317==x318)|x319)<x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x322 = -12;
	static uint32_t x323 = 1713U;
	uint32_t x324 = UINT32_MAX;

	t80 = (((x321==x322)|x323)<x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x325 = INT32_MAX;
	int32_t t81 = 189435622;

	t81 = (((x325==x326)|x327)<x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x329 = INT64_MIN;
	int64_t x330 = 24750038592LL;
	volatile int64_t x331 = INT64_MIN;
	static uint32_t x332 = UINT32_MAX;

	t82 = (((x329==x330)|x331)<x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MIN;
	static volatile int32_t x335 = INT32_MAX;
	volatile int32_t t83 = 0;

	t83 = (((x333==x334)|x335)<x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = -1LL;
	volatile uint8_t x338 = 18U;
	uint16_t x339 = 7633U;
	int32_t t84 = -1006160;

	t84 = (((x337==x338)|x339)<x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = 580962909LL;
	static int32_t x342 = -1;
	uint64_t x343 = 380LLU;
	volatile int32_t x344 = 503495;

	t85 = (((x341==x342)|x343)<x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x346 = 10U;
	int64_t x347 = 933524495LL;
	static uint64_t x348 = 4070371751170963834LLU;

	t86 = (((x345==x346)|x347)<x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MIN;
	static uint64_t x350 = UINT64_MAX;
	int32_t x351 = -1;
	static int32_t x352 = INT32_MIN;
	int32_t t87 = 67930;

	t87 = (((x349==x350)|x351)<x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MIN;
	volatile uint32_t x355 = 1074573732U;
	int16_t x356 = INT16_MIN;

	t88 = (((x353==x354)|x355)<x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = UINT32_MAX;
	uint32_t x358 = 22474730U;
	int16_t x359 = INT16_MIN;
	volatile int32_t t89 = 2;

	t89 = (((x357==x358)|x359)<x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MIN;
	int8_t x362 = INT8_MIN;
	int64_t x363 = INT64_MIN;
	uint8_t x364 = 0U;
	int32_t t90 = -231;

	t90 = (((x361==x362)|x363)<x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = -1;
	int64_t x366 = INT64_MAX;
	uint64_t x368 = 1673LLU;
	volatile int32_t t91 = 2711;

	t91 = (((x365==x366)|x367)<x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = UINT16_MAX;
	volatile int64_t x370 = INT64_MIN;
	uint32_t x371 = 23U;
	int64_t x372 = INT64_MIN;
	volatile int32_t t92 = -8359441;

	t92 = (((x369==x370)|x371)<x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x373 = 0;
	uint8_t x374 = 1U;
	volatile uint8_t x375 = 1U;
	static volatile uint8_t x376 = 0U;
	volatile int32_t t93 = 40501;

	t93 = (((x373==x374)|x375)<x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x377 = -1;
	volatile int8_t x378 = INT8_MIN;
	int32_t x379 = INT32_MIN;
	volatile int64_t x380 = INT64_MAX;
	volatile int32_t t94 = -430;

	t94 = (((x377==x378)|x379)<x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x381 = UINT64_MAX;
	static int32_t x382 = INT32_MIN;
	static uint64_t x383 = UINT64_MAX;
	static int16_t x384 = 251;
	int32_t t95 = 1995;

	t95 = (((x381==x382)|x383)<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = 6;
	static int64_t x386 = -500LL;
	volatile int32_t x387 = INT32_MAX;
	volatile int16_t x388 = INT16_MIN;
	static int32_t t96 = 24;

	t96 = (((x385==x386)|x387)<x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x389 = 1U;
	static uint8_t x390 = UINT8_MAX;
	uint64_t x391 = UINT64_MAX;
	int8_t x392 = INT8_MIN;
	int32_t t97 = 0;

	t97 = (((x389==x390)|x391)<x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x394 = INT32_MAX;
	volatile int16_t x396 = -1;
	static volatile int32_t t98 = 20157523;

	t98 = (((x393==x394)|x395)<x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = 3838760573LLU;
	int16_t x398 = 1;
	static volatile int32_t t99 = 57216;

	t99 = (((x397==x398)|x399)<x400);

	if (t99 != 0) { NG(); } else { ; }
	
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

