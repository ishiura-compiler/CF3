#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t1 = 30850LL;
int64_t t3 = INT64_MIN;
int8_t x25 = INT8_MIN;
int16_t x27 = INT16_MIN;
int16_t x28 = -1;
static uint8_t x29 = UINT8_MAX;
uint8_t x32 = 4U;
static uint64_t t5 = 204909963LLU;
int16_t x33 = -1;
uint64_t t8 = 431091704LLU;
volatile int32_t t9 = 63962116;
int32_t x50 = INT32_MAX;
volatile uint64_t x54 = 31787240974LLU;
static int64_t x58 = 83LL;
volatile uint64_t x64 = 3601848398593836LLU;
volatile uint64_t t15 = 5764LLU;
int32_t t18 = INT32_MIN;
uint8_t x85 = 3U;
static volatile int32_t t23 = -978311;
static int8_t x106 = INT8_MIN;
int64_t x108 = INT64_MIN;
uint64_t t24 = 411LLU;
uint64_t x119 = UINT64_MAX;
uint16_t x121 = 5U;
static int8_t x122 = 1;
static uint16_t x124 = UINT16_MAX;
static int16_t x138 = INT16_MIN;
volatile int32_t x140 = INT32_MIN;
static volatile int32_t t31 = INT32_MIN;
int32_t x142 = INT32_MAX;
int64_t x144 = 2901551864117LL;
int64_t x145 = 1LL;
int8_t x146 = INT8_MIN;
volatile uint64_t x150 = 445LLU;
static uint64_t t34 = 107556592609180LLU;
int16_t x154 = 2;
int16_t x170 = INT16_MIN;
int8_t x172 = 38;
int32_t x173 = -1;
volatile uint32_t x174 = 8146357U;
int8_t x176 = -1;
uint32_t x178 = 229072607U;
uint32_t t40 = 5525U;
int8_t x184 = -1;
int64_t t41 = -774503969904LL;
volatile uint16_t x188 = 93U;
volatile uint8_t x194 = UINT8_MAX;
volatile int16_t x196 = -1;
uint64_t t44 = 27916329527LLU;
volatile uint8_t x204 = UINT8_MAX;
uint8_t x205 = UINT8_MAX;
volatile int16_t x214 = INT16_MIN;
static int32_t t49 = -83102;
volatile uint64_t x219 = 79055408189819124LLU;
volatile int16_t x241 = INT16_MIN;
static int8_t x251 = -1;
int8_t x252 = INT8_MIN;
int16_t x254 = -8780;
int16_t x259 = INT16_MIN;
volatile int32_t t60 = 20;
static int64_t x279 = 1LL;
static int8_t x301 = INT8_MIN;
int8_t x304 = INT8_MIN;
uint8_t x306 = 26U;
int16_t x308 = INT16_MAX;
static int32_t t69 = 1816;
int16_t x314 = -13985;
int16_t x315 = 13517;
int8_t x317 = -29;
uint8_t x320 = UINT8_MAX;
int32_t x321 = 10500376;
static int32_t x322 = INT32_MIN;
int64_t x323 = INT64_MAX;
static volatile uint64_t x325 = UINT64_MAX;
uint8_t x328 = UINT8_MAX;
int8_t x331 = 1;
static int32_t x336 = 0;
volatile uint32_t x337 = UINT32_MAX;
int32_t x338 = -1;
uint8_t x345 = 0U;
int64_t x348 = -1LL;
static volatile int64_t t79 = 1203105LL;
int16_t x351 = INT16_MIN;
static int32_t x359 = INT32_MIN;
int32_t x367 = INT32_MAX;
volatile uint32_t t84 = 106U;
static volatile uint64_t t85 = 106572768635208LLU;
int32_t x377 = INT32_MIN;
int16_t x378 = 1301;
volatile int64_t t87 = 12575211286139966LL;
int32_t x382 = 246286;
static int16_t x391 = -29;
uint64_t t90 = 7LLU;
uint64_t x393 = 172807796562LLU;
int32_t x394 = -1438061;
int32_t x396 = INT32_MIN;
uint8_t x414 = 0U;
int8_t x418 = -1;
static int64_t x419 = INT64_MIN;
int64_t x422 = 1481204067LL;
int32_t x429 = INT32_MAX;


void f0(void) {
	uint16_t x5 = UINT16_MAX;
	static int32_t x6 = INT32_MIN;
	static uint64_t x7 = 1402168562122323112LLU;
	uint16_t x8 = 14876U;
	volatile uint64_t t0 = 745355220853LLU;

	t0 = ((x5+(x6|x7))&x8);

	if (t0 != 12292LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x13 = INT8_MAX;
	static int64_t x14 = INT64_MAX;
	int8_t x15 = -1;
	volatile int64_t x16 = INT64_MIN;

	t1 = ((x13+(x14|x15))&x16);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x17 = 18U;
	volatile uint64_t x18 = 55910LLU;
	static int16_t x19 = INT16_MAX;
	int32_t x20 = INT32_MAX;
	volatile uint64_t t2 = 575746557314938LLU;

	t2 = ((x17+(x18|x19))&x20);

	if (t2 != 65553LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x21 = INT64_MIN;
	volatile uint16_t x22 = 1929U;
	int16_t x23 = 311;
	static int16_t x24 = INT16_MIN;

	t3 = ((x21+(x22|x23))&x24);

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint32_t x26 = 2646U;
	static uint32_t t4 = 699366937U;

	t4 = ((x25+(x26|x27))&x28);

	if (t4 != 4294937046U) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x30 = INT32_MIN;
	uint64_t x31 = 9LLU;

	t5 = ((x29+(x30|x31))&x32);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x34 = -27;
	uint16_t x35 = 3U;
	int64_t x36 = -1LL;
	volatile int64_t t6 = -5086777730831547LL;

	t6 = ((x33+(x34|x35))&x36);

	if (t6 != -26LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x37 = 13;
	int32_t x38 = -1;
	uint64_t x39 = 30296069LLU;
	static int32_t x40 = INT32_MIN;
	static uint64_t t7 = 28873468566100LLU;

	t7 = ((x37+(x38|x39))&x40);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = 10871077098397LL;
	uint8_t x42 = UINT8_MAX;
	int32_t x43 = INT32_MIN;
	uint64_t x44 = 2566903271413LLU;

	t8 = ((x41+(x42|x43))&x44);

	if (t8 != 277127103636LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x45 = INT16_MIN;
	static volatile int8_t x46 = -1;
	int8_t x47 = INT8_MIN;
	volatile int8_t x48 = -1;

	t9 = ((x45+(x46|x47))&x48);

	if (t9 != -32769) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x49 = UINT8_MAX;
	int64_t x51 = -1LL;
	uint32_t x52 = UINT32_MAX;
	int64_t t10 = 1858325477282452LL;

	t10 = ((x49+(x50|x51))&x52);

	if (t10 != 254LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x53 = 5332U;
	static volatile uint64_t x55 = UINT64_MAX;
	int32_t x56 = 73;
	uint64_t t11 = 3100700104422LLU;

	t11 = ((x53+(x54|x55))&x56);

	if (t11 != 65LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = -30;
	static int64_t x59 = INT64_MAX;
	uint64_t x60 = 2713747015155198LLU;
	static volatile uint64_t t12 = 248425119LLU;

	t12 = ((x57+(x58|x59))&x60);

	if (t12 != 2713747015155168LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = -31;
	int8_t x62 = INT8_MAX;
	static int16_t x63 = -498;
	volatile uint64_t t13 = 2571LLU;

	t13 = ((x61+(x62|x63))&x64);

	if (t13 != 3601848398593568LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x65 = -1;
	uint32_t x66 = UINT32_MAX;
	uint8_t x67 = 43U;
	int8_t x68 = INT8_MIN;
	static volatile uint32_t t14 = 6639U;

	t14 = ((x65+(x66|x67))&x68);

	if (t14 != 4294967168U) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x69 = 694U;
	static int16_t x70 = INT16_MIN;
	volatile int32_t x71 = -1;
	volatile uint64_t x72 = 6159704LLU;

	t15 = ((x69+(x70|x71))&x72);

	if (t15 != 16LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x73 = INT16_MIN;
	int32_t x74 = INT32_MAX;
	int16_t x75 = INT16_MIN;
	uint8_t x76 = 23U;
	static int32_t t16 = 151;

	t16 = ((x73+(x74|x75))&x76);

	if (t16 != 23) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = INT16_MIN;
	static int16_t x78 = INT16_MAX;
	static int16_t x79 = -1;
	int16_t x80 = 77;
	static int32_t t17 = 64958;

	t17 = ((x77+(x78|x79))&x80);

	if (t17 != 77) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = INT32_MIN;
	volatile uint8_t x82 = 6U;
	uint16_t x83 = UINT16_MAX;
	static int32_t x84 = INT32_MIN;

	t18 = ((x81+(x82|x83))&x84);

	if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x86 = 2472U;
	uint16_t x87 = 32045U;
	int64_t x88 = INT64_MAX;
	static int64_t t19 = 40242940345LL;

	t19 = ((x85+(x86|x87))&x88);

	if (t19 != 32176LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x89 = -377;
	static uint16_t x90 = 914U;
	uint8_t x91 = 37U;
	static volatile uint64_t x92 = 232353182959740LLU;
	volatile uint64_t t20 = 31920955940918LLU;

	t20 = ((x89+(x90|x91))&x92);

	if (t20 != 60LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int32_t x93 = INT32_MIN;
	int8_t x94 = INT8_MIN;
	uint64_t x95 = 37917103358671LLU;
	uint32_t x96 = UINT32_MAX;
	volatile uint64_t t21 = 59499444721LLU;

	t21 = ((x93+(x94|x95))&x96);

	if (t21 != 2147483599LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x97 = 0U;
	volatile int32_t x98 = INT32_MAX;
	int8_t x99 = 1;
	volatile int8_t x100 = INT8_MIN;
	volatile uint32_t t22 = 5350U;

	t22 = ((x97+(x98|x99))&x100);

	if (t22 != 2147483520U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x101 = -148;
	int32_t x102 = INT32_MAX;
	int32_t x103 = -1;
	int16_t x104 = INT16_MAX;

	t23 = ((x101+(x102|x103))&x104);

	if (t23 != 32619) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x105 = UINT64_MAX;
	int64_t x107 = 119301LL;

	t24 = ((x105+(x106|x107))&x108);

	if (t24 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x109 = 27883557;
	int8_t x110 = 1;
	int8_t x111 = INT8_MAX;
	volatile int64_t x112 = 8LL;
	int64_t t25 = 4252148390843574LL;

	t25 = ((x109+(x110|x111))&x112);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x113 = 2U;
	int32_t x114 = 438;
	int64_t x115 = 1029658796640794314LL;
	static int8_t x116 = INT8_MAX;
	int64_t t26 = -377LL;

	t26 = ((x113+(x114|x115))&x116);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x117 = UINT32_MAX;
	int64_t x118 = INT64_MIN;
	uint16_t x120 = UINT16_MAX;
	uint64_t t27 = 254LLU;

	t27 = ((x117+(x118|x119))&x120);

	if (t27 != 65534LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x123 = 1141;
	static volatile int32_t t28 = 7;

	t28 = ((x121+(x122|x123))&x124);

	if (t28 != 1146) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x125 = 2LL;
	volatile uint64_t x126 = UINT64_MAX;
	int16_t x127 = INT16_MAX;
	volatile int64_t x128 = INT64_MAX;
	static uint64_t t29 = 171707513493443553LLU;

	t29 = ((x125+(x126|x127))&x128);

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x133 = 1415277LLU;
	uint64_t x134 = 16772999LLU;
	static int8_t x135 = -50;
	int8_t x136 = INT8_MIN;
	volatile uint64_t t30 = 148205109250231LLU;

	t30 = ((x133+(x134|x135))&x136);

	if (t30 != 1415168LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x137 = -1;
	static int8_t x139 = -1;

	t31 = ((x137+(x138|x139))&x140);

	if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x141 = UINT32_MAX;
	int16_t x143 = INT16_MIN;
	int64_t t32 = 32LL;

	t32 = ((x141+(x142|x143))&x144);

	if (t32 != 2448939316LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x147 = 16606LLU;
	static int8_t x148 = 13;
	uint64_t t33 = 298236979LLU;

	t33 = ((x145+(x146|x147))&x148);

	if (t33 != 13LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x149 = INT32_MIN;
	int16_t x151 = -20;
	uint8_t x152 = 33U;

	t34 = ((x149+(x150|x151))&x152);

	if (t34 != 33LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x153 = -1;
	volatile uint64_t x155 = 463702LLU;
	int64_t x156 = INT64_MIN;
	volatile uint64_t t35 = 34471534926673317LLU;

	t35 = ((x153+(x154|x155))&x156);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x157 = 1015;
	volatile uint32_t x158 = 116U;
	static int8_t x159 = 26;
	int8_t x160 = -1;
	volatile uint32_t t36 = 1876579U;

	t36 = ((x157+(x158|x159))&x160);

	if (t36 != 1141U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x165 = INT16_MAX;
	volatile int16_t x166 = INT16_MIN;
	int8_t x167 = -13;
	int8_t x168 = INT8_MAX;
	int32_t t37 = 6263928;

	t37 = ((x165+(x166|x167))&x168);

	if (t37 != 114) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x169 = 2011764006611103LLU;
	int32_t x171 = INT32_MIN;
	static uint64_t t38 = 19611045807189LLU;

	t38 = ((x169+(x170|x171))&x172);

	if (t38 != 6LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x175 = 179708048U;
	uint32_t t39 = 42U;

	t39 = ((x173+(x174|x175))&x176);

	if (t39 != 184446388U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x177 = 0U;
	uint32_t x179 = 98U;
	int16_t x180 = 1;

	t40 = ((x177+(x178|x179))&x180);

	if (t40 != 1U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x181 = INT16_MIN;
	static int64_t x182 = 458092603LL;
	static int32_t x183 = INT32_MAX;

	t41 = ((x181+(x182|x183))&x184);

	if (t41 != 2147450879LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x185 = -31795LL;
	int8_t x186 = INT8_MIN;
	volatile int64_t x187 = INT64_MAX;
	volatile int64_t t42 = -4377LL;

	t42 = ((x185+(x186|x187))&x188);

	if (t42 != 76LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x189 = UINT16_MAX;
	uint8_t x190 = UINT8_MAX;
	int16_t x191 = INT16_MAX;
	static int32_t x192 = 1;
	int32_t t43 = 2;

	t43 = ((x189+(x190|x191))&x192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x193 = 288162775939492LLU;
	volatile int64_t x195 = INT64_MAX;

	t44 = ((x193+(x194|x195))&x196);

	if (t44 != 9223660199630715299LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x197 = -11;
	int64_t x198 = -1LL;
	uint8_t x199 = 15U;
	int64_t x200 = -1LL;
	int64_t t45 = 647LL;

	t45 = ((x197+(x198|x199))&x200);

	if (t45 != -12LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x201 = INT32_MAX;
	volatile int32_t x202 = -801677020;
	static volatile int16_t x203 = INT16_MIN;
	volatile int32_t t46 = 370;

	t46 = ((x201+(x202|x203))&x204);

	if (t46 != 35) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x206 = INT64_MAX;
	int32_t x207 = INT32_MIN;
	int8_t x208 = INT8_MIN;
	static int64_t t47 = 1986148477LL;

	t47 = ((x205+(x206|x207))&x208);

	if (t47 != 128LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x209 = 11;
	volatile int64_t x210 = 21942LL;
	int16_t x211 = -1;
	uint64_t x212 = 12834LLU;
	volatile uint64_t t48 = 382749LLU;

	t48 = ((x209+(x210|x211))&x212);

	if (t48 != 2LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x213 = UINT16_MAX;
	int32_t x215 = -1;
	int8_t x216 = INT8_MAX;

	t49 = ((x213+(x214|x215))&x216);

	if (t49 != 126) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x217 = 48622;
	int32_t x218 = INT32_MAX;
	volatile uint64_t x220 = 34507654419096LLU;
	static volatile uint64_t t50 = 174526431707LLU;

	t50 = ((x217+(x218|x219))&x220);

	if (t50 != 31207232409736LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x229 = 8933303U;
	uint32_t x230 = UINT32_MAX;
	int64_t x231 = -2LL;
	volatile int64_t x232 = -1LL;
	static int64_t t51 = 100LL;

	t51 = ((x229+(x230|x231))&x232);

	if (t51 != 8933302LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x233 = UINT64_MAX;
	int16_t x234 = INT16_MAX;
	int64_t x235 = -1LL;
	int8_t x236 = -2;
	volatile uint64_t t52 = 159261LLU;

	t52 = ((x233+(x234|x235))&x236);

	if (t52 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x237 = 37U;
	int32_t x238 = INT32_MIN;
	int64_t x239 = INT64_MIN;
	static volatile int16_t x240 = INT16_MIN;
	volatile int64_t t53 = 1112270598169529216LL;

	t53 = ((x237+(x238|x239))&x240);

	if (t53 != -2147483648LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x242 = -130702880;
	static int16_t x243 = INT16_MIN;
	int64_t x244 = INT64_MIN;
	int64_t t54 = INT64_MIN;

	t54 = ((x241+(x242|x243))&x244);

	if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x245 = 56981145;
	volatile int64_t x246 = 20938LL;
	int8_t x247 = -1;
	int8_t x248 = -1;
	int64_t t55 = -6LL;

	t55 = ((x245+(x246|x247))&x248);

	if (t55 != 56981144LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x249 = INT16_MIN;
	int64_t x250 = INT64_MAX;
	int64_t t56 = -27LL;

	t56 = ((x249+(x250|x251))&x252);

	if (t56 != -32896LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x253 = 115U;
	volatile int16_t x255 = INT16_MIN;
	static int32_t x256 = 226118879;
	volatile int32_t t57 = -348544302;

	t57 = ((x253+(x254|x255))&x256);

	if (t57 != 226118663) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x257 = 108U;
	int32_t x258 = 104135;
	int32_t x260 = 4822;
	volatile int32_t t58 = -41;

	t58 = ((x257+(x258|x259))&x260);

	if (t58 != 4626) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x261 = 288681LLU;
	int16_t x262 = -11;
	int32_t x263 = 814;
	static uint64_t x264 = 33873733LLU;
	volatile uint64_t t59 = 66019022LLU;

	t59 = ((x261+(x262|x263))&x264);

	if (t59 != 280320LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x265 = -1;
	int16_t x266 = INT16_MAX;
	static volatile int32_t x267 = -1;
	static int32_t x268 = -1;

	t60 = ((x265+(x266|x267))&x268);

	if (t60 != -2) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x269 = -1LL;
	int16_t x270 = INT16_MIN;
	int64_t x271 = INT64_MIN;
	int8_t x272 = -1;
	int64_t t61 = 264323007070LL;

	t61 = ((x269+(x270|x271))&x272);

	if (t61 != -32769LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x277 = -1LL;
	int16_t x278 = INT16_MAX;
	int16_t x280 = INT16_MIN;
	int64_t t62 = 471341790057973166LL;

	t62 = ((x277+(x278|x279))&x280);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x281 = INT64_MAX;
	static int32_t x282 = INT32_MIN;
	int64_t x283 = 161460239906697824LL;
	int16_t x284 = -1;
	static int64_t t63 = 1098467077368074LL;

	t63 = ((x281+(x282|x283))&x284);

	if (t63 != 9223372035059413599LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x285 = INT16_MAX;
	uint64_t x286 = 1032866866LLU;
	uint64_t x287 = 117381174791218LLU;
	volatile uint64_t x288 = 1856LLU;
	volatile uint64_t t64 = 57867769LLU;

	t64 = ((x285+(x286|x287))&x288);

	if (t64 != 1024LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x289 = INT16_MIN;
	uint64_t x290 = 0LLU;
	int16_t x291 = 5778;
	int16_t x292 = INT16_MIN;
	volatile uint64_t t65 = 59934763LLU;

	t65 = ((x289+(x290|x291))&x292);

	if (t65 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x293 = -1915LL;
	int64_t x294 = -6739955LL;
	uint64_t x295 = 1471553618332LLU;
	int32_t x296 = INT32_MAX;
	volatile uint64_t t66 = 8093469LLU;

	t66 = ((x293+(x294|x295))&x296);

	if (t66 != 2147443234LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x297 = INT8_MAX;
	uint8_t x298 = 4U;
	static uint8_t x299 = 45U;
	volatile int16_t x300 = INT16_MIN;
	static volatile int32_t t67 = 340;

	t67 = ((x297+(x298|x299))&x300);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x302 = -1375163742125981416LL;
	volatile int16_t x303 = -13;
	int64_t t68 = 338372380559302LL;

	t68 = ((x301+(x302|x303))&x304);

	if (t68 != -256LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x305 = -1;
	int32_t x307 = -638027;

	t69 = ((x305+(x306|x307))&x308);

	if (t69 != 17342) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x309 = INT8_MIN;
	int64_t x310 = 106870998113LL;
	static volatile uint64_t x311 = UINT64_MAX;
	uint64_t x312 = 3221LLU;
	static uint64_t t70 = 3282782003281396956LLU;

	t70 = ((x309+(x310|x311))&x312);

	if (t70 != 3093LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x313 = 14;
	int64_t x316 = -304987266764714095LL;
	int64_t t71 = -3727614233220763LL;

	t71 = ((x313+(x314|x315))&x316);

	if (t71 != -304987266764714623LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x318 = INT64_MIN;
	int64_t x319 = 2910767531LL;
	int64_t t72 = -184370232578292990LL;

	t72 = ((x317+(x318|x319))&x320);

	if (t72 != 142LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x324 = 2083765559950005LL;
	int64_t t73 = 5331LL;

	t73 = ((x321+(x322|x323))&x324);

	if (t73 != 10500117LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x326 = -1;
	static uint8_t x327 = 53U;
	uint64_t t74 = 64373988LLU;

	t74 = ((x325+(x326|x327))&x328);

	if (t74 != 254LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x329 = -1LL;
	int32_t x330 = INT32_MIN;
	int16_t x332 = -1;
	int64_t t75 = 17504LL;

	t75 = ((x329+(x330|x331))&x332);

	if (t75 != -2147483648LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x333 = 97821950825557LL;
	static uint32_t x334 = 15U;
	volatile uint8_t x335 = 4U;
	int64_t t76 = 5428070120594859LL;

	t76 = ((x333+(x334|x335))&x336);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x339 = INT32_MIN;
	volatile int8_t x340 = -6;
	volatile uint32_t t77 = 63U;

	t77 = ((x337+(x338|x339))&x340);

	if (t77 != 4294967290U) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x341 = 466479968LL;
	static int64_t x342 = INT64_MIN;
	int8_t x343 = -1;
	int8_t x344 = INT8_MIN;
	int64_t t78 = -42847089701LL;

	t78 = ((x341+(x342|x343))&x344);

	if (t78 != 466479872LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x346 = 3238U;
	volatile int16_t x347 = INT16_MAX;

	t79 = ((x345+(x346|x347))&x348);

	if (t79 != 32767LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x349 = -1;
	static int16_t x350 = 1286;
	static int16_t x352 = INT16_MIN;
	static int32_t t80 = 3797;

	t80 = ((x349+(x350|x351))&x352);

	if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x353 = INT16_MAX;
	uint16_t x354 = 1386U;
	int64_t x355 = -322149693LL;
	volatile int32_t x356 = -1;
	static volatile int64_t t81 = 447979157LL;

	t81 = ((x353+(x354|x355))&x356);

	if (t81 != -322115606LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x357 = INT8_MIN;
	int16_t x358 = INT16_MIN;
	static int64_t x360 = 1310452965LL;
	static int64_t t82 = 93LL;

	t82 = ((x357+(x358|x359))&x360);

	if (t82 != 1310420096LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x361 = 0;
	static volatile int64_t x362 = -1LL;
	int16_t x363 = -2;
	int16_t x364 = INT16_MIN;
	int64_t t83 = -34263237953LL;

	t83 = ((x361+(x362|x363))&x364);

	if (t83 != -32768LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x365 = UINT32_MAX;
	static int8_t x366 = INT8_MAX;
	int32_t x368 = INT32_MAX;

	t84 = ((x365+(x366|x367))&x368);

	if (t84 != 2147483646U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x369 = 129302307255LLU;
	int32_t x370 = INT32_MIN;
	int32_t x371 = -1;
	uint16_t x372 = 13U;

	t85 = ((x369+(x370|x371))&x372);

	if (t85 != 4LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x373 = INT32_MAX;
	volatile int8_t x374 = 6;
	int8_t x375 = -1;
	static int64_t x376 = 6730183668472LL;
	static int64_t t86 = 10011LL;

	t86 = ((x373+(x374|x375))&x376);

	if (t86 != 2117399288LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x379 = INT64_MAX;
	volatile uint32_t x380 = 424U;

	t87 = ((x377+(x378|x379))&x380);

	if (t87 != 424LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x381 = 37U;
	uint8_t x383 = UINT8_MAX;
	static int32_t x384 = INT32_MIN;
	volatile int32_t t88 = 14;

	t88 = ((x381+(x382|x383))&x384);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x385 = INT8_MAX;
	int64_t x386 = -5768LL;
	int64_t x387 = -13758639LL;
	static int64_t x388 = INT64_MAX;
	int64_t t89 = 207887LL;

	t89 = ((x385+(x386|x387))&x388);

	if (t89 != 9223372036854771704LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x389 = -1;
	uint64_t x390 = 3295LLU;
	int8_t x392 = INT8_MIN;

	t90 = ((x389+(x390|x391))&x392);

	if (t90 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x395 = -1;
	volatile uint64_t t91 = 3293LLU;

	t91 = ((x393+(x394|x395))&x396);

	if (t91 != 171798691840LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x401 = -1;
	uint32_t x402 = 17571U;
	volatile int8_t x403 = -1;
	static uint8_t x404 = 1U;
	static volatile uint32_t t92 = 75425U;

	t92 = ((x401+(x402|x403))&x404);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x405 = 384107672LL;
	volatile int64_t x406 = INT64_MIN;
	int16_t x407 = 1;
	static uint16_t x408 = 5U;
	volatile int64_t t93 = -294LL;

	t93 = ((x405+(x406|x407))&x408);

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x413 = UINT16_MAX;
	volatile uint16_t x415 = UINT16_MAX;
	static volatile int64_t x416 = 2293665LL;
	volatile int64_t t94 = 334557LL;

	t94 = ((x413+(x414|x415))&x416);

	if (t94 != 65440LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x417 = 1;
	static volatile int64_t x420 = INT64_MIN;
	volatile int64_t t95 = 1398704610LL;

	t95 = ((x417+(x418|x419))&x420);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x421 = INT32_MAX;
	int32_t x423 = -1;
	uint8_t x424 = 2U;
	volatile int64_t t96 = -2788977LL;

	t96 = ((x421+(x422|x423))&x424);

	if (t96 != 2LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x425 = 241U;
	int8_t x426 = 1;
	int32_t x427 = 3;
	static int32_t x428 = INT32_MIN;
	volatile int32_t t97 = 597745072;

	t97 = ((x425+(x426|x427))&x428);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x430 = UINT32_MAX;
	volatile uint8_t x431 = UINT8_MAX;
	int16_t x432 = INT16_MAX;
	volatile uint32_t t98 = 122312U;

	t98 = ((x429+(x430|x431))&x432);

	if (t98 != 32766U) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x433 = 21003574U;
	int16_t x434 = 10931;
	int64_t x435 = INT64_MIN;
	int64_t x436 = 292002507544LL;
	static volatile int64_t t99 = 12LL;

	t99 = ((x433+(x434|x435))&x436);

	if (t99 != 41736LL) { NG(); } else { ; }
	
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

