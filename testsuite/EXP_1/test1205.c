#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = 728828740;
static int16_t x10 = -1;
static int16_t x12 = INT16_MIN;
int16_t x24 = -1;
static volatile int32_t t6 = -5098;
volatile int64_t x30 = INT64_MIN;
int16_t x33 = 409;
int16_t x35 = INT16_MIN;
static int8_t x44 = INT8_MAX;
uint64_t x48 = UINT64_MAX;
int16_t x50 = INT16_MIN;
volatile int16_t x55 = INT16_MAX;
uint64_t x56 = 17109916219LLU;
int32_t t13 = 14;
int32_t x68 = -3506;
static volatile int64_t x77 = -2054416576241LL;
int8_t x78 = INT8_MIN;
int32_t x80 = INT32_MIN;
static int8_t x82 = -1;
volatile int32_t t21 = -196601892;
int16_t x98 = INT16_MIN;
static int32_t x113 = INT32_MIN;
int32_t x114 = INT32_MIN;
volatile int32_t t26 = 120602;
uint64_t x119 = 4158178887LLU;
volatile int8_t x122 = INT8_MIN;
int8_t x128 = INT8_MIN;
static int32_t t29 = 10;
int16_t x136 = INT16_MAX;
int16_t x141 = INT16_MAX;
int16_t x142 = INT16_MIN;
int64_t x148 = 532984388LL;
uint32_t x150 = UINT32_MAX;
volatile int64_t x151 = INT64_MAX;
static int32_t x158 = INT32_MAX;
volatile uint16_t x159 = UINT16_MAX;
int32_t t37 = 3089;
int8_t x173 = INT8_MIN;
int64_t x182 = -1LL;
volatile int32_t t42 = 171029;
static int16_t x199 = 75;
volatile uint64_t x205 = 210475401970717LLU;
static volatile uint32_t x206 = 12528U;
int32_t x213 = INT32_MIN;
volatile int32_t t48 = -2196;
int64_t x225 = INT64_MIN;
uint64_t x227 = 911648058816692743LLU;
volatile int32_t t53 = -581156877;
volatile int64_t x248 = -8515707511058LL;
int32_t x250 = -1;
int32_t x256 = -1;
int8_t x260 = -12;
int16_t x263 = INT16_MIN;
int32_t t58 = 26864;
static int32_t x301 = INT32_MAX;
volatile uint8_t x304 = 46U;
static volatile int8_t x318 = 0;
volatile int32_t t67 = -123001;
volatile int32_t t68 = 0;
uint8_t x331 = 77U;
static int32_t t70 = 5291;
static int64_t x334 = INT64_MAX;
int8_t x336 = -1;
volatile int32_t t71 = 656138;
int64_t x342 = INT64_MIN;
int8_t x366 = INT8_MIN;
static volatile int16_t x370 = -6584;
uint8_t x371 = 26U;
volatile uint32_t x390 = 299877U;
static uint32_t x392 = 5016U;
int64_t x395 = -1LL;
int32_t t87 = -19261;
int8_t x415 = INT8_MAX;
uint16_t x419 = 16U;
static uint16_t x437 = UINT16_MAX;
volatile int32_t t97 = -2793480;
volatile uint32_t x447 = UINT32_MAX;


void f0(void) {
	int32_t x1 = INT32_MIN;
	int8_t x2 = -61;
	int8_t x3 = INT8_MIN;
	static int8_t x4 = INT8_MIN;
	static int32_t t0 = -5016731;

	t0 = (((x1==x2)-x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 216;
	static int8_t x6 = -1;
	int64_t x7 = INT64_MAX;
	int8_t x8 = INT8_MAX;

	t1 = (((x5==x6)-x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	uint16_t x11 = UINT16_MAX;
	static int32_t t2 = 576714;

	t2 = (((x9==x10)-x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	uint64_t x14 = 17LLU;
	static uint64_t x15 = 391LLU;
	int8_t x16 = INT8_MAX;
	int32_t t3 = 22208;

	t3 = (((x13==x14)-x15)<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 1;
	static int64_t x18 = INT64_MIN;
	static int16_t x19 = INT16_MIN;
	volatile uint32_t x20 = UINT32_MAX;
	int32_t t4 = -12;

	t4 = (((x17==x18)-x19)<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 61U;
	uint8_t x22 = 11U;
	uint8_t x23 = UINT8_MAX;
	int32_t t5 = -1749147;

	t5 = (((x21==x22)-x23)<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = INT16_MAX;
	uint32_t x26 = UINT32_MAX;
	uint32_t x27 = UINT32_MAX;
	int8_t x28 = INT8_MIN;

	t6 = (((x25==x26)-x27)<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x29 = 47;
	volatile int16_t x31 = -24;
	static int32_t x32 = INT32_MAX;
	int32_t t7 = -1;

	t7 = (((x29==x30)-x31)<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x34 = INT16_MAX;
	volatile uint16_t x36 = UINT16_MAX;
	int32_t t8 = -886874;

	t8 = (((x33==x34)-x35)<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = UINT16_MAX;
	uint16_t x38 = 3U;
	volatile int32_t x39 = -12;
	uint8_t x40 = 1U;
	static volatile int32_t t9 = -21;

	t9 = (((x37==x38)-x39)<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = INT64_MIN;
	static int16_t x42 = INT16_MIN;
	int8_t x43 = -1;
	volatile int32_t t10 = 3;

	t10 = (((x41==x42)-x43)<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x45 = UINT16_MAX;
	uint32_t x46 = 36311289U;
	uint32_t x47 = 343540815U;
	int32_t t11 = -22038096;

	t11 = (((x45==x46)-x47)<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -1;
	int64_t x51 = -187985140368LL;
	int32_t x52 = -59;
	volatile int32_t t12 = 155355;

	t12 = (((x49==x50)-x51)<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MAX;
	int16_t x54 = 2;

	t13 = (((x53==x54)-x55)<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = -1;
	uint8_t x62 = 36U;
	int16_t x63 = 1892;
	volatile int16_t x64 = 4078;
	int32_t t14 = -3;

	t14 = (((x61==x62)-x63)<x64);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x65 = -1;
	uint64_t x66 = UINT64_MAX;
	int32_t x67 = INT32_MAX;
	volatile int32_t t15 = 1;

	t15 = (((x65==x66)-x67)<x68);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x69 = INT16_MIN;
	volatile int16_t x70 = -16;
	int32_t x71 = INT32_MAX;
	uint8_t x72 = UINT8_MAX;
	static volatile int32_t t16 = 6502;

	t16 = (((x69==x70)-x71)<x72);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = -1;
	volatile uint8_t x74 = 0U;
	volatile int32_t x75 = INT32_MAX;
	static uint32_t x76 = UINT32_MAX;
	int32_t t17 = 1566186;

	t17 = (((x73==x74)-x75)<x76);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x79 = UINT64_MAX;
	int32_t t18 = 62115;

	t18 = (((x77==x78)-x79)<x80);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x81 = INT8_MAX;
	uint32_t x83 = 29245343U;
	int64_t x84 = INT64_MIN;
	int32_t t19 = 25954;

	t19 = (((x81==x82)-x83)<x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x85 = INT64_MIN;
	volatile uint8_t x86 = UINT8_MAX;
	int8_t x87 = -1;
	uint8_t x88 = 63U;
	volatile int32_t t20 = 0;

	t20 = (((x85==x86)-x87)<x88);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x93 = -40;
	static int8_t x94 = 0;
	static int8_t x95 = -13;
	uint8_t x96 = 88U;

	t21 = (((x93==x94)-x95)<x96);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x97 = 1384722330062243LLU;
	volatile int16_t x99 = 9533;
	static uint32_t x100 = 7312593U;
	static volatile int32_t t22 = 2;

	t22 = (((x97==x98)-x99)<x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x101 = INT32_MAX;
	volatile uint32_t x102 = 1389354376U;
	static int32_t x103 = -963488229;
	static uint16_t x104 = 20316U;
	volatile int32_t t23 = -2133094;

	t23 = (((x101==x102)-x103)<x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x105 = 10;
	volatile uint8_t x106 = 42U;
	volatile int64_t x107 = -26593LL;
	static uint32_t x108 = 87U;
	volatile int32_t t24 = 1105780;

	t24 = (((x105==x106)-x107)<x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x109 = -1;
	int16_t x110 = -1;
	uint8_t x111 = 1U;
	uint8_t x112 = 22U;
	volatile int32_t t25 = 0;

	t25 = (((x109==x110)-x111)<x112);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x115 = 9U;
	static uint8_t x116 = 9U;

	t26 = (((x113==x114)-x115)<x116);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x117 = 1;
	int8_t x118 = INT8_MIN;
	int8_t x120 = INT8_MIN;
	volatile int32_t t27 = 15;

	t27 = (((x117==x118)-x119)<x120);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x121 = INT32_MIN;
	uint8_t x123 = UINT8_MAX;
	static volatile int8_t x124 = -1;
	static int32_t t28 = -1427537;

	t28 = (((x121==x122)-x123)<x124);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x125 = 12U;
	static int8_t x126 = -1;
	int64_t x127 = -1LL;

	t29 = (((x125==x126)-x127)<x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x129 = INT64_MIN;
	volatile int64_t x130 = -1LL;
	uint16_t x131 = 0U;
	int16_t x132 = -367;
	int32_t t30 = 77096380;

	t30 = (((x129==x130)-x131)<x132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x133 = INT16_MIN;
	int16_t x134 = 7972;
	int64_t x135 = -141260226257LL;
	int32_t t31 = -10;

	t31 = (((x133==x134)-x135)<x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x137 = UINT16_MAX;
	int8_t x138 = -1;
	static volatile int32_t x139 = -1;
	volatile uint32_t x140 = 99476940U;
	volatile int32_t t32 = 50399684;

	t32 = (((x137==x138)-x139)<x140);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x143 = INT32_MAX;
	int32_t x144 = -446038;
	static volatile int32_t t33 = 988;

	t33 = (((x141==x142)-x143)<x144);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = 3681863655488LL;
	static uint64_t x146 = 69806132695921LLU;
	uint32_t x147 = 445U;
	volatile int32_t t34 = 8;

	t34 = (((x145==x146)-x147)<x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = -25617932566LL;
	uint64_t x152 = UINT64_MAX;
	int32_t t35 = 18;

	t35 = (((x149==x150)-x151)<x152);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x157 = INT64_MAX;
	int16_t x160 = 1;
	int32_t t36 = 1204088;

	t36 = (((x157==x158)-x159)<x160);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x161 = INT32_MIN;
	int16_t x162 = -2;
	static int16_t x163 = 1;
	volatile int32_t x164 = -93579115;

	t37 = (((x161==x162)-x163)<x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x174 = INT8_MIN;
	static int16_t x175 = -1;
	volatile int32_t x176 = -1;
	int32_t t38 = -113128;

	t38 = (((x173==x174)-x175)<x176);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x177 = 351510614556096LLU;
	int16_t x178 = INT16_MIN;
	static int16_t x179 = INT16_MAX;
	int8_t x180 = -1;
	volatile int32_t t39 = -4;

	t39 = (((x177==x178)-x179)<x180);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x181 = 7040LL;
	uint64_t x183 = 616556609010180458LLU;
	int64_t x184 = -1LL;
	volatile int32_t t40 = 5671;

	t40 = (((x181==x182)-x183)<x184);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x185 = INT16_MIN;
	static uint64_t x186 = 36065630513594704LLU;
	uint8_t x187 = 8U;
	int8_t x188 = INT8_MIN;
	int32_t t41 = 15527327;

	t41 = (((x185==x186)-x187)<x188);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x189 = INT64_MIN;
	static int16_t x190 = INT16_MIN;
	static uint8_t x191 = 20U;
	static volatile uint32_t x192 = 114495U;

	t42 = (((x189==x190)-x191)<x192);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x193 = -88894154LL;
	uint8_t x194 = 64U;
	volatile uint16_t x195 = 129U;
	uint64_t x196 = 25766595974LLU;
	int32_t t43 = 2321;

	t43 = (((x193==x194)-x195)<x196);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x197 = INT32_MIN;
	int64_t x198 = -185024087085551LL;
	static uint16_t x200 = 17311U;
	static volatile int32_t t44 = 126937360;

	t44 = (((x197==x198)-x199)<x200);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x201 = -1LL;
	int32_t x202 = INT32_MIN;
	int16_t x203 = -1;
	uint64_t x204 = UINT64_MAX;
	volatile int32_t t45 = -9504381;

	t45 = (((x201==x202)-x203)<x204);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x207 = UINT32_MAX;
	volatile int32_t x208 = -3054949;
	static volatile int32_t t46 = 108;

	t46 = (((x205==x206)-x207)<x208);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x209 = -8270;
	uint64_t x210 = 27LLU;
	uint8_t x211 = UINT8_MAX;
	int64_t x212 = INT64_MIN;
	static int32_t t47 = 34647;

	t47 = (((x209==x210)-x211)<x212);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x214 = 223U;
	int64_t x215 = -1LL;
	int8_t x216 = 8;

	t48 = (((x213==x214)-x215)<x216);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x221 = 123U;
	int16_t x222 = INT16_MIN;
	volatile int32_t x223 = INT32_MAX;
	int32_t x224 = INT32_MIN;
	static volatile int32_t t49 = 1;

	t49 = (((x221==x222)-x223)<x224);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x226 = 15;
	int16_t x228 = INT16_MIN;
	volatile int32_t t50 = -12300;

	t50 = (((x225==x226)-x227)<x228);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x233 = INT8_MIN;
	uint8_t x234 = 14U;
	int8_t x235 = INT8_MIN;
	int8_t x236 = INT8_MIN;
	volatile int32_t t51 = -1663478;

	t51 = (((x233==x234)-x235)<x236);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x237 = -381798;
	int64_t x238 = INT64_MAX;
	int64_t x239 = -3091509147LL;
	int16_t x240 = -449;
	int32_t t52 = 0;

	t52 = (((x237==x238)-x239)<x240);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x241 = -1;
	int32_t x242 = -1;
	int32_t x243 = -1;
	int8_t x244 = -1;

	t53 = (((x241==x242)-x243)<x244);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x245 = -1;
	int32_t x246 = INT32_MIN;
	uint16_t x247 = UINT16_MAX;
	volatile int32_t t54 = 0;

	t54 = (((x245==x246)-x247)<x248);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x249 = 21;
	static volatile int64_t x251 = -1LL;
	int64_t x252 = INT64_MIN;
	int32_t t55 = -301220826;

	t55 = (((x249==x250)-x251)<x252);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x253 = INT32_MIN;
	int8_t x254 = INT8_MIN;
	volatile int16_t x255 = -1;
	int32_t t56 = 174;

	t56 = (((x253==x254)-x255)<x256);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x257 = UINT32_MAX;
	static int8_t x258 = 11;
	int8_t x259 = INT8_MAX;
	int32_t t57 = -14169302;

	t57 = (((x257==x258)-x259)<x260);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x261 = 468;
	uint32_t x262 = 1080235454U;
	static int64_t x264 = INT64_MIN;

	t58 = (((x261==x262)-x263)<x264);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x269 = -362;
	static volatile uint8_t x270 = 3U;
	int16_t x271 = INT16_MIN;
	int64_t x272 = -1LL;
	static int32_t t59 = -268204980;

	t59 = (((x269==x270)-x271)<x272);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x273 = INT64_MAX;
	volatile int8_t x274 = INT8_MAX;
	int64_t x275 = -2434501692560483LL;
	static uint16_t x276 = 10653U;
	volatile int32_t t60 = -2243271;

	t60 = (((x273==x274)-x275)<x276);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x281 = INT32_MIN;
	volatile int8_t x282 = INT8_MAX;
	int8_t x283 = INT8_MAX;
	int64_t x284 = INT64_MIN;
	int32_t t61 = 1;

	t61 = (((x281==x282)-x283)<x284);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x285 = 115U;
	volatile int8_t x286 = INT8_MAX;
	int64_t x287 = INT64_MAX;
	int64_t x288 = -2530203LL;
	volatile int32_t t62 = -1;

	t62 = (((x285==x286)-x287)<x288);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x293 = INT32_MIN;
	volatile int32_t x294 = INT32_MIN;
	static int64_t x295 = -3628877887562125LL;
	uint16_t x296 = 1U;
	int32_t t63 = -38754889;

	t63 = (((x293==x294)-x295)<x296);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x297 = 40U;
	int64_t x298 = INT64_MAX;
	uint8_t x299 = UINT8_MAX;
	int16_t x300 = INT16_MIN;
	volatile int32_t t64 = -4384322;

	t64 = (((x297==x298)-x299)<x300);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x302 = INT16_MIN;
	uint64_t x303 = 2592LLU;
	int32_t t65 = -519;

	t65 = (((x301==x302)-x303)<x304);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x309 = 0;
	static int16_t x310 = INT16_MIN;
	int16_t x311 = INT16_MAX;
	volatile int32_t x312 = -367349472;
	int32_t t66 = 646378546;

	t66 = (((x309==x310)-x311)<x312);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x317 = INT16_MAX;
	uint64_t x319 = UINT64_MAX;
	uint8_t x320 = 68U;

	t67 = (((x317==x318)-x319)<x320);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x321 = -3;
	int8_t x322 = INT8_MAX;
	static volatile int16_t x323 = -14;
	static volatile int16_t x324 = 13;

	t68 = (((x321==x322)-x323)<x324);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x325 = 0U;
	int16_t x326 = INT16_MAX;
	uint16_t x327 = 18U;
	int64_t x328 = -1LL;
	int32_t t69 = 243232062;

	t69 = (((x325==x326)-x327)<x328);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x329 = 30LLU;
	static int16_t x330 = -1;
	int64_t x332 = INT64_MIN;

	t70 = (((x329==x330)-x331)<x332);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x333 = 6;
	static uint16_t x335 = UINT16_MAX;

	t71 = (((x333==x334)-x335)<x336);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x337 = -1;
	static volatile int64_t x338 = INT64_MIN;
	static volatile uint64_t x339 = 12460394675522758LLU;
	int8_t x340 = 15;
	volatile int32_t t72 = 130525962;

	t72 = (((x337==x338)-x339)<x340);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x341 = UINT8_MAX;
	static int64_t x343 = -1LL;
	volatile uint32_t x344 = 10042267U;
	volatile int32_t t73 = -600;

	t73 = (((x341==x342)-x343)<x344);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x345 = INT16_MIN;
	uint8_t x346 = 0U;
	volatile int32_t x347 = -30520;
	uint64_t x348 = UINT64_MAX;
	int32_t t74 = -10;

	t74 = (((x345==x346)-x347)<x348);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x349 = -680;
	uint8_t x350 = 6U;
	int8_t x351 = -1;
	int32_t x352 = INT32_MIN;
	static volatile int32_t t75 = -95;

	t75 = (((x349==x350)-x351)<x352);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x353 = INT32_MAX;
	int32_t x354 = -1;
	static int16_t x355 = INT16_MIN;
	static int8_t x356 = INT8_MAX;
	volatile int32_t t76 = 56121;

	t76 = (((x353==x354)-x355)<x356);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x357 = INT64_MIN;
	static uint8_t x358 = UINT8_MAX;
	uint32_t x359 = UINT32_MAX;
	volatile int16_t x360 = INT16_MAX;
	static volatile int32_t t77 = 11644615;

	t77 = (((x357==x358)-x359)<x360);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x361 = 35;
	int64_t x362 = 121884744290808773LL;
	static int64_t x363 = -90LL;
	int16_t x364 = -1;
	int32_t t78 = 1;

	t78 = (((x361==x362)-x363)<x364);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x365 = 31LLU;
	int32_t x367 = INT32_MAX;
	volatile int64_t x368 = INT64_MIN;
	int32_t t79 = -102;

	t79 = (((x365==x366)-x367)<x368);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x369 = INT8_MIN;
	static uint32_t x372 = 436841U;
	static volatile int32_t t80 = 1808;

	t80 = (((x369==x370)-x371)<x372);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x373 = 214078402LLU;
	static int32_t x374 = 143362;
	static uint32_t x375 = UINT32_MAX;
	int16_t x376 = INT16_MIN;
	int32_t t81 = -1095074;

	t81 = (((x373==x374)-x375)<x376);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x377 = -615070564LL;
	int8_t x378 = INT8_MIN;
	volatile int8_t x379 = INT8_MIN;
	int8_t x380 = 0;
	int32_t t82 = -20319763;

	t82 = (((x377==x378)-x379)<x380);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x381 = -29216869LL;
	int64_t x382 = 6367910938061951LL;
	static volatile int32_t x383 = INT32_MAX;
	int64_t x384 = INT64_MIN;
	int32_t t83 = -54483;

	t83 = (((x381==x382)-x383)<x384);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x385 = INT16_MAX;
	uint8_t x386 = UINT8_MAX;
	volatile int32_t x387 = -147388;
	volatile uint32_t x388 = UINT32_MAX;
	int32_t t84 = -8;

	t84 = (((x385==x386)-x387)<x388);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x389 = UINT64_MAX;
	uint16_t x391 = 6921U;
	volatile int32_t t85 = -241392322;

	t85 = (((x389==x390)-x391)<x392);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x393 = UINT64_MAX;
	static uint8_t x394 = 1U;
	int32_t x396 = INT32_MIN;
	int32_t t86 = -1;

	t86 = (((x393==x394)-x395)<x396);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x397 = 329;
	uint32_t x398 = 1235397746U;
	int64_t x399 = -18765454564103LL;
	int64_t x400 = -4295421853889334LL;

	t87 = (((x397==x398)-x399)<x400);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x401 = UINT16_MAX;
	int16_t x402 = -1;
	volatile uint32_t x403 = 0U;
	int8_t x404 = 0;
	volatile int32_t t88 = 5030513;

	t88 = (((x401==x402)-x403)<x404);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x405 = 0;
	static uint32_t x406 = UINT32_MAX;
	static int8_t x407 = INT8_MIN;
	volatile int64_t x408 = INT64_MAX;
	volatile int32_t t89 = 16484052;

	t89 = (((x405==x406)-x407)<x408);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x409 = 844147729U;
	int32_t x410 = 293492701;
	int8_t x411 = INT8_MIN;
	static volatile uint16_t x412 = UINT16_MAX;
	volatile int32_t t90 = 2477942;

	t90 = (((x409==x410)-x411)<x412);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x413 = UINT16_MAX;
	int8_t x414 = INT8_MAX;
	static volatile int32_t x416 = INT32_MAX;
	static volatile int32_t t91 = -1;

	t91 = (((x413==x414)-x415)<x416);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x417 = INT8_MIN;
	uint64_t x418 = 96558LLU;
	volatile int64_t x420 = -1353LL;
	static int32_t t92 = 23;

	t92 = (((x417==x418)-x419)<x420);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x421 = -5;
	int64_t x422 = INT64_MAX;
	int64_t x423 = -1LL;
	int16_t x424 = -1;
	int32_t t93 = -91;

	t93 = (((x421==x422)-x423)<x424);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x425 = INT32_MAX;
	static int32_t x426 = -624335;
	int32_t x427 = -1500;
	int32_t x428 = INT32_MIN;
	volatile int32_t t94 = -156134;

	t94 = (((x425==x426)-x427)<x428);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x429 = -180LL;
	int32_t x430 = -513992611;
	uint8_t x431 = UINT8_MAX;
	int64_t x432 = -2822139866LL;
	static volatile int32_t t95 = 389158;

	t95 = (((x429==x430)-x431)<x432);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x433 = INT8_MAX;
	static int64_t x434 = INT64_MAX;
	static uint8_t x435 = 69U;
	volatile int64_t x436 = INT64_MAX;
	volatile int32_t t96 = 7;

	t96 = (((x433==x434)-x435)<x436);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x438 = INT32_MAX;
	volatile uint32_t x439 = 71278U;
	static int8_t x440 = 3;

	t97 = (((x437==x438)-x439)<x440);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x441 = INT64_MIN;
	int8_t x442 = -1;
	int8_t x443 = INT8_MAX;
	static int16_t x444 = INT16_MAX;
	volatile int32_t t98 = 728461;

	t98 = (((x441==x442)-x443)<x444);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x445 = -16534673133LL;
	int16_t x446 = 2;
	static int8_t x448 = 1;
	static int32_t t99 = -6628;

	t99 = (((x445==x446)-x447)<x448);

	if (t99 != 0) { NG(); } else { ; }
	
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

