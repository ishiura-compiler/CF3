#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x9 = -3324;
uint32_t x19 = UINT32_MAX;
int32_t x27 = -14699423;
volatile int8_t x28 = INT8_MIN;
int64_t x31 = INT64_MIN;
uint64_t x34 = 1900LLU;
volatile int64_t t8 = -4360224659262LL;
int64_t x43 = INT64_MAX;
volatile int64_t x48 = INT64_MIN;
volatile int16_t x49 = INT16_MIN;
int8_t x53 = INT8_MIN;
uint8_t x54 = 10U;
int64_t x61 = -1LL;
static volatile int32_t x64 = -4964922;
static volatile int16_t x68 = 1336;
static uint32_t x70 = UINT32_MAX;
volatile int64_t t15 = -8LL;
int8_t x74 = INT8_MIN;
volatile uint64_t x87 = 138919LLU;
static int64_t x90 = INT64_MIN;
static uint64_t x94 = UINT64_MAX;
uint8_t x95 = 15U;
int8_t x97 = -1;
uint32_t x100 = 278902663U;
int16_t x108 = INT16_MAX;
volatile int16_t x112 = INT16_MIN;
uint32_t t25 = 56U;
uint32_t x113 = 1U;
int64_t t26 = 3LL;
int64_t x120 = -3744368249409246273LL;
uint32_t x126 = 896U;
int64_t t29 = -1LL;
int32_t x135 = -1;
int8_t x136 = INT8_MIN;
int8_t x141 = 16;
static volatile uint32_t t34 = 176120U;
int16_t x150 = 0;
volatile int16_t x152 = INT16_MIN;
int32_t x153 = -1;
int16_t x155 = 3119;
int32_t t36 = 70;
int32_t x165 = INT32_MIN;
int16_t x169 = 2424;
uint64_t x175 = 645383307860513267LLU;
uint64_t t41 = 2356790903176LLU;
int8_t x178 = -30;
uint64_t x179 = UINT64_MAX;
volatile int32_t x180 = INT32_MIN;
static int16_t x182 = 7;
volatile uint8_t x185 = UINT8_MAX;
static uint8_t x188 = 76U;
int64_t x195 = -1LL;
volatile int32_t x202 = -1;
uint64_t x206 = 320693220017810LLU;
int64_t x209 = INT64_MAX;
uint64_t x210 = 6879307315762LLU;
int32_t x223 = 4;
int16_t x230 = INT16_MIN;
int32_t x231 = -1;
uint64_t x241 = 1037176663LLU;
int64_t x243 = 246LL;
int32_t x245 = INT32_MIN;
int16_t x246 = INT16_MAX;
int64_t x248 = INT64_MIN;
int64_t t58 = INT64_MIN;
int64_t x255 = INT64_MIN;
uint64_t x258 = 16LLU;
volatile int8_t x259 = -1;
static int32_t x268 = 49402;
int64_t x276 = INT64_MIN;
volatile uint32_t x284 = 50U;
uint64_t t67 = 811110551LLU;
static uint8_t x286 = 20U;
uint32_t x287 = UINT32_MAX;
static int32_t x296 = INT32_MIN;
int32_t x300 = -1;
volatile uint32_t x301 = UINT32_MAX;
static int16_t x302 = -1;
volatile int64_t x310 = INT64_MIN;
int8_t x311 = -3;
static int16_t x314 = -53;
volatile int64_t t75 = -81640011889151103LL;
uint32_t x325 = UINT32_MAX;
static uint64_t t77 = 28LLU;
int8_t x330 = INT8_MAX;
volatile int16_t x331 = -14445;
uint64_t x332 = UINT64_MAX;
uint64_t t78 = 122014LLU;
uint32_t x334 = 7107U;
static uint32_t x336 = 501775U;
int8_t x341 = -1;
static int64_t x349 = INT64_MIN;
int16_t x351 = INT16_MIN;
int8_t x353 = INT8_MIN;
uint32_t x357 = 1781742U;
int64_t x358 = INT64_MAX;
uint32_t x359 = UINT32_MAX;
uint64_t x363 = 26151706304385032LLU;
int32_t x364 = INT32_MIN;
volatile uint64_t t86 = 1034928171120781758LLU;
int32_t t87 = -8108090;
static int64_t x372 = INT64_MIN;
uint64_t x373 = 118395234468LLU;
uint64_t t89 = 108342LLU;
int16_t x378 = INT16_MIN;
static int8_t x381 = -1;
uint16_t x384 = 3441U;
static uint8_t x387 = 83U;
int32_t t92 = -14908;
volatile int64_t x401 = 1LL;
int32_t x403 = INT32_MIN;
int16_t x404 = -1;
int8_t x410 = -1;
volatile int64_t t98 = 89106759067344053LL;


void f0(void) {
	static int8_t x1 = INT8_MAX;
	int16_t x2 = INT16_MIN;
	volatile uint8_t x3 = 29U;
	int64_t x4 = 1363992355842572LL;
	int64_t t0 = -127420LL;

	t0 = ((x1+(x2%x3))&x4);

	if (t0 != 4LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	uint32_t x6 = UINT32_MAX;
	static int64_t x7 = INT64_MAX;
	static uint8_t x8 = 2U;
	int64_t t1 = 0LL;

	t1 = ((x5+(x6%x7))&x8);

	if (t1 != 2LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x10 = INT16_MIN;
	int64_t x11 = INT64_MAX;
	volatile int64_t x12 = INT64_MIN;
	int64_t t2 = INT64_MIN;

	t2 = ((x9+(x10%x11))&x12);

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 105070751167017627LLU;
	volatile int16_t x18 = 15515;
	int64_t x20 = INT64_MIN;
	static uint64_t t3 = 8376023130288493LLU;

	t3 = ((x17+(x18%x19))&x20);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = UINT8_MAX;
	volatile int32_t x22 = INT32_MIN;
	static int64_t x23 = INT64_MIN;
	static int32_t x24 = INT32_MIN;
	int64_t t4 = 969728581LL;

	t4 = ((x21+(x22%x23))&x24);

	if (t4 != -2147483648LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x25 = 122101;
	static int64_t x26 = INT64_MIN;
	int64_t t5 = -43LL;

	t5 = ((x25+(x26%x27))&x28);

	if (t5 != -8077184LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -2262;
	uint64_t x30 = 95398192LLU;
	int64_t x32 = -411594LL;
	static volatile uint64_t t6 = 343968422LLU;

	t6 = ((x29+(x30%x31))&x32);

	if (t6 != 95002642LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MIN;
	int16_t x35 = INT16_MIN;
	int8_t x36 = INT8_MIN;
	uint64_t t7 = 3526353LLU;

	t7 = ((x33+(x34%x35))&x36);

	if (t7 != 18446744073709520640LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = -1LL;
	int8_t x38 = 31;
	uint32_t x39 = 186138U;
	uint32_t x40 = 63U;

	t8 = ((x37+(x38%x39))&x40);

	if (t8 != 30LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = -1;
	int32_t x42 = INT32_MIN;
	volatile int32_t x44 = INT32_MAX;
	volatile int64_t t9 = 112279908884420833LL;

	t9 = ((x41+(x42%x43))&x44);

	if (t9 != 2147483647LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MIN;
	uint64_t x46 = UINT64_MAX;
	static volatile int32_t x47 = INT32_MIN;
	uint64_t t10 = 5884448LLU;

	t10 = ((x45+(x46%x47))&x48);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x50 = 0;
	int8_t x51 = INT8_MIN;
	uint64_t x52 = 198452567LLU;
	volatile uint64_t t11 = 301867485LLU;

	t11 = ((x49+(x50%x51))&x52);

	if (t11 != 198443008LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x55 = 36U;
	int8_t x56 = 0;
	static int32_t t12 = 60756850;

	t12 = ((x53+(x54%x55))&x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x62 = 161414699648770205LL;
	int64_t x63 = INT64_MIN;
	int64_t t13 = -17116LL;

	t13 = ((x61+(x62%x63))&x64);

	if (t13 != 161414699648557188LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = INT16_MIN;
	int32_t x66 = -163671474;
	int16_t x67 = 61;
	volatile int32_t t14 = 113;

	t14 = ((x65+(x66%x67))&x68);

	if (t14 != 1288) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x69 = -3;
	int64_t x71 = -1LL;
	static uint8_t x72 = UINT8_MAX;

	t15 = ((x69+(x70%x71))&x72);

	if (t15 != 253LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = 6;
	int64_t x75 = 56LL;
	int16_t x76 = 10022;
	volatile int64_t t16 = 977LL;

	t16 = ((x73+(x74%x75))&x76);

	if (t16 != 10022LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = -46;
	int64_t x78 = INT64_MAX;
	static volatile int32_t x79 = INT32_MAX;
	volatile int8_t x80 = 2;
	int64_t t17 = -80042381444473LL;

	t17 = ((x77+(x78%x79))&x80);

	if (t17 != 2LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = INT8_MIN;
	int8_t x82 = -1;
	static int8_t x83 = INT8_MAX;
	int64_t x84 = INT64_MIN;
	int64_t t18 = INT64_MIN;

	t18 = ((x81+(x82%x83))&x84);

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x85 = 4618U;
	volatile int32_t x86 = INT32_MIN;
	static int16_t x88 = 7941;
	uint64_t t19 = 14792856460LLU;

	t19 = ((x85+(x86%x87))&x88);

	if (t19 != 4097LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x89 = 31;
	static int64_t x91 = -6120838736LL;
	uint64_t x92 = 54537150227086LLU;
	volatile uint64_t t20 = 13783997LLU;

	t20 = ((x89+(x90%x91))&x92);

	if (t20 != 54533385749134LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = INT64_MIN;
	int8_t x96 = INT8_MIN;
	volatile uint64_t t21 = 3756LLU;

	t21 = ((x93+(x94%x95))&x96);

	if (t21 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x98 = 328680345U;
	int16_t x99 = INT16_MAX;
	uint32_t t22 = 223U;

	t22 = ((x97+(x98%x99))&x100);

	if (t22 != 8838U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x101 = 820LLU;
	static int64_t x102 = 440860405028263LL;
	uint32_t x103 = UINT32_MAX;
	int32_t x104 = INT32_MAX;
	static volatile uint64_t t23 = 1LLU;

	t23 = ((x101+(x102%x103))&x104);

	if (t23 != 1339550160LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x105 = 1;
	static volatile int8_t x106 = INT8_MIN;
	int64_t x107 = INT64_MIN;
	int64_t t24 = -15LL;

	t24 = ((x105+(x106%x107))&x108);

	if (t24 != 32641LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x109 = INT16_MIN;
	uint32_t x110 = UINT32_MAX;
	int8_t x111 = 12;

	t25 = ((x109+(x110%x111))&x112);

	if (t25 != 4294934528U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x114 = INT16_MAX;
	int16_t x115 = INT16_MAX;
	static int64_t x116 = 251142419107733443LL;

	t26 = ((x113+(x114%x115))&x116);

	if (t26 != 1LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x117 = UINT64_MAX;
	static uint8_t x118 = UINT8_MAX;
	uint64_t x119 = 979986LLU;
	volatile uint64_t t27 = 1218138383819LLU;

	t27 = ((x117+(x118%x119))&x120);

	if (t27 != 190LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x121 = INT64_MIN;
	int8_t x122 = INT8_MIN;
	static int8_t x123 = INT8_MIN;
	int16_t x124 = INT16_MIN;
	volatile int64_t t28 = INT64_MIN;

	t28 = ((x121+(x122%x123))&x124);

	if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = INT32_MAX;
	int64_t x127 = INT64_MIN;
	int8_t x128 = -15;

	t29 = ((x125+(x126%x127))&x128);

	if (t29 != 2147484529LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x129 = 3062879U;
	int16_t x130 = INT16_MAX;
	int16_t x131 = 4;
	int32_t x132 = 31128;
	volatile uint32_t t30 = 104868U;

	t30 = ((x129+(x130%x131))&x132);

	if (t30 != 14336U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = INT8_MIN;
	uint64_t x134 = UINT64_MAX;
	uint64_t t31 = 11LLU;

	t31 = ((x133+(x134%x135))&x136);

	if (t31 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x137 = 9074U;
	static int16_t x138 = -1;
	int32_t x139 = INT32_MIN;
	volatile int8_t x140 = -1;
	static int32_t t32 = -23295110;

	t32 = ((x137+(x138%x139))&x140);

	if (t32 != 9073) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x142 = 23U;
	volatile int32_t x143 = INT32_MIN;
	int64_t x144 = -1LL;
	volatile int64_t t33 = -30838211LL;

	t33 = ((x141+(x142%x143))&x144);

	if (t33 != 39LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x145 = -1;
	static uint32_t x146 = UINT32_MAX;
	int16_t x147 = -1;
	uint8_t x148 = 49U;

	t34 = ((x145+(x146%x147))&x148);

	if (t34 != 49U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x149 = UINT64_MAX;
	static int32_t x151 = INT32_MAX;
	volatile uint64_t t35 = 3634LLU;

	t35 = ((x149+(x150%x151))&x152);

	if (t35 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x154 = UINT8_MAX;
	static int32_t x156 = -1;

	t36 = ((x153+(x154%x155))&x156);

	if (t36 != 254) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = -91;
	volatile uint16_t x158 = 4U;
	uint32_t x159 = 5497U;
	int8_t x160 = INT8_MAX;
	static volatile uint32_t t37 = 1238976U;

	t37 = ((x157+(x158%x159))&x160);

	if (t37 != 41U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x161 = -1;
	volatile int16_t x162 = -5179;
	volatile int16_t x163 = 7190;
	uint64_t x164 = 147744990085LLU;
	volatile uint64_t t38 = 3LLU;

	t38 = ((x161+(x162%x163))&x164);

	if (t38 != 147744990084LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x166 = 1U;
	int16_t x167 = INT16_MAX;
	static volatile int8_t x168 = INT8_MIN;
	int32_t t39 = INT32_MIN;

	t39 = ((x165+(x166%x167))&x168);

	if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x170 = INT64_MAX;
	uint8_t x171 = 1U;
	int8_t x172 = INT8_MIN;
	volatile int64_t t40 = 605524796877LL;

	t40 = ((x169+(x170%x171))&x172);

	if (t40 != 2304LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x173 = -2840;
	int64_t x174 = INT64_MIN;
	int32_t x176 = INT32_MAX;

	t41 = ((x173+(x174%x175))&x176);

	if (t41 != 1645935006LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x177 = INT8_MAX;
	volatile uint64_t t42 = 505918011864LLU;

	t42 = ((x177+(x178%x179))&x180);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x181 = INT8_MAX;
	uint8_t x183 = 20U;
	uint32_t x184 = UINT32_MAX;
	volatile uint32_t t43 = 1730193U;

	t43 = ((x181+(x182%x183))&x184);

	if (t43 != 134U) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x186 = 29U;
	uint8_t x187 = 1U;
	int32_t t44 = 156694952;

	t44 = ((x185+(x186%x187))&x188);

	if (t44 != 76) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x189 = UINT8_MAX;
	int8_t x190 = 1;
	uint8_t x191 = 2U;
	volatile int32_t x192 = 1802482;
	int32_t t45 = 64;

	t45 = ((x189+(x190%x191))&x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x193 = 7996842151931735LL;
	int64_t x194 = -2012621452LL;
	int16_t x196 = INT16_MIN;
	volatile int64_t t46 = -1LL;

	t46 = ((x193+(x194%x195))&x196);

	if (t46 != 7996842151903232LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x197 = UINT64_MAX;
	int64_t x198 = INT64_MAX;
	static int16_t x199 = -300;
	static int16_t x200 = 1;
	volatile uint64_t t47 = 5240359619200LLU;

	t47 = ((x197+(x198%x199))&x200);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x201 = UINT64_MAX;
	static uint32_t x203 = UINT32_MAX;
	static uint64_t x204 = 14LLU;
	uint64_t t48 = 2939602435LLU;

	t48 = ((x201+(x202%x203))&x204);

	if (t48 != 14LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x205 = INT8_MIN;
	volatile int8_t x207 = INT8_MIN;
	int32_t x208 = 1;
	volatile uint64_t t49 = 2233322LLU;

	t49 = ((x205+(x206%x207))&x208);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x211 = 1405U;
	int32_t x212 = 42;
	volatile uint64_t t50 = 551322341131462LLU;

	t50 = ((x209+(x210%x211))&x212);

	if (t50 != 2LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x213 = INT32_MIN;
	int32_t x214 = INT32_MIN;
	volatile uint64_t x215 = 483LLU;
	int8_t x216 = 0;
	uint64_t t51 = 138832384714041LLU;

	t51 = ((x213+(x214%x215))&x216);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x217 = INT32_MAX;
	static uint16_t x218 = UINT16_MAX;
	uint16_t x219 = UINT16_MAX;
	int8_t x220 = 1;
	volatile int32_t t52 = 1;

	t52 = ((x217+(x218%x219))&x220);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x221 = -433;
	int32_t x222 = INT32_MIN;
	int32_t x224 = INT32_MIN;
	volatile int32_t t53 = INT32_MIN;

	t53 = ((x221+(x222%x223))&x224);

	if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x225 = 2674U;
	uint64_t x226 = 3643240302887507LLU;
	volatile int16_t x227 = -1;
	int64_t x228 = INT64_MIN;
	static uint64_t t54 = 22523055LLU;

	t54 = ((x225+(x226%x227))&x228);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x229 = -1;
	int16_t x232 = -1;
	static volatile int32_t t55 = 175764;

	t55 = ((x229+(x230%x231))&x232);

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x233 = -1;
	static int32_t x234 = INT32_MIN;
	int16_t x235 = 221;
	static uint64_t x236 = 34491155809736824LLU;
	uint64_t t56 = 11LLU;

	t56 = ((x233+(x234%x235))&x236);

	if (t56 != 34491155809736824LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x242 = -1;
	volatile int32_t x244 = 1;
	static uint64_t t57 = 576197631394840171LLU;

	t57 = ((x241+(x242%x243))&x244);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x247 = INT64_MAX;

	t58 = ((x245+(x246%x247))&x248);

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x249 = -1LL;
	int32_t x250 = INT32_MIN;
	int64_t x251 = INT64_MAX;
	uint8_t x252 = 4U;
	static int64_t t59 = -36449465711109LL;

	t59 = ((x249+(x250%x251))&x252);

	if (t59 != 4LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint8_t x253 = 1U;
	int64_t x254 = INT64_MIN;
	uint8_t x256 = 22U;
	int64_t t60 = 95327183126LL;

	t60 = ((x253+(x254%x255))&x256);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x257 = -80221;
	int32_t x260 = INT32_MIN;
	static volatile uint64_t t61 = 3389760465272492LLU;

	t61 = ((x257+(x258%x259))&x260);

	if (t61 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x261 = 8011988LLU;
	int8_t x262 = 11;
	volatile uint32_t x263 = UINT32_MAX;
	uint64_t x264 = 49549914645796LLU;
	volatile uint64_t t62 = 24558787903983170LLU;

	t62 = ((x261+(x262%x263))&x264);

	if (t62 != 655364LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x265 = UINT8_MAX;
	int8_t x266 = INT8_MAX;
	volatile int32_t x267 = -1;
	int32_t t63 = 20211503;

	t63 = ((x265+(x266%x267))&x268);

	if (t63 != 250) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x269 = UINT64_MAX;
	int16_t x270 = 2796;
	int8_t x271 = INT8_MIN;
	static uint32_t x272 = 101852U;
	uint64_t t64 = 55643LLU;

	t64 = ((x269+(x270%x271))&x272);

	if (t64 != 72LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x273 = INT8_MAX;
	uint16_t x274 = 29886U;
	int32_t x275 = INT32_MIN;
	static int64_t t65 = 172366636852647LL;

	t65 = ((x273+(x274%x275))&x276);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x277 = -1;
	int64_t x278 = 141255LL;
	uint32_t x279 = 5210297U;
	static int8_t x280 = INT8_MIN;
	volatile int64_t t66 = -97065LL;

	t66 = ((x277+(x278%x279))&x280);

	if (t66 != 141184LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x281 = 0;
	uint64_t x282 = 10LLU;
	static volatile int8_t x283 = 37;

	t67 = ((x281+(x282%x283))&x284);

	if (t67 != 2LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x285 = -1;
	volatile uint32_t x288 = 0U;
	volatile uint32_t t68 = 562U;

	t68 = ((x285+(x286%x287))&x288);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x289 = 1;
	int64_t x290 = -1LL;
	int16_t x291 = INT16_MIN;
	int16_t x292 = -1;
	static volatile int64_t t69 = -3LL;

	t69 = ((x289+(x290%x291))&x292);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x293 = 29U;
	int32_t x294 = INT32_MAX;
	int32_t x295 = INT32_MAX;
	int32_t t70 = -164758244;

	t70 = ((x293+(x294%x295))&x296);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x297 = 51157U;
	int64_t x298 = INT64_MIN;
	volatile int16_t x299 = -1;
	int64_t t71 = 915920754LL;

	t71 = ((x297+(x298%x299))&x300);

	if (t71 != 51157LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x303 = INT64_MAX;
	int64_t x304 = INT64_MIN;
	int64_t t72 = -109733LL;

	t72 = ((x301+(x302%x303))&x304);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x305 = INT32_MAX;
	int64_t x306 = -1LL;
	volatile uint64_t x307 = 241370510766LLU;
	int8_t x308 = INT8_MAX;
	volatile uint64_t t73 = 729699962918285999LLU;

	t73 = ((x305+(x306%x307))&x308);

	if (t73 != 84LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x309 = INT32_MAX;
	int16_t x312 = INT16_MIN;
	int64_t t74 = -936LL;

	t74 = ((x309+(x310%x311))&x312);

	if (t74 != 2147450880LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x313 = 544914U;
	volatile int64_t x315 = 63262633665719726LL;
	int64_t x316 = INT64_MAX;

	t75 = ((x313+(x314%x315))&x316);

	if (t75 != 544861LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x321 = -1;
	volatile int64_t x322 = -757LL;
	static volatile uint32_t x323 = 267494509U;
	uint16_t x324 = 28276U;
	volatile int64_t t76 = 226582750110LL;

	t76 = ((x321+(x322%x323))&x324);

	if (t76 != 27648LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x326 = 1745LLU;
	int64_t x327 = -1LL;
	uint16_t x328 = 88U;

	t77 = ((x325+(x326%x327))&x328);

	if (t77 != 80LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x329 = 3336LLU;

	t78 = ((x329+(x330%x331))&x332);

	if (t78 != 3463LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x333 = INT16_MAX;
	int64_t x335 = 661704808465173328LL;
	int64_t t79 = -3507847371186347LL;

	t79 = ((x333+(x334%x335))&x336);

	if (t79 != 34818LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x337 = -27;
	volatile uint32_t x338 = UINT32_MAX;
	int64_t x339 = INT64_MIN;
	static uint64_t x340 = UINT64_MAX;
	uint64_t t80 = 30LLU;

	t80 = ((x337+(x338%x339))&x340);

	if (t80 != 4294967268LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x342 = INT64_MIN;
	volatile uint32_t x343 = 6U;
	static int8_t x344 = INT8_MIN;
	int64_t t81 = -1897941204LL;

	t81 = ((x341+(x342%x343))&x344);

	if (t81 != -128LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x345 = INT64_MAX;
	volatile uint64_t x346 = UINT64_MAX;
	int32_t x347 = -981;
	uint32_t x348 = 60060133U;
	uint64_t t82 = 703328081123660LLU;

	t82 = ((x345+(x346%x347))&x348);

	if (t82 != 449LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x350 = INT16_MAX;
	int64_t x352 = INT64_MAX;
	volatile int64_t t83 = 5432549LL;

	t83 = ((x349+(x350%x351))&x352);

	if (t83 != 32767LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x354 = INT8_MIN;
	int32_t x355 = -7694;
	int64_t x356 = INT64_MAX;
	int64_t t84 = 160437611814242818LL;

	t84 = ((x353+(x354%x355))&x356);

	if (t84 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x360 = INT8_MIN;
	volatile int64_t t85 = -56121679173110LL;

	t85 = ((x357+(x358%x359))&x360);

	if (t85 != 2149265280LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x361 = UINT64_MAX;
	int16_t x362 = INT16_MIN;

	t86 = ((x361+(x362%x363))&x364);

	if (t86 != 9791127423025152LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x365 = -1;
	int32_t x366 = 576910;
	static int32_t x367 = -1;
	volatile int8_t x368 = INT8_MIN;

	t87 = ((x365+(x366%x367))&x368);

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x369 = INT8_MIN;
	int32_t x370 = -1;
	static uint64_t x371 = 24621343LLU;
	volatile uint64_t t88 = 1300059097768LLU;

	t88 = ((x369+(x370%x371))&x372);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x374 = -1;
	int64_t x375 = INT64_MIN;
	uint32_t x376 = 6568U;

	t89 = ((x373+(x374%x375))&x376);

	if (t89 != 2208LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x377 = -1;
	volatile int8_t x379 = INT8_MIN;
	uint64_t x380 = UINT64_MAX;
	uint64_t t90 = UINT64_MAX;

	t90 = ((x377+(x378%x379))&x380);

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x382 = INT64_MIN;
	volatile int32_t x383 = INT32_MIN;
	static volatile int64_t t91 = 51398LL;

	t91 = ((x381+(x382%x383))&x384);

	if (t91 != 3441LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x385 = UINT8_MAX;
	int16_t x386 = INT16_MIN;
	uint16_t x388 = UINT16_MAX;

	t92 = ((x385+(x386%x387))&x388);

	if (t92 != 189) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x389 = INT8_MIN;
	static volatile int8_t x390 = INT8_MIN;
	int16_t x391 = INT16_MAX;
	int16_t x392 = -1;
	volatile int32_t t93 = -227781431;

	t93 = ((x389+(x390%x391))&x392);

	if (t93 != -256) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x393 = UINT32_MAX;
	static int32_t x394 = -1;
	int32_t x395 = -1;
	int16_t x396 = INT16_MAX;
	uint32_t t94 = 18589U;

	t94 = ((x393+(x394%x395))&x396);

	if (t94 != 32767U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x397 = UINT32_MAX;
	int8_t x398 = 0;
	int8_t x399 = -1;
	int16_t x400 = INT16_MAX;
	volatile uint32_t t95 = 22U;

	t95 = ((x397+(x398%x399))&x400);

	if (t95 != 32767U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x402 = 46;
	int64_t t96 = 367173749669015LL;

	t96 = ((x401+(x402%x403))&x404);

	if (t96 != 47LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x405 = 2711;
	static int64_t x406 = INT64_MIN;
	static volatile uint16_t x407 = 27820U;
	int16_t x408 = INT16_MIN;
	static int64_t t97 = -1031516240223LL;

	t97 = ((x405+(x406%x407))&x408);

	if (t97 != -32768LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x409 = INT16_MIN;
	static uint32_t x411 = 59086U;
	int64_t x412 = 75202LL;

	t98 = ((x409+(x410%x411))&x412);

	if (t98 != 66882LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x417 = 115295;
	int8_t x418 = 2;
	int64_t x419 = INT64_MIN;
	uint8_t x420 = 1U;
	volatile int64_t t99 = 9742824475853LL;

	t99 = ((x417+(x418%x419))&x420);

	if (t99 != 1LL) { NG(); } else { ; }
	
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

