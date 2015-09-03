#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x16 = INT32_MAX;
static int32_t t2 = 282;
static int32_t x17 = 79781816;
uint64_t x33 = 38730230LLU;
int32_t t6 = 8647;
volatile uint64_t x47 = 899LLU;
static uint64_t x48 = 5241733LLU;
volatile uint32_t x56 = UINT32_MAX;
int32_t t9 = -1;
int32_t t13 = -938123;
int16_t x74 = INT16_MAX;
volatile int32_t t14 = 145;
int16_t x83 = INT16_MAX;
int32_t t16 = -49199733;
uint64_t x92 = 30915779157031LLU;
int32_t t18 = 1;
int8_t x94 = INT8_MIN;
volatile int32_t t19 = -8995;
static volatile int16_t x101 = INT16_MIN;
static uint8_t x110 = UINT8_MAX;
int32_t t23 = -23;
int32_t x113 = INT32_MAX;
static uint32_t x115 = 10U;
static int8_t x126 = INT8_MIN;
uint8_t x128 = 7U;
int8_t x134 = 21;
int32_t t27 = 42633;
volatile uint8_t x139 = 4U;
static volatile int8_t x141 = 1;
static int16_t x145 = INT16_MIN;
int8_t x154 = INT8_MIN;
static int32_t t35 = -65;
int16_t x169 = INT16_MIN;
uint16_t x177 = 37U;
int64_t x183 = -1987505LL;
int32_t x184 = INT32_MAX;
volatile int8_t x192 = -1;
volatile int32_t t41 = 66337710;
volatile int32_t t42 = -402;
uint64_t x198 = UINT64_MAX;
volatile uint64_t x200 = UINT64_MAX;
int32_t x201 = -1;
static volatile int32_t t44 = -95013;
volatile int16_t x208 = INT16_MIN;
uint8_t x217 = 7U;
static int8_t x222 = -1;
int32_t x229 = -1;
static int32_t x245 = INT32_MIN;
int32_t x250 = -23470;
int8_t x258 = -1;
int16_t x259 = 0;
volatile int8_t x261 = INT8_MAX;
static volatile int64_t x263 = -1LL;
int8_t x277 = INT8_MIN;
uint16_t x293 = 105U;
int8_t x295 = -1;
uint64_t x298 = 129259LLU;
int32_t t60 = 23585;
int32_t x303 = -1;
int64_t x310 = 22711592659LL;
int32_t t63 = 93188;
uint16_t x314 = UINT16_MAX;
uint32_t x315 = 2431U;
volatile uint32_t x318 = UINT32_MAX;
volatile int32_t t65 = 49632;
int32_t x331 = INT32_MAX;
int32_t t66 = -38687418;
int8_t x335 = 0;
static int64_t x336 = -1LL;
static uint16_t x337 = 299U;
uint8_t x349 = UINT8_MAX;
volatile int32_t t71 = 2236;
int64_t x353 = -1LL;
static int64_t x363 = 211LL;
int32_t t73 = -15379;
int8_t x369 = 11;
int8_t x376 = -6;
int32_t t76 = 4;
uint8_t x381 = 1U;
int64_t x383 = INT64_MIN;
int32_t t78 = 14392;
static volatile int16_t x390 = 1;
static uint8_t x393 = 78U;
int64_t x400 = -1LL;
int32_t t82 = 806;
int32_t x401 = -1;
int64_t x404 = -745880515240388LL;
volatile int32_t t85 = -978;
uint32_t x418 = 7770U;
static volatile int16_t x420 = -1074;
int8_t x422 = INT8_MIN;
int16_t x424 = -1;
uint8_t x426 = 18U;
static volatile int32_t x428 = INT32_MAX;
uint16_t x429 = UINT16_MAX;
volatile int32_t t90 = -122531;
uint8_t x440 = 44U;
static int16_t x441 = 52;
volatile int32_t t92 = -16238910;
uint16_t x450 = UINT16_MAX;
int32_t x451 = -38624;
uint16_t x456 = 36U;
volatile uint32_t x460 = 11389U;
static int64_t x462 = 8754269259053LL;
volatile int32_t t99 = -251512866;


void f0(void) {
	volatile uint8_t x1 = 33U;
	uint16_t x2 = 1U;
	static int8_t x3 = INT8_MIN;
	volatile uint32_t x4 = 5437U;
	int32_t t0 = -11142227;

	t0 = (((x1-x2)+x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x9 = UINT16_MAX;
	uint8_t x10 = 26U;
	uint32_t x11 = 155U;
	int8_t x12 = INT8_MAX;
	int32_t t1 = -3;

	t1 = (((x9-x10)+x11)<=x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x13 = UINT64_MAX;
	static volatile int8_t x14 = INT8_MIN;
	volatile int16_t x15 = -1;

	t2 = (((x13-x14)+x15)<=x16);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x18 = 920306956U;
	static int64_t x19 = -1LL;
	uint32_t x20 = UINT32_MAX;
	int32_t t3 = -49;

	t3 = (((x17-x18)+x19)<=x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x29 = -1;
	static uint8_t x30 = 16U;
	uint64_t x31 = UINT64_MAX;
	volatile int16_t x32 = -1;
	static int32_t t4 = -132809071;

	t4 = (((x29-x30)+x31)<=x32);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x34 = INT64_MIN;
	int16_t x35 = -4;
	int8_t x36 = 48;
	int32_t t5 = -571892;

	t5 = (((x33-x34)+x35)<=x36);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x41 = 65541641U;
	int16_t x42 = -1;
	volatile int16_t x43 = INT16_MIN;
	int32_t x44 = INT32_MAX;

	t6 = (((x41-x42)+x43)<=x44);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x45 = -6;
	uint16_t x46 = 2915U;
	volatile int32_t t7 = 0;

	t7 = (((x45-x46)+x47)<=x48);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x49 = 64463U;
	int16_t x50 = INT16_MAX;
	uint32_t x51 = 224U;
	int16_t x52 = -1;
	int32_t t8 = 503450;

	t8 = (((x49-x50)+x51)<=x52);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x53 = 4483LLU;
	volatile uint16_t x54 = 23U;
	uint8_t x55 = 66U;

	t9 = (((x53-x54)+x55)<=x56);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x57 = -403737134;
	int8_t x58 = INT8_MAX;
	uint16_t x59 = 154U;
	int8_t x60 = -61;
	volatile int32_t t10 = -9271;

	t10 = (((x57-x58)+x59)<=x60);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x61 = -1LL;
	volatile uint16_t x62 = UINT16_MAX;
	int32_t x63 = 145;
	int8_t x64 = INT8_MIN;
	volatile int32_t t11 = -110160;

	t11 = (((x61-x62)+x63)<=x64);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x65 = -1;
	int32_t x66 = -1043973152;
	int32_t x67 = -886994;
	int8_t x68 = 2;
	int32_t t12 = -160;

	t12 = (((x65-x66)+x67)<=x68);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x69 = INT16_MIN;
	int64_t x70 = -1LL;
	int8_t x71 = INT8_MIN;
	volatile int32_t x72 = INT32_MAX;

	t13 = (((x69-x70)+x71)<=x72);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x73 = INT8_MAX;
	int16_t x75 = INT16_MIN;
	int16_t x76 = -7;

	t14 = (((x73-x74)+x75)<=x76);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x77 = -345222;
	int8_t x78 = INT8_MIN;
	uint16_t x79 = 67U;
	uint8_t x80 = 0U;
	static int32_t t15 = -135038469;

	t15 = (((x77-x78)+x79)<=x80);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x81 = 1U;
	uint16_t x82 = UINT16_MAX;
	static int32_t x84 = 15177;

	t16 = (((x81-x82)+x83)<=x84);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x85 = INT32_MIN;
	volatile uint32_t x86 = UINT32_MAX;
	static uint32_t x87 = 3233U;
	uint64_t x88 = 1637193966LLU;
	int32_t t17 = -1;

	t17 = (((x85-x86)+x87)<=x88);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x89 = 1;
	uint16_t x90 = 2U;
	volatile uint64_t x91 = UINT64_MAX;

	t18 = (((x89-x90)+x91)<=x92);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x93 = INT16_MIN;
	int8_t x95 = INT8_MIN;
	volatile int32_t x96 = -1;

	t19 = (((x93-x94)+x95)<=x96);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x97 = INT32_MIN;
	int16_t x98 = -110;
	uint64_t x99 = UINT64_MAX;
	uint8_t x100 = 4U;
	volatile int32_t t20 = 2452;

	t20 = (((x97-x98)+x99)<=x100);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x102 = 1U;
	int16_t x103 = INT16_MAX;
	int64_t x104 = INT64_MIN;
	int32_t t21 = 14;

	t21 = (((x101-x102)+x103)<=x104);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x105 = -1;
	int64_t x106 = -12179LL;
	volatile int16_t x107 = INT16_MIN;
	int64_t x108 = INT64_MIN;
	int32_t t22 = -380145422;

	t22 = (((x105-x106)+x107)<=x108);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x109 = -1;
	int32_t x111 = 3;
	int32_t x112 = INT32_MIN;

	t23 = (((x109-x110)+x111)<=x112);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x114 = 2723;
	volatile int8_t x116 = 23;
	static volatile int32_t t24 = 825183;

	t24 = (((x113-x114)+x115)<=x116);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x125 = INT64_MIN;
	int8_t x127 = INT8_MIN;
	volatile int32_t t25 = 500830068;

	t25 = (((x125-x126)+x127)<=x128);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x129 = INT64_MIN;
	int16_t x130 = -24;
	volatile int8_t x131 = -22;
	static uint16_t x132 = UINT16_MAX;
	volatile int32_t t26 = -10;

	t26 = (((x129-x130)+x131)<=x132);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x133 = UINT64_MAX;
	int16_t x135 = INT16_MIN;
	uint8_t x136 = 0U;

	t27 = (((x133-x134)+x135)<=x136);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x137 = UINT8_MAX;
	static uint16_t x138 = 2893U;
	uint16_t x140 = 323U;
	int32_t t28 = 10613721;

	t28 = (((x137-x138)+x139)<=x140);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x142 = -1;
	uint16_t x143 = 3414U;
	int32_t x144 = -1;
	volatile int32_t t29 = 1;

	t29 = (((x141-x142)+x143)<=x144);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x146 = -1191308LL;
	int64_t x147 = -1LL;
	int16_t x148 = -1;
	static int32_t t30 = -24481486;

	t30 = (((x145-x146)+x147)<=x148);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x149 = INT16_MIN;
	volatile int32_t x150 = INT32_MIN;
	static uint8_t x151 = 0U;
	static volatile uint16_t x152 = 0U;
	int32_t t31 = -403575;

	t31 = (((x149-x150)+x151)<=x152);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x153 = 47U;
	uint8_t x155 = 55U;
	uint32_t x156 = 45449392U;
	static volatile int32_t t32 = -36386;

	t32 = (((x153-x154)+x155)<=x156);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x157 = INT8_MIN;
	uint8_t x158 = 0U;
	uint16_t x159 = 15955U;
	int8_t x160 = INT8_MIN;
	int32_t t33 = -38659;

	t33 = (((x157-x158)+x159)<=x160);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x161 = 496592946302333LLU;
	int16_t x162 = INT16_MIN;
	uint16_t x163 = UINT16_MAX;
	static int64_t x164 = INT64_MIN;
	static volatile int32_t t34 = -263009990;

	t34 = (((x161-x162)+x163)<=x164);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x165 = 50036128434LLU;
	int32_t x166 = -3849;
	static int32_t x167 = INT32_MIN;
	volatile uint32_t x168 = UINT32_MAX;

	t35 = (((x165-x166)+x167)<=x168);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x170 = INT16_MIN;
	static int16_t x171 = INT16_MIN;
	static uint16_t x172 = 3U;
	int32_t t36 = 20;

	t36 = (((x169-x170)+x171)<=x172);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x173 = -54894662;
	int64_t x174 = -1LL;
	uint16_t x175 = UINT16_MAX;
	int64_t x176 = INT64_MIN;
	static volatile int32_t t37 = 479613288;

	t37 = (((x173-x174)+x175)<=x176);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x178 = -1;
	int64_t x179 = INT64_MIN;
	static int64_t x180 = -60686747675127015LL;
	volatile int32_t t38 = -172;

	t38 = (((x177-x178)+x179)<=x180);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x181 = 252850951689531946LLU;
	volatile uint64_t x182 = 522460053LLU;
	int32_t t39 = -61746;

	t39 = (((x181-x182)+x183)<=x184);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x185 = 120428422536067LL;
	int16_t x186 = -1003;
	int16_t x187 = 1513;
	uint16_t x188 = UINT16_MAX;
	volatile int32_t t40 = 365716234;

	t40 = (((x185-x186)+x187)<=x188);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x189 = -25LL;
	int8_t x190 = -1;
	uint64_t x191 = 196487LLU;

	t41 = (((x189-x190)+x191)<=x192);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x193 = 1;
	static int32_t x194 = -1;
	volatile int32_t x195 = -1;
	int32_t x196 = 15;

	t42 = (((x193-x194)+x195)<=x196);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x197 = INT16_MIN;
	static int32_t x199 = -121079;
	int32_t t43 = 2251;

	t43 = (((x197-x198)+x199)<=x200);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x202 = 6LL;
	uint16_t x203 = 118U;
	int16_t x204 = -3333;

	t44 = (((x201-x202)+x203)<=x204);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x205 = 5U;
	volatile int8_t x206 = -59;
	int64_t x207 = -1LL;
	volatile int32_t t45 = 18;

	t45 = (((x205-x206)+x207)<=x208);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x213 = 8153LLU;
	static int32_t x214 = -1248461;
	int16_t x215 = INT16_MAX;
	volatile uint32_t x216 = UINT32_MAX;
	static int32_t t46 = -14;

	t46 = (((x213-x214)+x215)<=x216);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x218 = -1;
	static int8_t x219 = INT8_MIN;
	uint64_t x220 = 9LLU;
	int32_t t47 = 303324393;

	t47 = (((x217-x218)+x219)<=x220);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x221 = INT32_MIN;
	int32_t x223 = -1;
	int8_t x224 = INT8_MAX;
	volatile int32_t t48 = 28796;

	t48 = (((x221-x222)+x223)<=x224);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x230 = 2;
	static volatile int32_t x231 = INT32_MAX;
	uint16_t x232 = UINT16_MAX;
	int32_t t49 = -2598559;

	t49 = (((x229-x230)+x231)<=x232);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x233 = -1;
	volatile int64_t x234 = INT64_MIN;
	int32_t x235 = INT32_MIN;
	static int16_t x236 = -13167;
	int32_t t50 = -793;

	t50 = (((x233-x234)+x235)<=x236);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x246 = INT64_MIN;
	static int32_t x247 = INT32_MIN;
	int16_t x248 = INT16_MIN;
	volatile int32_t t51 = -860188305;

	t51 = (((x245-x246)+x247)<=x248);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x249 = INT64_MIN;
	int8_t x251 = -56;
	int16_t x252 = -2534;
	int32_t t52 = 3758;

	t52 = (((x249-x250)+x251)<=x252);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x257 = UINT32_MAX;
	int32_t x260 = 16;
	volatile int32_t t53 = 5;

	t53 = (((x257-x258)+x259)<=x260);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x262 = INT64_MAX;
	int8_t x264 = -1;
	volatile int32_t t54 = -533719053;

	t54 = (((x261-x262)+x263)<=x264);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x265 = 28195155907LLU;
	volatile uint8_t x266 = 6U;
	int32_t x267 = -8119;
	static volatile int8_t x268 = 13;
	static volatile int32_t t55 = -1670792;

	t55 = (((x265-x266)+x267)<=x268);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x273 = -909999395518278674LL;
	uint64_t x274 = 412448908LLU;
	int8_t x275 = INT8_MAX;
	int16_t x276 = 5;
	int32_t t56 = -411;

	t56 = (((x273-x274)+x275)<=x276);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x278 = UINT64_MAX;
	volatile int32_t x279 = INT32_MAX;
	int16_t x280 = 0;
	static volatile int32_t t57 = -365228;

	t57 = (((x277-x278)+x279)<=x280);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x289 = 77U;
	static int8_t x290 = INT8_MIN;
	volatile int8_t x291 = INT8_MIN;
	int8_t x292 = INT8_MIN;
	int32_t t58 = -224793;

	t58 = (((x289-x290)+x291)<=x292);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x294 = -387;
	int64_t x296 = 5881851082LL;
	volatile int32_t t59 = -2251980;

	t59 = (((x293-x294)+x295)<=x296);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x297 = -229;
	static int8_t x299 = 1;
	static int32_t x300 = -1;

	t60 = (((x297-x298)+x299)<=x300);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x301 = UINT16_MAX;
	int16_t x302 = -21;
	uint16_t x304 = 3078U;
	volatile int32_t t61 = 410;

	t61 = (((x301-x302)+x303)<=x304);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x305 = 3808556738LLU;
	uint32_t x306 = 921324836U;
	int16_t x307 = 22;
	static uint64_t x308 = 39345345074927LLU;
	static volatile int32_t t62 = -434359533;

	t62 = (((x305-x306)+x307)<=x308);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x309 = INT16_MIN;
	uint8_t x311 = UINT8_MAX;
	static int8_t x312 = 60;

	t63 = (((x309-x310)+x311)<=x312);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x313 = UINT8_MAX;
	int64_t x316 = -1LL;
	int32_t t64 = 456679;

	t64 = (((x313-x314)+x315)<=x316);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x317 = -254855;
	int64_t x319 = -613043LL;
	static uint64_t x320 = UINT64_MAX;

	t65 = (((x317-x318)+x319)<=x320);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x329 = INT8_MIN;
	int64_t x330 = 41490986996783LL;
	volatile int16_t x332 = INT16_MIN;

	t66 = (((x329-x330)+x331)<=x332);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x333 = -1;
	static int64_t x334 = -31010877LL;
	int32_t t67 = -5;

	t67 = (((x333-x334)+x335)<=x336);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x338 = INT16_MAX;
	uint16_t x339 = 3897U;
	int64_t x340 = -1LL;
	volatile int32_t t68 = 31448;

	t68 = (((x337-x338)+x339)<=x340);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x341 = UINT16_MAX;
	int8_t x342 = -1;
	volatile int16_t x343 = INT16_MIN;
	int16_t x344 = -130;
	volatile int32_t t69 = 0;

	t69 = (((x341-x342)+x343)<=x344);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x345 = INT8_MAX;
	int64_t x346 = -1LL;
	int16_t x347 = INT16_MAX;
	uint64_t x348 = 2184391164LLU;
	int32_t t70 = 3325;

	t70 = (((x345-x346)+x347)<=x348);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x350 = 1;
	static uint32_t x351 = UINT32_MAX;
	volatile uint32_t x352 = 323U;

	t71 = (((x349-x350)+x351)<=x352);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x354 = 0U;
	volatile int32_t x355 = -1;
	static int64_t x356 = -1789LL;
	static int32_t t72 = 8056;

	t72 = (((x353-x354)+x355)<=x356);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x361 = 0;
	int64_t x362 = INT64_MAX;
	int64_t x364 = -1LL;

	t73 = (((x361-x362)+x363)<=x364);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x365 = 1719495LLU;
	int16_t x366 = INT16_MAX;
	volatile uint64_t x367 = 69635900064358LLU;
	volatile int64_t x368 = INT64_MIN;
	volatile int32_t t74 = -496927;

	t74 = (((x365-x366)+x367)<=x368);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x370 = INT8_MAX;
	int32_t x371 = INT32_MAX;
	volatile int8_t x372 = 0;
	int32_t t75 = 1068850225;

	t75 = (((x369-x370)+x371)<=x372);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x373 = INT64_MIN;
	int64_t x374 = INT64_MIN;
	volatile int64_t x375 = -225203951467250LL;

	t76 = (((x373-x374)+x375)<=x376);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x377 = 13549678888013116LL;
	int32_t x378 = INT32_MIN;
	uint64_t x379 = 1000343033636317151LLU;
	uint16_t x380 = 2U;
	int32_t t77 = -933127967;

	t77 = (((x377-x378)+x379)<=x380);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x382 = -13;
	int16_t x384 = INT16_MIN;

	t78 = (((x381-x382)+x383)<=x384);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x385 = -506483107;
	uint64_t x386 = 892977538014390LLU;
	int8_t x387 = -1;
	uint32_t x388 = 1077U;
	int32_t t79 = 73105;

	t79 = (((x385-x386)+x387)<=x388);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x389 = -1;
	uint16_t x391 = 2U;
	int32_t x392 = INT32_MIN;
	int32_t t80 = -18;

	t80 = (((x389-x390)+x391)<=x392);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x394 = -147;
	uint64_t x395 = 480345819621218LLU;
	static uint8_t x396 = 15U;
	int32_t t81 = -14;

	t81 = (((x393-x394)+x395)<=x396);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x397 = 304;
	static int16_t x398 = INT16_MIN;
	volatile int32_t x399 = INT32_MIN;

	t82 = (((x397-x398)+x399)<=x400);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x402 = UINT8_MAX;
	int16_t x403 = -1;
	int32_t t83 = 1;

	t83 = (((x401-x402)+x403)<=x404);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x405 = INT32_MIN;
	int32_t x406 = INT32_MIN;
	int16_t x407 = INT16_MIN;
	static volatile int32_t x408 = INT32_MIN;
	volatile int32_t t84 = 67076783;

	t84 = (((x405-x406)+x407)<=x408);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x413 = -1LL;
	uint16_t x414 = 21148U;
	volatile int64_t x415 = -105LL;
	int16_t x416 = 9344;

	t85 = (((x413-x414)+x415)<=x416);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x417 = 63176645;
	int64_t x419 = 147491284427257LL;
	volatile int32_t t86 = 1168346;

	t86 = (((x417-x418)+x419)<=x420);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x421 = INT16_MAX;
	uint16_t x423 = 1U;
	int32_t t87 = -1654863;

	t87 = (((x421-x422)+x423)<=x424);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x425 = INT8_MIN;
	static uint64_t x427 = 556281031148138362LLU;
	int32_t t88 = -162651;

	t88 = (((x425-x426)+x427)<=x428);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x430 = 20U;
	uint16_t x431 = 5U;
	static int32_t x432 = INT32_MIN;
	volatile int32_t t89 = -6;

	t89 = (((x429-x430)+x431)<=x432);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x433 = INT64_MIN;
	volatile int64_t x434 = -1LL;
	int16_t x435 = INT16_MAX;
	uint8_t x436 = UINT8_MAX;

	t90 = (((x433-x434)+x435)<=x436);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x437 = INT8_MAX;
	volatile int16_t x438 = -23;
	int16_t x439 = INT16_MIN;
	int32_t t91 = -9308;

	t91 = (((x437-x438)+x439)<=x440);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x442 = UINT16_MAX;
	int16_t x443 = -3843;
	int32_t x444 = INT32_MAX;

	t92 = (((x441-x442)+x443)<=x444);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x445 = 437820U;
	volatile uint16_t x446 = 3459U;
	uint16_t x447 = 5165U;
	uint8_t x448 = 3U;
	int32_t t93 = -31;

	t93 = (((x445-x446)+x447)<=x448);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x449 = INT16_MIN;
	int64_t x452 = 100860LL;
	volatile int32_t t94 = -2971;

	t94 = (((x449-x450)+x451)<=x452);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x453 = 805;
	uint8_t x454 = UINT8_MAX;
	int8_t x455 = INT8_MIN;
	volatile int32_t t95 = -33543;

	t95 = (((x453-x454)+x455)<=x456);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x457 = INT32_MAX;
	static uint16_t x458 = UINT16_MAX;
	uint8_t x459 = 91U;
	volatile int32_t t96 = 1077;

	t96 = (((x457-x458)+x459)<=x460);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x461 = UINT8_MAX;
	int16_t x463 = -463;
	uint32_t x464 = 497320U;
	volatile int32_t t97 = -5873;

	t97 = (((x461-x462)+x463)<=x464);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x465 = -1;
	int32_t x466 = INT32_MIN;
	static int16_t x467 = -1;
	volatile uint8_t x468 = 0U;
	int32_t t98 = 30;

	t98 = (((x465-x466)+x467)<=x468);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x469 = INT16_MIN;
	uint64_t x470 = UINT64_MAX;
	uint16_t x471 = 106U;
	uint8_t x472 = UINT8_MAX;

	t99 = (((x469-x470)+x471)<=x472);

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

