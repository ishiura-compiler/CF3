#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x6 = UINT64_MAX;
int32_t x7 = -1;
volatile uint32_t x8 = 6671U;
int64_t x10 = INT64_MIN;
volatile int16_t x11 = INT16_MIN;
volatile int32_t x12 = 0;
int64_t x13 = -1LL;
static int32_t x22 = INT32_MAX;
volatile int64_t x39 = INT64_MIN;
volatile int64_t t7 = 0LL;
int8_t x44 = INT8_MIN;
volatile int32_t t8 = 3;
volatile uint64_t t9 = 984047441784301608LLU;
static int64_t x49 = -1LL;
int32_t x53 = INT32_MIN;
int16_t x56 = INT16_MIN;
volatile int32_t t11 = -7613;
int16_t x57 = -1801;
int16_t x77 = -1;
int64_t x78 = INT64_MIN;
int64_t x79 = -1LL;
int64_t x82 = INT64_MIN;
static int64_t x84 = -1LL;
static uint8_t x90 = UINT8_MAX;
static int32_t t19 = 215137;
int16_t x107 = INT16_MAX;
volatile int64_t x109 = -303327876LL;
int32_t x111 = INT32_MAX;
uint64_t x112 = 14590416165LLU;
int8_t x116 = INT8_MAX;
int32_t t22 = -635433;
int16_t x119 = INT16_MIN;
volatile int16_t x124 = -370;
volatile int32_t t24 = -155;
volatile int16_t x137 = 376;
int32_t x146 = INT32_MIN;
int32_t x152 = 788097;
volatile int16_t x154 = INT16_MAX;
static int16_t x163 = INT16_MIN;
static int32_t t33 = 375414858;
int64_t x165 = -1LL;
int8_t x167 = 0;
uint8_t x170 = UINT8_MAX;
static uint64_t x173 = UINT64_MAX;
volatile int32_t t36 = -4641;
uint64_t x182 = UINT64_MAX;
int32_t t38 = 280370;
int64_t x185 = INT64_MAX;
int32_t x191 = INT32_MIN;
int64_t x203 = INT64_MIN;
uint32_t x222 = UINT32_MAX;
volatile int32_t t47 = -1;
volatile int32_t x227 = 428618265;
int64_t x234 = INT64_MAX;
volatile uint64_t t50 = 4340174626489LLU;
volatile int32_t t51 = 50;
int8_t x248 = INT8_MIN;
static volatile uint64_t x255 = 12LLU;
int32_t x260 = -27576;
volatile int32_t x265 = -8493402;
volatile int32_t t58 = 1;
int32_t x282 = 3732858;
uint32_t x293 = 5U;
volatile int32_t t63 = -3;
int16_t x297 = INT16_MIN;
volatile uint64_t x299 = 1423953LLU;
int32_t t65 = -43;
volatile int32_t t66 = -359148;
int16_t x312 = -1;
volatile int32_t t67 = -56;
uint8_t x313 = 27U;
int8_t x314 = -1;
uint8_t x326 = 63U;
volatile uint64_t t70 = UINT64_MAX;
uint32_t x329 = 102163U;
int64_t x331 = INT64_MIN;
int64_t x348 = INT64_MAX;
uint64_t x350 = 3564LLU;
static int16_t x352 = 0;
int32_t x354 = INT32_MIN;
volatile int16_t x356 = INT16_MIN;
int32_t t77 = -406;
int64_t x358 = INT64_MIN;
volatile uint16_t x362 = 75U;
static volatile uint16_t x367 = UINT16_MAX;
int64_t x369 = INT64_MAX;
int8_t x390 = -1;
volatile int16_t x396 = INT16_MAX;
int64_t x399 = 13283179171756LL;
volatile int32_t t86 = -1;
int8_t x410 = -1;
static int64_t x411 = 39877753121473331LL;
static volatile int32_t t90 = 907025556;
int16_t x419 = 111;
int32_t t93 = 267801469;
int32_t t95 = 1;
int32_t t97 = -5073462;
int64_t x453 = -16312923167456LL;
uint64_t x454 = 4333LLU;
static uint16_t x461 = UINT16_MAX;
int16_t x463 = INT16_MAX;
volatile int32_t x464 = 24;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int32_t x2 = INT32_MIN;
	uint32_t x3 = UINT32_MAX;
	int64_t x4 = -1LL;
	int64_t t0 = -2617061412643LL;

	t0 = (((x1%x2)==x3)-x4);

	if (t0 != 1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 4;
	static uint32_t t1 = 59U;

	t1 = (((x5%x6)==x7)-x8);

	if (t1 != 4294960625U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	static volatile int32_t t2 = 305845969;

	t2 = (((x9%x10)==x11)-x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = -1;
	int8_t x15 = -46;
	static int16_t x16 = 95;
	static int32_t t3 = -58165;

	t3 = (((x13%x14)==x15)-x16);

	if (t3 != -95) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -1;
	volatile int64_t x18 = 17857LL;
	static uint16_t x19 = UINT16_MAX;
	volatile int16_t x20 = INT16_MIN;
	int32_t t4 = -202;

	t4 = (((x17%x18)==x19)-x20);

	if (t4 != 32768) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = INT8_MIN;
	uint16_t x23 = UINT16_MAX;
	uint64_t x24 = UINT64_MAX;
	volatile uint64_t t5 = 31440223761881259LLU;

	t5 = (((x21%x22)==x23)-x24);

	if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint8_t x25 = UINT8_MAX;
	volatile uint32_t x26 = 15U;
	volatile uint64_t x27 = 56893LLU;
	int64_t x28 = -1LL;
	int64_t t6 = -54124851LL;

	t6 = (((x25%x26)==x27)-x28);

	if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = INT64_MAX;
	int8_t x38 = INT8_MAX;
	volatile int64_t x40 = -1884722857LL;

	t7 = (((x37%x38)==x39)-x40);

	if (t7 != 1884722857LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x41 = -1;
	int8_t x42 = INT8_MIN;
	int16_t x43 = -1;

	t8 = (((x41%x42)==x43)-x44);

	if (t8 != 129) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x45 = INT64_MIN;
	static int32_t x46 = INT32_MIN;
	volatile int8_t x47 = INT8_MAX;
	uint64_t x48 = 675026802814126LLU;

	t9 = (((x45%x46)==x47)-x48);

	if (t9 != 18446069046906737490LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x50 = INT8_MAX;
	volatile uint8_t x51 = 51U;
	volatile int32_t x52 = 103182;
	static volatile int32_t t10 = -952;

	t10 = (((x49%x50)==x51)-x52);

	if (t10 != -103182) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x54 = UINT8_MAX;
	static volatile int32_t x55 = INT32_MAX;

	t11 = (((x53%x54)==x55)-x56);

	if (t11 != 32768) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x58 = -1LL;
	int32_t x59 = INT32_MAX;
	uint16_t x60 = 7U;
	volatile int32_t t12 = 26701;

	t12 = (((x57%x58)==x59)-x60);

	if (t12 != -7) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x61 = 30148583857LL;
	volatile int16_t x62 = -1;
	static uint64_t x63 = 7190294632LLU;
	uint8_t x64 = UINT8_MAX;
	volatile int32_t t13 = 1104426;

	t13 = (((x61%x62)==x63)-x64);

	if (t13 != -255) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = INT16_MIN;
	uint16_t x66 = UINT16_MAX;
	int32_t x67 = INT32_MIN;
	int16_t x68 = -1;
	int32_t t14 = -170316;

	t14 = (((x65%x66)==x67)-x68);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x80 = INT8_MIN;
	static volatile int32_t t15 = -2778;

	t15 = (((x77%x78)==x79)-x80);

	if (t15 != 129) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x81 = UINT16_MAX;
	volatile uint8_t x83 = 82U;
	static int64_t t16 = 16185006826090764LL;

	t16 = (((x81%x82)==x83)-x84);

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x85 = UINT32_MAX;
	int32_t x86 = -1;
	int8_t x87 = INT8_MIN;
	volatile int64_t x88 = INT64_MAX;
	volatile int64_t t17 = -94932823231277204LL;

	t17 = (((x85%x86)==x87)-x88);

	if (t17 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x89 = 195051LLU;
	volatile int8_t x91 = INT8_MAX;
	uint64_t x92 = 277444LLU;
	uint64_t t18 = 51099LLU;

	t18 = (((x89%x90)==x91)-x92);

	if (t18 != 18446744073709274172LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x93 = 831470LLU;
	int64_t x94 = 14102LL;
	volatile int32_t x95 = 16;
	static int32_t x96 = INT32_MAX;

	t19 = (((x93%x94)==x95)-x96);

	if (t19 != -2147483647) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x105 = INT64_MIN;
	static volatile int8_t x106 = -1;
	volatile uint32_t x108 = 24751U;
	static volatile uint32_t t20 = 2884060U;

	t20 = (((x105%x106)==x107)-x108);

	if (t20 != 4294942545U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x110 = -1;
	static uint64_t t21 = 691053731665437941LLU;

	t21 = (((x109%x110)==x111)-x112);

	if (t21 != 18446744059119135451LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x113 = INT16_MAX;
	uint64_t x114 = 31111636526933LLU;
	int16_t x115 = INT16_MAX;

	t22 = (((x113%x114)==x115)-x116);

	if (t22 != -126) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x117 = INT16_MAX;
	int16_t x118 = -1;
	int64_t x120 = -1LL;
	int64_t t23 = 8562950LL;

	t23 = (((x117%x118)==x119)-x120);

	if (t23 != 1LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x121 = 54LLU;
	volatile uint32_t x122 = 66930928U;
	uint64_t x123 = 52135753316555LLU;

	t24 = (((x121%x122)==x123)-x124);

	if (t24 != 370) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x125 = INT32_MAX;
	static int32_t x126 = 7103;
	static int16_t x127 = 22;
	int8_t x128 = -1;
	volatile int32_t t25 = -5267;

	t25 = (((x125%x126)==x127)-x128);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x129 = 0LLU;
	int64_t x130 = -19277877804LL;
	volatile int64_t x131 = INT64_MAX;
	volatile int64_t x132 = 3703074809323772LL;
	volatile int64_t t26 = -31803858168LL;

	t26 = (((x129%x130)==x131)-x132);

	if (t26 != -3703074809323772LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x133 = INT16_MAX;
	volatile uint32_t x134 = 16691665U;
	int32_t x135 = INT32_MIN;
	uint64_t x136 = 295LLU;
	volatile uint64_t t27 = 2043029142125411LLU;

	t27 = (((x133%x134)==x135)-x136);

	if (t27 != 18446744073709551321LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x138 = 33205321630174LLU;
	volatile int32_t x139 = 772;
	uint64_t x140 = UINT64_MAX;
	uint64_t t28 = 89781699251512633LLU;

	t28 = (((x137%x138)==x139)-x140);

	if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x145 = UINT16_MAX;
	int8_t x147 = INT8_MAX;
	volatile uint64_t x148 = 221795LLU;
	uint64_t t29 = 1638904989213340167LLU;

	t29 = (((x145%x146)==x147)-x148);

	if (t29 != 18446744073709329821LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x149 = -1;
	static volatile uint32_t x150 = 1U;
	uint8_t x151 = 3U;
	volatile int32_t t30 = -146531;

	t30 = (((x149%x150)==x151)-x152);

	if (t30 != -788097) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x153 = -37186977LL;
	int64_t x155 = INT64_MIN;
	static uint8_t x156 = UINT8_MAX;
	int32_t t31 = 0;

	t31 = (((x153%x154)==x155)-x156);

	if (t31 != -255) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x157 = UINT8_MAX;
	static uint16_t x158 = 14609U;
	int32_t x159 = INT32_MIN;
	volatile int16_t x160 = 104;
	volatile int32_t t32 = 130510;

	t32 = (((x157%x158)==x159)-x160);

	if (t32 != -104) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x161 = INT32_MAX;
	volatile int64_t x162 = 22030LL;
	int32_t x164 = INT32_MAX;

	t33 = (((x161%x162)==x163)-x164);

	if (t33 != -2147483647) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x166 = 16760;
	volatile int16_t x168 = 2768;
	static int32_t t34 = 206;

	t34 = (((x165%x166)==x167)-x168);

	if (t34 != -2768) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x169 = 121523U;
	int32_t x171 = -1;
	static int64_t x172 = -802716212LL;
	volatile int64_t t35 = -54633483598782008LL;

	t35 = (((x169%x170)==x171)-x172);

	if (t35 != 802716212LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x174 = 27U;
	int32_t x175 = -1;
	static uint8_t x176 = 2U;

	t36 = (((x173%x174)==x175)-x176);

	if (t36 != -2) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x177 = -1;
	uint64_t x178 = UINT64_MAX;
	int64_t x179 = 0LL;
	uint8_t x180 = 2U;
	static volatile int32_t t37 = 1;

	t37 = (((x177%x178)==x179)-x180);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x181 = UINT8_MAX;
	static int32_t x183 = INT32_MIN;
	int8_t x184 = INT8_MAX;

	t38 = (((x181%x182)==x183)-x184);

	if (t38 != -127) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x186 = 90516864235LL;
	uint64_t x187 = 3360283038226LLU;
	volatile uint8_t x188 = 1U;
	int32_t t39 = 96005;

	t39 = (((x185%x186)==x187)-x188);

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x189 = 3071187;
	int32_t x190 = INT32_MAX;
	uint64_t x192 = UINT64_MAX;
	uint64_t t40 = 87332341072LLU;

	t40 = (((x189%x190)==x191)-x192);

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x193 = 10;
	static int32_t x194 = INT32_MIN;
	static uint16_t x195 = 10575U;
	volatile uint16_t x196 = 44U;
	int32_t t41 = 296;

	t41 = (((x193%x194)==x195)-x196);

	if (t41 != -44) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x197 = UINT8_MAX;
	uint16_t x198 = 26U;
	static int64_t x199 = 1548961234289LL;
	int8_t x200 = -47;
	static volatile int32_t t42 = 6666;

	t42 = (((x197%x198)==x199)-x200);

	if (t42 != 47) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x201 = 6U;
	static int16_t x202 = INT16_MIN;
	volatile int8_t x204 = 1;
	int32_t t43 = 0;

	t43 = (((x201%x202)==x203)-x204);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x205 = -1;
	int8_t x206 = INT8_MAX;
	static int16_t x207 = 10494;
	int16_t x208 = -12;
	volatile int32_t t44 = 257;

	t44 = (((x205%x206)==x207)-x208);

	if (t44 != 12) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int64_t x209 = -35839587LL;
	int32_t x210 = -612;
	static volatile int32_t x211 = -1;
	volatile int16_t x212 = INT16_MIN;
	int32_t t45 = -720322508;

	t45 = (((x209%x210)==x211)-x212);

	if (t45 != 32768) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x213 = 382491690U;
	int64_t x214 = -1LL;
	uint8_t x215 = 3U;
	uint32_t x216 = 246112U;
	volatile uint32_t t46 = 13224U;

	t46 = (((x213%x214)==x215)-x216);

	if (t46 != 4294721184U) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x221 = UINT8_MAX;
	uint32_t x223 = 83063U;
	int8_t x224 = INT8_MIN;

	t47 = (((x221%x222)==x223)-x224);

	if (t47 != 128) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x225 = INT64_MAX;
	volatile int8_t x226 = INT8_MIN;
	uint8_t x228 = 4U;
	int32_t t48 = -165;

	t48 = (((x225%x226)==x227)-x228);

	if (t48 != -4) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x229 = 0U;
	int32_t x230 = 6223835;
	int8_t x231 = INT8_MIN;
	uint8_t x232 = 0U;
	static volatile int32_t t49 = -2;

	t49 = (((x229%x230)==x231)-x232);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x233 = -1;
	static uint32_t x235 = 1874U;
	uint64_t x236 = 8737LLU;

	t50 = (((x233%x234)==x235)-x236);

	if (t50 != 18446744073709542879LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x241 = INT8_MAX;
	int32_t x242 = -1;
	volatile int8_t x243 = 1;
	volatile int32_t x244 = INT32_MAX;

	t51 = (((x241%x242)==x243)-x244);

	if (t51 != -2147483647) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x245 = 313730608U;
	static int64_t x246 = 28LL;
	uint32_t x247 = 1421009U;
	static int32_t t52 = -443934;

	t52 = (((x245%x246)==x247)-x248);

	if (t52 != 128) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x249 = 10;
	int64_t x250 = -1LL;
	volatile uint16_t x251 = 316U;
	uint8_t x252 = UINT8_MAX;
	int32_t t53 = 3121;

	t53 = (((x249%x250)==x251)-x252);

	if (t53 != -255) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x253 = UINT32_MAX;
	uint8_t x254 = UINT8_MAX;
	int64_t x256 = INT64_MAX;
	int64_t t54 = -3142LL;

	t54 = (((x253%x254)==x255)-x256);

	if (t54 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x257 = 3U;
	int32_t x258 = INT32_MIN;
	int32_t x259 = -4075;
	int32_t t55 = -1;

	t55 = (((x257%x258)==x259)-x260);

	if (t55 != 27576) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x261 = INT32_MIN;
	uint8_t x262 = 57U;
	volatile int64_t x263 = INT64_MIN;
	static int64_t x264 = INT64_MAX;
	int64_t t56 = 6720LL;

	t56 = (((x261%x262)==x263)-x264);

	if (t56 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x266 = INT32_MAX;
	uint16_t x267 = 2608U;
	int64_t x268 = -1LL;
	volatile int64_t t57 = 29LL;

	t57 = (((x265%x266)==x267)-x268);

	if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x269 = 2U;
	uint8_t x270 = UINT8_MAX;
	static volatile uint32_t x271 = UINT32_MAX;
	int16_t x272 = -26;

	t58 = (((x269%x270)==x271)-x272);

	if (t58 != 26) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x273 = 1289U;
	int8_t x274 = INT8_MIN;
	int16_t x275 = -142;
	volatile int64_t x276 = -8174LL;
	int64_t t59 = -70359517515LL;

	t59 = (((x273%x274)==x275)-x276);

	if (t59 != 8174LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x277 = 3187;
	int32_t x278 = INT32_MIN;
	volatile uint8_t x279 = 3U;
	int64_t x280 = INT64_MAX;
	int64_t t60 = 130197200062LL;

	t60 = (((x277%x278)==x279)-x280);

	if (t60 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x281 = -1;
	int8_t x283 = INT8_MIN;
	static volatile int16_t x284 = 3322;
	int32_t t61 = -225;

	t61 = (((x281%x282)==x283)-x284);

	if (t61 != -3322) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x289 = 136127923722LL;
	uint16_t x290 = 7U;
	uint8_t x291 = UINT8_MAX;
	uint32_t x292 = UINT32_MAX;
	volatile uint32_t t62 = 23387U;

	t62 = (((x289%x290)==x291)-x292);

	if (t62 != 1U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x294 = UINT8_MAX;
	volatile uint32_t x295 = 1U;
	volatile uint16_t x296 = 325U;

	t63 = (((x293%x294)==x295)-x296);

	if (t63 != -325) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x298 = INT64_MIN;
	int32_t x300 = 291;
	volatile int32_t t64 = -5;

	t64 = (((x297%x298)==x299)-x300);

	if (t64 != -291) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x301 = 78541088U;
	static volatile uint8_t x302 = 4U;
	int32_t x303 = INT32_MIN;
	int8_t x304 = INT8_MIN;

	t65 = (((x301%x302)==x303)-x304);

	if (t65 != 128) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x305 = -234;
	uint16_t x306 = UINT16_MAX;
	int32_t x307 = INT32_MIN;
	int16_t x308 = -1;

	t66 = (((x305%x306)==x307)-x308);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x309 = UINT8_MAX;
	uint32_t x310 = UINT32_MAX;
	volatile uint8_t x311 = UINT8_MAX;

	t67 = (((x309%x310)==x311)-x312);

	if (t67 != 2) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x315 = 0;
	int32_t x316 = INT32_MAX;
	int32_t t68 = 19;

	t68 = (((x313%x314)==x315)-x316);

	if (t68 != -2147483646) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x317 = -1;
	int32_t x318 = INT32_MAX;
	volatile uint32_t x319 = 365265U;
	uint32_t x320 = UINT32_MAX;
	volatile uint32_t t69 = 1112368574U;

	t69 = (((x317%x318)==x319)-x320);

	if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x325 = INT32_MIN;
	uint32_t x327 = UINT32_MAX;
	uint64_t x328 = 1LLU;

	t70 = (((x325%x326)==x327)-x328);

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x330 = -6;
	int64_t x332 = INT64_MAX;
	int64_t t71 = -700034513468LL;

	t71 = (((x329%x330)==x331)-x332);

	if (t71 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x333 = 12U;
	int8_t x334 = INT8_MIN;
	volatile uint16_t x335 = UINT16_MAX;
	volatile uint32_t x336 = 5517083U;
	uint32_t t72 = 4U;

	t72 = (((x333%x334)==x335)-x336);

	if (t72 != 4289450213U) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x337 = INT8_MAX;
	uint8_t x338 = 54U;
	static uint8_t x339 = UINT8_MAX;
	int16_t x340 = INT16_MIN;
	static volatile int32_t t73 = 3682045;

	t73 = (((x337%x338)==x339)-x340);

	if (t73 != 32768) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x341 = -1;
	int8_t x342 = -10;
	int64_t x343 = INT64_MIN;
	static int32_t x344 = INT32_MAX;
	int32_t t74 = 15;

	t74 = (((x341%x342)==x343)-x344);

	if (t74 != -2147483647) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x345 = INT8_MIN;
	int16_t x346 = 184;
	int32_t x347 = -1;
	volatile int64_t t75 = -559944LL;

	t75 = (((x345%x346)==x347)-x348);

	if (t75 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x349 = 52LLU;
	static uint8_t x351 = 70U;
	int32_t t76 = -908946;

	t76 = (((x349%x350)==x351)-x352);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x353 = INT8_MIN;
	volatile int64_t x355 = 112854350LL;

	t77 = (((x353%x354)==x355)-x356);

	if (t77 != 32768) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x357 = 15U;
	volatile int16_t x359 = 1;
	int64_t x360 = INT64_MAX;
	static volatile int64_t t78 = -202585079009284715LL;

	t78 = (((x357%x358)==x359)-x360);

	if (t78 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x361 = INT32_MIN;
	static volatile int16_t x363 = -1;
	int16_t x364 = INT16_MAX;
	volatile int32_t t79 = 13196768;

	t79 = (((x361%x362)==x363)-x364);

	if (t79 != -32767) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x365 = -210;
	uint8_t x366 = UINT8_MAX;
	static volatile uint16_t x368 = 1358U;
	static volatile int32_t t80 = 5343001;

	t80 = (((x365%x366)==x367)-x368);

	if (t80 != -1358) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x370 = INT32_MIN;
	uint16_t x371 = UINT16_MAX;
	int8_t x372 = INT8_MIN;
	volatile int32_t t81 = 60752;

	t81 = (((x369%x370)==x371)-x372);

	if (t81 != 128) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x377 = INT32_MIN;
	static uint8_t x378 = 11U;
	volatile int64_t x379 = 395255LL;
	int8_t x380 = INT8_MIN;
	int32_t t82 = 3606189;

	t82 = (((x377%x378)==x379)-x380);

	if (t82 != 128) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x381 = -3;
	uint16_t x382 = 860U;
	int8_t x383 = INT8_MIN;
	uint32_t x384 = 83849U;
	uint32_t t83 = 713609U;

	t83 = (((x381%x382)==x383)-x384);

	if (t83 != 4294883447U) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x389 = INT16_MIN;
	int32_t x391 = -1;
	uint8_t x392 = 0U;
	volatile int32_t t84 = -75;

	t84 = (((x389%x390)==x391)-x392);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x393 = -2;
	uint32_t x394 = UINT32_MAX;
	int16_t x395 = -12651;
	volatile int32_t t85 = 15;

	t85 = (((x393%x394)==x395)-x396);

	if (t85 != -32767) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x397 = INT64_MIN;
	volatile int8_t x398 = INT8_MIN;
	int16_t x400 = INT16_MAX;

	t86 = (((x397%x398)==x399)-x400);

	if (t86 != -32767) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x401 = INT16_MAX;
	static uint16_t x402 = 15U;
	volatile int64_t x403 = INT64_MIN;
	volatile int8_t x404 = INT8_MAX;
	int32_t t87 = -38260149;

	t87 = (((x401%x402)==x403)-x404);

	if (t87 != -127) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x405 = INT64_MIN;
	int16_t x406 = -1;
	uint8_t x407 = 41U;
	uint64_t x408 = UINT64_MAX;
	uint64_t t88 = 297LLU;

	t88 = (((x405%x406)==x407)-x408);

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x409 = INT8_MIN;
	static uint64_t x412 = 8212393627103LLU;
	uint64_t t89 = 4569206110320LLU;

	t89 = (((x409%x410)==x411)-x412);

	if (t89 != 18446735861315924513LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x413 = 3;
	uint32_t x414 = UINT32_MAX;
	uint64_t x415 = UINT64_MAX;
	int8_t x416 = -1;

	t90 = (((x413%x414)==x415)-x416);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x417 = 896412149158590632LL;
	int32_t x418 = -1;
	int8_t x420 = INT8_MIN;
	int32_t t91 = 603;

	t91 = (((x417%x418)==x419)-x420);

	if (t91 != 128) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x421 = INT16_MIN;
	int8_t x422 = -1;
	int8_t x423 = -1;
	static uint16_t x424 = 7U;
	volatile int32_t t92 = -8374486;

	t92 = (((x421%x422)==x423)-x424);

	if (t92 != -7) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint16_t x425 = 86U;
	volatile int8_t x426 = INT8_MAX;
	uint32_t x427 = UINT32_MAX;
	static int8_t x428 = INT8_MAX;

	t93 = (((x425%x426)==x427)-x428);

	if (t93 != -127) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x429 = INT64_MAX;
	int32_t x430 = -1;
	static int32_t x431 = -1;
	uint16_t x432 = UINT16_MAX;
	volatile int32_t t94 = -26515061;

	t94 = (((x429%x430)==x431)-x432);

	if (t94 != -65535) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x437 = INT32_MAX;
	volatile int16_t x438 = INT16_MAX;
	int8_t x439 = -1;
	static int8_t x440 = -18;

	t95 = (((x437%x438)==x439)-x440);

	if (t95 != 18) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x441 = INT64_MAX;
	static uint16_t x442 = UINT16_MAX;
	int16_t x443 = INT16_MIN;
	int32_t x444 = INT32_MAX;
	volatile int32_t t96 = 29460;

	t96 = (((x441%x442)==x443)-x444);

	if (t96 != -2147483647) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int32_t x445 = -3989;
	int64_t x446 = INT64_MIN;
	static volatile uint8_t x447 = UINT8_MAX;
	int8_t x448 = 0;

	t97 = (((x445%x446)==x447)-x448);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x455 = -691LL;
	int16_t x456 = -2;
	volatile int32_t t98 = 1097526;

	t98 = (((x453%x454)==x455)-x456);

	if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x462 = 171LLU;
	static volatile int32_t t99 = 37533524;

	t99 = (((x461%x462)==x463)-x464);

	if (t99 != -24) { NG(); } else { ; }
	
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

