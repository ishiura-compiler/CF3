#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x1 = 19;
int16_t x4 = -1;
volatile int8_t x6 = -1;
static int8_t x19 = -1;
int16_t x20 = INT16_MAX;
int32_t t3 = -380;
int16_t x22 = INT16_MIN;
static int32_t x28 = INT32_MAX;
static uint32_t x32 = 0U;
static volatile uint64_t t7 = 1261427487293LLU;
uint64_t x41 = 104199506615534LLU;
static int32_t x43 = -1;
static int32_t t8 = -27464665;
int64_t x46 = INT64_MAX;
uint32_t x49 = 310305205U;
static volatile uint64_t x58 = UINT64_MAX;
volatile uint64_t x59 = 6636565378029684LLU;
int8_t x69 = 4;
volatile int32_t t14 = -6;
int32_t x74 = 4;
static int64_t x82 = INT64_MAX;
int32_t x88 = INT32_MAX;
volatile uint64_t t19 = 208738784540111350LLU;
int16_t x94 = 343;
static int8_t x96 = 14;
int32_t t20 = 1;
int64_t x97 = INT64_MAX;
int8_t x99 = INT8_MIN;
volatile int32_t t24 = -827780;
int16_t x124 = -62;
int64_t x126 = INT64_MIN;
static int32_t x130 = -1936037;
int64_t t28 = -1686025911LL;
int32_t x134 = -26;
volatile int64_t x141 = INT64_MIN;
int32_t x142 = -1;
int64_t x145 = -1366143456559LL;
int8_t x147 = -1;
static int8_t x155 = -1;
int32_t x156 = INT32_MAX;
int32_t x161 = 38606908;
volatile int16_t x162 = INT16_MAX;
int32_t x172 = INT32_MIN;
uint16_t x180 = UINT16_MAX;
uint8_t x183 = 1U;
volatile int64_t t39 = 1601809689LL;
static uint64_t x215 = 3475069694LLU;
uint64_t x220 = UINT64_MAX;
volatile uint64_t t44 = 5LLU;
uint8_t x221 = 0U;
int16_t x223 = -1;
volatile uint32_t x225 = 115U;
uint32_t x226 = UINT32_MAX;
int16_t x227 = INT16_MAX;
volatile int64_t t46 = 200LL;
static int8_t x233 = INT8_MAX;
int64_t x238 = INT64_MIN;
uint64_t x239 = 20391957201LLU;
int32_t x241 = -28078661;
int16_t x243 = INT16_MAX;
static uint8_t x245 = UINT8_MAX;
int16_t x246 = INT16_MIN;
volatile int16_t x248 = INT16_MAX;
static uint64_t x250 = 118028688385LLU;
uint64_t x252 = UINT64_MAX;
volatile int64_t x253 = INT64_MIN;
int8_t x255 = -1;
int8_t x256 = -1;
volatile uint8_t x262 = 1U;
int8_t x270 = 2;
uint16_t x279 = 0U;
volatile int32_t t56 = -56541982;
static uint16_t x281 = 3219U;
int32_t x286 = 15;
int32_t t58 = 5643;
static int16_t x295 = 73;
uint64_t x304 = 10968856859976LLU;
uint16_t x311 = 111U;
uint16_t x314 = 187U;
uint16_t x315 = UINT16_MAX;
int32_t t65 = -3;
int32_t x332 = -1;
volatile uint32_t t68 = 97580381U;
static int64_t x334 = 525472628564914049LL;
int8_t x336 = INT8_MIN;
int32_t t69 = 23;
int64_t x349 = 10044838LL;
volatile int32_t x352 = 1;
static volatile int32_t t73 = -206360619;
int16_t x358 = -1;
int8_t x361 = -1;
static volatile int32_t t77 = 12;
static volatile int16_t x378 = INT16_MIN;
int32_t x390 = -1;
uint64_t t82 = 1794736LLU;
uint32_t t84 = 27511U;
volatile uint8_t x405 = 5U;
static int64_t x408 = INT64_MAX;
uint16_t x418 = UINT16_MAX;
int64_t x419 = 364LL;
volatile int64_t t88 = 40259822LL;
volatile uint32_t t89 = 697609U;
volatile int32_t x425 = -96065857;
volatile int16_t x439 = 29;
volatile int32_t t94 = -165;
uint16_t x448 = 8878U;
static uint32_t x452 = UINT32_MAX;
int16_t x453 = INT16_MIN;
int32_t x462 = -1;


void f0(void) {
	int16_t x2 = INT16_MIN;
	int8_t x3 = INT8_MIN;
	int32_t t0 = -70;

	t0 = (((x1<=x2)-x3)-x4);

	if (t0 != 129) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = -466399316223762LL;
	static int64_t x7 = -1LL;
	int16_t x8 = INT16_MAX;
	static volatile int64_t t1 = 8632LL;

	t1 = (((x5<=x6)-x7)-x8);

	if (t1 != -32765LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	uint32_t x10 = 3540U;
	int16_t x11 = INT16_MIN;
	int8_t x12 = INT8_MAX;
	static int32_t t2 = 0;

	t2 = (((x9<=x10)-x11)-x12);

	if (t2 != 32641) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = UINT8_MAX;
	uint16_t x18 = UINT16_MAX;

	t3 = (((x17<=x18)-x19)-x20);

	if (t3 != -32765) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = 1U;
	int16_t x23 = INT16_MIN;
	uint64_t x24 = 9887612975LLU;
	volatile uint64_t t4 = 4657356007LLU;

	t4 = (((x21<=x22)-x23)-x24);

	if (t4 != 18446744063821971410LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint32_t x25 = UINT32_MAX;
	volatile int64_t x26 = INT64_MIN;
	static int16_t x27 = INT16_MIN;
	int32_t t5 = -70831272;

	t5 = (((x25<=x26)-x27)-x28);

	if (t5 != -2147450879) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = -1;
	uint32_t x30 = 14U;
	uint32_t x31 = UINT32_MAX;
	static uint32_t t6 = 392479U;

	t6 = (((x29<=x30)-x31)-x32);

	if (t6 != 1U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x37 = INT64_MIN;
	int64_t x38 = 5611619533145LL;
	static uint64_t x39 = UINT64_MAX;
	volatile uint8_t x40 = UINT8_MAX;

	t7 = (((x37<=x38)-x39)-x40);

	if (t7 != 18446744073709551363LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x42 = INT64_MIN;
	int8_t x44 = -3;

	t8 = (((x41<=x42)-x43)-x44);

	if (t8 != 5) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x45 = 404896;
	volatile uint64_t x47 = 11710143404584LLU;
	volatile uint8_t x48 = 1U;
	volatile uint64_t t9 = 64983383LLU;

	t9 = (((x45<=x46)-x47)-x48);

	if (t9 != 18446732363566147032LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x50 = UINT16_MAX;
	static uint16_t x51 = 173U;
	static int32_t x52 = -1;
	int32_t t10 = -75037999;

	t10 = (((x49<=x50)-x51)-x52);

	if (t10 != -172) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x53 = UINT8_MAX;
	static int32_t x54 = -1;
	static int8_t x55 = INT8_MIN;
	int64_t x56 = -15255697LL;
	volatile int64_t t11 = 5211552LL;

	t11 = (((x53<=x54)-x55)-x56);

	if (t11 != 15255825LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x57 = 24571U;
	int32_t x60 = -1;
	volatile uint64_t t12 = 421080232705LLU;

	t12 = (((x57<=x58)-x59)-x60);

	if (t12 != 18440107508331521934LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x61 = 19U;
	int32_t x62 = INT32_MAX;
	int8_t x63 = INT8_MIN;
	uint64_t x64 = 6985428174LLU;
	uint64_t t13 = 15432328393LLU;

	t13 = (((x61<=x62)-x63)-x64);

	if (t13 != 18446744066724123571LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x70 = INT16_MAX;
	static volatile int8_t x71 = INT8_MIN;
	volatile int8_t x72 = INT8_MIN;

	t14 = (((x69<=x70)-x71)-x72);

	if (t14 != 257) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x73 = -6214482603LL;
	uint8_t x75 = UINT8_MAX;
	static int64_t x76 = -1LL;
	static volatile int64_t t15 = 53699638LL;

	t15 = (((x73<=x74)-x75)-x76);

	if (t15 != -253LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x77 = 30;
	uint64_t x78 = UINT64_MAX;
	int32_t x79 = -194555901;
	volatile uint32_t x80 = UINT32_MAX;
	uint32_t t16 = 237U;

	t16 = (((x77<=x78)-x79)-x80);

	if (t16 != 194555903U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = INT64_MIN;
	int16_t x83 = -1;
	int8_t x84 = 1;
	int32_t t17 = -367;

	t17 = (((x81<=x82)-x83)-x84);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = INT8_MAX;
	int16_t x86 = INT16_MAX;
	static uint32_t x87 = UINT32_MAX;
	uint32_t t18 = 36105U;

	t18 = (((x85<=x86)-x87)-x88);

	if (t18 != 2147483651U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x89 = 20U;
	uint16_t x90 = 238U;
	int16_t x91 = INT16_MAX;
	static volatile uint64_t x92 = 66316696LLU;

	t19 = (((x89<=x90)-x91)-x92);

	if (t19 != 18446744073643202154LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x93 = 56627913U;
	int8_t x95 = 21;

	t20 = (((x93<=x94)-x95)-x96);

	if (t20 != -35) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x98 = INT16_MAX;
	int64_t x100 = 37175LL;
	int64_t t21 = 8LL;

	t21 = (((x97<=x98)-x99)-x100);

	if (t21 != -37047LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = -3;
	uint8_t x102 = 119U;
	int16_t x103 = INT16_MAX;
	uint16_t x104 = UINT16_MAX;
	static int32_t t22 = 3340;

	t22 = (((x101<=x102)-x103)-x104);

	if (t22 != -98301) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x105 = 0U;
	int64_t x106 = INT64_MAX;
	volatile uint8_t x107 = 10U;
	static uint32_t x108 = 1U;
	static volatile uint32_t t23 = 26954U;

	t23 = (((x105<=x106)-x107)-x108);

	if (t23 != 4294967286U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x113 = UINT64_MAX;
	uint16_t x114 = 2843U;
	static int32_t x115 = 133732454;
	int16_t x116 = INT16_MIN;

	t24 = (((x113<=x114)-x115)-x116);

	if (t24 != -133699686) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x117 = INT16_MAX;
	int64_t x118 = INT64_MAX;
	volatile int16_t x119 = 5;
	volatile int8_t x120 = INT8_MIN;
	static int32_t t25 = -2;

	t25 = (((x117<=x118)-x119)-x120);

	if (t25 != 124) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x121 = 4;
	int16_t x122 = INT16_MIN;
	volatile int8_t x123 = INT8_MAX;
	int32_t t26 = -144280;

	t26 = (((x121<=x122)-x123)-x124);

	if (t26 != -65) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x125 = INT32_MIN;
	static int8_t x127 = INT8_MIN;
	int32_t x128 = -6103752;
	volatile int32_t t27 = -1;

	t27 = (((x125<=x126)-x127)-x128);

	if (t27 != 6103880) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x129 = -893279605LL;
	static int64_t x131 = -1LL;
	uint8_t x132 = 24U;

	t28 = (((x129<=x130)-x131)-x132);

	if (t28 != -22LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x133 = 7U;
	int8_t x135 = -1;
	int8_t x136 = -1;
	int32_t t29 = 24;

	t29 = (((x133<=x134)-x135)-x136);

	if (t29 != 2) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x143 = INT64_MAX;
	int32_t x144 = -1;
	volatile int64_t t30 = 4128622LL;

	t30 = (((x141<=x142)-x143)-x144);

	if (t30 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint32_t x146 = 0U;
	int16_t x148 = INT16_MAX;
	int32_t t31 = 49315863;

	t31 = (((x145<=x146)-x147)-x148);

	if (t31 != -32765) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x153 = 1;
	int16_t x154 = INT16_MIN;
	int32_t t32 = -1;

	t32 = (((x153<=x154)-x155)-x156);

	if (t32 != -2147483646) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x157 = -1;
	static int64_t x158 = INT64_MIN;
	volatile int8_t x159 = -1;
	uint32_t x160 = UINT32_MAX;
	volatile uint32_t t33 = 3432U;

	t33 = (((x157<=x158)-x159)-x160);

	if (t33 != 2U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x163 = 5;
	uint16_t x164 = 1U;
	volatile int32_t t34 = -355;

	t34 = (((x161<=x162)-x163)-x164);

	if (t34 != -6) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x169 = -8;
	int8_t x170 = INT8_MIN;
	volatile uint32_t x171 = UINT32_MAX;
	volatile uint32_t t35 = 6U;

	t35 = (((x169<=x170)-x171)-x172);

	if (t35 != 2147483649U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x173 = UINT64_MAX;
	int16_t x174 = INT16_MAX;
	int16_t x175 = -1;
	uint64_t x176 = 135151814816851247LLU;
	uint64_t t36 = 699LLU;

	t36 = (((x173<=x174)-x175)-x176);

	if (t36 != 18311592258892700370LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x177 = -1;
	int16_t x178 = INT16_MAX;
	uint16_t x179 = 1U;
	int32_t t37 = -1076696;

	t37 = (((x177<=x178)-x179)-x180);

	if (t37 != -65535) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x181 = INT8_MIN;
	int64_t x182 = INT64_MAX;
	static uint32_t x184 = 0U;
	uint32_t t38 = 1U;

	t38 = (((x181<=x182)-x183)-x184);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x189 = 21262U;
	static uint8_t x190 = 2U;
	int64_t x191 = INT64_MAX;
	static volatile int64_t x192 = -7070LL;

	t39 = (((x189<=x190)-x191)-x192);

	if (t39 != -9223372036854768737LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x197 = 30;
	volatile uint64_t x198 = 196413473211LLU;
	static int32_t x199 = 1769;
	volatile int64_t x200 = INT64_MIN;
	int64_t t40 = 14557LL;

	t40 = (((x197<=x198)-x199)-x200);

	if (t40 != 9223372036854774040LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x205 = 19U;
	volatile int64_t x206 = INT64_MIN;
	uint64_t x207 = 80486211LLU;
	int64_t x208 = -108077461LL;
	uint64_t t41 = 229698893LLU;

	t41 = (((x205<=x206)-x207)-x208);

	if (t41 != 27591250LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x209 = 0U;
	static int64_t x210 = -1LL;
	static int8_t x211 = -9;
	static int16_t x212 = 2831;
	static volatile int32_t t42 = -9715249;

	t42 = (((x209<=x210)-x211)-x212);

	if (t42 != -2822) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x213 = -1;
	int64_t x214 = INT64_MIN;
	static volatile int32_t x216 = -1;
	static volatile uint64_t t43 = 24362290LLU;

	t43 = (((x213<=x214)-x215)-x216);

	if (t43 != 18446744070234481923LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x217 = UINT16_MAX;
	uint8_t x218 = 70U;
	static int32_t x219 = 6;

	t44 = (((x217<=x218)-x219)-x220);

	if (t44 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x222 = 24U;
	static volatile uint8_t x224 = 29U;
	static volatile int32_t t45 = -146;

	t45 = (((x221<=x222)-x223)-x224);

	if (t45 != -27) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x228 = INT64_MIN;

	t46 = (((x225<=x226)-x227)-x228);

	if (t46 != 9223372036854743042LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x229 = 4U;
	int32_t x230 = 56928;
	static uint64_t x231 = 4365024349348861LLU;
	volatile int16_t x232 = INT16_MIN;
	uint64_t t47 = 13645916283143180LLU;

	t47 = (((x229<=x230)-x231)-x232);

	if (t47 != 18442379049360235524LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x234 = 1523356863LLU;
	volatile int16_t x235 = -1;
	int32_t x236 = 1;
	static volatile int32_t t48 = -27060;

	t48 = (((x233<=x234)-x235)-x236);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x237 = 12306U;
	static int64_t x240 = -1LL;
	volatile uint64_t t49 = 985844301948268LLU;

	t49 = (((x237<=x238)-x239)-x240);

	if (t49 != 18446744053317594416LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x242 = INT8_MIN;
	int8_t x244 = -1;
	volatile int32_t t50 = -1;

	t50 = (((x241<=x242)-x243)-x244);

	if (t50 != -32765) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int16_t x247 = -1;
	int32_t t51 = -1;

	t51 = (((x245<=x246)-x247)-x248);

	if (t51 != -32766) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x249 = INT32_MAX;
	int16_t x251 = -1;
	uint64_t t52 = 1552737427LLU;

	t52 = (((x249<=x250)-x251)-x252);

	if (t52 != 3LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint32_t x254 = 8U;
	int32_t t53 = -1;

	t53 = (((x253<=x254)-x255)-x256);

	if (t53 != 3) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x261 = UINT64_MAX;
	int16_t x263 = -1;
	int16_t x264 = INT16_MIN;
	volatile int32_t t54 = -456730898;

	t54 = (((x261<=x262)-x263)-x264);

	if (t54 != 32769) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x269 = UINT8_MAX;
	volatile uint64_t x271 = UINT64_MAX;
	volatile int32_t x272 = 37423587;
	volatile uint64_t t55 = 207469591LLU;

	t55 = (((x269<=x270)-x271)-x272);

	if (t55 != 18446744073672128030LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x277 = 52848199LL;
	int32_t x278 = 9183;
	uint16_t x280 = 3173U;

	t56 = (((x277<=x278)-x279)-x280);

	if (t56 != -3173) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x282 = 0U;
	int32_t x283 = -168617284;
	volatile int16_t x284 = INT16_MAX;
	volatile int32_t t57 = -415;

	t57 = (((x281<=x282)-x283)-x284);

	if (t57 != 168584517) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x285 = 6618U;
	volatile int16_t x287 = -1;
	int16_t x288 = INT16_MIN;

	t58 = (((x285<=x286)-x287)-x288);

	if (t58 != 32769) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x293 = UINT64_MAX;
	uint8_t x294 = 1U;
	int16_t x296 = INT16_MIN;
	int32_t t59 = -944328;

	t59 = (((x293<=x294)-x295)-x296);

	if (t59 != 32695) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x297 = INT64_MAX;
	uint8_t x298 = UINT8_MAX;
	uint8_t x299 = 12U;
	volatile int64_t x300 = -1LL;
	int64_t t60 = -7497560LL;

	t60 = (((x297<=x298)-x299)-x300);

	if (t60 != -11LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x301 = 13U;
	volatile uint32_t x302 = 7810U;
	uint16_t x303 = UINT16_MAX;
	static uint64_t t61 = 418134LLU;

	t61 = (((x301<=x302)-x303)-x304);

	if (t61 != 18446733104852626106LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint8_t x305 = UINT8_MAX;
	uint8_t x306 = 61U;
	int8_t x307 = INT8_MIN;
	int64_t x308 = -169226LL;
	volatile int64_t t62 = 3771030LL;

	t62 = (((x305<=x306)-x307)-x308);

	if (t62 != 169354LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x309 = -16504;
	int8_t x310 = INT8_MAX;
	int16_t x312 = -10;
	static int32_t t63 = -62782867;

	t63 = (((x309<=x310)-x311)-x312);

	if (t63 != -100) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x313 = INT32_MAX;
	uint16_t x316 = 1158U;
	static int32_t t64 = -35;

	t64 = (((x313<=x314)-x315)-x316);

	if (t64 != -66693) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint64_t x317 = 3144767727716430LLU;
	static int64_t x318 = -14098LL;
	int16_t x319 = INT16_MIN;
	volatile uint8_t x320 = 7U;

	t65 = (((x317<=x318)-x319)-x320);

	if (t65 != 32762) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x321 = 5907221722171LLU;
	static volatile uint64_t x322 = 40484454309825LLU;
	volatile int8_t x323 = 13;
	uint64_t x324 = 408279851873LLU;
	uint64_t t66 = 5400139232872964LLU;

	t66 = (((x321<=x322)-x323)-x324);

	if (t66 != 18446743665429699731LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x325 = 1U;
	int32_t x326 = INT32_MIN;
	static volatile int8_t x327 = INT8_MIN;
	int64_t x328 = 398354282LL;
	volatile int64_t t67 = -2074893552070577184LL;

	t67 = (((x325<=x326)-x327)-x328);

	if (t67 != -398354154LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x329 = UINT32_MAX;
	int64_t x330 = INT64_MAX;
	static uint32_t x331 = UINT32_MAX;

	t68 = (((x329<=x330)-x331)-x332);

	if (t68 != 3U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x333 = -3096;
	int16_t x335 = INT16_MIN;

	t69 = (((x333<=x334)-x335)-x336);

	if (t69 != 32897) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x341 = -1;
	static volatile int8_t x342 = INT8_MAX;
	int32_t x343 = -458786138;
	int8_t x344 = -1;
	int32_t t70 = -409935919;

	t70 = (((x341<=x342)-x343)-x344);

	if (t70 != 458786140) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x345 = UINT16_MAX;
	uint16_t x346 = 3492U;
	int64_t x347 = 254434826LL;
	static int32_t x348 = INT32_MIN;
	int64_t t71 = 22LL;

	t71 = (((x345<=x346)-x347)-x348);

	if (t71 != 1893048822LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x350 = INT16_MIN;
	uint16_t x351 = 1U;
	int32_t t72 = 18187725;

	t72 = (((x349<=x350)-x351)-x352);

	if (t72 != -2) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x353 = 66284110924266LL;
	static volatile uint8_t x354 = UINT8_MAX;
	int8_t x355 = INT8_MIN;
	int16_t x356 = -11;

	t73 = (((x353<=x354)-x355)-x356);

	if (t73 != 139) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x357 = INT16_MIN;
	uint8_t x359 = UINT8_MAX;
	static uint8_t x360 = 54U;
	volatile int32_t t74 = 82690878;

	t74 = (((x357<=x358)-x359)-x360);

	if (t74 != -308) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x362 = -1;
	int16_t x363 = 0;
	int32_t x364 = -1;
	int32_t t75 = -2673315;

	t75 = (((x361<=x362)-x363)-x364);

	if (t75 != 2) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x365 = 1U;
	static int64_t x366 = INT64_MIN;
	volatile uint8_t x367 = UINT8_MAX;
	uint8_t x368 = 9U;
	volatile int32_t t76 = -15;

	t76 = (((x365<=x366)-x367)-x368);

	if (t76 != -264) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x369 = 26U;
	int16_t x370 = INT16_MAX;
	static int16_t x371 = -270;
	static int16_t x372 = -58;

	t77 = (((x369<=x370)-x371)-x372);

	if (t77 != 329) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x373 = 126325012LLU;
	int16_t x374 = INT16_MIN;
	int32_t x375 = -1;
	volatile uint32_t x376 = 53U;
	uint32_t t78 = 4329639U;

	t78 = (((x373<=x374)-x375)-x376);

	if (t78 != 4294967245U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x377 = 2985U;
	volatile uint32_t x379 = 1U;
	uint64_t x380 = 1355694405767LLU;
	uint64_t t79 = 35496LLU;

	t79 = (((x377<=x378)-x379)-x380);

	if (t79 != 18446742722310113144LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x381 = 3U;
	static int8_t x382 = -3;
	static volatile uint32_t x383 = 16U;
	uint16_t x384 = 3410U;
	uint32_t t80 = 75255U;

	t80 = (((x381<=x382)-x383)-x384);

	if (t80 != 4294963871U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x385 = 131621463;
	static uint16_t x386 = 8U;
	uint8_t x387 = UINT8_MAX;
	int16_t x388 = INT16_MIN;
	volatile int32_t t81 = 94698;

	t81 = (((x385<=x386)-x387)-x388);

	if (t81 != 32513) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x389 = INT16_MAX;
	int8_t x391 = 1;
	uint64_t x392 = 1LLU;

	t82 = (((x389<=x390)-x391)-x392);

	if (t82 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x393 = 1;
	int16_t x394 = INT16_MIN;
	uint64_t x395 = 2779448LLU;
	volatile int64_t x396 = 19351689567LL;
	uint64_t t83 = 193541230455LLU;

	t83 = (((x393<=x394)-x395)-x396);

	if (t83 != 18446744054355082601LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x397 = 14;
	int32_t x398 = INT32_MIN;
	int8_t x399 = INT8_MIN;
	uint32_t x400 = 15U;

	t84 = (((x397<=x398)-x399)-x400);

	if (t84 != 113U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x401 = 7U;
	uint64_t x402 = 102LLU;
	volatile int16_t x403 = -1;
	uint64_t x404 = UINT64_MAX;
	static volatile uint64_t t85 = 60293920LLU;

	t85 = (((x401<=x402)-x403)-x404);

	if (t85 != 3LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x406 = INT8_MIN;
	uint32_t x407 = UINT32_MAX;
	int64_t t86 = 6170326628713LL;

	t86 = (((x405<=x406)-x407)-x408);

	if (t86 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x409 = 11834;
	uint32_t x410 = UINT32_MAX;
	uint16_t x411 = 24U;
	volatile int64_t x412 = INT64_MIN;
	static volatile int64_t t87 = 554LL;

	t87 = (((x409<=x410)-x411)-x412);

	if (t87 != 9223372036854775785LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x417 = 1U;
	int16_t x420 = 498;

	t88 = (((x417<=x418)-x419)-x420);

	if (t88 != -861LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x421 = 43U;
	uint64_t x422 = 393580744LLU;
	volatile uint32_t x423 = 39092U;
	int32_t x424 = INT32_MAX;

	t89 = (((x421<=x422)-x423)-x424);

	if (t89 != 2147444558U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x426 = INT64_MIN;
	volatile int8_t x427 = -1;
	int8_t x428 = -15;
	volatile int32_t t90 = -31;

	t90 = (((x425<=x426)-x427)-x428);

	if (t90 != 16) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x429 = 1U;
	int32_t x430 = INT32_MIN;
	static uint16_t x431 = 2167U;
	int16_t x432 = -90;
	int32_t t91 = -5964;

	t91 = (((x429<=x430)-x431)-x432);

	if (t91 != -2077) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x433 = INT8_MIN;
	uint64_t x434 = 6310639818482133LLU;
	int16_t x435 = 3498;
	uint32_t x436 = 34979517U;
	volatile uint32_t t92 = 520102898U;

	t92 = (((x433<=x434)-x435)-x436);

	if (t92 != 4259984281U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x437 = INT32_MAX;
	int8_t x438 = 0;
	static uint32_t x440 = 200153U;
	volatile uint32_t t93 = 150435161U;

	t93 = (((x437<=x438)-x439)-x440);

	if (t93 != 4294767114U) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x441 = 136179395168690LL;
	volatile uint16_t x442 = 1U;
	int16_t x443 = -1;
	static volatile int32_t x444 = 1339;

	t94 = (((x441<=x442)-x443)-x444);

	if (t94 != -1338) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x445 = INT64_MAX;
	int32_t x446 = 40596;
	uint32_t x447 = 2236U;
	uint32_t t95 = 1138959134U;

	t95 = (((x445<=x446)-x447)-x448);

	if (t95 != 4294956182U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x449 = INT8_MAX;
	int16_t x450 = -1;
	int8_t x451 = -6;
	volatile uint32_t t96 = 493514U;

	t96 = (((x449<=x450)-x451)-x452);

	if (t96 != 7U) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x454 = INT16_MAX;
	uint8_t x455 = UINT8_MAX;
	volatile int8_t x456 = INT8_MAX;
	volatile int32_t t97 = 0;

	t97 = (((x453<=x454)-x455)-x456);

	if (t97 != -381) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x457 = 1346;
	int8_t x458 = -1;
	int8_t x459 = INT8_MAX;
	static uint16_t x460 = 862U;
	volatile int32_t t98 = -11;

	t98 = (((x457<=x458)-x459)-x460);

	if (t98 != -989) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x461 = 5LLU;
	uint64_t x463 = 657230104215LLU;
	static int8_t x464 = INT8_MIN;
	uint64_t t99 = 1338319996770LLU;

	t99 = (((x461<=x462)-x463)-x464);

	if (t99 != 18446743416479447530LLU) { NG(); } else { ; }
	
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

