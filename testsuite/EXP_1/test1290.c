#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x2 = -1;
int16_t x7 = INT16_MAX;
int16_t x9 = 5429;
volatile uint64_t x16 = UINT64_MAX;
volatile int8_t x19 = INT8_MAX;
volatile int8_t x21 = -1;
uint16_t x25 = 3U;
int16_t x29 = 324;
int8_t x33 = 19;
int64_t t8 = INT64_MAX;
int16_t x39 = 642;
uint16_t x43 = 50U;
int64_t x55 = 202784LL;
int64_t x64 = INT64_MIN;
volatile uint16_t x72 = 335U;
int32_t x77 = 42114;
static uint16_t x78 = 6760U;
int32_t x84 = -1;
volatile int32_t t20 = -1;
int32_t x87 = INT32_MAX;
int32_t x91 = INT32_MIN;
volatile int32_t t22 = 249181;
uint8_t x94 = UINT8_MAX;
int16_t x95 = INT16_MIN;
uint8_t x96 = 76U;
volatile int32_t x99 = 253640966;
int8_t x102 = 27;
uint16_t x104 = 3783U;
int32_t x107 = INT32_MAX;
static int16_t x110 = -122;
static volatile int32_t t27 = -49659704;
int32_t x114 = -1;
int16_t x116 = INT16_MIN;
int32_t t28 = -108689715;
int32_t t29 = 58627;
uint16_t x122 = UINT16_MAX;
int32_t x124 = INT32_MIN;
volatile int32_t t30 = 2558;
int8_t x125 = INT8_MAX;
uint32_t x128 = UINT32_MAX;
int32_t x134 = INT32_MAX;
uint16_t x142 = 430U;
int16_t x143 = -3727;
int32_t x148 = -1;
uint16_t x157 = 364U;
static volatile uint32_t x160 = 652292U;
uint32_t t39 = 1023U;
volatile uint32_t x165 = 613737630U;
int8_t x167 = -1;
uint8_t x169 = UINT8_MAX;
int8_t x174 = 8;
int32_t x175 = -22;
int32_t x177 = INT32_MAX;
uint16_t x180 = 2U;
int16_t x184 = -1;
static int64_t x189 = INT64_MAX;
uint16_t x190 = UINT16_MAX;
int8_t x192 = INT8_MIN;
int8_t x195 = -1;
volatile int8_t x198 = -23;
int64_t x204 = INT64_MIN;
uint32_t x210 = 7U;
int32_t x213 = INT32_MAX;
volatile uint32_t x215 = UINT32_MAX;
int32_t x218 = 119;
int16_t x223 = -38;
volatile int64_t x224 = INT64_MAX;
int32_t x227 = INT32_MIN;
int16_t x228 = -13692;
int16_t x230 = -7284;
static uint32_t x231 = 1441U;
int8_t x232 = INT8_MIN;
int16_t x244 = INT16_MIN;
static volatile int32_t t61 = 2318577;
volatile int32_t x254 = INT32_MAX;
volatile int64_t x256 = -176019LL;
volatile int8_t x263 = INT8_MAX;
volatile int8_t x265 = -1;
int8_t x266 = -9;
int32_t t66 = 1292897;
volatile int32_t x280 = -1;
uint16_t x282 = 14U;
uint32_t x292 = UINT32_MAX;
int64_t x294 = INT64_MAX;
static uint64_t x304 = 436LLU;
uint16_t x319 = 2U;
volatile int32_t x320 = 213662;
static int32_t t79 = 27761578;
int16_t x331 = -7;
uint32_t x333 = 14123U;
int8_t x334 = 1;
volatile uint32_t x336 = 284601402U;
volatile int16_t x338 = INT16_MIN;
int32_t x341 = INT32_MAX;
uint64_t x357 = 2695456103226529870LLU;
static uint8_t x370 = 13U;
int32_t x371 = INT32_MAX;
int64_t x376 = INT64_MIN;
int16_t x380 = -1;
volatile int32_t x381 = INT32_MAX;
int16_t x387 = -1;
volatile uint64_t t97 = 8001757051878LLU;
static uint32_t x399 = UINT32_MAX;
volatile int16_t x400 = -1;


void f0(void) {
	volatile int32_t x1 = 482;
	int32_t x3 = 35314;
	volatile int8_t x4 = 0;
	int32_t t0 = -11544200;

	t0 = (((x1==x2)<x3)*x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = UINT32_MAX;
	static volatile uint32_t x6 = UINT32_MAX;
	int16_t x8 = 3942;
	volatile int32_t t1 = 381185707;

	t1 = (((x5==x6)<x7)*x8);

	if (t1 != 3942) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x10 = 6905;
	static uint64_t x11 = 1068787601187037LLU;
	uint32_t x12 = 2037U;
	uint32_t t2 = 45493U;

	t2 = (((x9==x10)<x11)*x12);

	if (t2 != 2037U) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x13 = INT8_MAX;
	volatile int32_t x14 = -1;
	uint16_t x15 = UINT16_MAX;
	uint64_t t3 = UINT64_MAX;

	t3 = (((x13==x14)<x15)*x16);

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 59312715883724LLU;
	int16_t x18 = INT16_MAX;
	volatile uint16_t x20 = 20794U;
	static volatile int32_t t4 = 81427;

	t4 = (((x17==x18)<x19)*x20);

	if (t4 != 20794) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x22 = 995U;
	int32_t x23 = -1;
	int64_t x24 = 2209981LL;
	int64_t t5 = -210865450610LL;

	t5 = (((x21==x22)<x23)*x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = INT32_MAX;
	int32_t x27 = -1019;
	int16_t x28 = -723;
	int32_t t6 = 0;

	t6 = (((x25==x26)<x27)*x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x30 = 1U;
	volatile int64_t x31 = -1LL;
	volatile int64_t x32 = INT64_MIN;
	volatile int64_t t7 = -1876641284936098179LL;

	t7 = (((x29==x30)<x31)*x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = 1950;
	volatile uint8_t x35 = UINT8_MAX;
	int64_t x36 = INT64_MAX;

	t8 = (((x33==x34)<x35)*x36);

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 11U;
	static int16_t x38 = INT16_MAX;
	volatile int16_t x40 = -1;
	static volatile int32_t t9 = -74310109;

	t9 = (((x37==x38)<x39)*x40);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = 2278081727321855984LL;
	static volatile uint32_t x42 = UINT32_MAX;
	static int64_t x44 = INT64_MIN;
	volatile int64_t t10 = INT64_MIN;

	t10 = (((x41==x42)<x43)*x44);

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = INT64_MIN;
	static uint16_t x46 = UINT16_MAX;
	int8_t x47 = INT8_MAX;
	uint64_t x48 = 1LLU;
	uint64_t t11 = 23640LLU;

	t11 = (((x45==x46)<x47)*x48);

	if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	int32_t x50 = INT32_MAX;
	uint16_t x51 = UINT16_MAX;
	int8_t x52 = -1;
	volatile int32_t t12 = 216763374;

	t12 = (((x49==x50)<x51)*x52);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 0U;
	int8_t x54 = INT8_MIN;
	int64_t x56 = INT64_MAX;
	int64_t t13 = INT64_MAX;

	t13 = (((x53==x54)<x55)*x56);

	if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 13U;
	static uint16_t x58 = 9U;
	int16_t x59 = INT16_MIN;
	uint16_t x60 = 818U;
	static volatile int32_t t14 = 13;

	t14 = (((x57==x58)<x59)*x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -937;
	static uint64_t x62 = UINT64_MAX;
	volatile int32_t x63 = -1;
	volatile int64_t t15 = 1546087385430LL;

	t15 = (((x61==x62)<x63)*x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = 402;
	uint32_t x66 = 1471959918U;
	static uint64_t x67 = 1352397014650139LLU;
	int32_t x68 = INT32_MIN;
	int32_t t16 = INT32_MIN;

	t16 = (((x65==x66)<x67)*x68);

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MAX;
	uint8_t x70 = 4U;
	volatile int16_t x71 = -1;
	int32_t t17 = -41015;

	t17 = (((x69==x70)<x71)*x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	uint8_t x74 = 1U;
	static volatile int16_t x75 = INT16_MIN;
	uint32_t x76 = UINT32_MAX;
	static uint32_t t18 = 51090910U;

	t18 = (((x73==x74)<x75)*x76);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x79 = -38;
	volatile int64_t x80 = -1LL;
	int64_t t19 = 432161182256197LL;

	t19 = (((x77==x78)<x79)*x80);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 107U;
	static uint16_t x82 = 174U;
	volatile int64_t x83 = -1LL;

	t20 = (((x81==x82)<x83)*x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	int8_t x86 = INT8_MAX;
	static volatile int32_t x88 = INT32_MAX;
	volatile int32_t t21 = INT32_MAX;

	t21 = (((x85==x86)<x87)*x88);

	if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = 519381;
	static int32_t x90 = INT32_MIN;
	volatile int32_t x92 = -1;

	t22 = (((x89==x90)<x91)*x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -10LL;
	static volatile int32_t t23 = 19705789;

	t23 = (((x93==x94)<x95)*x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 1U;
	int64_t x98 = INT64_MIN;
	volatile int32_t x100 = INT32_MAX;
	int32_t t24 = INT32_MAX;

	t24 = (((x97==x98)<x99)*x100);

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	volatile int16_t x103 = INT16_MIN;
	static volatile int32_t t25 = -94881;

	t25 = (((x101==x102)<x103)*x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x105 = 1U;
	int16_t x106 = -1;
	static int8_t x108 = -1;
	volatile int32_t t26 = -2966;

	t26 = (((x105==x106)<x107)*x108);

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = 41;
	uint8_t x111 = 5U;
	static uint16_t x112 = UINT16_MAX;

	t27 = (((x109==x110)<x111)*x112);

	if (t27 != 65535) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	uint32_t x115 = 8795U;

	t28 = (((x113==x114)<x115)*x116);

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MAX;
	volatile uint8_t x118 = 1U;
	uint64_t x119 = 106481708079170LLU;
	int8_t x120 = INT8_MIN;

	t29 = (((x117==x118)<x119)*x120);

	if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MIN;
	int8_t x123 = -40;

	t30 = (((x121==x122)<x123)*x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x126 = INT16_MIN;
	int16_t x127 = INT16_MAX;
	uint32_t t31 = UINT32_MAX;

	t31 = (((x125==x126)<x127)*x128);

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x129 = 16426;
	static volatile int64_t x130 = INT64_MIN;
	int64_t x131 = -7123875LL;
	int64_t x132 = INT64_MAX;
	int64_t t32 = 881519190418691410LL;

	t32 = (((x129==x130)<x131)*x132);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x133 = INT64_MIN;
	static int32_t x135 = INT32_MIN;
	volatile int64_t x136 = INT64_MAX;
	int64_t t33 = 50346682891006LL;

	t33 = (((x133==x134)<x135)*x136);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x137 = 953975515301637LLU;
	int16_t x138 = INT16_MIN;
	int8_t x139 = INT8_MAX;
	int16_t x140 = -3;
	volatile int32_t t34 = 265192471;

	t34 = (((x137==x138)<x139)*x140);

	if (t34 != -3) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x141 = UINT32_MAX;
	int8_t x144 = INT8_MIN;
	static volatile int32_t t35 = -5012;

	t35 = (((x141==x142)<x143)*x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = INT16_MIN;
	int8_t x146 = -7;
	uint16_t x147 = 15U;
	volatile int32_t t36 = -4;

	t36 = (((x145==x146)<x147)*x148);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -12389;
	int64_t x150 = INT64_MIN;
	static int16_t x151 = -1;
	volatile int16_t x152 = INT16_MAX;
	int32_t t37 = 865;

	t37 = (((x149==x150)<x151)*x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	int64_t x154 = INT64_MIN;
	int8_t x155 = -29;
	static volatile int32_t x156 = INT32_MIN;
	static int32_t t38 = 0;

	t38 = (((x153==x154)<x155)*x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x158 = INT32_MIN;
	int64_t x159 = INT64_MIN;

	t39 = (((x157==x158)<x159)*x160);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	static volatile uint32_t x162 = 1475U;
	int16_t x163 = -1;
	int8_t x164 = -1;
	volatile int32_t t40 = -350241338;

	t40 = (((x161==x162)<x163)*x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x166 = UINT64_MAX;
	int64_t x168 = INT64_MAX;
	int64_t t41 = -1950961LL;

	t41 = (((x165==x166)<x167)*x168);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x170 = UINT32_MAX;
	int8_t x171 = INT8_MIN;
	uint64_t x172 = 15643715131789159LLU;
	volatile uint64_t t42 = 4238298816519687LLU;

	t42 = (((x169==x170)<x171)*x172);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = UINT16_MAX;
	volatile int64_t x176 = INT64_MIN;
	int64_t t43 = 1033026462322281LL;

	t43 = (((x173==x174)<x175)*x176);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x178 = 0;
	static int8_t x179 = INT8_MIN;
	static int32_t t44 = -35538002;

	t44 = (((x177==x178)<x179)*x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MAX;
	int64_t x182 = -1LL;
	int32_t x183 = INT32_MAX;
	volatile int32_t t45 = -44;

	t45 = (((x181==x182)<x183)*x184);

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -410068943943401LL;
	static volatile uint32_t x186 = UINT32_MAX;
	int16_t x187 = -1;
	uint32_t x188 = UINT32_MAX;
	uint32_t t46 = 113U;

	t46 = (((x185==x186)<x187)*x188);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x191 = 264498586177428LL;
	volatile int32_t t47 = -14184522;

	t47 = (((x189==x190)<x191)*x192);

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = -298798962;
	uint16_t x194 = 10U;
	int32_t x196 = INT32_MIN;
	volatile int32_t t48 = -3676;

	t48 = (((x193==x194)<x195)*x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = INT8_MIN;
	int64_t x199 = -13688LL;
	static int64_t x200 = -4555971365748786802LL;
	volatile int64_t t49 = -1204LL;

	t49 = (((x197==x198)<x199)*x200);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x201 = INT8_MAX;
	int8_t x202 = INT8_MAX;
	static int64_t x203 = INT64_MIN;
	volatile int64_t t50 = -170LL;

	t50 = (((x201==x202)<x203)*x204);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x205 = -1;
	uint32_t x206 = 16033U;
	volatile int64_t x207 = -254336004466LL;
	int8_t x208 = -1;
	int32_t t51 = 0;

	t51 = (((x205==x206)<x207)*x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x209 = UINT8_MAX;
	int64_t x211 = INT64_MAX;
	int32_t x212 = INT32_MIN;
	volatile int32_t t52 = INT32_MIN;

	t52 = (((x209==x210)<x211)*x212);

	if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x214 = 5U;
	int16_t x216 = INT16_MIN;
	int32_t t53 = -585;

	t53 = (((x213==x214)<x215)*x216);

	if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x217 = INT32_MIN;
	uint8_t x219 = UINT8_MAX;
	int32_t x220 = -1;
	int32_t t54 = -1;

	t54 = (((x217==x218)<x219)*x220);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = UINT8_MAX;
	int8_t x222 = INT8_MIN;
	volatile int64_t t55 = 3902092106289624LL;

	t55 = (((x221==x222)<x223)*x224);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x225 = INT64_MAX;
	uint32_t x226 = 83031383U;
	static int32_t t56 = -190261;

	t56 = (((x225==x226)<x227)*x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x229 = 2U;
	static int32_t t57 = -6410655;

	t57 = (((x229==x230)<x231)*x232);

	if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = UINT16_MAX;
	static int32_t x234 = INT32_MIN;
	uint16_t x235 = 220U;
	int8_t x236 = -37;
	static int32_t t58 = 3069604;

	t58 = (((x233==x234)<x235)*x236);

	if (t58 != -37) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x237 = INT32_MIN;
	uint32_t x238 = 860673188U;
	uint8_t x239 = UINT8_MAX;
	int16_t x240 = -876;
	static volatile int32_t t59 = -87;

	t59 = (((x237==x238)<x239)*x240);

	if (t59 != -876) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x241 = INT64_MIN;
	uint16_t x242 = 93U;
	static int8_t x243 = 12;
	int32_t t60 = -7921365;

	t60 = (((x241==x242)<x243)*x244);

	if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x245 = -1;
	uint16_t x246 = UINT16_MAX;
	static volatile int32_t x247 = -299958427;
	static uint8_t x248 = UINT8_MAX;

	t61 = (((x245==x246)<x247)*x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x249 = INT8_MAX;
	int16_t x250 = 2;
	int8_t x251 = INT8_MIN;
	static int16_t x252 = -4188;
	volatile int32_t t62 = -62;

	t62 = (((x249==x250)<x251)*x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x253 = INT32_MIN;
	int64_t x255 = INT64_MIN;
	static int64_t t63 = -47000824489271861LL;

	t63 = (((x253==x254)<x255)*x256);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	static int8_t x258 = -1;
	int8_t x259 = INT8_MIN;
	volatile int32_t x260 = 10576;
	int32_t t64 = 555839091;

	t64 = (((x257==x258)<x259)*x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = INT64_MAX;
	uint32_t x262 = 91546U;
	static uint64_t x264 = 2958792138705761105LLU;
	volatile uint64_t t65 = 728LLU;

	t65 = (((x261==x262)<x263)*x264);

	if (t65 != 2958792138705761105LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x267 = INT64_MIN;
	int16_t x268 = INT16_MIN;

	t66 = (((x265==x266)<x267)*x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x269 = INT16_MAX;
	volatile int8_t x270 = INT8_MIN;
	int8_t x271 = INT8_MIN;
	volatile int8_t x272 = INT8_MIN;
	volatile int32_t t67 = -171598;

	t67 = (((x269==x270)<x271)*x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x273 = INT32_MIN;
	int64_t x274 = INT64_MIN;
	int16_t x275 = INT16_MIN;
	int8_t x276 = 0;
	int32_t t68 = 234567;

	t68 = (((x273==x274)<x275)*x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = 390195156U;
	int8_t x278 = 35;
	int32_t x279 = INT32_MIN;
	static volatile int32_t t69 = 610422822;

	t69 = (((x277==x278)<x279)*x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = -509;
	volatile int64_t x283 = INT64_MAX;
	static int8_t x284 = INT8_MAX;
	volatile int32_t t70 = 32446;

	t70 = (((x281==x282)<x283)*x284);

	if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x285 = 52;
	static uint64_t x286 = UINT64_MAX;
	int8_t x287 = INT8_MIN;
	volatile int16_t x288 = INT16_MIN;
	static volatile int32_t t71 = 32541;

	t71 = (((x285==x286)<x287)*x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MAX;
	int64_t x290 = INT64_MAX;
	int8_t x291 = -5;
	uint32_t t72 = 18585997U;

	t72 = (((x289==x290)<x291)*x292);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = -899;
	int8_t x295 = INT8_MAX;
	volatile int32_t x296 = -17;
	volatile int32_t t73 = -212445264;

	t73 = (((x293==x294)<x295)*x296);

	if (t73 != -17) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = -30408664400838740LL;
	static uint8_t x298 = 3U;
	static int64_t x299 = -1LL;
	int16_t x300 = -683;
	int32_t t74 = -253666621;

	t74 = (((x297==x298)<x299)*x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = 0U;
	int16_t x302 = -1970;
	int16_t x303 = -18;
	uint64_t t75 = 7167821575689203LLU;

	t75 = (((x301==x302)<x303)*x304);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = -1;
	int32_t x306 = INT32_MIN;
	volatile int16_t x307 = INT16_MAX;
	volatile int32_t x308 = INT32_MIN;
	volatile int32_t t76 = INT32_MIN;

	t76 = (((x305==x306)<x307)*x308);

	if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	int32_t x310 = 332;
	int16_t x311 = INT16_MAX;
	int16_t x312 = INT16_MIN;
	volatile int32_t t77 = -64605690;

	t77 = (((x309==x310)<x311)*x312);

	if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x313 = -13714;
	int32_t x314 = -61;
	int64_t x315 = INT64_MAX;
	uint16_t x316 = 5U;
	int32_t t78 = -4;

	t78 = (((x313==x314)<x315)*x316);

	if (t78 != 5) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x317 = UINT8_MAX;
	volatile int64_t x318 = -1LL;

	t79 = (((x317==x318)<x319)*x320);

	if (t79 != 213662) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = -1;
	volatile int16_t x322 = INT16_MIN;
	uint8_t x323 = 1U;
	volatile uint32_t x324 = UINT32_MAX;
	uint32_t t80 = UINT32_MAX;

	t80 = (((x321==x322)<x323)*x324);

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x325 = -1;
	volatile int64_t x326 = INT64_MAX;
	volatile int16_t x327 = -233;
	volatile int16_t x328 = INT16_MIN;
	int32_t t81 = 55949;

	t81 = (((x325==x326)<x327)*x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x329 = 1U;
	int32_t x330 = 1;
	volatile uint8_t x332 = 14U;
	static volatile int32_t t82 = -13;

	t82 = (((x329==x330)<x331)*x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x335 = INT64_MIN;
	static uint32_t t83 = 132131U;

	t83 = (((x333==x334)<x335)*x336);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = -1;
	static volatile int32_t x339 = INT32_MIN;
	int16_t x340 = INT16_MAX;
	volatile int32_t t84 = 59647454;

	t84 = (((x337==x338)<x339)*x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x342 = -32523473LL;
	int64_t x343 = -843164896LL;
	int16_t x344 = INT16_MAX;
	int32_t t85 = 129;

	t85 = (((x341==x342)<x343)*x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = UINT16_MAX;
	static uint16_t x346 = UINT16_MAX;
	int16_t x347 = -1030;
	int16_t x348 = 8;
	volatile int32_t t86 = 329834314;

	t86 = (((x345==x346)<x347)*x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint16_t x349 = UINT16_MAX;
	static uint16_t x350 = 3179U;
	uint32_t x351 = 375154U;
	uint32_t x352 = 4U;
	volatile uint32_t t87 = 697781U;

	t87 = (((x349==x350)<x351)*x352);

	if (t87 != 4U) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x353 = -3;
	uint8_t x354 = 6U;
	int8_t x355 = INT8_MIN;
	int64_t x356 = INT64_MIN;
	static int64_t t88 = -32819LL;

	t88 = (((x353==x354)<x355)*x356);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x358 = INT64_MAX;
	static volatile uint64_t x359 = UINT64_MAX;
	uint32_t x360 = 967882705U;
	static uint32_t t89 = 7947U;

	t89 = (((x357==x358)<x359)*x360);

	if (t89 != 967882705U) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = 15174002LLU;
	int16_t x362 = INT16_MAX;
	static int64_t x363 = 4LL;
	int16_t x364 = INT16_MIN;
	static int32_t t90 = -14855671;

	t90 = (((x361==x362)<x363)*x364);

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x365 = -60;
	static int64_t x366 = 483585682178LL;
	int32_t x367 = 0;
	int16_t x368 = INT16_MAX;
	volatile int32_t t91 = 152421;

	t91 = (((x365==x366)<x367)*x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = 7U;
	int32_t x372 = INT32_MAX;
	int32_t t92 = INT32_MAX;

	t92 = (((x369==x370)<x371)*x372);

	if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = 1325204400U;
	static uint64_t x374 = UINT64_MAX;
	uint16_t x375 = 2U;
	int64_t t93 = INT64_MIN;

	t93 = (((x373==x374)<x375)*x376);

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = -1;
	uint16_t x378 = UINT16_MAX;
	uint32_t x379 = 147453370U;
	int32_t t94 = -11;

	t94 = (((x377==x378)<x379)*x380);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x382 = 1U;
	int32_t x383 = INT32_MIN;
	static uint16_t x384 = 228U;
	int32_t t95 = 243718;

	t95 = (((x381==x382)<x383)*x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = UINT32_MAX;
	int8_t x386 = 0;
	int64_t x388 = INT64_MAX;
	int64_t t96 = 1918300815410307658LL;

	t96 = (((x385==x386)<x387)*x388);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MIN;
	volatile int16_t x390 = INT16_MAX;
	int64_t x391 = INT64_MIN;
	uint64_t x392 = 265967975249LLU;

	t97 = (((x389==x390)<x391)*x392);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MIN;
	static volatile int32_t x394 = -1;
	int32_t x395 = -15;
	static int16_t x396 = INT16_MAX;
	volatile int32_t t98 = 3786552;

	t98 = (((x393==x394)<x395)*x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = 1610572405780000LL;
	static int64_t x398 = 28LL;
	int32_t t99 = 1481685;

	t99 = (((x397==x398)<x399)*x400);

	if (t99 != -1) { NG(); } else { ; }
	
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

