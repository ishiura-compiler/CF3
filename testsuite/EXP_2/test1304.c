#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x2 = -1;
uint32_t x3 = 15U;
static volatile uint64_t t0 = 5260958994888312LLU;
static uint8_t x15 = 0U;
static int32_t t2 = 222;
volatile int32_t t3 = -68097041;
uint32_t x21 = UINT32_MAX;
uint32_t x22 = UINT32_MAX;
static uint16_t x44 = 1U;
static int64_t x47 = INT64_MIN;
int32_t t10 = -706190;
uint32_t x49 = 32949202U;
int16_t x52 = INT16_MIN;
int32_t x59 = INT32_MIN;
int32_t x68 = INT32_MAX;
uint8_t x74 = 3U;
int64_t t17 = -10354LL;
static uint16_t x82 = UINT16_MAX;
volatile int32_t x83 = -1;
uint64_t x100 = 319LLU;
int32_t x107 = INT32_MAX;
volatile int32_t t25 = 392;
uint8_t x109 = 0U;
int16_t x113 = 5114;
int32_t x119 = INT32_MIN;
int32_t x120 = INT32_MIN;
uint32_t x123 = UINT32_MAX;
uint16_t x128 = UINT16_MAX;
uint32_t x131 = 34980053U;
static int64_t t33 = -447LL;
int16_t x142 = -15;
uint64_t t34 = 3307735681186070529LLU;
int32_t x151 = 119;
int32_t x152 = INT32_MIN;
int16_t x154 = INT16_MAX;
static volatile uint16_t x162 = UINT16_MAX;
uint32_t x167 = UINT32_MAX;
static int32_t x168 = -1;
int16_t x172 = INT16_MIN;
int32_t x175 = INT32_MIN;
int32_t t42 = -250156;
int8_t x181 = INT8_MAX;
static int32_t x185 = 254;
int64_t x188 = 3705875247407407059LL;
static int32_t x191 = -11;
static int64_t x195 = -57845909182952802LL;
static int8_t x196 = INT8_MAX;
int16_t x201 = INT16_MIN;
int8_t x203 = -1;
static uint16_t x204 = 61U;
static int8_t x207 = INT8_MIN;
static int8_t x216 = 24;
int32_t t52 = 5564462;
static uint16_t x222 = UINT16_MAX;
int32_t x226 = -1;
int8_t x230 = INT8_MIN;
volatile uint64_t x234 = 117453673739047LLU;
int32_t t58 = 3451;
uint8_t x248 = 16U;
volatile int32_t t59 = -15388;
static int64_t x250 = 324742LL;
int64_t x251 = -1LL;
uint64_t x254 = 4310LLU;
static int16_t x256 = 15706;
int8_t x267 = INT8_MAX;
int16_t x268 = 1619;
int8_t x270 = INT8_MAX;
int32_t t65 = -728;
volatile uint8_t x279 = UINT8_MAX;
volatile uint64_t t67 = 8097206751LLU;
uint8_t x286 = 36U;
int16_t x289 = INT16_MAX;
int32_t x296 = 133171;
static int8_t x303 = INT8_MAX;
static uint16_t x312 = 952U;
volatile int32_t t74 = 7206;
int8_t x313 = -1;
volatile int64_t t77 = -12505253398478781LL;
static int64_t x326 = INT64_MIN;
int32_t t79 = -8349;
int32_t x333 = 429465;
int8_t x356 = INT8_MAX;
volatile int32_t t86 = 420313;
volatile int16_t x361 = -1;
int32_t x362 = INT32_MAX;
int64_t x366 = INT64_MIN;
uint16_t x367 = 1U;
int32_t x368 = INT32_MIN;
int64_t x369 = INT64_MIN;
uint16_t x372 = 19U;
static int8_t x374 = INT8_MIN;
int64_t x376 = INT64_MIN;
static int16_t x379 = INT16_MIN;
int8_t x384 = INT8_MIN;
int32_t x387 = 188304327;
int64_t x399 = INT64_MAX;
static volatile uint64_t t97 = 2750242184351LLU;
int16_t x409 = 89;


void f0(void) {
	int32_t x1 = INT32_MAX;
	uint64_t x4 = 243592828LLU;

	t0 = ((x1<=(x2==x3))/x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int16_t x6 = 479;
	int16_t x7 = -1;
	uint16_t x8 = UINT16_MAX;
	int32_t t1 = -8077118;

	t1 = ((x5<=(x6==x7))/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = -35;
	static int32_t x14 = -1;
	uint8_t x16 = UINT8_MAX;

	t2 = ((x13<=(x14==x15))/x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = -706;
	int64_t x18 = -21696LL;
	int64_t x19 = 26770LL;
	uint8_t x20 = 25U;

	t3 = ((x17<=(x18==x19))/x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x23 = -1;
	uint64_t x24 = 360LLU;
	volatile uint64_t t4 = 1LLU;

	t4 = ((x21<=(x22==x23))/x24);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = 0U;
	int32_t x26 = -1;
	volatile int8_t x27 = INT8_MAX;
	int8_t x28 = 1;
	volatile int32_t t5 = -1394;

	t5 = ((x25<=(x26==x27))/x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = INT64_MIN;
	int8_t x30 = INT8_MIN;
	int32_t x31 = INT32_MIN;
	static volatile int64_t x32 = 15337LL;
	static volatile int64_t t6 = 3590721LL;

	t6 = ((x29<=(x30==x31))/x32);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = 1824928;
	static volatile int32_t x34 = -1;
	int32_t x35 = -1;
	uint8_t x36 = 2U;
	volatile int32_t t7 = 116300851;

	t7 = ((x33<=(x34==x35))/x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MAX;
	int64_t x38 = -2310736269780LL;
	int32_t x39 = -1;
	int8_t x40 = INT8_MIN;
	volatile int32_t t8 = -127;

	t8 = ((x37<=(x38==x39))/x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = -1529;
	static volatile int16_t x42 = INT16_MIN;
	uint16_t x43 = UINT16_MAX;
	volatile int32_t t9 = 506;

	t9 = ((x41<=(x42==x43))/x44);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x45 = UINT64_MAX;
	int64_t x46 = INT64_MAX;
	int16_t x48 = 1184;

	t10 = ((x45<=(x46==x47))/x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x50 = -1;
	int32_t x51 = INT32_MAX;
	volatile int32_t t11 = 662585157;

	t11 = ((x49<=(x50==x51))/x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = UINT64_MAX;
	int8_t x54 = -1;
	static uint64_t x55 = 78882171495686301LLU;
	uint16_t x56 = 656U;
	int32_t t12 = -412202;

	t12 = ((x53<=(x54==x55))/x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x57 = INT64_MAX;
	int32_t x58 = INT32_MIN;
	static uint32_t x60 = 33U;
	static uint32_t t13 = 7472420U;

	t13 = ((x57<=(x58==x59))/x60);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x61 = UINT8_MAX;
	volatile int16_t x62 = INT16_MIN;
	volatile uint16_t x63 = UINT16_MAX;
	int16_t x64 = -7;
	volatile int32_t t14 = -46468921;

	t14 = ((x61<=(x62==x63))/x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x65 = INT32_MIN;
	static int64_t x66 = INT64_MAX;
	volatile uint32_t x67 = 10632812U;
	int32_t t15 = 56;

	t15 = ((x65<=(x66==x67))/x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = UINT8_MAX;
	uint64_t x70 = 1792945425864179LLU;
	int8_t x71 = 2;
	static volatile uint16_t x72 = UINT16_MAX;
	volatile int32_t t16 = -62805451;

	t16 = ((x69<=(x70==x71))/x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x73 = 0U;
	uint16_t x75 = 12928U;
	int64_t x76 = -1LL;

	t17 = ((x73<=(x74==x75))/x76);

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x77 = 109279;
	static int64_t x78 = INT64_MIN;
	int64_t x79 = -5673LL;
	uint16_t x80 = 15U;
	volatile int32_t t18 = -51;

	t18 = ((x77<=(x78==x79))/x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = INT32_MIN;
	int32_t x84 = INT32_MAX;
	int32_t t19 = 30269069;

	t19 = ((x81<=(x82==x83))/x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = -1;
	static uint8_t x86 = 37U;
	int16_t x87 = INT16_MIN;
	uint32_t x88 = UINT32_MAX;
	volatile uint32_t t20 = 72U;

	t20 = ((x85<=(x86==x87))/x88);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x89 = -1;
	int8_t x90 = 0;
	int8_t x91 = INT8_MIN;
	volatile int8_t x92 = -1;
	int32_t t21 = -4706;

	t21 = ((x89<=(x90==x91))/x92);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x93 = 1U;
	static int64_t x94 = INT64_MIN;
	int32_t x95 = 664094;
	volatile uint64_t x96 = 95759LLU;
	uint64_t t22 = 1LLU;

	t22 = ((x93<=(x94==x95))/x96);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = 1;
	volatile int64_t x98 = INT64_MIN;
	volatile uint64_t x99 = 31LLU;
	volatile uint64_t t23 = 26791915287LLU;

	t23 = ((x97<=(x98==x99))/x100);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x101 = INT16_MAX;
	int32_t x102 = INT32_MIN;
	int16_t x103 = INT16_MAX;
	static uint16_t x104 = UINT16_MAX;
	volatile int32_t t24 = -19;

	t24 = ((x101<=(x102==x103))/x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x105 = INT64_MIN;
	volatile uint64_t x106 = 16827513440LLU;
	static int32_t x108 = INT32_MAX;

	t25 = ((x105<=(x106==x107))/x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int8_t x110 = INT8_MAX;
	int16_t x111 = INT16_MAX;
	static int16_t x112 = INT16_MIN;
	int32_t t26 = -3;

	t26 = ((x109<=(x110==x111))/x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x114 = INT16_MIN;
	uint32_t x115 = UINT32_MAX;
	int8_t x116 = 4;
	volatile int32_t t27 = 3141;

	t27 = ((x113<=(x114==x115))/x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = 151LL;
	static int8_t x118 = INT8_MAX;
	int32_t t28 = 64575067;

	t28 = ((x117<=(x118==x119))/x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = INT64_MIN;
	int8_t x122 = INT8_MAX;
	static int8_t x124 = -1;
	volatile int32_t t29 = -2583477;

	t29 = ((x121<=(x122==x123))/x124);

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x125 = INT8_MIN;
	int64_t x126 = INT64_MIN;
	int64_t x127 = INT64_MIN;
	int32_t t30 = 9;

	t30 = ((x125<=(x126==x127))/x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x129 = 1U;
	int64_t x130 = -1LL;
	volatile int64_t x132 = INT64_MIN;
	int64_t t31 = 1LL;

	t31 = ((x129<=(x130==x131))/x132);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x133 = UINT64_MAX;
	volatile int8_t x134 = INT8_MAX;
	static volatile int64_t x135 = 1062LL;
	static uint16_t x136 = 50U;
	int32_t t32 = 87;

	t32 = ((x133<=(x134==x135))/x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x137 = 2258472LLU;
	volatile int32_t x138 = -1;
	int32_t x139 = -1;
	int64_t x140 = 309LL;

	t33 = ((x137<=(x138==x139))/x140);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x141 = UINT32_MAX;
	volatile int64_t x143 = 170007LL;
	static volatile uint64_t x144 = 61953180LLU;

	t34 = ((x141<=(x142==x143))/x144);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x145 = INT64_MIN;
	int64_t x146 = -18LL;
	uint16_t x147 = 8746U;
	int8_t x148 = INT8_MAX;
	static int32_t t35 = -4220;

	t35 = ((x145<=(x146==x147))/x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x149 = INT16_MAX;
	uint32_t x150 = 339661U;
	int32_t t36 = -14;

	t36 = ((x149<=(x150==x151))/x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x153 = INT64_MIN;
	int16_t x155 = INT16_MIN;
	int16_t x156 = INT16_MIN;
	volatile int32_t t37 = -11173;

	t37 = ((x153<=(x154==x155))/x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x157 = INT16_MIN;
	uint32_t x158 = 100017792U;
	volatile int64_t x159 = -122LL;
	int64_t x160 = -1LL;
	volatile int64_t t38 = -552994LL;

	t38 = ((x157<=(x158==x159))/x160);

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = -1;
	volatile int64_t x163 = -624LL;
	uint64_t x164 = UINT64_MAX;
	uint64_t t39 = 1555844209423076958LLU;

	t39 = ((x161<=(x162==x163))/x164);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x165 = INT16_MIN;
	int32_t x166 = INT32_MIN;
	volatile int32_t t40 = 258173;

	t40 = ((x165<=(x166==x167))/x168);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x169 = 1LLU;
	int16_t x170 = 7;
	int8_t x171 = INT8_MAX;
	int32_t t41 = 28;

	t41 = ((x169<=(x170==x171))/x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x173 = INT16_MIN;
	int64_t x174 = -28240560445959653LL;
	static int16_t x176 = INT16_MIN;

	t42 = ((x173<=(x174==x175))/x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = -1LL;
	int32_t x178 = INT32_MIN;
	int64_t x179 = INT64_MAX;
	int32_t x180 = -28;
	volatile int32_t t43 = 34;

	t43 = ((x177<=(x178==x179))/x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x182 = INT8_MAX;
	int16_t x183 = INT16_MIN;
	int32_t x184 = 62104035;
	static volatile int32_t t44 = -103557;

	t44 = ((x181<=(x182==x183))/x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x186 = UINT64_MAX;
	int16_t x187 = INT16_MAX;
	int64_t t45 = -38LL;

	t45 = ((x185<=(x186==x187))/x188);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x189 = 166441305344609LLU;
	uint64_t x190 = UINT64_MAX;
	volatile int64_t x192 = INT64_MIN;
	volatile int64_t t46 = -571486131707LL;

	t46 = ((x189<=(x190==x191))/x192);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x193 = 60;
	int8_t x194 = -1;
	volatile int32_t t47 = 285;

	t47 = ((x193<=(x194==x195))/x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x197 = 42LLU;
	volatile uint32_t x198 = 456U;
	int16_t x199 = -1;
	int32_t x200 = INT32_MIN;
	volatile int32_t t48 = 85672976;

	t48 = ((x197<=(x198==x199))/x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x202 = INT64_MAX;
	static int32_t t49 = 14518;

	t49 = ((x201<=(x202==x203))/x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x205 = 19964U;
	int64_t x206 = -1LL;
	int64_t x208 = INT64_MIN;
	volatile int64_t t50 = 1155180979LL;

	t50 = ((x205<=(x206==x207))/x208);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x209 = UINT32_MAX;
	int16_t x210 = -1;
	static int32_t x211 = INT32_MIN;
	static int16_t x212 = INT16_MIN;
	volatile int32_t t51 = 3575;

	t51 = ((x209<=(x210==x211))/x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = INT32_MAX;
	uint16_t x214 = 3U;
	volatile int64_t x215 = -1LL;

	t52 = ((x213<=(x214==x215))/x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x217 = 566U;
	int8_t x218 = INT8_MIN;
	uint64_t x219 = UINT64_MAX;
	uint64_t x220 = 15LLU;
	volatile uint64_t t53 = 129750989LLU;

	t53 = ((x217<=(x218==x219))/x220);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x221 = -1;
	uint64_t x223 = 328LLU;
	int8_t x224 = INT8_MIN;
	int32_t t54 = 7296;

	t54 = ((x221<=(x222==x223))/x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x225 = -44;
	int16_t x227 = INT16_MAX;
	uint32_t x228 = 17943434U;
	static uint32_t t55 = 22U;

	t55 = ((x225<=(x226==x227))/x228);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x229 = 1689;
	uint16_t x231 = 3U;
	int64_t x232 = INT64_MAX;
	int64_t t56 = -249LL;

	t56 = ((x229<=(x230==x231))/x232);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x233 = -1;
	uint16_t x235 = UINT16_MAX;
	int8_t x236 = INT8_MAX;
	volatile int32_t t57 = -34427;

	t57 = ((x233<=(x234==x235))/x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x241 = 118U;
	int8_t x242 = -4;
	volatile int8_t x243 = INT8_MIN;
	uint16_t x244 = UINT16_MAX;

	t58 = ((x241<=(x242==x243))/x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x245 = UINT32_MAX;
	static uint64_t x246 = UINT64_MAX;
	static int8_t x247 = -29;

	t59 = ((x245<=(x246==x247))/x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x249 = INT8_MAX;
	uint16_t x252 = 19104U;
	int32_t t60 = -4;

	t60 = ((x249<=(x250==x251))/x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x253 = 691LL;
	uint16_t x255 = 10062U;
	int32_t t61 = -410;

	t61 = ((x253<=(x254==x255))/x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x257 = 6;
	int8_t x258 = 6;
	volatile uint32_t x259 = 1875U;
	uint16_t x260 = 1U;
	volatile int32_t t62 = 120984850;

	t62 = ((x257<=(x258==x259))/x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x261 = UINT8_MAX;
	int16_t x262 = INT16_MIN;
	int32_t x263 = INT32_MIN;
	uint32_t x264 = 3400116U;
	volatile uint32_t t63 = 13254914U;

	t63 = ((x261<=(x262==x263))/x264);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x265 = UINT16_MAX;
	uint64_t x266 = 0LLU;
	int32_t t64 = -9;

	t64 = ((x265<=(x266==x267))/x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x269 = 12;
	static int64_t x271 = INT64_MAX;
	static uint8_t x272 = UINT8_MAX;

	t65 = ((x269<=(x270==x271))/x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x273 = INT8_MIN;
	uint16_t x274 = 17295U;
	volatile int64_t x275 = -197LL;
	int8_t x276 = INT8_MIN;
	int32_t t66 = 1;

	t66 = ((x273<=(x274==x275))/x276);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x277 = INT16_MAX;
	volatile uint64_t x278 = 4778491169LLU;
	uint64_t x280 = UINT64_MAX;

	t67 = ((x277<=(x278==x279))/x280);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x281 = INT64_MIN;
	int64_t x282 = -121290417970621LL;
	static int8_t x283 = INT8_MAX;
	volatile uint32_t x284 = 1695285724U;
	uint32_t t68 = 11479692U;

	t68 = ((x281<=(x282==x283))/x284);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x285 = UINT64_MAX;
	int32_t x287 = INT32_MIN;
	static int16_t x288 = -60;
	static int32_t t69 = -1;

	t69 = ((x285<=(x286==x287))/x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x290 = 0U;
	uint32_t x291 = 1U;
	int32_t x292 = -1;
	volatile int32_t t70 = 26;

	t70 = ((x289<=(x290==x291))/x292);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x293 = INT16_MIN;
	uint16_t x294 = UINT16_MAX;
	int8_t x295 = INT8_MAX;
	volatile int32_t t71 = -42;

	t71 = ((x293<=(x294==x295))/x296);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x301 = -1;
	int16_t x302 = INT16_MAX;
	volatile uint32_t x304 = 10U;
	static volatile uint32_t t72 = 452U;

	t72 = ((x301<=(x302==x303))/x304);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x305 = INT8_MIN;
	int64_t x306 = INT64_MAX;
	int8_t x307 = 10;
	int8_t x308 = INT8_MIN;
	volatile int32_t t73 = 394766546;

	t73 = ((x305<=(x306==x307))/x308);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x309 = -1LL;
	static uint16_t x310 = UINT16_MAX;
	uint64_t x311 = 25107100018441LLU;

	t74 = ((x309<=(x310==x311))/x312);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x314 = 0;
	int64_t x315 = 175LL;
	uint32_t x316 = 175702489U;
	uint32_t t75 = 29U;

	t75 = ((x313<=(x314==x315))/x316);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x317 = 19U;
	int64_t x318 = -5352892LL;
	uint32_t x319 = 6703683U;
	static uint8_t x320 = 6U;
	volatile int32_t t76 = -235225683;

	t76 = ((x317<=(x318==x319))/x320);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x321 = 31;
	uint8_t x322 = 6U;
	volatile int16_t x323 = INT16_MAX;
	int64_t x324 = INT64_MAX;

	t77 = ((x321<=(x322==x323))/x324);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x325 = INT16_MAX;
	uint64_t x327 = 2860609379LLU;
	uint32_t x328 = UINT32_MAX;
	uint32_t t78 = 7U;

	t78 = ((x325<=(x326==x327))/x328);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x329 = -1;
	int32_t x330 = INT32_MIN;
	volatile int32_t x331 = INT32_MIN;
	static volatile int16_t x332 = -20;

	t79 = ((x329<=(x330==x331))/x332);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x334 = INT64_MIN;
	static uint64_t x335 = 13LLU;
	static volatile int64_t x336 = -998263LL;
	int64_t t80 = -64882LL;

	t80 = ((x333<=(x334==x335))/x336);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x337 = 17U;
	int16_t x338 = 131;
	int16_t x339 = -59;
	uint32_t x340 = 2010138223U;
	volatile uint32_t t81 = 3564U;

	t81 = ((x337<=(x338==x339))/x340);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x341 = -1;
	uint16_t x342 = 484U;
	int16_t x343 = INT16_MIN;
	int16_t x344 = INT16_MAX;
	int32_t t82 = 6;

	t82 = ((x341<=(x342==x343))/x344);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x345 = 15649U;
	static int32_t x346 = INT32_MIN;
	int32_t x347 = INT32_MIN;
	volatile int64_t x348 = INT64_MAX;
	int64_t t83 = 7524753LL;

	t83 = ((x345<=(x346==x347))/x348);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x349 = INT16_MIN;
	int32_t x350 = INT32_MAX;
	static uint32_t x351 = UINT32_MAX;
	int8_t x352 = -50;
	int32_t t84 = -23704772;

	t84 = ((x349<=(x350==x351))/x352);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x353 = INT8_MIN;
	int32_t x354 = INT32_MIN;
	int32_t x355 = 1;
	static int32_t t85 = -415;

	t85 = ((x353<=(x354==x355))/x356);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x357 = -16;
	int8_t x358 = -1;
	static int32_t x359 = INT32_MIN;
	int32_t x360 = INT32_MIN;

	t86 = ((x357<=(x358==x359))/x360);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x363 = 3095485U;
	int16_t x364 = 1166;
	volatile int32_t t87 = -233;

	t87 = ((x361<=(x362==x363))/x364);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x365 = INT8_MAX;
	volatile int32_t t88 = -3822995;

	t88 = ((x365<=(x366==x367))/x368);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x370 = -11254249LL;
	static int16_t x371 = -2;
	volatile int32_t t89 = -27430;

	t89 = ((x369<=(x370==x371))/x372);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x373 = UINT16_MAX;
	int8_t x375 = INT8_MAX;
	int64_t t90 = -767543LL;

	t90 = ((x373<=(x374==x375))/x376);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x377 = 11U;
	static int8_t x378 = INT8_MAX;
	static int32_t x380 = -65254;
	volatile int32_t t91 = -147971;

	t91 = ((x377<=(x378==x379))/x380);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x381 = INT8_MIN;
	volatile int16_t x382 = -1962;
	int32_t x383 = -1;
	int32_t t92 = -1;

	t92 = ((x381<=(x382==x383))/x384);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x385 = -1;
	int64_t x386 = -1LL;
	uint64_t x388 = UINT64_MAX;
	uint64_t t93 = 2281478604885LLU;

	t93 = ((x385<=(x386==x387))/x388);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x389 = INT16_MAX;
	uint16_t x390 = 3757U;
	static int8_t x391 = INT8_MAX;
	int16_t x392 = INT16_MAX;
	static volatile int32_t t94 = 256689279;

	t94 = ((x389<=(x390==x391))/x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x393 = INT64_MAX;
	volatile int16_t x394 = INT16_MIN;
	static int16_t x395 = INT16_MIN;
	int16_t x396 = 1;
	int32_t t95 = 13375815;

	t95 = ((x393<=(x394==x395))/x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x397 = 19;
	int32_t x398 = INT32_MIN;
	uint16_t x400 = UINT16_MAX;
	static int32_t t96 = 14174168;

	t96 = ((x397<=(x398==x399))/x400);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x401 = -1LL;
	int32_t x402 = INT32_MIN;
	int8_t x403 = 0;
	static uint64_t x404 = 803050984803552LLU;

	t97 = ((x401<=(x402==x403))/x404);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x405 = 128U;
	uint8_t x406 = 95U;
	uint64_t x407 = 32078826868LLU;
	static int32_t x408 = -2;
	volatile int32_t t98 = -1123;

	t98 = ((x405<=(x406==x407))/x408);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x410 = INT32_MIN;
	int16_t x411 = -1;
	int64_t x412 = -1311LL;
	volatile int64_t t99 = -14LL;

	t99 = ((x409<=(x410==x411))/x412);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

