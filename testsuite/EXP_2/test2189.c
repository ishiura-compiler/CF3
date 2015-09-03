#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -431707285331LL;
uint64_t t0 = 10873LLU;
int32_t x11 = -1;
static uint32_t x12 = 4631U;
int64_t x13 = 8546133626504LL;
int32_t x26 = INT32_MIN;
int32_t x30 = INT32_MIN;
int32_t x31 = INT32_MAX;
static int16_t x33 = INT16_MIN;
volatile int64_t t6 = 28724536LL;
uint64_t x39 = 210486559634326LLU;
int16_t x42 = -1;
int64_t t8 = 18325996350834333LL;
volatile uint64_t x45 = 1226607944LLU;
uint32_t x48 = 37371798U;
static int64_t x52 = INT64_MAX;
volatile int64_t t10 = 7LL;
int32_t x63 = 28370738;
int32_t x72 = -39;
static uint8_t x73 = 0U;
uint8_t x76 = 27U;
volatile uint32_t x77 = 0U;
uint64_t x79 = UINT64_MAX;
volatile int64_t t18 = -1LL;
volatile int64_t x100 = -2536583112453LL;
static int16_t x102 = -483;
uint16_t x105 = 1182U;
static uint16_t x107 = 3U;
volatile uint64_t t24 = 8615666477745998443LLU;
static volatile int16_t x114 = 134;
static int32_t x115 = 39331;
int64_t x123 = 161906LL;
uint32_t x124 = 2437016U;
volatile int64_t t27 = -20461679259703126LL;
int64_t x129 = INT64_MAX;
static int64_t t29 = 3928011690672LL;
volatile int16_t x151 = INT16_MIN;
int32_t x155 = -196885;
static uint32_t t34 = 1039354332U;
int64_t x157 = INT64_MIN;
static int32_t x159 = -254916;
static int8_t x162 = 0;
int8_t x163 = -1;
int32_t t37 = -1680995;
static int64_t x169 = INT64_MAX;
int8_t x171 = -1;
int8_t x182 = INT8_MAX;
int8_t x185 = -1;
int64_t x188 = INT64_MIN;
uint8_t x215 = UINT8_MAX;
volatile int64_t t49 = -10886768LL;
int8_t x217 = 0;
static int32_t x218 = -1;
volatile int16_t x224 = -1012;
int8_t x227 = -41;
uint16_t x231 = UINT16_MAX;
uint32_t x233 = 145165U;
volatile int64_t x235 = -14784378539892276LL;
int64_t x236 = INT64_MIN;
int32_t x241 = INT32_MIN;
int16_t x243 = -1526;
int16_t x249 = 0;
volatile int64_t x260 = INT64_MIN;
int8_t x262 = INT8_MIN;
static int16_t x271 = INT16_MIN;
int32_t x276 = INT32_MIN;
volatile uint64_t x282 = UINT64_MAX;
uint16_t x284 = 23658U;
static int64_t x288 = -1LL;
int8_t x292 = INT8_MIN;
static int32_t x294 = -1;
int8_t x298 = -1;
int8_t x300 = INT8_MIN;
static uint64_t t70 = 0LLU;
int32_t x302 = INT32_MAX;
uint64_t x305 = 110923LLU;
uint64_t t72 = 23249LLU;
int64_t x313 = INT64_MIN;
static int16_t x316 = INT16_MIN;
volatile int16_t x321 = -132;
int8_t x322 = -1;
static int8_t x324 = INT8_MIN;
int64_t x329 = -3364328567059902021LL;
volatile uint16_t x333 = UINT16_MAX;
static volatile int16_t x335 = INT16_MIN;
uint64_t x342 = 10540124831LLU;
uint32_t x344 = UINT32_MAX;
int16_t x346 = INT16_MIN;
volatile int8_t x351 = -6;
uint16_t x354 = 2298U;
volatile int32_t x355 = INT32_MIN;
volatile uint64_t x361 = 3765204173601377LLU;
int8_t x369 = -1;
int32_t x372 = INT32_MIN;
uint8_t x373 = 3U;
uint16_t x377 = 186U;
int64_t x379 = INT64_MIN;
static int32_t x381 = INT32_MAX;
uint32_t x384 = 338U;
static int32_t x390 = INT32_MIN;
static uint8_t x393 = 13U;
volatile int64_t x395 = 382802445729618LL;
int64_t t96 = -772986LL;
int64_t x413 = INT64_MAX;
static uint8_t x414 = UINT8_MAX;
volatile int16_t x416 = 1283;


void f0(void) {
	volatile uint64_t x1 = 15584808524717008LLU;
	static uint64_t x3 = 68998324LLU;
	int64_t x4 = -66145310LL;

	t0 = ((x1^(x2^x3))%x4);

	if (t0 != 18431159417524410313LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int32_t x6 = INT32_MIN;
	int8_t x7 = -1;
	uint32_t x8 = 1U;
	uint32_t t1 = 367953532U;

	t1 = ((x5^(x6^x7))%x8);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 31;
	uint8_t x10 = 16U;
	uint32_t t2 = 8077U;

	t2 = ((x9^(x10^x11))%x12);

	if (t2 != 1902U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = -1LL;
	volatile int32_t x15 = -8905332;
	uint32_t x16 = 264632086U;
	int64_t t3 = -193584LL;

	t3 = ((x13^(x14^x15))%x16);

	if (t3 != 113650615LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x25 = 58LLU;
	int32_t x27 = INT32_MIN;
	int32_t x28 = 2793;
	uint64_t t4 = 81096LLU;

	t4 = ((x25^(x26^x27))%x28);

	if (t4 != 58LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = 42209969;
	int8_t x32 = 1;
	int32_t t5 = 8137;

	t5 = ((x29^(x30^x31))%x32);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x34 = 7787628232771424LL;
	volatile uint32_t x35 = 82U;
	int32_t x36 = -1;

	t6 = ((x33^(x34^x35))%x36);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x37 = INT32_MAX;
	int64_t x38 = INT64_MIN;
	uint16_t x40 = 3U;
	volatile uint64_t t7 = 18227511913533LLU;

	t7 = ((x37^(x38^x39))%x40);

	if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x41 = INT64_MIN;
	int16_t x43 = INT16_MAX;
	volatile int8_t x44 = INT8_MIN;

	t8 = ((x41^(x42^x43))%x44);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x46 = 581357729062056LLU;
	volatile int32_t x47 = INT32_MAX;
	uint64_t t9 = 4LLU;

	t9 = ((x45^(x46^x47))%x48);

	if (t9 != 3687787LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x49 = 8104U;
	int8_t x50 = -1;
	int8_t x51 = INT8_MAX;

	t10 = ((x49^(x50^x51))%x52);

	if (t10 != -8152LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x53 = 4LLU;
	int64_t x54 = INT64_MIN;
	volatile int16_t x55 = 279;
	uint16_t x56 = 836U;
	uint64_t t11 = 10886528040116772LLU;

	t11 = ((x53^(x54^x55))%x56);

	if (t11 != 635LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = INT64_MIN;
	uint64_t x58 = UINT64_MAX;
	uint64_t x59 = 3709359LLU;
	int64_t x60 = INT64_MAX;
	volatile uint64_t t12 = 60196656LLU;

	t12 = ((x57^(x58^x59))%x60);

	if (t12 != 9223372036851066448LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x61 = 20U;
	int64_t x62 = -1LL;
	volatile int64_t x64 = INT64_MAX;
	int64_t t13 = 1713LL;

	t13 = ((x61^(x62^x63))%x64);

	if (t13 != -28370727LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = INT32_MAX;
	static int8_t x66 = INT8_MAX;
	uint16_t x67 = UINT16_MAX;
	static volatile int32_t x68 = INT32_MIN;
	int32_t t14 = 312365709;

	t14 = ((x65^(x66^x67))%x68);

	if (t14 != 2147418239) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x69 = INT32_MAX;
	int64_t x70 = -1LL;
	int64_t x71 = 460912488384LL;
	int64_t t15 = 178451044583LL;

	t15 = ((x69^(x70^x71))%x72);

	if (t15 != -3LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x74 = -205762489937956056LL;
	uint64_t x75 = 1125846076848659341LLU;
	volatile uint64_t t16 = 31LLU;

	t16 = ((x73^(x74^x75))%x76);

	if (t16 != 5LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x78 = -1;
	volatile uint64_t x80 = 77137891674677LLU;
	volatile uint64_t t17 = 95651923LLU;

	t17 = ((x77^(x78^x79))%x80);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = INT8_MIN;
	static int32_t x86 = -1;
	static volatile int64_t x87 = -1LL;
	int32_t x88 = INT32_MIN;

	t18 = ((x85^(x86^x87))%x88);

	if (t18 != -128LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x89 = INT64_MAX;
	static volatile int32_t x90 = INT32_MIN;
	volatile uint32_t x91 = 54514836U;
	int64_t x92 = INT64_MAX;
	int64_t t19 = -1LL;

	t19 = ((x89^(x90^x91))%x92);

	if (t19 != 9223372034652777323LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x93 = UINT32_MAX;
	static uint8_t x94 = 53U;
	volatile int32_t x95 = -1;
	uint8_t x96 = 33U;
	uint32_t t20 = 7U;

	t20 = ((x93^(x94^x95))%x96);

	if (t20 != 20U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x97 = 166839451U;
	volatile int32_t x98 = 9;
	static int32_t x99 = -1;
	int64_t t21 = 5131972448LL;

	t21 = ((x97^(x98^x99))%x100);

	if (t21 != 4128127853LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x101 = 1565LLU;
	uint16_t x103 = 21U;
	int32_t x104 = 14769585;
	uint64_t t22 = 281424729162718LLU;

	t22 = ((x101^(x102^x103))%x104);

	if (t22 != 5396369LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x106 = INT16_MIN;
	int16_t x108 = -1;
	int32_t t23 = -24;

	t23 = ((x105^(x106^x107))%x108);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x109 = 21U;
	static uint64_t x110 = 871670LLU;
	int32_t x111 = INT32_MIN;
	uint32_t x112 = 31123289U;

	t24 = ((x109^(x110^x111))%x112);

	if (t24 != 23643399LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x113 = 11;
	static uint16_t x116 = 2U;
	static int32_t t25 = -464604380;

	t25 = ((x113^(x114^x115))%x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x117 = UINT64_MAX;
	static int8_t x118 = INT8_MIN;
	int32_t x119 = INT32_MIN;
	int8_t x120 = -1;
	static volatile uint64_t t26 = 100158LLU;

	t26 = ((x117^(x118^x119))%x120);

	if (t26 != 18446744071562068095LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint32_t x121 = UINT32_MAX;
	int32_t x122 = INT32_MAX;

	t27 = ((x121^(x122^x123))%x124);

	if (t27 != 634458LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x130 = -6;
	volatile int64_t x131 = INT64_MIN;
	volatile int16_t x132 = -1;
	int64_t t28 = -148879176306928595LL;

	t28 = ((x129^(x130^x131))%x132);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x133 = -52;
	volatile int32_t x134 = -1;
	uint8_t x135 = UINT8_MAX;
	int64_t x136 = INT64_MIN;

	t29 = ((x133^(x134^x135))%x136);

	if (t29 != 204LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x137 = -1;
	uint8_t x138 = UINT8_MAX;
	int64_t x139 = INT64_MIN;
	int16_t x140 = INT16_MIN;
	int64_t t30 = 94535463338464367LL;

	t30 = ((x137^(x138^x139))%x140);

	if (t30 != 32512LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x141 = -1;
	volatile int8_t x142 = INT8_MAX;
	int8_t x143 = -13;
	volatile uint8_t x144 = 88U;
	int32_t t31 = -17018;

	t31 = ((x141^(x142^x143))%x144);

	if (t31 != 27) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x145 = 12873U;
	volatile uint64_t x146 = 1076687LLU;
	int8_t x147 = INT8_MIN;
	int32_t x148 = INT32_MAX;
	uint64_t t32 = 556398364330157LLU;

	t32 = ((x145^(x146^x147))%x148);

	if (t32 != 2146410505LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x149 = 2U;
	uint64_t x150 = 22376574181LLU;
	volatile int64_t x152 = INT64_MIN;
	uint64_t t33 = 843554754562194LLU;

	t33 = ((x149^(x150^x151))%x152);

	if (t33 != 9223372014478224615LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x153 = 102U;
	volatile int8_t x154 = -1;
	uint32_t x156 = 2831283U;

	t34 = ((x153^(x154^x155))%x156);

	if (t34 != 196978U) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x158 = UINT32_MAX;
	uint64_t x160 = 3837440LLU;
	static uint64_t t35 = 106572179694LLU;

	t35 = ((x157^(x158^x159))%x160);

	if (t35 != 3480003LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x161 = 81738168LLU;
	int16_t x164 = INT16_MIN;
	volatile uint64_t t36 = 828211869LLU;

	t36 = ((x161^(x162^x163))%x164);

	if (t36 != 18446744073627813447LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x165 = 1;
	int16_t x166 = INT16_MIN;
	volatile int8_t x167 = INT8_MAX;
	uint8_t x168 = UINT8_MAX;

	t37 = ((x165^(x166^x167))%x168);

	if (t37 != -2) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x170 = -1;
	uint16_t x172 = 16201U;
	volatile int64_t t38 = 1LL;

	t38 = ((x169^(x170^x171))%x172);

	if (t38 != 4496LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x173 = 11309771LLU;
	int8_t x174 = INT8_MIN;
	int32_t x175 = 100703;
	static uint64_t x176 = 95300LLU;
	volatile uint64_t t39 = 6741002567559LLU;

	t39 = ((x173^(x174^x175))%x176);

	if (t39 != 75340LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x177 = INT8_MIN;
	volatile int64_t x178 = INT64_MAX;
	int32_t x179 = INT32_MIN;
	int64_t x180 = -1LL;
	static volatile int64_t t40 = 24LL;

	t40 = ((x177^(x178^x179))%x180);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x181 = 2242797112LLU;
	int64_t x183 = INT64_MAX;
	uint16_t x184 = UINT16_MAX;
	volatile uint64_t t41 = 100280114343157140LLU;

	t41 = ((x181^(x182^x183))%x184);

	if (t41 != 39945LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x186 = 18;
	uint16_t x187 = UINT16_MAX;
	int64_t t42 = -48625850143770LL;

	t42 = ((x185^(x186^x187))%x188);

	if (t42 != -65518LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x189 = INT16_MIN;
	int32_t x190 = -1;
	int16_t x191 = INT16_MAX;
	int16_t x192 = -1;
	volatile int32_t t43 = -3;

	t43 = ((x189^(x190^x191))%x192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x193 = 941601449770LL;
	int32_t x194 = -1;
	volatile uint64_t x195 = UINT64_MAX;
	int8_t x196 = 7;
	uint64_t t44 = 1233369605880287LLU;

	t44 = ((x193^(x194^x195))%x196);

	if (t44 != 2LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x197 = 2115328U;
	uint8_t x198 = UINT8_MAX;
	int16_t x199 = 1;
	volatile uint32_t x200 = 1949834852U;
	volatile uint32_t t45 = 25U;

	t45 = ((x197^(x198^x199))%x200);

	if (t45 != 2115582U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x201 = 952U;
	volatile uint16_t x202 = 424U;
	uint16_t x203 = 25611U;
	uint16_t x204 = 14215U;
	uint32_t t46 = 174955969U;

	t46 = ((x201^(x202^x203))%x204);

	if (t46 != 11924U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x205 = 8942;
	static int64_t x206 = INT64_MIN;
	int64_t x207 = INT64_MIN;
	uint16_t x208 = UINT16_MAX;
	volatile int64_t t47 = 661961LL;

	t47 = ((x205^(x206^x207))%x208);

	if (t47 != 8942LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x209 = INT32_MIN;
	int64_t x210 = -1LL;
	uint16_t x211 = 25048U;
	int32_t x212 = 907;
	static volatile int64_t t48 = -274426123535LL;

	t48 = ((x209^(x210^x211))%x212);

	if (t48 != 49LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x213 = -777363;
	int64_t x214 = INT64_MIN;
	static int16_t x216 = 26;

	t49 = ((x213^(x214^x215))%x216);

	if (t49 != 4LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x219 = INT32_MAX;
	static uint8_t x220 = 7U;
	int32_t t50 = -97002178;

	t50 = ((x217^(x218^x219))%x220);

	if (t50 != -2) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x221 = -1;
	int64_t x222 = -3414068366883597356LL;
	uint8_t x223 = 1U;
	static volatile int64_t t51 = -164579740329242831LL;

	t51 = ((x221^(x222^x223))%x224);

	if (t51 != 118LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x225 = -1;
	uint64_t x226 = UINT64_MAX;
	uint8_t x228 = 4U;
	uint64_t t52 = 6680LLU;

	t52 = ((x225^(x226^x227))%x228);

	if (t52 != 3LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x229 = UINT64_MAX;
	static int16_t x230 = INT16_MIN;
	int16_t x232 = INT16_MAX;
	uint64_t t53 = 491419286LLU;

	t53 = ((x229^(x230^x231))%x232);

	if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x234 = INT64_MAX;
	volatile int64_t t54 = 13LL;

	t54 = ((x233^(x234^x235))%x236);

	if (t54 != -9208587658314749634LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x237 = 2246048U;
	int64_t x238 = -1LL;
	uint32_t x239 = 520U;
	static int32_t x240 = INT32_MAX;
	volatile int64_t t55 = -324136327LL;

	t55 = ((x237^(x238^x239))%x240);

	if (t55 != -2246569LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x242 = UINT8_MAX;
	int32_t x244 = 65282;
	volatile int32_t t56 = -104430683;

	t56 = ((x241^(x242^x243))%x244);

	if (t56 != 30967) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x245 = -1;
	int8_t x246 = 11;
	volatile int64_t x247 = 5LL;
	volatile int64_t x248 = 1LL;
	volatile int64_t t57 = -999705592LL;

	t57 = ((x245^(x246^x247))%x248);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x250 = -103;
	static int64_t x251 = INT64_MAX;
	int8_t x252 = -1;
	volatile int64_t t58 = 8LL;

	t58 = ((x249^(x250^x251))%x252);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x253 = INT32_MIN;
	volatile int16_t x254 = INT16_MAX;
	static int16_t x255 = 16343;
	uint32_t x256 = UINT32_MAX;
	volatile uint32_t t59 = 6161244U;

	t59 = ((x253^(x254^x255))%x256);

	if (t59 != 2147500072U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x257 = INT64_MAX;
	uint16_t x258 = 155U;
	int32_t x259 = -1;
	volatile int64_t t60 = -28012169476145955LL;

	t60 = ((x257^(x258^x259))%x260);

	if (t60 != -9223372036854775653LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x261 = 6U;
	uint32_t x263 = 3U;
	int32_t x264 = -1;
	uint32_t t61 = 114194015U;

	t61 = ((x261^(x262^x263))%x264);

	if (t61 != 4294967173U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x265 = -62;
	static volatile int16_t x266 = -1;
	int16_t x267 = INT16_MIN;
	volatile uint64_t x268 = UINT64_MAX;
	volatile uint64_t t62 = 1LLU;

	t62 = ((x265^(x266^x267))%x268);

	if (t62 != 18446744073709518909LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x269 = -89;
	int32_t x270 = 657631;
	int16_t x272 = -1;
	int32_t t63 = -96224;

	t63 = ((x269^(x270^x271))%x272);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x273 = UINT8_MAX;
	volatile uint8_t x274 = 13U;
	static int64_t x275 = INT64_MAX;
	int64_t t64 = 13LL;

	t64 = ((x273^(x274^x275))%x276);

	if (t64 != 2147483405LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x277 = INT16_MIN;
	int16_t x278 = -1;
	static int8_t x279 = INT8_MIN;
	volatile int8_t x280 = INT8_MIN;
	int32_t t65 = 1;

	t65 = ((x277^(x278^x279))%x280);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x281 = INT8_MAX;
	int64_t x283 = -28844441836LL;
	uint64_t t66 = 5342349LLU;

	t66 = ((x281^(x282^x283))%x284);

	if (t66 != 16698LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x285 = 5U;
	int64_t x286 = INT64_MIN;
	uint64_t x287 = 531LLU;
	static uint64_t t67 = 19660LLU;

	t67 = ((x285^(x286^x287))%x288);

	if (t67 != 9223372036854776342LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x289 = INT8_MIN;
	uint32_t x290 = UINT32_MAX;
	int8_t x291 = 50;
	volatile uint32_t t68 = 766978111U;

	t68 = ((x289^(x290^x291))%x292);

	if (t68 != 77U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x293 = -1;
	uint32_t x295 = 65U;
	int32_t x296 = INT32_MIN;
	uint32_t t69 = 183U;

	t69 = ((x293^(x294^x295))%x296);

	if (t69 != 65U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x297 = -1LL;
	volatile uint64_t x299 = 5194LLU;

	t70 = ((x297^(x298^x299))%x300);

	if (t70 != 5194LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x301 = UINT64_MAX;
	static int64_t x303 = -140270156917767350LL;
	static uint16_t x304 = 31613U;
	volatile uint64_t t71 = 71328831054LLU;

	t71 = ((x301^(x302^x303))%x304);

	if (t71 != 4787LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x306 = 31U;
	int64_t x307 = INT64_MIN;
	static int16_t x308 = -5428;

	t72 = ((x305^(x306^x307))%x308);

	if (t72 != 9223372036854886740LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x309 = 746157U;
	int16_t x310 = -1;
	int16_t x311 = -1;
	uint64_t x312 = 202528LLU;
	volatile uint64_t t73 = 830054664277275LLU;

	t73 = ((x309^(x310^x311))%x312);

	if (t73 != 138573LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x314 = INT64_MAX;
	volatile int8_t x315 = INT8_MIN;
	int64_t t74 = -1136968065725435LL;

	t74 = ((x313^(x314^x315))%x316);

	if (t74 != 127LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x317 = INT64_MIN;
	uint64_t x318 = UINT64_MAX;
	volatile uint64_t x319 = UINT64_MAX;
	uint32_t x320 = 7U;
	uint64_t t75 = 365693618097568LLU;

	t75 = ((x317^(x318^x319))%x320);

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x323 = INT32_MAX;
	static int32_t t76 = 127677;

	t76 = ((x321^(x322^x323))%x324);

	if (t76 != 124) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x325 = -1;
	static volatile int32_t x326 = 1668;
	int8_t x327 = 1;
	int8_t x328 = 23;
	int32_t t77 = 0;

	t77 = ((x325^(x326^x327))%x328);

	if (t77 != -14) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x330 = INT64_MIN;
	static uint32_t x331 = UINT32_MAX;
	int32_t x332 = INT32_MAX;
	volatile int64_t t78 = -273702274LL;

	t78 = ((x329^(x330^x331))%x332);

	if (t78 != 1575809090LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x334 = 0U;
	volatile uint32_t x336 = 420U;
	volatile uint32_t t79 = 1628U;

	t79 = ((x333^(x334^x335))%x336);

	if (t79 != 247U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x337 = -15794557342195182LL;
	uint8_t x338 = 114U;
	volatile uint32_t x339 = UINT32_MAX;
	static int64_t x340 = INT64_MIN;
	static int64_t t80 = -27170919592044LL;

	t80 = ((x337^(x338^x339))%x340);

	if (t80 != -15794553457730145LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x341 = INT8_MIN;
	int16_t x343 = INT16_MIN;
	volatile uint64_t t81 = 64542426121669LLU;

	t81 = ((x341^(x342^x343))%x344);

	if (t81 != 1950217505LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x345 = 2118U;
	int32_t x347 = -2807301;
	int32_t x348 = -1;
	uint32_t t82 = 5U;

	t82 = ((x345^(x346^x347))%x348);

	if (t82 != 2793917U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x349 = 2;
	uint64_t x350 = 427350LLU;
	static int8_t x352 = 2;
	volatile uint64_t t83 = 216484550LLU;

	t83 = ((x349^(x350^x351))%x352);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x353 = 9;
	int64_t x356 = 7537280287164LL;
	int64_t t84 = 3LL;

	t84 = ((x353^(x354^x355))%x356);

	if (t84 != -2147481357LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x357 = INT16_MAX;
	int64_t x358 = -1LL;
	volatile int8_t x359 = -17;
	uint64_t x360 = UINT64_MAX;
	uint64_t t85 = 298043713517023LLU;

	t85 = ((x357^(x358^x359))%x360);

	if (t85 != 32751LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x362 = UINT32_MAX;
	uint32_t x363 = 4154055U;
	static uint64_t x364 = 344326LLU;
	static uint64_t t86 = 151194924274LLU;

	t86 = ((x361^(x362^x363))%x364);

	if (t86 != 29143LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x365 = 2;
	int32_t x366 = INT32_MIN;
	int16_t x367 = 536;
	static int64_t x368 = INT64_MIN;
	volatile int64_t t87 = 261230LL;

	t87 = ((x365^(x366^x367))%x368);

	if (t87 != -2147483110LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x370 = UINT8_MAX;
	int8_t x371 = 0;
	int32_t t88 = -139;

	t88 = ((x369^(x370^x371))%x372);

	if (t88 != -256) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x374 = 21U;
	volatile int64_t x375 = INT64_MIN;
	int32_t x376 = -108;
	volatile int64_t t89 = -61828714534685501LL;

	t89 = ((x373^(x374^x375))%x376);

	if (t89 != -58LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x378 = INT64_MIN;
	uint16_t x380 = 7234U;
	int64_t t90 = -4075150630LL;

	t90 = ((x377^(x378^x379))%x380);

	if (t90 != 186LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x382 = UINT32_MAX;
	volatile int32_t x383 = -1;
	static uint32_t t91 = 95961U;

	t91 = ((x381^(x382^x383))%x384);

	if (t91 != 309U) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x385 = 8328873U;
	int8_t x386 = -1;
	uint16_t x387 = 1U;
	static uint32_t x388 = 7326U;
	volatile uint32_t t92 = 5187465U;

	t92 = ((x385^(x386^x387))%x388);

	if (t92 != 5347U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x389 = INT64_MIN;
	int8_t x391 = INT8_MIN;
	uint16_t x392 = UINT16_MAX;
	static volatile int64_t t93 = 2LL;

	t93 = ((x389^(x390^x391))%x392);

	if (t93 != -128LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x394 = 23U;
	uint64_t x396 = UINT64_MAX;
	uint64_t t94 = 192551078LLU;

	t94 = ((x393^(x394^x395))%x396);

	if (t94 != 382802445729608LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x397 = INT64_MIN;
	uint32_t x398 = 64957U;
	volatile int64_t x399 = INT64_MIN;
	volatile int64_t x400 = -1LL;
	volatile int64_t t95 = -19LL;

	t95 = ((x397^(x398^x399))%x400);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x401 = -847103256LL;
	static uint32_t x402 = UINT32_MAX;
	int32_t x403 = INT32_MIN;
	int64_t x404 = -106740LL;

	t96 = ((x401^(x402^x403))%x404);

	if (t96 != -73713LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x405 = 3U;
	int32_t x406 = INT32_MAX;
	static int64_t x407 = INT64_MIN;
	int64_t x408 = INT64_MIN;
	int64_t t97 = 30511LL;

	t97 = ((x405^(x406^x407))%x408);

	if (t97 != -9223372034707292164LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x409 = UINT8_MAX;
	int32_t x410 = 198822093;
	static int32_t x411 = INT32_MIN;
	volatile uint16_t x412 = 4322U;
	int32_t t98 = -28;

	t98 = ((x409^(x410^x411))%x412);

	if (t98 != -1570) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x415 = 7U;
	volatile int64_t t99 = -29090570278581LL;

	t99 = ((x413^(x414^x415))%x416);

	if (t99 != 887LL) { NG(); } else { ; }
	
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

