#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x4 = 19982U;
uint64_t x11 = 27LLU;
uint16_t x14 = 3U;
int8_t x21 = INT8_MIN;
uint8_t x23 = 0U;
volatile int64_t x26 = -1LL;
int32_t x30 = INT32_MIN;
int32_t x32 = INT32_MAX;
int32_t t9 = 84010130;
static volatile int16_t x46 = INT16_MIN;
static volatile int32_t t12 = -2816320;
int8_t x57 = -1;
int64_t x62 = 11158162027299541LL;
int64_t x64 = INT64_MAX;
int32_t t15 = 0;
int8_t x68 = INT8_MAX;
int32_t t16 = -1;
int64_t x69 = INT64_MIN;
int32_t t17 = -28;
volatile uint16_t x77 = 2U;
int32_t t19 = 16728879;
uint8_t x86 = 6U;
uint16_t x89 = 2402U;
uint16_t x101 = 6U;
uint32_t x118 = UINT32_MAX;
int64_t x119 = INT64_MIN;
uint8_t x123 = UINT8_MAX;
int32_t x124 = -60;
int32_t x129 = INT32_MIN;
uint64_t x131 = 1104676LLU;
uint16_t x132 = 1U;
int64_t x134 = INT64_MIN;
static int32_t x136 = -58097726;
int8_t x139 = INT8_MIN;
int8_t x143 = INT8_MIN;
volatile int32_t t35 = 27236;
static volatile int32_t t37 = 388502725;
int32_t x153 = INT32_MIN;
uint8_t x159 = 1U;
int64_t x163 = INT64_MAX;
uint64_t x168 = UINT64_MAX;
static int8_t x173 = INT8_MIN;
int8_t x174 = -1;
volatile uint64_t x176 = 71308818550LLU;
int32_t x178 = -2195;
int8_t x179 = 1;
volatile int16_t x182 = -111;
int32_t t45 = 44072;
static int16_t x186 = INT16_MAX;
volatile int16_t x189 = INT16_MIN;
int32_t x201 = -1;
int16_t x202 = -1;
static int32_t t50 = 120;
int32_t x206 = -1038;
uint32_t x216 = 6835395U;
int32_t x217 = INT32_MIN;
static int32_t x223 = 255;
int64_t x224 = -58286973708LL;
volatile uint64_t x226 = UINT64_MAX;
volatile int32_t x228 = INT32_MAX;
int16_t x229 = -1;
volatile uint32_t x230 = UINT32_MAX;
volatile uint64_t x232 = 62795020232170550LLU;
volatile int16_t x234 = INT16_MAX;
static volatile int8_t x239 = 1;
volatile int32_t t60 = 0;
static int8_t x246 = INT8_MAX;
static int32_t x250 = -105051447;
volatile int32_t x252 = INT32_MAX;
int64_t x257 = INT64_MAX;
volatile int32_t t64 = -135291057;
int16_t x266 = -1;
volatile int8_t x269 = -1;
volatile int16_t x280 = -2464;
static volatile int32_t t69 = 218878838;
int16_t x281 = INT16_MIN;
uint8_t x292 = 6U;
int64_t x298 = INT64_MIN;
static uint8_t x300 = 58U;
int8_t x302 = INT8_MIN;
int32_t x304 = INT32_MIN;
uint16_t x306 = 86U;
static int32_t t76 = -9;
static int8_t x310 = -1;
static volatile int32_t t77 = -350101;
int16_t x314 = INT16_MAX;
volatile uint64_t x316 = UINT64_MAX;
int8_t x317 = -1;
int16_t x318 = -4013;
int64_t x329 = -1LL;
int64_t x342 = 14LL;
int32_t t87 = 161;
static int16_t x361 = INT16_MAX;
static uint8_t x368 = UINT8_MAX;
int8_t x369 = INT8_MIN;
int32_t x372 = 7414;
static int64_t x384 = -1LL;
int32_t t95 = 5106;
static int16_t x391 = INT16_MAX;
int8_t x392 = INT8_MIN;
static volatile int32_t x393 = 3600682;
uint32_t x395 = 505U;
int32_t t99 = -4937261;


void f0(void) {
	uint16_t x1 = 296U;
	uint16_t x2 = UINT16_MAX;
	int32_t x3 = -10650118;
	int32_t t0 = 5261;

	t0 = (((x1&x2)==x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	int16_t x6 = -1;
	static int16_t x7 = INT16_MAX;
	uint16_t x8 = UINT16_MAX;
	int32_t t1 = -1854;

	t1 = (((x5&x6)==x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -37;
	volatile int64_t x10 = INT64_MIN;
	static int64_t x12 = INT64_MAX;
	volatile int32_t t2 = -3355054;

	t2 = (((x9&x10)==x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	volatile uint32_t x15 = 517U;
	int16_t x16 = INT16_MAX;
	volatile int32_t t3 = -211;

	t3 = (((x13&x14)==x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x17 = 8346589U;
	int8_t x18 = INT8_MIN;
	int32_t x19 = INT32_MAX;
	int64_t x20 = INT64_MAX;
	int32_t t4 = -654639;

	t4 = (((x17&x18)==x19)<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x22 = 1U;
	static uint64_t x24 = 64581000836686788LLU;
	int32_t t5 = 46;

	t5 = (((x21&x22)==x23)<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	int32_t x27 = -1;
	uint32_t x28 = UINT32_MAX;
	volatile int32_t t6 = 6;

	t6 = (((x25&x26)==x27)<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	static uint16_t x31 = 19U;
	int32_t t7 = 3;

	t7 = (((x29&x30)==x31)<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	volatile int16_t x34 = 118;
	int64_t x35 = -3059LL;
	int64_t x36 = -1LL;
	volatile int32_t t8 = 2;

	t8 = (((x33&x34)==x35)<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 1050U;
	int16_t x38 = 17;
	int8_t x39 = INT8_MIN;
	int64_t x40 = INT64_MIN;

	t9 = (((x37&x38)==x39)<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = 25;
	int16_t x42 = 119;
	int16_t x43 = -465;
	uint32_t x44 = 1285851U;
	int32_t t10 = 366467276;

	t10 = (((x41&x42)==x43)<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = INT8_MAX;
	int32_t x47 = -1;
	uint32_t x48 = 719578845U;
	volatile int32_t t11 = -125127956;

	t11 = (((x45&x46)==x47)<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 53039378300697LLU;
	int32_t x50 = INT32_MIN;
	int32_t x51 = -1;
	int8_t x52 = INT8_MIN;

	t12 = (((x49&x50)==x51)<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 4U;
	int8_t x54 = INT8_MIN;
	static uint32_t x55 = 173942U;
	uint32_t x56 = 91U;
	int32_t t13 = 50053150;

	t13 = (((x53&x54)==x55)<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x58 = 26U;
	uint16_t x59 = 2U;
	static int16_t x60 = INT16_MAX;
	int32_t t14 = 130;

	t14 = (((x57&x58)==x59)<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	uint32_t x63 = 735U;

	t15 = (((x61&x62)==x63)<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	int16_t x66 = INT16_MIN;
	volatile int64_t x67 = -1LL;

	t16 = (((x65&x66)==x67)<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x70 = -1;
	volatile int64_t x71 = INT64_MAX;
	int64_t x72 = INT64_MIN;

	t17 = (((x69&x70)==x71)<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	volatile int32_t x74 = -351390398;
	int32_t x75 = INT32_MAX;
	int64_t x76 = -7LL;
	volatile int32_t t18 = 430898;

	t18 = (((x73&x74)==x75)<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x78 = INT32_MIN;
	static int32_t x79 = INT32_MIN;
	static int8_t x80 = INT8_MAX;

	t19 = (((x77&x78)==x79)<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	static uint8_t x82 = 1U;
	int32_t x83 = -1;
	int8_t x84 = -27;
	volatile int32_t t20 = -126789;

	t20 = (((x81&x82)==x83)<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	static int64_t x87 = -1LL;
	int8_t x88 = INT8_MIN;
	volatile int32_t t21 = -38;

	t21 = (((x85&x86)==x87)<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x90 = UINT8_MAX;
	volatile uint8_t x91 = UINT8_MAX;
	volatile int16_t x92 = INT16_MIN;
	volatile int32_t t22 = 3;

	t22 = (((x89&x90)==x91)<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint16_t x93 = 5U;
	int8_t x94 = -1;
	uint16_t x95 = UINT16_MAX;
	static int16_t x96 = -1;
	volatile int32_t t23 = -2838118;

	t23 = (((x93&x94)==x95)<x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	static int32_t x98 = INT32_MIN;
	static int16_t x99 = -1;
	static uint16_t x100 = 17580U;
	volatile int32_t t24 = -950981785;

	t24 = (((x97&x98)==x99)<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x102 = 38091595;
	int8_t x103 = INT8_MAX;
	int32_t x104 = INT32_MIN;
	volatile int32_t t25 = 315053233;

	t25 = (((x101&x102)==x103)<x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 6U;
	static int8_t x106 = -1;
	uint64_t x107 = UINT64_MAX;
	int32_t x108 = INT32_MAX;
	volatile int32_t t26 = -13984764;

	t26 = (((x105&x106)==x107)<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	uint32_t x110 = UINT32_MAX;
	int8_t x111 = 7;
	uint32_t x112 = 660162758U;
	int32_t t27 = 10923803;

	t27 = (((x109&x110)==x111)<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x113 = 29524LLU;
	int16_t x114 = -1;
	int8_t x115 = INT8_MAX;
	int64_t x116 = 720031500101575252LL;
	volatile int32_t t28 = 1;

	t28 = (((x113&x114)==x115)<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 29U;
	int32_t x120 = -2242;
	static volatile int32_t t29 = 2918;

	t29 = (((x117&x118)==x119)<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x121 = -1;
	static uint32_t x122 = 24U;
	int32_t t30 = 0;

	t30 = (((x121&x122)==x123)<x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = 731U;
	int8_t x126 = INT8_MAX;
	int32_t x127 = INT32_MIN;
	uint8_t x128 = 55U;
	volatile int32_t t31 = 37;

	t31 = (((x125&x126)==x127)<x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x130 = 1389U;
	static volatile int32_t t32 = 32592;

	t32 = (((x129&x130)==x131)<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x133 = 405U;
	uint32_t x135 = 167U;
	volatile int32_t t33 = 387224;

	t33 = (((x133&x134)==x135)<x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = 0;
	volatile int32_t x138 = INT32_MIN;
	int8_t x140 = INT8_MIN;
	volatile int32_t t34 = 46019460;

	t34 = (((x137&x138)==x139)<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = INT64_MIN;
	uint64_t x142 = UINT64_MAX;
	volatile int8_t x144 = 2;

	t35 = (((x141&x142)==x143)<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = UINT16_MAX;
	volatile uint8_t x146 = UINT8_MAX;
	int16_t x147 = INT16_MAX;
	int16_t x148 = INT16_MIN;
	int32_t t36 = -107;

	t36 = (((x145&x146)==x147)<x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x149 = -1;
	uint16_t x150 = 2U;
	static uint16_t x151 = 14796U;
	uint64_t x152 = 63325LLU;

	t37 = (((x149&x150)==x151)<x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x154 = INT8_MAX;
	int32_t x155 = INT32_MIN;
	int32_t x156 = INT32_MIN;
	volatile int32_t t38 = 26;

	t38 = (((x153&x154)==x155)<x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = 124;
	int64_t x158 = -1LL;
	int8_t x160 = INT8_MIN;
	int32_t t39 = 9591;

	t39 = (((x157&x158)==x159)<x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x161 = INT8_MAX;
	int64_t x162 = INT64_MIN;
	volatile uint64_t x164 = 83207LLU;
	static int32_t t40 = 110455450;

	t40 = (((x161&x162)==x163)<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x165 = INT8_MIN;
	int8_t x166 = INT8_MIN;
	uint32_t x167 = 547861942U;
	volatile int32_t t41 = 354692;

	t41 = (((x165&x166)==x167)<x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	static volatile int8_t x170 = -1;
	uint32_t x171 = UINT32_MAX;
	static uint64_t x172 = UINT64_MAX;
	int32_t t42 = -103059104;

	t42 = (((x169&x170)==x171)<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x175 = INT16_MAX;
	int32_t t43 = -3;

	t43 = (((x173&x174)==x175)<x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x177 = INT16_MIN;
	int32_t x180 = -1;
	volatile int32_t t44 = -33150792;

	t44 = (((x177&x178)==x179)<x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x181 = INT16_MIN;
	int8_t x183 = INT8_MAX;
	volatile int16_t x184 = INT16_MIN;

	t45 = (((x181&x182)==x183)<x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -2145;
	int32_t x187 = -1;
	int16_t x188 = INT16_MIN;
	volatile int32_t t46 = -66327522;

	t46 = (((x185&x186)==x187)<x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x190 = 189689109LLU;
	int32_t x191 = INT32_MIN;
	int8_t x192 = 14;
	volatile int32_t t47 = -1148001;

	t47 = (((x189&x190)==x191)<x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x193 = UINT8_MAX;
	static volatile int8_t x194 = -8;
	static int32_t x195 = INT32_MIN;
	static int16_t x196 = -1;
	volatile int32_t t48 = 6;

	t48 = (((x193&x194)==x195)<x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x197 = 11404645U;
	static uint16_t x198 = 2145U;
	int16_t x199 = -6307;
	static uint32_t x200 = 133137269U;
	volatile int32_t t49 = -486956;

	t49 = (((x197&x198)==x199)<x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x203 = INT32_MIN;
	static volatile int8_t x204 = INT8_MIN;

	t50 = (((x201&x202)==x203)<x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x205 = 36628782884449LLU;
	int16_t x207 = INT16_MIN;
	int16_t x208 = INT16_MIN;
	volatile int32_t t51 = -429607233;

	t51 = (((x205&x206)==x207)<x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = 1244U;
	volatile int64_t x210 = INT64_MIN;
	uint8_t x211 = UINT8_MAX;
	uint64_t x212 = UINT64_MAX;
	int32_t t52 = -615;

	t52 = (((x209&x210)==x211)<x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -1;
	int8_t x214 = INT8_MIN;
	static volatile uint32_t x215 = UINT32_MAX;
	volatile int32_t t53 = -14;

	t53 = (((x213&x214)==x215)<x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x218 = -1;
	static int8_t x219 = INT8_MIN;
	uint8_t x220 = 14U;
	int32_t t54 = 33934822;

	t54 = (((x217&x218)==x219)<x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = -1LL;
	int64_t x222 = INT64_MIN;
	int32_t t55 = -129964792;

	t55 = (((x221&x222)==x223)<x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = 14;
	int64_t x227 = INT64_MIN;
	volatile int32_t t56 = 3622;

	t56 = (((x225&x226)==x227)<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x231 = -820;
	volatile int32_t t57 = -109;

	t57 = (((x229&x230)==x231)<x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x233 = -1;
	static volatile uint64_t x235 = 46588141411005829LLU;
	int64_t x236 = INT64_MAX;
	volatile int32_t t58 = -3;

	t58 = (((x233&x234)==x235)<x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x237 = 7936583824535600574LLU;
	volatile uint8_t x238 = 1U;
	uint16_t x240 = 119U;
	static volatile int32_t t59 = -420;

	t59 = (((x237&x238)==x239)<x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x241 = INT8_MAX;
	int64_t x242 = INT64_MIN;
	uint32_t x243 = 89526U;
	volatile int8_t x244 = 1;

	t60 = (((x241&x242)==x243)<x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x245 = INT32_MAX;
	static int16_t x247 = INT16_MIN;
	int16_t x248 = 0;
	static volatile int32_t t61 = -1147;

	t61 = (((x245&x246)==x247)<x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x249 = -241609414;
	int8_t x251 = -1;
	volatile int32_t t62 = 408;

	t62 = (((x249&x250)==x251)<x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MAX;
	int32_t x254 = INT32_MIN;
	int16_t x255 = INT16_MIN;
	volatile int16_t x256 = INT16_MAX;
	int32_t t63 = -1;

	t63 = (((x253&x254)==x255)<x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x258 = -2878753592635LL;
	uint32_t x259 = 367U;
	uint16_t x260 = 116U;

	t64 = (((x257&x258)==x259)<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x261 = UINT64_MAX;
	int64_t x262 = 3409791951068322LL;
	static int16_t x263 = 5551;
	int32_t x264 = -1;
	int32_t t65 = -60291;

	t65 = (((x261&x262)==x263)<x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = UINT64_MAX;
	uint8_t x267 = 4U;
	static int32_t x268 = -1;
	volatile int32_t t66 = 14138;

	t66 = (((x265&x266)==x267)<x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x270 = INT16_MIN;
	static int32_t x271 = -126;
	volatile int32_t x272 = -1;
	int32_t t67 = 90393;

	t67 = (((x269&x270)==x271)<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 115366037187LLU;
	uint64_t x274 = 10LLU;
	volatile int32_t x275 = -938;
	volatile int8_t x276 = -1;
	int32_t t68 = -10247478;

	t68 = (((x273&x274)==x275)<x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MIN;
	int32_t x278 = -1;
	int32_t x279 = INT32_MAX;

	t69 = (((x277&x278)==x279)<x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x282 = INT8_MIN;
	int64_t x283 = -218829893159LL;
	volatile uint32_t x284 = 0U;
	volatile int32_t t70 = 17217575;

	t70 = (((x281&x282)==x283)<x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x285 = INT64_MIN;
	volatile int32_t x286 = 0;
	static uint32_t x287 = UINT32_MAX;
	int8_t x288 = INT8_MIN;
	volatile int32_t t71 = -6079;

	t71 = (((x285&x286)==x287)<x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = -1;
	int64_t x290 = INT64_MAX;
	int32_t x291 = -1;
	int32_t t72 = 149291898;

	t72 = (((x289&x290)==x291)<x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = UINT32_MAX;
	uint64_t x294 = 258564878229827LLU;
	int8_t x295 = INT8_MAX;
	int8_t x296 = INT8_MAX;
	static int32_t t73 = -1831;

	t73 = (((x293&x294)==x295)<x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x297 = 18U;
	int32_t x299 = -1;
	volatile int32_t t74 = -1013;

	t74 = (((x297&x298)==x299)<x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x301 = INT64_MIN;
	int32_t x303 = -1;
	volatile int32_t t75 = -695332580;

	t75 = (((x301&x302)==x303)<x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = 2;
	int8_t x307 = 1;
	volatile int32_t x308 = -455525636;

	t76 = (((x305&x306)==x307)<x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = 14808592U;
	uint64_t x311 = UINT64_MAX;
	int32_t x312 = -1;

	t77 = (((x309&x310)==x311)<x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = 173523654;
	int32_t x315 = INT32_MIN;
	volatile int32_t t78 = 4;

	t78 = (((x313&x314)==x315)<x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x319 = 1U;
	static volatile int16_t x320 = -1020;
	volatile int32_t t79 = 3299;

	t79 = (((x317&x318)==x319)<x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	int8_t x322 = 6;
	uint64_t x323 = 1857LLU;
	uint16_t x324 = 1U;
	volatile int32_t t80 = -1665;

	t80 = (((x321&x322)==x323)<x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x325 = INT64_MIN;
	uint32_t x326 = 519U;
	static volatile int8_t x327 = 49;
	int8_t x328 = 40;
	int32_t t81 = 12216;

	t81 = (((x325&x326)==x327)<x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x330 = 2075961U;
	int32_t x331 = -1;
	static int16_t x332 = INT16_MIN;
	int32_t t82 = -594888;

	t82 = (((x329&x330)==x331)<x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = 381321723U;
	static int8_t x334 = 1;
	static int32_t x335 = INT32_MIN;
	volatile uint64_t x336 = 118892027LLU;
	volatile int32_t t83 = -319;

	t83 = (((x333&x334)==x335)<x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = UINT16_MAX;
	static int32_t x338 = 7182826;
	int16_t x339 = INT16_MIN;
	uint64_t x340 = 3654946LLU;
	static volatile int32_t t84 = -2810;

	t84 = (((x337&x338)==x339)<x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = UINT8_MAX;
	uint16_t x343 = 10329U;
	int16_t x344 = -1;
	static int32_t t85 = -51000;

	t85 = (((x341&x342)==x343)<x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MIN;
	static int32_t x346 = -1;
	uint64_t x347 = 1077073915658LLU;
	volatile uint64_t x348 = UINT64_MAX;
	int32_t t86 = 33481;

	t86 = (((x345&x346)==x347)<x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = -1LL;
	static int64_t x350 = INT64_MAX;
	int8_t x351 = -1;
	uint64_t x352 = 180LLU;

	t87 = (((x349&x350)==x351)<x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x353 = 10557;
	volatile int64_t x354 = -1356566035710003LL;
	int64_t x355 = INT64_MIN;
	int8_t x356 = -35;
	volatile int32_t t88 = -5;

	t88 = (((x353&x354)==x355)<x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 455LLU;
	volatile int32_t x358 = INT32_MIN;
	int64_t x359 = -1LL;
	int64_t x360 = INT64_MAX;
	volatile int32_t t89 = -15;

	t89 = (((x357&x358)==x359)<x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x362 = 8U;
	uint32_t x363 = UINT32_MAX;
	static int16_t x364 = -1;
	volatile int32_t t90 = 4600;

	t90 = (((x361&x362)==x363)<x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x365 = 5;
	int64_t x366 = -247815LL;
	int16_t x367 = 0;
	int32_t t91 = 44447;

	t91 = (((x365&x366)==x367)<x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x370 = INT16_MAX;
	volatile int32_t x371 = INT32_MIN;
	volatile int32_t t92 = -1078;

	t92 = (((x369&x370)==x371)<x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x373 = INT8_MAX;
	int8_t x374 = INT8_MIN;
	int8_t x375 = -2;
	int8_t x376 = INT8_MAX;
	volatile int32_t t93 = -164;

	t93 = (((x373&x374)==x375)<x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MAX;
	uint64_t x378 = 49354407202796483LLU;
	static uint16_t x379 = UINT16_MAX;
	int64_t x380 = INT64_MAX;
	int32_t t94 = 14;

	t94 = (((x377&x378)==x379)<x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -33;
	int16_t x382 = 1;
	static int16_t x383 = -1;

	t95 = (((x381&x382)==x383)<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = 7U;
	uint16_t x386 = 5730U;
	uint32_t x387 = 140702910U;
	int64_t x388 = INT64_MIN;
	int32_t t96 = -2;

	t96 = (((x385&x386)==x387)<x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x389 = -1LL;
	int16_t x390 = INT16_MIN;
	static volatile int32_t t97 = -11528043;

	t97 = (((x389&x390)==x391)<x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x394 = 142871530LL;
	static int8_t x396 = INT8_MIN;
	volatile int32_t t98 = 965530309;

	t98 = (((x393&x394)==x395)<x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x397 = 22U;
	int16_t x398 = -5337;
	int16_t x399 = INT16_MIN;
	static uint16_t x400 = 0U;

	t99 = (((x397&x398)==x399)<x400);

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

