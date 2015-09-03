#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x7 = 115;
uint8_t x9 = UINT8_MAX;
int32_t x11 = 3675;
uint32_t x12 = 359082027U;
int16_t x29 = INT16_MAX;
static int16_t x30 = INT16_MAX;
static uint64_t t4 = 0LLU;
int32_t x33 = -956;
static int16_t x38 = 316;
static int16_t x43 = INT16_MAX;
static volatile uint8_t x54 = 29U;
volatile int32_t t9 = 4061;
volatile uint64_t t11 = 419976LLU;
int8_t x84 = -1;
static int16_t x86 = -9;
static uint32_t x87 = UINT32_MAX;
static int16_t x89 = -1;
static volatile int32_t t17 = 571402;
int64_t x93 = -3613LL;
int64_t t19 = -8329438482856LL;
int32_t x105 = 1047;
uint16_t x107 = 12U;
uint32_t x110 = 95544193U;
static volatile int32_t x112 = 5;
static uint64_t t21 = 2053458LLU;
volatile uint8_t x113 = 108U;
static int16_t x115 = -1;
uint64_t t25 = 7322229LLU;
volatile uint64_t x143 = 2756351766550077129LLU;
volatile uint8_t x150 = 40U;
static int32_t x152 = 153903;
static uint8_t x158 = 2U;
int32_t x159 = INT32_MAX;
uint64_t x160 = UINT64_MAX;
int64_t x168 = -1LL;
uint64_t x182 = UINT64_MAX;
uint64_t x187 = UINT64_MAX;
static int8_t x188 = INT8_MIN;
int8_t x192 = -40;
uint32_t x202 = 1282070863U;
volatile uint8_t x203 = 3U;
int32_t x206 = INT32_MAX;
static volatile int8_t x219 = INT8_MIN;
volatile uint64_t t41 = 79830871919974013LLU;
int64_t x222 = INT64_MAX;
uint64_t x227 = UINT64_MAX;
volatile int32_t x228 = INT32_MIN;
static int64_t t46 = -8163LL;
static uint16_t x266 = 97U;
uint64_t x268 = 4865698999520LLU;
volatile uint64_t t51 = 3685015412829226LLU;
int16_t x279 = INT16_MAX;
volatile uint32_t x289 = UINT32_MAX;
volatile int8_t x290 = INT8_MAX;
int16_t x292 = INT16_MIN;
static int64_t t57 = -298967985718711406LL;
static int32_t t59 = -1;
static int8_t x313 = INT8_MIN;
volatile int32_t t60 = 987994665;
int32_t x318 = -46305;
int8_t x319 = 2;
static uint64_t x333 = UINT64_MAX;
int8_t x335 = 2;
int8_t x339 = INT8_MIN;
volatile uint64_t t64 = 1351648LLU;
int8_t x348 = INT8_MAX;
int64_t x349 = INT64_MAX;
static int8_t x350 = INT8_MIN;
uint64_t x351 = 42985LLU;
volatile uint32_t t68 = 7922U;
static volatile uint8_t x358 = UINT8_MAX;
static uint64_t t69 = 19730LLU;
uint16_t x363 = 27U;
int8_t x364 = 54;
int32_t x366 = INT32_MIN;
static int16_t x367 = INT16_MIN;
static int16_t x372 = -1;
volatile int8_t x377 = INT8_MAX;
uint16_t x379 = 4U;
volatile uint16_t x386 = UINT16_MAX;
uint16_t x388 = UINT16_MAX;
int8_t x394 = INT8_MIN;
uint32_t t76 = 20556U;
int32_t x413 = -1;
static int64_t x415 = -14569260090LL;
int64_t x420 = INT64_MIN;
int8_t x425 = 6;
int32_t x429 = INT32_MIN;
volatile uint64_t x441 = UINT64_MAX;
volatile uint16_t x444 = UINT16_MAX;
volatile int64_t x449 = 10446993LL;
uint8_t x450 = 94U;
int8_t x470 = -1;
static int16_t x472 = 208;
volatile int64_t x481 = INT64_MAX;
volatile int8_t x482 = INT8_MIN;
static volatile int8_t x495 = INT8_MIN;
uint64_t x510 = UINT64_MAX;
uint64_t x512 = 0LLU;
volatile uint64_t t94 = 1500711591307868480LLU;
uint64_t x515 = 152812537788147968LLU;
static uint8_t x518 = 12U;
int64_t x520 = -1LL;
uint64_t x521 = 1224380330658384LLU;


void f0(void) {
	volatile uint16_t x1 = 1U;
	int64_t x2 = -13349604301885040LL;
	int16_t x3 = INT16_MAX;
	int32_t x4 = 1941;
	int64_t t0 = -11953664171LL;

	t0 = (((x1%x2)-x3)*x4);

	if (t0 != -63598806LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	static int8_t x6 = -1;
	int64_t x8 = 4958309674111947LL;
	uint64_t t1 = 27847808384869963LLU;

	t1 = (((x5%x6)-x7)*x8);

	if (t1 != 17876538461186677711LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x10 = INT64_MAX;
	volatile int64_t t2 = -484LL;

	t2 = (((x9%x10)-x11)*x12);

	if (t2 != -1228060532340LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = 416;
	int32_t x22 = INT32_MAX;
	uint32_t x23 = 607859U;
	uint16_t x24 = UINT16_MAX;
	uint32_t t3 = 15U;

	t3 = (((x21%x22)-x23)*x24);

	if (t3 != 3140895955U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x31 = UINT64_MAX;
	int64_t x32 = INT64_MIN;

	t4 = (((x29%x30)-x31)*x32);

	if (t4 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x34 = INT16_MIN;
	uint64_t x35 = 961383576034658242LLU;
	int32_t x36 = INT32_MIN;
	volatile uint64_t t5 = 709683849LLU;

	t5 = (((x33%x34)-x35)*x36);

	if (t5 != 7437806655615533056LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x37 = 756;
	int32_t x39 = -14303595;
	int32_t x40 = -1;
	int32_t t6 = 1233;

	t6 = (((x37%x38)-x39)*x40);

	if (t6 != -14303719) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x41 = -1LL;
	volatile int8_t x42 = INT8_MIN;
	uint8_t x44 = 52U;
	volatile int64_t t7 = -621651597069LL;

	t7 = (((x41%x42)-x43)*x44);

	if (t7 != -1703936LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x45 = INT64_MIN;
	int8_t x46 = INT8_MIN;
	uint8_t x47 = 45U;
	volatile int16_t x48 = 47;
	static int64_t t8 = -45177866351371090LL;

	t8 = (((x45%x46)-x47)*x48);

	if (t8 != -2115LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x53 = 27U;
	int8_t x55 = INT8_MAX;
	volatile uint8_t x56 = 5U;

	t9 = (((x53%x54)-x55)*x56);

	if (t9 != -500) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x57 = UINT16_MAX;
	static volatile int16_t x58 = INT16_MAX;
	uint8_t x59 = 38U;
	static uint16_t x60 = 60U;
	int32_t t10 = 47;

	t10 = (((x57%x58)-x59)*x60);

	if (t10 != -2220) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x65 = 86;
	static volatile uint64_t x66 = 460089LLU;
	int8_t x67 = -32;
	static volatile uint32_t x68 = 666947U;

	t11 = (((x65%x66)-x67)*x68);

	if (t11 != 78699746LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x69 = UINT32_MAX;
	int32_t x70 = -3679;
	int8_t x71 = -12;
	volatile int64_t x72 = 0LL;
	int64_t t12 = 582351811378724610LL;

	t12 = (((x69%x70)-x71)*x72);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x73 = INT64_MIN;
	volatile int64_t x74 = INT64_MIN;
	uint64_t x75 = 1075762534712LLU;
	int16_t x76 = -1;
	static volatile uint64_t t13 = 986733LLU;

	t13 = (((x73%x74)-x75)*x76);

	if (t13 != 1075762534712LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x77 = -1;
	static volatile uint32_t x78 = UINT32_MAX;
	volatile uint64_t x79 = 108535LLU;
	volatile int16_t x80 = INT16_MIN;
	uint64_t t14 = 142722121LLU;

	t14 = (((x77%x78)-x79)*x80);

	if (t14 != 3556474880LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x81 = 13LL;
	uint32_t x82 = 1313U;
	int32_t x83 = INT32_MIN;
	int64_t t15 = 488722337571871LL;

	t15 = (((x81%x82)-x83)*x84);

	if (t15 != -2147483661LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x85 = 898U;
	volatile int16_t x88 = 19;
	volatile uint32_t t16 = 809481U;

	t16 = (((x85%x86)-x87)*x88);

	if (t16 != 152U) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x90 = INT32_MIN;
	uint16_t x91 = UINT16_MAX;
	int8_t x92 = INT8_MAX;

	t17 = (((x89%x90)-x91)*x92);

	if (t17 != -8323072) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x94 = INT8_MAX;
	uint8_t x95 = 59U;
	int8_t x96 = INT8_MIN;
	int64_t t18 = 0LL;

	t18 = (((x93%x94)-x95)*x96);

	if (t18 != 14848LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x97 = -204128679571LL;
	int8_t x98 = INT8_MIN;
	int16_t x99 = 0;
	volatile int16_t x100 = -1;

	t19 = (((x97%x98)-x99)*x100);

	if (t19 != 19LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x106 = 2LLU;
	int8_t x108 = 4;
	uint64_t t20 = 2LLU;

	t20 = (((x105%x106)-x107)*x108);

	if (t20 != 18446744073709551572LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x109 = INT8_MIN;
	static volatile uint64_t x111 = 7908145858993LLU;

	t21 = (((x109%x110)-x111)*x112);

	if (t21 != 18446704533435370031LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x114 = 1255581387U;
	int8_t x116 = 0;
	uint32_t t22 = 68819365U;

	t22 = (((x113%x114)-x115)*x116);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x121 = 2;
	volatile uint64_t x122 = 364468634242LLU;
	uint8_t x123 = 11U;
	int16_t x124 = INT16_MIN;
	uint64_t t23 = 103974701554036LLU;

	t23 = (((x121%x122)-x123)*x124);

	if (t23 != 294912LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x125 = -1;
	volatile int64_t x126 = -1LL;
	uint8_t x127 = UINT8_MAX;
	static uint32_t x128 = 1U;
	int64_t t24 = -1231813325LL;

	t24 = (((x125%x126)-x127)*x128);

	if (t24 != -255LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x133 = UINT64_MAX;
	volatile int16_t x134 = INT16_MIN;
	static uint16_t x135 = 4U;
	int16_t x136 = INT16_MAX;

	t25 = (((x133%x134)-x135)*x136);

	if (t25 != 1073545221LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x141 = -3;
	static uint8_t x142 = UINT8_MAX;
	uint8_t x144 = 13U;
	uint64_t t26 = 3718240570757LLU;

	t26 = (((x141%x142)-x143)*x144);

	if (t26 != 1060915182268100516LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x145 = -28750LL;
	int32_t x146 = -1;
	int8_t x147 = 1;
	static int8_t x148 = -1;
	volatile int64_t t27 = 316LL;

	t27 = (((x145%x146)-x147)*x148);

	if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x149 = UINT32_MAX;
	int32_t x151 = 2;
	static uint32_t t28 = 400431901U;

	t28 = (((x149%x150)-x151)*x152);

	if (t28 != 2000739U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x153 = UINT16_MAX;
	uint64_t x154 = 405268LLU;
	int32_t x155 = INT32_MIN;
	volatile int32_t x156 = -1;
	uint64_t t29 = 716163LLU;

	t29 = (((x153%x154)-x155)*x156);

	if (t29 != 18446744071562002433LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x157 = -1;
	volatile uint64_t t30 = 946577000109LLU;

	t30 = (((x157%x158)-x159)*x160);

	if (t30 != 2147483648LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x165 = -14;
	int16_t x166 = 28;
	static int8_t x167 = INT8_MAX;
	int64_t t31 = 260LL;

	t31 = (((x165%x166)-x167)*x168);

	if (t31 != 141LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x173 = INT64_MIN;
	uint64_t x174 = 2460385LLU;
	int16_t x175 = -648;
	volatile int32_t x176 = 33;
	uint64_t t32 = 28154213LLU;

	t32 = (((x173%x174)-x175)*x176);

	if (t32 != 17988498LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x177 = INT8_MAX;
	volatile int64_t x178 = 3800293421776388LL;
	volatile int16_t x179 = INT16_MIN;
	int8_t x180 = INT8_MAX;
	int64_t t33 = -3097053990969888082LL;

	t33 = (((x177%x178)-x179)*x180);

	if (t33 != 4177665LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x181 = 1;
	volatile int32_t x183 = -2;
	int32_t x184 = 2292669;
	static uint64_t t34 = 14691471LLU;

	t34 = (((x181%x182)-x183)*x184);

	if (t34 != 6878007LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x185 = 6U;
	volatile int8_t x186 = 2;
	uint64_t t35 = 272065666504655LLU;

	t35 = (((x185%x186)-x187)*x188);

	if (t35 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x189 = -1;
	static int8_t x190 = INT8_MAX;
	volatile uint64_t x191 = UINT64_MAX;
	uint64_t t36 = 13LLU;

	t36 = (((x189%x190)-x191)*x192);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x197 = INT64_MAX;
	int8_t x198 = -1;
	int32_t x199 = -23160265;
	int32_t x200 = INT32_MIN;
	int64_t t37 = 31524LL;

	t37 = (((x197%x198)-x199)*x200);

	if (t37 != -49736290370846720LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x201 = -1;
	static uint16_t x204 = UINT16_MAX;
	uint32_t t38 = 201273U;

	t38 = (((x201%x202)-x203)*x204);

	if (t38 != 1498385393U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x205 = INT32_MIN;
	uint64_t x207 = UINT64_MAX;
	volatile int8_t x208 = -27;
	uint64_t t39 = 1LLU;

	t39 = (((x205%x206)-x207)*x208);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x213 = 56U;
	int32_t x214 = INT32_MAX;
	static int16_t x215 = INT16_MIN;
	int16_t x216 = INT16_MIN;
	int32_t t40 = -126480;

	t40 = (((x213%x214)-x215)*x216);

	if (t40 != -1075576832) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x217 = 2509U;
	int16_t x218 = 480;
	volatile uint64_t x220 = 942350317568170412LLU;

	t41 = (((x217%x218)-x219)*x220);

	if (t41 != 1976096379141768252LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x221 = 3;
	uint8_t x223 = 8U;
	uint64_t x224 = 51834272358293001LLU;
	static volatile uint64_t t42 = 4013LLU;

	t42 = (((x221%x222)-x223)*x224);

	if (t42 != 18187572711918086611LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x225 = INT8_MIN;
	int32_t x226 = -1;
	volatile uint64_t t43 = 274100309111650LLU;

	t43 = (((x225%x226)-x227)*x228);

	if (t43 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x233 = -511910LL;
	volatile int64_t x234 = -114217228757228749LL;
	int32_t x235 = INT32_MIN;
	static volatile int64_t x236 = 488LL;
	volatile int64_t t44 = 96LL;

	t44 = (((x233%x234)-x235)*x236);

	if (t44 != 1047722208144LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x237 = INT8_MIN;
	int64_t x238 = INT64_MIN;
	volatile int8_t x239 = 1;
	int16_t x240 = INT16_MIN;
	static int64_t t45 = -4094311003300169LL;

	t45 = (((x237%x238)-x239)*x240);

	if (t45 != 4227072LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x241 = UINT32_MAX;
	int64_t x242 = INT64_MAX;
	int32_t x243 = -1;
	int64_t x244 = -1LL;

	t46 = (((x241%x242)-x243)*x244);

	if (t46 != -4294967296LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x245 = -1;
	int32_t x246 = INT32_MIN;
	int64_t x247 = 385512LL;
	static volatile int8_t x248 = -5;
	int64_t t47 = 7039013LL;

	t47 = (((x245%x246)-x247)*x248);

	if (t47 != 1927565LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x249 = INT8_MIN;
	volatile int8_t x250 = -1;
	uint32_t x251 = 3U;
	static int32_t x252 = 125703;
	uint32_t t48 = 4U;

	t48 = (((x249%x250)-x251)*x252);

	if (t48 != 4294590187U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x257 = 11U;
	int16_t x258 = -6;
	uint16_t x259 = UINT16_MAX;
	int8_t x260 = -1;
	volatile uint32_t t49 = 193717U;

	t49 = (((x257%x258)-x259)*x260);

	if (t49 != 65524U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x261 = -1;
	uint8_t x262 = 60U;
	uint32_t x263 = 547U;
	int8_t x264 = -1;
	volatile uint32_t t50 = 157808127U;

	t50 = (((x261%x262)-x263)*x264);

	if (t50 != 548U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x265 = INT32_MAX;
	int64_t x267 = 27588908LL;

	t51 = (((x265%x266)-x267)*x268);

	if (t51 != 13334946806662057568LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x273 = -1;
	int16_t x274 = INT16_MAX;
	int16_t x275 = -1;
	int8_t x276 = -1;
	volatile int32_t t52 = 29098;

	t52 = (((x273%x274)-x275)*x276);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x277 = UINT32_MAX;
	volatile uint8_t x278 = 6U;
	int64_t x280 = 30424793LL;
	int64_t t53 = -469419707546483LL;

	t53 = (((x277%x278)-x279)*x280);

	if (t53 != 130672494084651876LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x281 = INT8_MIN;
	int16_t x282 = 12;
	uint8_t x283 = UINT8_MAX;
	uint8_t x284 = UINT8_MAX;
	int32_t t54 = 8411;

	t54 = (((x281%x282)-x283)*x284);

	if (t54 != -67065) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x291 = INT32_MIN;
	static volatile uint32_t t55 = 5U;

	t55 = (((x289%x290)-x291)*x292);

	if (t55 != 4294475776U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x293 = 8U;
	static int32_t x294 = -1;
	uint32_t x295 = 18699857U;
	int32_t x296 = INT32_MAX;
	uint32_t t56 = 635715845U;

	t56 = (((x293%x294)-x295)*x296);

	if (t56 != 2166183505U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x297 = INT64_MIN;
	int32_t x298 = 6;
	int8_t x299 = INT8_MAX;
	int64_t x300 = -1LL;

	t57 = (((x297%x298)-x299)*x300);

	if (t57 != 129LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x301 = INT16_MAX;
	volatile uint32_t x302 = 4U;
	uint8_t x303 = 67U;
	uint8_t x304 = 1U;
	static uint32_t t58 = 944879987U;

	t58 = (((x301%x302)-x303)*x304);

	if (t58 != 4294967232U) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x305 = INT16_MIN;
	static int16_t x306 = INT16_MIN;
	int16_t x307 = INT16_MIN;
	int16_t x308 = INT16_MAX;

	t59 = (((x305%x306)-x307)*x308);

	if (t59 != 1073709056) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x314 = INT32_MIN;
	volatile uint16_t x315 = 374U;
	int8_t x316 = 0;

	t60 = (((x313%x314)-x315)*x316);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x317 = 50967273109100307LL;
	int32_t x320 = INT32_MAX;
	static volatile int64_t t61 = 1870015022649245258LL;

	t61 = (((x317%x318)-x319)*x320);

	if (t61 != 57391500466075LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x321 = -45014993;
	uint8_t x322 = 48U;
	int8_t x323 = INT8_MIN;
	uint64_t x324 = UINT64_MAX;
	volatile uint64_t t62 = 55325442LLU;

	t62 = (((x321%x322)-x323)*x324);

	if (t62 != 18446744073709551505LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x334 = UINT64_MAX;
	volatile int8_t x336 = -1;
	volatile uint64_t t63 = 1LLU;

	t63 = (((x333%x334)-x335)*x336);

	if (t63 != 2LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x337 = 180213037LLU;
	volatile int8_t x338 = -34;
	volatile int8_t x340 = INT8_MIN;

	t64 = (((x337%x338)-x339)*x340);

	if (t64 != 18446744050642266496LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint8_t x341 = 1U;
	int64_t x342 = -1LL;
	uint8_t x343 = UINT8_MAX;
	static uint32_t x344 = 766046503U;
	int64_t t65 = -494723696605729LL;

	t65 = (((x341%x342)-x343)*x344);

	if (t65 != -195341858265LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x345 = INT16_MIN;
	uint8_t x346 = 107U;
	int64_t x347 = -1501933LL;
	volatile int64_t t66 = -67017780664965LL;

	t66 = (((x345%x346)-x347)*x348);

	if (t66 != 190742189LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x352 = 27U;
	uint64_t t67 = 10280434723LLU;

	t67 = (((x349%x350)-x351)*x352);

	if (t67 != 18446744073708394450LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x353 = 12572U;
	int8_t x354 = -1;
	int8_t x355 = 3;
	int32_t x356 = -1;

	t68 = (((x353%x354)-x355)*x356);

	if (t68 != 4294954727U) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x357 = UINT64_MAX;
	static uint32_t x359 = 1680U;
	int64_t x360 = INT64_MIN;

	t69 = (((x357%x358)-x359)*x360);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x361 = INT32_MIN;
	int8_t x362 = 1;
	volatile int32_t t70 = 1;

	t70 = (((x361%x362)-x363)*x364);

	if (t70 != -1458) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x365 = INT16_MIN;
	uint64_t x368 = UINT64_MAX;
	uint64_t t71 = 96547056LLU;

	t71 = (((x365%x366)-x367)*x368);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x369 = UINT8_MAX;
	static int8_t x370 = INT8_MIN;
	volatile uint64_t x371 = UINT64_MAX;
	uint64_t t72 = 3385460483839596LLU;

	t72 = (((x369%x370)-x371)*x372);

	if (t72 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x378 = 5U;
	uint8_t x380 = UINT8_MAX;
	volatile uint32_t t73 = 29U;

	t73 = (((x377%x378)-x379)*x380);

	if (t73 != 4294966786U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x381 = INT64_MIN;
	int8_t x382 = -1;
	int64_t x383 = -2513LL;
	int8_t x384 = 0;
	static volatile int64_t t74 = 1075933369349473LL;

	t74 = (((x381%x382)-x383)*x384);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x385 = 3;
	int8_t x387 = INT8_MAX;
	volatile int32_t t75 = 110281;

	t75 = (((x385%x386)-x387)*x388);

	if (t75 != -8126340) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x393 = INT8_MAX;
	static uint32_t x395 = 38U;
	uint32_t x396 = UINT32_MAX;

	t76 = (((x393%x394)-x395)*x396);

	if (t76 != 4294967207U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x401 = UINT8_MAX;
	uint64_t x402 = 658314LLU;
	volatile int32_t x403 = INT32_MIN;
	uint32_t x404 = 221450U;
	static uint64_t t77 = 103404037820LLU;

	t77 = (((x401%x402)-x403)*x404);

	if (t77 != 475560310319350LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x414 = UINT64_MAX;
	static int32_t x416 = INT32_MIN;
	uint64_t t78 = 113306LLU;

	t78 = (((x413%x414)-x415)*x416);

	if (t78 != 5606240340685094912LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x417 = UINT32_MAX;
	int8_t x418 = -1;
	int32_t x419 = -1;
	volatile int64_t t79 = INT64_MIN;

	t79 = (((x417%x418)-x419)*x420);

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x426 = -6;
	volatile uint32_t x427 = 5U;
	uint64_t x428 = UINT64_MAX;
	uint64_t t80 = 125442110249505LLU;

	t80 = (((x425%x426)-x427)*x428);

	if (t80 != 18446744069414584325LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x430 = 6;
	int64_t x431 = INT64_MIN;
	volatile uint64_t x432 = UINT64_MAX;
	volatile uint64_t t81 = 7570LLU;

	t81 = (((x429%x430)-x431)*x432);

	if (t81 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x437 = -5893;
	volatile int32_t x438 = INT32_MAX;
	static volatile uint16_t x439 = UINT16_MAX;
	static uint8_t x440 = UINT8_MAX;
	volatile int32_t t82 = -185147;

	t82 = (((x437%x438)-x439)*x440);

	if (t82 != -18214140) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x442 = 615;
	int32_t x443 = INT32_MIN;
	uint64_t t83 = 236131930547001562LLU;

	t83 = (((x441%x442)-x443)*x444);

	if (t83 != 140735341854705LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x445 = INT8_MIN;
	int64_t x446 = 131720066237LL;
	uint64_t x447 = 261887LLU;
	uint64_t x448 = UINT64_MAX;
	static volatile uint64_t t84 = 2295859965392393646LLU;

	t84 = (((x445%x446)-x447)*x448);

	if (t84 != 262015LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x451 = 9U;
	int8_t x452 = -1;
	int64_t t85 = 1983751LL;

	t85 = (((x449%x450)-x451)*x452);

	if (t85 != -12LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x453 = 1;
	static volatile int8_t x454 = -1;
	volatile int8_t x455 = INT8_MIN;
	int8_t x456 = INT8_MAX;
	volatile int32_t t86 = -54917663;

	t86 = (((x453%x454)-x455)*x456);

	if (t86 != 16256) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x457 = INT32_MAX;
	int64_t x458 = 2278LL;
	int16_t x459 = 733;
	int16_t x460 = -2;
	int64_t t87 = 180575090LL;

	t87 = (((x457%x458)-x459)*x460);

	if (t87 != -1848LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x461 = 28;
	static uint64_t x462 = UINT64_MAX;
	int64_t x463 = -1017710758576LL;
	static volatile int64_t x464 = -43034906550LL;
	uint64_t t88 = 3965LLU;

	t88 = (((x461%x462)-x463)*x464);

	if (t88 != 13929783607436631800LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x469 = 1902U;
	int64_t x471 = -5666389754LL;
	static volatile int64_t t89 = 18000816232883484LL;

	t89 = (((x469%x470)-x471)*x472);

	if (t89 != 1178609068832LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x473 = 15082;
	static uint64_t x474 = 2680196620041LLU;
	int16_t x475 = -5099;
	static volatile int16_t x476 = -1;
	uint64_t t90 = 40165340934006LLU;

	t90 = (((x473%x474)-x475)*x476);

	if (t90 != 18446744073709531435LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x483 = 20U;
	uint16_t x484 = 133U;
	int64_t t91 = 3358575324594177LL;

	t91 = (((x481%x482)-x483)*x484);

	if (t91 != 14231LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x493 = INT64_MIN;
	int32_t x494 = -11225;
	int16_t x496 = 1;
	int64_t t92 = 242083543LL;

	t92 = (((x493%x494)-x495)*x496);

	if (t92 != -9705LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x501 = -28316582978073924LL;
	volatile uint16_t x502 = 1000U;
	int32_t x503 = INT32_MAX;
	uint8_t x504 = 1U;
	volatile int64_t t93 = 6LL;

	t93 = (((x501%x502)-x503)*x504);

	if (t93 != -2147484571LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x509 = INT32_MIN;
	int32_t x511 = INT32_MIN;

	t94 = (((x509%x510)-x511)*x512);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x513 = -89100;
	int16_t x514 = 80;
	int8_t x516 = 60;
	uint64_t t95 = 399590866836648LLU;

	t95 = (((x513%x514)-x515)*x516);

	if (t95 != 9277991806420669936LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x517 = UINT32_MAX;
	uint32_t x519 = 4131U;
	volatile int64_t t96 = 1LL;

	t96 = (((x517%x518)-x519)*x520);

	if (t96 != -4294963168LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x522 = -1325518317LL;
	int8_t x523 = INT8_MAX;
	int8_t x524 = 1;
	volatile uint64_t t97 = 63369091931LLU;

	t97 = (((x521%x522)-x523)*x524);

	if (t97 != 1224380330658257LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x525 = INT8_MAX;
	int32_t x526 = 35748232;
	static uint8_t x527 = UINT8_MAX;
	uint64_t x528 = 2338LLU;
	static volatile uint64_t t98 = 7335766477200930LLU;

	t98 = (((x525%x526)-x527)*x528);

	if (t98 != 18446744073709252352LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x533 = 53U;
	int32_t x534 = INT32_MAX;
	static int8_t x535 = 50;
	static int16_t x536 = -1;
	static int32_t t99 = 403;

	t99 = (((x533%x534)-x535)*x536);

	if (t99 != -3) { NG(); } else { ; }
	
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

