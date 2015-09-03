#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = INT64_MIN;
volatile int64_t x12 = 17285150945411LL;
uint8_t x17 = UINT8_MAX;
static int32_t t3 = -1705;
int16_t x23 = -1;
static int32_t x25 = -15401;
uint64_t x26 = 3156058394715944LLU;
static int8_t x27 = INT8_MAX;
static int32_t x31 = INT32_MIN;
int8_t x33 = -24;
int64_t x37 = INT64_MIN;
volatile int32_t t9 = 6772924;
static uint8_t x47 = 23U;
uint16_t x49 = UINT16_MAX;
int32_t t13 = 185;
static volatile int32_t t14 = 176;
int8_t x65 = -1;
uint32_t x68 = UINT32_MAX;
int16_t x69 = INT16_MAX;
int32_t x70 = -215;
uint32_t x72 = 5259014U;
volatile int32_t t16 = -146541751;
static volatile uint8_t x75 = 114U;
uint16_t x77 = 3U;
uint32_t x81 = UINT32_MAX;
int32_t x88 = -1;
static volatile int64_t x89 = INT64_MIN;
static uint8_t x96 = 5U;
int16_t x123 = INT16_MIN;
int16_t x125 = 13;
static int32_t x129 = INT32_MAX;
uint64_t x131 = 147054425657LLU;
int64_t x140 = INT64_MIN;
static volatile int32_t t31 = 7079;
uint8_t x142 = 96U;
int16_t x143 = 2934;
int32_t x154 = INT32_MAX;
int8_t x156 = INT8_MAX;
volatile int32_t t35 = 359;
static int32_t x176 = INT32_MAX;
volatile int32_t t39 = 58849;
int16_t x196 = -1;
volatile uint64_t x198 = 33LLU;
static volatile int32_t t45 = 15964;
static uint8_t x203 = 1U;
volatile int32_t t46 = -2697;
uint64_t x205 = 5LLU;
int32_t t48 = -94;
uint32_t x219 = 64561418U;
int32_t t50 = 129878254;
static int8_t x222 = INT8_MIN;
volatile int32_t x223 = INT32_MAX;
volatile int32_t t52 = 1;
int32_t x231 = 105031929;
volatile int32_t t53 = 3137041;
uint8_t x234 = 26U;
volatile int8_t x236 = -1;
volatile int32_t t54 = 365994;
volatile int32_t t55 = 5684;
volatile int64_t x247 = INT64_MIN;
volatile int32_t t57 = -5464;
uint16_t x253 = 17U;
int32_t x254 = INT32_MIN;
int8_t x255 = 0;
volatile int8_t x256 = 0;
static volatile int32_t t62 = -4039571;
static int8_t x273 = 0;
volatile int32_t t64 = 6;
static int8_t x287 = INT8_MAX;
static int8_t x297 = INT8_MIN;
uint16_t x300 = UINT16_MAX;
uint64_t x302 = UINT64_MAX;
static volatile uint16_t x304 = UINT16_MAX;
volatile int32_t t71 = 0;
static volatile int8_t x320 = -1;
static uint64_t x321 = UINT64_MAX;
int16_t x323 = INT16_MIN;
int64_t x326 = -2500104566LL;
int16_t x329 = INT16_MIN;
uint8_t x332 = 84U;
volatile int32_t t79 = 1;
int8_t x354 = 1;
volatile int16_t x356 = INT16_MIN;
int8_t x359 = -1;
volatile uint64_t x360 = UINT64_MAX;
int64_t x361 = INT64_MIN;
int32_t x363 = INT32_MIN;
int8_t x365 = INT8_MAX;
volatile int32_t t86 = 3497926;
int16_t x378 = -1;
int8_t x390 = INT8_MIN;
uint8_t x402 = UINT8_MAX;
int32_t x413 = -15897;
int16_t x416 = INT16_MAX;
uint16_t x419 = 4672U;
volatile int16_t x422 = INT16_MIN;


void f0(void) {
	static uint32_t x1 = 316U;
	static int16_t x2 = INT16_MIN;
	uint8_t x3 = 0U;
	int32_t x4 = -345491729;
	volatile int32_t t0 = 680;

	t0 = (((x1%x2)-x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x6 = INT16_MAX;
	int32_t x7 = INT32_MIN;
	int64_t x8 = INT64_MIN;
	int32_t t1 = 105464;

	t1 = (((x5%x6)-x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	int8_t x10 = 13;
	static volatile int8_t x11 = INT8_MIN;
	volatile int32_t t2 = -105172;

	t2 = (((x9%x10)-x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x18 = 843LLU;
	int64_t x19 = INT64_MIN;
	int8_t x20 = INT8_MAX;

	t3 = (((x17%x18)-x19)<x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MIN;
	volatile int64_t x22 = INT64_MAX;
	volatile int16_t x24 = INT16_MAX;
	int32_t t4 = -13235;

	t4 = (((x21%x22)-x23)<x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x28 = -1;
	volatile int32_t t5 = -21545;

	t5 = (((x25%x26)-x27)<x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x29 = -3;
	int32_t x30 = 3446;
	volatile int8_t x32 = INT8_MIN;
	volatile int32_t t6 = 148841962;

	t6 = (((x29%x30)-x31)<x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x34 = INT16_MAX;
	int8_t x35 = -1;
	int16_t x36 = -1;
	int32_t t7 = -2443;

	t7 = (((x33%x34)-x35)<x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x38 = UINT8_MAX;
	int16_t x39 = INT16_MAX;
	static volatile uint64_t x40 = 78LLU;
	static int32_t t8 = 30157912;

	t8 = (((x37%x38)-x39)<x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x41 = -7;
	int32_t x42 = INT32_MIN;
	volatile int8_t x43 = INT8_MIN;
	int8_t x44 = INT8_MAX;

	t9 = (((x41%x42)-x43)<x44);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = 54283077U;
	int32_t x46 = INT32_MIN;
	static volatile int64_t x48 = INT64_MIN;
	volatile int32_t t10 = 2419;

	t10 = (((x45%x46)-x47)<x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x50 = INT32_MAX;
	uint32_t x51 = 6U;
	volatile uint8_t x52 = 2U;
	int32_t t11 = -19;

	t11 = (((x49%x50)-x51)<x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x53 = INT8_MIN;
	static uint8_t x54 = 3U;
	int8_t x55 = -2;
	volatile uint64_t x56 = 2557185348312LLU;
	volatile int32_t t12 = -3;

	t12 = (((x53%x54)-x55)<x56);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = -1;
	static int32_t x58 = INT32_MAX;
	uint64_t x59 = UINT64_MAX;
	volatile int32_t x60 = INT32_MAX;

	t13 = (((x57%x58)-x59)<x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = INT32_MIN;
	static int64_t x62 = -1LL;
	uint32_t x63 = 575551745U;
	int64_t x64 = INT64_MIN;

	t14 = (((x61%x62)-x63)<x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x66 = 54U;
	uint16_t x67 = 53U;
	int32_t t15 = 4026;

	t15 = (((x65%x66)-x67)<x68);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x71 = UINT8_MAX;

	t16 = (((x69%x70)-x71)<x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = INT8_MIN;
	int16_t x74 = INT16_MIN;
	int16_t x76 = INT16_MIN;
	static volatile int32_t t17 = 36565147;

	t17 = (((x73%x74)-x75)<x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x78 = -1;
	uint32_t x79 = UINT32_MAX;
	int8_t x80 = INT8_MIN;
	static int32_t t18 = 1035895142;

	t18 = (((x77%x78)-x79)<x80);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x82 = 384253646375767LLU;
	int16_t x83 = -1;
	uint64_t x84 = 26LLU;
	int32_t t19 = -82855;

	t19 = (((x81%x82)-x83)<x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = 601879511LLU;
	volatile int16_t x86 = -1;
	uint32_t x87 = 4500U;
	volatile int32_t t20 = -54831;

	t20 = (((x85%x86)-x87)<x88);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x90 = 1U;
	uint16_t x91 = 2U;
	int16_t x92 = INT16_MIN;
	volatile int32_t t21 = -10752882;

	t21 = (((x89%x90)-x91)<x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x93 = 2;
	int32_t x94 = INT32_MAX;
	int8_t x95 = 1;
	int32_t t22 = -1;

	t22 = (((x93%x94)-x95)<x96);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = 0;
	volatile int8_t x98 = INT8_MIN;
	int16_t x99 = 3199;
	uint16_t x100 = 34U;
	int32_t t23 = -613391076;

	t23 = (((x97%x98)-x99)<x100);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x101 = UINT32_MAX;
	uint64_t x102 = 231708962085LLU;
	uint64_t x103 = 13192834926711LLU;
	uint16_t x104 = UINT16_MAX;
	int32_t t24 = 34034;

	t24 = (((x101%x102)-x103)<x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x105 = UINT64_MAX;
	int32_t x106 = INT32_MIN;
	int32_t x107 = -411918;
	volatile int32_t x108 = -1;
	static volatile int32_t t25 = 576228032;

	t25 = (((x105%x106)-x107)<x108);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x117 = INT8_MAX;
	int16_t x118 = 1;
	int16_t x119 = INT16_MAX;
	volatile int16_t x120 = 11759;
	int32_t t26 = -5;

	t26 = (((x117%x118)-x119)<x120);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x121 = 55735658933LLU;
	static int64_t x122 = INT64_MIN;
	int8_t x124 = -22;
	volatile int32_t t27 = 64;

	t27 = (((x121%x122)-x123)<x124);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x126 = -474355273;
	static int32_t x127 = -28076541;
	int64_t x128 = INT64_MIN;
	volatile int32_t t28 = -93777318;

	t28 = (((x125%x126)-x127)<x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x130 = INT16_MIN;
	uint8_t x132 = 7U;
	static volatile int32_t t29 = -103;

	t29 = (((x129%x130)-x131)<x132);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x133 = UINT16_MAX;
	int8_t x134 = INT8_MAX;
	uint32_t x135 = 1681148U;
	int32_t x136 = -1;
	int32_t t30 = 438;

	t30 = (((x133%x134)-x135)<x136);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x137 = -3716520013487LL;
	volatile int32_t x138 = INT32_MAX;
	volatile int64_t x139 = 2215354561729678511LL;

	t31 = (((x137%x138)-x139)<x140);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x141 = 91831292LLU;
	int64_t x144 = 20842611469800109LL;
	int32_t t32 = 467000;

	t32 = (((x141%x142)-x143)<x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x145 = 19174;
	int64_t x146 = INT64_MIN;
	int8_t x147 = INT8_MIN;
	int64_t x148 = INT64_MIN;
	int32_t t33 = -1497588;

	t33 = (((x145%x146)-x147)<x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x149 = -1LL;
	int64_t x150 = -423630885856446LL;
	int64_t x151 = 62536676LL;
	int16_t x152 = INT16_MAX;
	int32_t t34 = -208797705;

	t34 = (((x149%x150)-x151)<x152);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x153 = 3U;
	static int64_t x155 = -1LL;

	t35 = (((x153%x154)-x155)<x156);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x157 = 19;
	int32_t x158 = -1;
	int16_t x159 = -56;
	int32_t x160 = INT32_MAX;
	int32_t t36 = -58415882;

	t36 = (((x157%x158)-x159)<x160);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x161 = INT16_MIN;
	int8_t x162 = INT8_MIN;
	int8_t x163 = -1;
	int32_t x164 = -1;
	int32_t t37 = -111;

	t37 = (((x161%x162)-x163)<x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x165 = INT64_MIN;
	int8_t x166 = INT8_MIN;
	int8_t x167 = INT8_MIN;
	uint64_t x168 = UINT64_MAX;
	int32_t t38 = -1;

	t38 = (((x165%x166)-x167)<x168);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x173 = 492LLU;
	int32_t x174 = INT32_MIN;
	int16_t x175 = 1;

	t39 = (((x173%x174)-x175)<x176);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x177 = -1;
	int16_t x178 = -1;
	int8_t x179 = -1;
	uint32_t x180 = 33729818U;
	volatile int32_t t40 = -8346;

	t40 = (((x177%x178)-x179)<x180);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x181 = UINT64_MAX;
	volatile int64_t x182 = INT64_MAX;
	int64_t x183 = -1LL;
	uint64_t x184 = 11451526106367LLU;
	int32_t t41 = 24;

	t41 = (((x181%x182)-x183)<x184);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x185 = -23;
	int64_t x186 = 2544LL;
	int16_t x187 = 1;
	uint16_t x188 = UINT16_MAX;
	volatile int32_t t42 = -1;

	t42 = (((x185%x186)-x187)<x188);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x189 = 0U;
	int16_t x190 = 1212;
	volatile uint64_t x191 = 3736LLU;
	uint64_t x192 = 33261078LLU;
	volatile int32_t t43 = 540636;

	t43 = (((x189%x190)-x191)<x192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x193 = -2;
	int16_t x194 = 4;
	volatile uint32_t x195 = 84357837U;
	volatile int32_t t44 = -634;

	t44 = (((x193%x194)-x195)<x196);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x197 = INT8_MIN;
	int32_t x199 = 15262885;
	int32_t x200 = -246371;

	t45 = (((x197%x198)-x199)<x200);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x201 = 110202748LLU;
	static int8_t x202 = -1;
	int16_t x204 = INT16_MIN;

	t46 = (((x201%x202)-x203)<x204);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x206 = 212885684572903330LLU;
	uint8_t x207 = UINT8_MAX;
	static uint64_t x208 = UINT64_MAX;
	int32_t t47 = 1962419;

	t47 = (((x205%x206)-x207)<x208);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x209 = -1;
	int64_t x210 = INT64_MAX;
	int8_t x211 = INT8_MIN;
	int8_t x212 = -15;

	t48 = (((x209%x210)-x211)<x212);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x213 = INT16_MIN;
	int32_t x214 = 1;
	int8_t x215 = 0;
	static volatile int8_t x216 = 0;
	int32_t t49 = -4616494;

	t49 = (((x213%x214)-x215)<x216);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x217 = INT8_MIN;
	static int8_t x218 = -1;
	int64_t x220 = 3801491378905816297LL;

	t50 = (((x217%x218)-x219)<x220);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x221 = INT32_MIN;
	uint64_t x224 = 330LLU;
	int32_t t51 = 7928;

	t51 = (((x221%x222)-x223)<x224);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x225 = 22730583379LLU;
	static uint16_t x226 = 454U;
	int32_t x227 = -1;
	int32_t x228 = -547397;

	t52 = (((x225%x226)-x227)<x228);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint32_t x229 = 1653917032U;
	int16_t x230 = 999;
	static uint16_t x232 = 7289U;

	t53 = (((x229%x230)-x231)<x232);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x233 = 18U;
	static uint16_t x235 = UINT16_MAX;

	t54 = (((x233%x234)-x235)<x236);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x237 = -16285605430959LL;
	uint64_t x238 = 608097610LLU;
	int16_t x239 = -8974;
	int8_t x240 = INT8_MAX;

	t55 = (((x237%x238)-x239)<x240);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x241 = -1;
	static volatile int16_t x242 = -42;
	static int16_t x243 = 7959;
	int32_t x244 = -125843248;
	volatile int32_t t56 = 46;

	t56 = (((x241%x242)-x243)<x244);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x245 = -19076;
	uint64_t x246 = 14694030LLU;
	uint16_t x248 = 482U;

	t57 = (((x245%x246)-x247)<x248);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x249 = -1;
	int32_t x250 = INT32_MAX;
	static volatile uint8_t x251 = 1U;
	static volatile int8_t x252 = INT8_MIN;
	volatile int32_t t58 = -74394;

	t58 = (((x249%x250)-x251)<x252);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t t59 = 1487;

	t59 = (((x253%x254)-x255)<x256);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x257 = -1;
	volatile uint8_t x258 = 11U;
	static int32_t x259 = INT32_MAX;
	static uint16_t x260 = UINT16_MAX;
	int32_t t60 = -16007894;

	t60 = (((x257%x258)-x259)<x260);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x261 = 24U;
	volatile int16_t x262 = INT16_MIN;
	int64_t x263 = -1LL;
	volatile uint64_t x264 = UINT64_MAX;
	int32_t t61 = 149916;

	t61 = (((x261%x262)-x263)<x264);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x265 = 3192U;
	static int16_t x266 = INT16_MAX;
	static int32_t x267 = INT32_MIN;
	int16_t x268 = INT16_MIN;

	t62 = (((x265%x266)-x267)<x268);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x269 = 0;
	int16_t x270 = INT16_MIN;
	static volatile uint8_t x271 = 57U;
	static int16_t x272 = INT16_MIN;
	volatile int32_t t63 = -190559;

	t63 = (((x269%x270)-x271)<x272);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x274 = -1LL;
	volatile int16_t x275 = INT16_MIN;
	int16_t x276 = INT16_MIN;

	t64 = (((x273%x274)-x275)<x276);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x281 = -13170428531056LL;
	int32_t x282 = -1;
	uint64_t x283 = UINT64_MAX;
	int8_t x284 = -1;
	int32_t t65 = -849;

	t65 = (((x281%x282)-x283)<x284);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x285 = -1;
	int16_t x286 = INT16_MIN;
	uint16_t x288 = UINT16_MAX;
	volatile int32_t t66 = -291087469;

	t66 = (((x285%x286)-x287)<x288);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x289 = INT64_MIN;
	uint8_t x290 = UINT8_MAX;
	int8_t x291 = -12;
	int8_t x292 = -1;
	volatile int32_t t67 = 28;

	t67 = (((x289%x290)-x291)<x292);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x293 = 1569;
	int8_t x294 = INT8_MAX;
	int64_t x295 = -6542032905044LL;
	int64_t x296 = -1LL;
	int32_t t68 = 188064;

	t68 = (((x293%x294)-x295)<x296);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x298 = INT8_MAX;
	static int16_t x299 = 1;
	int32_t t69 = 0;

	t69 = (((x297%x298)-x299)<x300);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x301 = 15848278U;
	int8_t x303 = INT8_MAX;
	static int32_t t70 = 428265;

	t70 = (((x301%x302)-x303)<x304);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x305 = -1;
	static int8_t x306 = INT8_MAX;
	volatile uint64_t x307 = 3099390604111LLU;
	volatile int8_t x308 = INT8_MAX;

	t71 = (((x305%x306)-x307)<x308);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x309 = -1;
	uint64_t x310 = 342625286368LLU;
	volatile uint16_t x311 = 22U;
	volatile int32_t x312 = INT32_MAX;
	static volatile int32_t t72 = -799;

	t72 = (((x309%x310)-x311)<x312);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x313 = 1;
	uint64_t x314 = 23022089923626LLU;
	uint8_t x315 = 14U;
	uint16_t x316 = 5U;
	volatile int32_t t73 = -5962;

	t73 = (((x313%x314)-x315)<x316);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x317 = INT16_MIN;
	int64_t x318 = -22091933158857296LL;
	int16_t x319 = INT16_MAX;
	volatile int32_t t74 = -376711;

	t74 = (((x317%x318)-x319)<x320);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x322 = -1LL;
	volatile int32_t x324 = INT32_MIN;
	int32_t t75 = -2;

	t75 = (((x321%x322)-x323)<x324);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x325 = UINT32_MAX;
	int16_t x327 = -1;
	int16_t x328 = INT16_MIN;
	volatile int32_t t76 = -2760393;

	t76 = (((x325%x326)-x327)<x328);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x330 = 9;
	static int16_t x331 = INT16_MAX;
	volatile int32_t t77 = 3195;

	t77 = (((x329%x330)-x331)<x332);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x333 = -1;
	volatile uint32_t x334 = 780333653U;
	uint32_t x335 = UINT32_MAX;
	static volatile uint32_t x336 = 3U;
	int32_t t78 = -124;

	t78 = (((x333%x334)-x335)<x336);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x337 = 17575682LLU;
	int8_t x338 = -1;
	volatile int16_t x339 = INT16_MIN;
	uint64_t x340 = UINT64_MAX;

	t79 = (((x337%x338)-x339)<x340);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x341 = INT32_MAX;
	int64_t x342 = 26409065499LL;
	int16_t x343 = -72;
	static int8_t x344 = 22;
	int32_t t80 = -12;

	t80 = (((x341%x342)-x343)<x344);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x345 = INT32_MAX;
	uint64_t x346 = 49LLU;
	int16_t x347 = INT16_MIN;
	int64_t x348 = INT64_MIN;
	volatile int32_t t81 = -18;

	t81 = (((x345%x346)-x347)<x348);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x349 = -1;
	volatile int16_t x350 = INT16_MIN;
	volatile int8_t x351 = -1;
	int32_t x352 = 345;
	int32_t t82 = 1562815;

	t82 = (((x349%x350)-x351)<x352);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x353 = 6U;
	static uint32_t x355 = UINT32_MAX;
	int32_t t83 = 3993688;

	t83 = (((x353%x354)-x355)<x356);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x357 = INT64_MIN;
	volatile uint64_t x358 = 9209980541706590261LLU;
	int32_t t84 = -456;

	t84 = (((x357%x358)-x359)<x360);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x362 = 139U;
	int64_t x364 = INT64_MIN;
	volatile int32_t t85 = -3;

	t85 = (((x361%x362)-x363)<x364);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x366 = -1;
	static int16_t x367 = INT16_MAX;
	volatile uint8_t x368 = 44U;

	t86 = (((x365%x366)-x367)<x368);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x369 = -11;
	static volatile int64_t x370 = 3602LL;
	volatile uint32_t x371 = 55417100U;
	int8_t x372 = INT8_MIN;
	int32_t t87 = 2473755;

	t87 = (((x369%x370)-x371)<x372);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x373 = INT16_MIN;
	volatile uint64_t x374 = 467628057712231618LLU;
	uint32_t x375 = 787035U;
	uint8_t x376 = 11U;
	int32_t t88 = -837;

	t88 = (((x373%x374)-x375)<x376);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x377 = 22U;
	static uint8_t x379 = 96U;
	static volatile int32_t x380 = 7296;
	int32_t t89 = 673796260;

	t89 = (((x377%x378)-x379)<x380);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x381 = UINT64_MAX;
	uint32_t x382 = 50U;
	uint16_t x383 = 1U;
	uint8_t x384 = UINT8_MAX;
	volatile int32_t t90 = 719;

	t90 = (((x381%x382)-x383)<x384);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x389 = -1;
	int8_t x391 = 1;
	uint8_t x392 = 2U;
	int32_t t91 = -1;

	t91 = (((x389%x390)-x391)<x392);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x393 = 7;
	uint8_t x394 = 115U;
	int8_t x395 = 42;
	uint32_t x396 = 768U;
	int32_t t92 = 1;

	t92 = (((x393%x394)-x395)<x396);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x397 = 1;
	uint64_t x398 = 48562353LLU;
	volatile uint64_t x399 = 6001883850875449699LLU;
	static int64_t x400 = 13LL;
	volatile int32_t t93 = -45700;

	t93 = (((x397%x398)-x399)<x400);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x401 = 16;
	int8_t x403 = -1;
	volatile uint16_t x404 = 6U;
	static int32_t t94 = -8044798;

	t94 = (((x401%x402)-x403)<x404);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x405 = -2;
	int64_t x406 = INT64_MIN;
	int64_t x407 = 24759230017LL;
	int16_t x408 = -1;
	static int32_t t95 = 3010269;

	t95 = (((x405%x406)-x407)<x408);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint8_t x409 = 1U;
	uint32_t x410 = UINT32_MAX;
	int16_t x411 = -1;
	int32_t x412 = INT32_MIN;
	volatile int32_t t96 = 465;

	t96 = (((x409%x410)-x411)<x412);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x414 = UINT32_MAX;
	int16_t x415 = INT16_MIN;
	static volatile int32_t t97 = -12;

	t97 = (((x413%x414)-x415)<x416);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x417 = 0U;
	static int64_t x418 = -29324615066533929LL;
	int8_t x420 = -1;
	int32_t t98 = -38703;

	t98 = (((x417%x418)-x419)<x420);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x421 = -1;
	int16_t x423 = INT16_MAX;
	uint32_t x424 = UINT32_MAX;
	volatile int32_t t99 = 358722;

	t99 = (((x421%x422)-x423)<x424);

	if (t99 != 1) { NG(); } else { ; }
	
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

