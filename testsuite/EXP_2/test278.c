#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x5 = 4045U;
volatile int64_t t0 = -851908496445800886LL;
volatile int64_t x10 = INT64_MIN;
volatile int32_t t2 = -3654;
int32_t x25 = INT32_MIN;
static int32_t x30 = INT32_MAX;
uint8_t x49 = 44U;
volatile int32_t t10 = -2;
int32_t x59 = -993108102;
int8_t x61 = -1;
int32_t t13 = 1022079564;
uint64_t x76 = 712797808959LLU;
int32_t t15 = 723156798;
volatile uint64_t x82 = 1868472881LLU;
static volatile int32_t t16 = -255494519;
uint32_t x86 = 7U;
static volatile uint8_t x87 = 4U;
volatile uint16_t x97 = 4240U;
int32_t x98 = 31812785;
volatile int64_t t20 = 300LL;
int8_t x106 = INT8_MAX;
static int64_t x112 = -1LL;
static volatile int32_t t26 = -148609061;
int32_t t27 = 340833707;
int16_t x141 = INT16_MAX;
int64_t t30 = 2506507198509LL;
int64_t x151 = -3LL;
int8_t x152 = INT8_MIN;
volatile int32_t t32 = 14372398;
volatile uint8_t x154 = 0U;
uint64_t x168 = 122174170241773LLU;
int64_t x173 = INT64_MIN;
uint8_t x189 = UINT8_MAX;
volatile int16_t x190 = INT16_MIN;
static volatile uint32_t x202 = UINT32_MAX;
int8_t x204 = INT8_MIN;
int64_t x205 = -1986LL;
volatile uint32_t x210 = UINT32_MAX;
uint8_t x214 = UINT8_MAX;
uint8_t x215 = 3U;
uint64_t x219 = 67838LLU;
int8_t x223 = INT8_MIN;
int32_t t48 = -9828989;
static int32_t x241 = INT32_MIN;
volatile int64_t x244 = 1022154LL;
int32_t t53 = -22995068;
int8_t x254 = 1;
int8_t x258 = INT8_MIN;
int32_t x259 = 105136;
uint32_t x261 = UINT32_MAX;
volatile int16_t x262 = INT16_MIN;
int32_t t56 = 1001645008;
uint16_t x265 = 11092U;
int32_t t58 = 4;
uint64_t x274 = 1150843514177LLU;
int64_t t59 = -8060LL;
volatile int64_t x277 = -1LL;
uint8_t x279 = 17U;
static uint8_t x298 = 2U;
int32_t x300 = INT32_MIN;
volatile int64_t t66 = -3421846LL;
int16_t x309 = INT16_MIN;
static int8_t x311 = INT8_MAX;
int8_t x315 = -2;
volatile int32_t t70 = 337741800;
static volatile int16_t x331 = INT16_MIN;
int32_t t74 = 217;
static int8_t x339 = INT8_MIN;
static int32_t x347 = 3;
int16_t x348 = INT16_MIN;
int32_t t77 = 46;
uint64_t t78 = 240265447466LLU;
int8_t x354 = -1;
int64_t x360 = INT64_MAX;
int16_t x362 = INT16_MAX;
int32_t x372 = INT32_MIN;
int32_t t84 = -9;
volatile int64_t x377 = 2113289040050168117LL;
int64_t x389 = -1LL;
int16_t x391 = INT16_MIN;
int32_t x413 = INT32_MIN;
static int64_t x414 = -284456849672LL;
uint64_t t95 = 939745005081412LLU;


void f0(void) {
	int64_t x6 = -443353759LL;
	int16_t x7 = -1;
	int64_t x8 = INT64_MIN;

	t0 = ((x5<(x6-x7))%x8);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = INT32_MAX;
	int8_t x11 = -5;
	static int64_t x12 = -1LL;
	volatile int64_t t1 = -138391780024113896LL;

	t1 = ((x9<(x10-x11))%x12);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = 468U;
	volatile int16_t x14 = INT16_MAX;
	static int64_t x15 = 3125330747788519688LL;
	static int8_t x16 = INT8_MAX;

	t2 = ((x13<(x14-x15))%x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x17 = INT64_MAX;
	volatile int16_t x18 = INT16_MIN;
	int32_t x19 = -10;
	int32_t x20 = INT32_MIN;
	static volatile int32_t t3 = -2260155;

	t3 = ((x17<(x18-x19))%x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x21 = UINT16_MAX;
	int64_t x22 = -1LL;
	static int64_t x23 = INT64_MIN;
	int32_t x24 = -1;
	static volatile int32_t t4 = -107270;

	t4 = ((x21<(x22-x23))%x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x26 = 12U;
	int16_t x27 = INT16_MIN;
	uint8_t x28 = UINT8_MAX;
	static volatile int32_t t5 = 1;

	t5 = ((x25<(x26-x27))%x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = 0U;
	uint8_t x31 = 0U;
	volatile uint64_t x32 = 1308117665542484879LLU;
	volatile uint64_t t6 = 362608294541266163LLU;

	t6 = ((x29<(x30-x31))%x32);

	if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MIN;
	static int16_t x34 = 9;
	uint32_t x35 = UINT32_MAX;
	int32_t x36 = INT32_MAX;
	volatile int32_t t7 = -185;

	t7 = ((x33<(x34-x35))%x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x45 = INT64_MIN;
	volatile uint64_t x46 = 3320640568680258866LLU;
	int8_t x47 = INT8_MAX;
	int32_t x48 = INT32_MAX;
	volatile int32_t t8 = -21972;

	t8 = ((x45<(x46-x47))%x48);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x50 = INT16_MAX;
	volatile int32_t x51 = 104470;
	static volatile int32_t x52 = INT32_MAX;
	int32_t t9 = 236326273;

	t9 = ((x49<(x50-x51))%x52);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x53 = 0LLU;
	int32_t x54 = -123289800;
	int8_t x55 = INT8_MAX;
	uint8_t x56 = 11U;

	t10 = ((x53<(x54-x55))%x56);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x57 = UINT64_MAX;
	int8_t x58 = INT8_MIN;
	uint32_t x60 = 32733478U;
	volatile uint32_t t11 = 287U;

	t11 = ((x57<(x58-x59))%x60);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x62 = -851;
	int8_t x63 = 1;
	int16_t x64 = -1;
	static volatile int32_t t12 = 22;

	t12 = ((x61<(x62-x63))%x64);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x69 = 660424822U;
	uint32_t x70 = 20U;
	int8_t x71 = -1;
	int32_t x72 = INT32_MIN;

	t13 = ((x69<(x70-x71))%x72);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x73 = INT64_MIN;
	int32_t x74 = INT32_MIN;
	int16_t x75 = -13667;
	uint64_t t14 = 9537LLU;

	t14 = ((x73<(x74-x75))%x76);

	if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x77 = 7U;
	int8_t x78 = -1;
	uint8_t x79 = 119U;
	int16_t x80 = INT16_MIN;

	t15 = ((x77<(x78-x79))%x80);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x81 = INT64_MIN;
	int64_t x83 = INT64_MIN;
	int8_t x84 = INT8_MIN;

	t16 = ((x81<(x82-x83))%x84);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x85 = INT32_MAX;
	int8_t x88 = INT8_MIN;
	int32_t t17 = 14;

	t17 = ((x85<(x86-x87))%x88);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x89 = 924;
	int8_t x90 = INT8_MIN;
	uint64_t x91 = 0LLU;
	volatile uint64_t x92 = UINT64_MAX;
	static uint64_t t18 = 474017361100644LLU;

	t18 = ((x89<(x90-x91))%x92);

	if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x93 = INT8_MAX;
	static int16_t x94 = INT16_MAX;
	int32_t x95 = 45955348;
	uint16_t x96 = UINT16_MAX;
	int32_t t19 = -32;

	t19 = ((x93<(x94-x95))%x96);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x99 = UINT8_MAX;
	int64_t x100 = -1LL;

	t20 = ((x97<(x98-x99))%x100);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x101 = INT16_MIN;
	uint32_t x102 = 2563263U;
	int16_t x103 = -1;
	volatile int8_t x104 = INT8_MIN;
	static volatile int32_t t21 = 421102;

	t21 = ((x101<(x102-x103))%x104);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x105 = 32564U;
	volatile uint32_t x107 = 19U;
	static uint8_t x108 = 4U;
	int32_t t22 = 2;

	t22 = ((x105<(x106-x107))%x108);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x109 = INT32_MAX;
	int16_t x110 = -1;
	int8_t x111 = INT8_MAX;
	volatile int64_t t23 = -5792817411855356LL;

	t23 = ((x109<(x110-x111))%x112);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x113 = 1;
	int16_t x114 = INT16_MIN;
	uint64_t x115 = 6LLU;
	int32_t x116 = INT32_MIN;
	int32_t t24 = 394695288;

	t24 = ((x113<(x114-x115))%x116);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x117 = INT16_MIN;
	int16_t x118 = INT16_MIN;
	int8_t x119 = INT8_MAX;
	volatile uint8_t x120 = UINT8_MAX;
	int32_t t25 = 3;

	t25 = ((x117<(x118-x119))%x120);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x121 = 1;
	int32_t x122 = 7346879;
	uint64_t x123 = 3LLU;
	volatile int32_t x124 = INT32_MIN;

	t26 = ((x121<(x122-x123))%x124);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x129 = 1;
	int64_t x130 = -1LL;
	static int8_t x131 = INT8_MIN;
	uint16_t x132 = 872U;

	t27 = ((x129<(x130-x131))%x132);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x133 = 10LLU;
	int32_t x134 = -1;
	volatile int8_t x135 = 1;
	int64_t x136 = -31537774689000206LL;
	int64_t t28 = 27516250492LL;

	t28 = ((x133<(x134-x135))%x136);

	if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x137 = INT32_MIN;
	volatile int16_t x138 = INT16_MIN;
	int64_t x139 = -16103958002LL;
	uint64_t x140 = 499611499642873LLU;
	volatile uint64_t t29 = 837723461680LLU;

	t29 = ((x137<(x138-x139))%x140);

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x142 = 290U;
	volatile int16_t x143 = INT16_MIN;
	int64_t x144 = -1LL;

	t30 = ((x141<(x142-x143))%x144);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x145 = -1;
	uint16_t x146 = 269U;
	int16_t x147 = INT16_MAX;
	volatile int64_t x148 = 264622475LL;
	volatile int64_t t31 = -55593LL;

	t31 = ((x145<(x146-x147))%x148);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x149 = UINT64_MAX;
	int16_t x150 = 48;

	t32 = ((x149<(x150-x151))%x152);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x153 = -144;
	static volatile int8_t x155 = INT8_MAX;
	volatile int8_t x156 = INT8_MIN;
	int32_t t33 = 44;

	t33 = ((x153<(x154-x155))%x156);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x157 = INT64_MIN;
	int32_t x158 = -1;
	static int32_t x159 = INT32_MIN;
	int16_t x160 = INT16_MIN;
	static volatile int32_t t34 = -27;

	t34 = ((x157<(x158-x159))%x160);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x165 = INT32_MIN;
	volatile int16_t x166 = -30;
	uint16_t x167 = UINT16_MAX;
	volatile uint64_t t35 = 10646082010294LLU;

	t35 = ((x165<(x166-x167))%x168);

	if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x174 = 0LLU;
	int8_t x175 = -1;
	int16_t x176 = -1;
	volatile int32_t t36 = -9991;

	t36 = ((x173<(x174-x175))%x176);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x181 = UINT8_MAX;
	int64_t x182 = -32326012394226067LL;
	int8_t x183 = INT8_MAX;
	volatile int8_t x184 = INT8_MIN;
	volatile int32_t t37 = -237;

	t37 = ((x181<(x182-x183))%x184);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x185 = 2351991702LL;
	int64_t x186 = -1LL;
	int8_t x187 = -1;
	uint8_t x188 = UINT8_MAX;
	volatile int32_t t38 = -14;

	t38 = ((x185<(x186-x187))%x188);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x191 = 15;
	int32_t x192 = -1;
	volatile int32_t t39 = 3;

	t39 = ((x189<(x190-x191))%x192);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x193 = -8923;
	int64_t x194 = -1LL;
	int32_t x195 = INT32_MIN;
	static uint16_t x196 = 2032U;
	int32_t t40 = -127;

	t40 = ((x193<(x194-x195))%x196);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x197 = 5536535663682LLU;
	int8_t x198 = INT8_MIN;
	int64_t x199 = -1LL;
	uint8_t x200 = UINT8_MAX;
	int32_t t41 = -12401436;

	t41 = ((x197<(x198-x199))%x200);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x201 = -1LL;
	int8_t x203 = -3;
	int32_t t42 = 55155;

	t42 = ((x201<(x202-x203))%x204);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x206 = -15;
	uint64_t x207 = UINT64_MAX;
	static uint64_t x208 = 9118881986491567LLU;
	uint64_t t43 = 26067LLU;

	t43 = ((x205<(x206-x207))%x208);

	if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x209 = INT16_MIN;
	volatile int8_t x211 = -1;
	volatile int32_t x212 = INT32_MAX;
	volatile int32_t t44 = -56;

	t44 = ((x209<(x210-x211))%x212);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x213 = -1;
	uint64_t x216 = 2690709550315005LLU;
	uint64_t t45 = 921LLU;

	t45 = ((x213<(x214-x215))%x216);

	if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x217 = 522923885638229327LL;
	uint64_t x218 = 2955LLU;
	int64_t x220 = INT64_MIN;
	volatile int64_t t46 = -17383209789LL;

	t46 = ((x217<(x218-x219))%x220);

	if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x221 = UINT64_MAX;
	int64_t x222 = -1LL;
	uint32_t x224 = UINT32_MAX;
	volatile uint32_t t47 = 194101931U;

	t47 = ((x221<(x222-x223))%x224);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x225 = 32U;
	int64_t x226 = INT64_MIN;
	static int8_t x227 = -1;
	uint8_t x228 = UINT8_MAX;

	t48 = ((x225<(x226-x227))%x228);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x229 = 19U;
	int16_t x230 = INT16_MIN;
	int8_t x231 = -1;
	int16_t x232 = 51;
	int32_t t49 = -1965875;

	t49 = ((x229<(x230-x231))%x232);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x237 = 7U;
	volatile int8_t x238 = 1;
	int16_t x239 = -1;
	int16_t x240 = INT16_MIN;
	volatile int32_t t50 = 22;

	t50 = ((x237<(x238-x239))%x240);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x242 = INT16_MIN;
	volatile int32_t x243 = 128018127;
	static int64_t t51 = 412792947855827649LL;

	t51 = ((x241<(x242-x243))%x244);

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x245 = -3737033657245LL;
	static int8_t x246 = 52;
	int16_t x247 = 0;
	int16_t x248 = INT16_MIN;
	int32_t t52 = 342309300;

	t52 = ((x245<(x246-x247))%x248);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x249 = 54;
	volatile int8_t x250 = INT8_MIN;
	static uint32_t x251 = UINT32_MAX;
	static volatile int32_t x252 = INT32_MIN;

	t53 = ((x249<(x250-x251))%x252);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x253 = INT64_MIN;
	volatile int8_t x255 = -1;
	volatile int32_t x256 = -1;
	volatile int32_t t54 = -32;

	t54 = ((x253<(x254-x255))%x256);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x257 = -1;
	int8_t x260 = -1;
	volatile int32_t t55 = -995;

	t55 = ((x257<(x258-x259))%x260);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x263 = INT16_MIN;
	volatile int32_t x264 = INT32_MIN;

	t56 = ((x261<(x262-x263))%x264);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x266 = 79U;
	static uint8_t x267 = 77U;
	uint16_t x268 = UINT16_MAX;
	int32_t t57 = -175295;

	t57 = ((x265<(x266-x267))%x268);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x269 = -1;
	volatile int16_t x270 = INT16_MIN;
	int32_t x271 = INT32_MIN;
	int8_t x272 = 3;

	t58 = ((x269<(x270-x271))%x272);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x273 = INT8_MAX;
	int64_t x275 = INT64_MAX;
	static int64_t x276 = INT64_MAX;

	t59 = ((x273<(x274-x275))%x276);

	if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x278 = 949;
	int16_t x280 = -1;
	volatile int32_t t60 = -33696277;

	t60 = ((x277<(x278-x279))%x280);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x281 = INT16_MIN;
	volatile int16_t x282 = INT16_MIN;
	int64_t x283 = -1LL;
	int16_t x284 = INT16_MIN;
	int32_t t61 = 2;

	t61 = ((x281<(x282-x283))%x284);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x285 = INT32_MAX;
	volatile int64_t x286 = -1666824422LL;
	int32_t x287 = -24;
	int8_t x288 = INT8_MIN;
	int32_t t62 = 91277;

	t62 = ((x285<(x286-x287))%x288);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x289 = UINT32_MAX;
	uint32_t x290 = 46073163U;
	int8_t x291 = 1;
	uint32_t x292 = 2270652U;
	volatile uint32_t t63 = 21339141U;

	t63 = ((x289<(x290-x291))%x292);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x293 = 51975516;
	int16_t x294 = INT16_MIN;
	static volatile uint16_t x295 = UINT16_MAX;
	int8_t x296 = -2;
	static volatile int32_t t64 = -12630461;

	t64 = ((x293<(x294-x295))%x296);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x297 = INT64_MAX;
	volatile uint8_t x299 = 84U;
	int32_t t65 = 10;

	t65 = ((x297<(x298-x299))%x300);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x301 = -1;
	int8_t x302 = -1;
	uint64_t x303 = 329304719LLU;
	static int64_t x304 = INT64_MIN;

	t66 = ((x301<(x302-x303))%x304);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x305 = 106341U;
	int64_t x306 = -1LL;
	int8_t x307 = INT8_MIN;
	uint8_t x308 = 55U;
	int32_t t67 = 409;

	t67 = ((x305<(x306-x307))%x308);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x310 = INT64_MAX;
	uint8_t x312 = UINT8_MAX;
	int32_t t68 = 10;

	t68 = ((x309<(x310-x311))%x312);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x313 = -14;
	uint32_t x314 = 26U;
	volatile int8_t x316 = INT8_MAX;
	int32_t t69 = 4;

	t69 = ((x313<(x314-x315))%x316);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x317 = -59;
	int8_t x318 = INT8_MAX;
	volatile uint16_t x319 = 18U;
	int8_t x320 = 1;

	t70 = ((x317<(x318-x319))%x320);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x321 = 722585658;
	int8_t x322 = INT8_MIN;
	volatile int16_t x323 = INT16_MIN;
	static uint16_t x324 = UINT16_MAX;
	int32_t t71 = 14686;

	t71 = ((x321<(x322-x323))%x324);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x325 = -7969;
	uint16_t x326 = 2U;
	volatile uint16_t x327 = 1340U;
	volatile int64_t x328 = INT64_MIN;
	volatile int64_t t72 = -317LL;

	t72 = ((x325<(x326-x327))%x328);

	if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x329 = UINT16_MAX;
	int16_t x330 = -1172;
	int64_t x332 = INT64_MAX;
	volatile int64_t t73 = -2934LL;

	t73 = ((x329<(x330-x331))%x332);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x333 = -111;
	int64_t x334 = INT64_MAX;
	static uint32_t x335 = 3607810U;
	volatile int16_t x336 = -1;

	t74 = ((x333<(x334-x335))%x336);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x337 = INT32_MAX;
	int64_t x338 = 294389468010LL;
	static int32_t x340 = 3;
	volatile int32_t t75 = 945573;

	t75 = ((x337<(x338-x339))%x340);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x341 = INT64_MIN;
	uint16_t x342 = 71U;
	int8_t x343 = INT8_MIN;
	int16_t x344 = -1;
	volatile int32_t t76 = -1;

	t76 = ((x341<(x342-x343))%x344);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int32_t x345 = -1;
	int16_t x346 = INT16_MIN;

	t77 = ((x345<(x346-x347))%x348);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x349 = 8625U;
	int8_t x350 = INT8_MAX;
	uint16_t x351 = 64U;
	uint64_t x352 = UINT64_MAX;

	t78 = ((x349<(x350-x351))%x352);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x353 = INT64_MIN;
	int16_t x355 = -1;
	int8_t x356 = INT8_MIN;
	int32_t t79 = 504521887;

	t79 = ((x353<(x354-x355))%x356);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x357 = -1;
	uint16_t x358 = 6U;
	int8_t x359 = INT8_MIN;
	int64_t t80 = -79588550371700836LL;

	t80 = ((x357<(x358-x359))%x360);

	if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x361 = UINT32_MAX;
	static volatile uint8_t x363 = UINT8_MAX;
	uint32_t x364 = 846466620U;
	volatile uint32_t t81 = 0U;

	t81 = ((x361<(x362-x363))%x364);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x365 = 0;
	int32_t x366 = INT32_MIN;
	int32_t x367 = -1;
	static volatile int16_t x368 = INT16_MIN;
	int32_t t82 = 2549;

	t82 = ((x365<(x366-x367))%x368);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x369 = INT64_MAX;
	static int32_t x370 = INT32_MIN;
	volatile int32_t x371 = INT32_MIN;
	int32_t t83 = -36;

	t83 = ((x369<(x370-x371))%x372);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x373 = -1780189LL;
	int32_t x374 = -253;
	int8_t x375 = -1;
	int8_t x376 = INT8_MIN;

	t84 = ((x373<(x374-x375))%x376);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x378 = 12U;
	int8_t x379 = -1;
	static uint32_t x380 = 78U;
	volatile uint32_t t85 = 3U;

	t85 = ((x377<(x378-x379))%x380);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x381 = INT64_MIN;
	static int32_t x382 = 12587385;
	volatile uint16_t x383 = UINT16_MAX;
	uint32_t x384 = 728877U;
	uint32_t t86 = 31U;

	t86 = ((x381<(x382-x383))%x384);

	if (t86 != 1U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x385 = 0;
	static int16_t x386 = INT16_MAX;
	uint8_t x387 = 3U;
	volatile int8_t x388 = 3;
	volatile int32_t t87 = 747580915;

	t87 = ((x385<(x386-x387))%x388);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x390 = 1LL;
	int16_t x392 = INT16_MIN;
	int32_t t88 = 106177294;

	t88 = ((x389<(x390-x391))%x392);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x393 = 3601U;
	static int32_t x394 = INT32_MAX;
	volatile uint8_t x395 = 69U;
	int16_t x396 = 7;
	volatile int32_t t89 = 61059;

	t89 = ((x393<(x394-x395))%x396);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x397 = UINT32_MAX;
	int16_t x398 = INT16_MIN;
	uint8_t x399 = UINT8_MAX;
	int8_t x400 = INT8_MAX;
	volatile int32_t t90 = -6596;

	t90 = ((x397<(x398-x399))%x400);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x405 = 2U;
	uint8_t x406 = 83U;
	static uint64_t x407 = UINT64_MAX;
	int32_t x408 = -184349;
	int32_t t91 = 1;

	t91 = ((x405<(x406-x407))%x408);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x409 = INT8_MAX;
	int8_t x410 = INT8_MIN;
	uint64_t x411 = UINT64_MAX;
	int16_t x412 = 447;
	int32_t t92 = 4354;

	t92 = ((x409<(x410-x411))%x412);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x415 = 0;
	uint8_t x416 = 1U;
	volatile int32_t t93 = -1;

	t93 = ((x413<(x414-x415))%x416);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x417 = 20U;
	static uint16_t x418 = 288U;
	int32_t x419 = INT32_MAX;
	int64_t x420 = -1LL;
	volatile int64_t t94 = 9458982883436767LL;

	t94 = ((x417<(x418-x419))%x420);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x421 = 25U;
	int64_t x422 = INT64_MAX;
	uint16_t x423 = 376U;
	uint64_t x424 = 104404214LLU;

	t95 = ((x421<(x422-x423))%x424);

	if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x425 = 56767U;
	int64_t x426 = 1285496200623LL;
	uint8_t x427 = UINT8_MAX;
	volatile int32_t x428 = 446;
	volatile int32_t t96 = 164568718;

	t96 = ((x425<(x426-x427))%x428);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x429 = 420247437261LLU;
	int16_t x430 = 97;
	int16_t x431 = 767;
	static int16_t x432 = INT16_MIN;
	int32_t t97 = 1;

	t97 = ((x429<(x430-x431))%x432);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x433 = -24;
	int16_t x434 = 0;
	int8_t x435 = INT8_MAX;
	uint16_t x436 = 607U;
	volatile int32_t t98 = -1726;

	t98 = ((x433<(x434-x435))%x436);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x437 = -48455;
	static uint16_t x438 = 1226U;
	int16_t x439 = INT16_MAX;
	static uint16_t x440 = 4366U;
	int32_t t99 = -75349071;

	t99 = ((x437<(x438-x439))%x440);

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

