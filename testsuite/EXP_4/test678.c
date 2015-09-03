#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x11 = 23U;
int32_t x12 = INT32_MAX;
static volatile uint64_t t1 = 38001692788LLU;
int64_t t2 = -274797673448LL;
volatile uint16_t x21 = 526U;
uint8_t x35 = 60U;
uint16_t x46 = 0U;
volatile int64_t x53 = -32029516LL;
int64_t x62 = -421377312751LL;
uint16_t x67 = 728U;
volatile int8_t x68 = INT8_MIN;
int16_t x71 = 0;
uint64_t x75 = 32LLU;
int16_t x77 = 1;
int32_t x78 = INT32_MIN;
static int32_t x83 = INT32_MIN;
uint8_t x86 = 13U;
uint8_t x88 = 31U;
uint64_t x90 = UINT64_MAX;
uint32_t x104 = 1235U;
static uint32_t t22 = 811724U;
static uint8_t x105 = UINT8_MAX;
uint32_t x109 = UINT32_MAX;
uint64_t x111 = 22377519275LLU;
uint32_t x112 = 469861235U;
volatile int64_t t25 = 54LL;
int8_t x118 = INT8_MAX;
uint32_t x119 = UINT32_MAX;
int8_t x122 = -24;
int32_t x125 = INT32_MIN;
volatile int8_t x126 = INT8_MAX;
int64_t x128 = INT64_MIN;
static int64_t x134 = -1002LL;
uint32_t t32 = 96U;
volatile uint64_t x148 = 1906581323148250LLU;
volatile uint64_t x151 = UINT64_MAX;
int64_t x158 = 149LL;
int32_t x164 = -4138;
int64_t x166 = 1493320534060870168LL;
static int64_t x174 = INT64_MIN;
static volatile uint16_t x175 = 1007U;
int8_t x180 = 16;
int64_t x181 = INT64_MIN;
volatile int8_t x182 = -1;
int32_t x185 = -1;
uint16_t x195 = UINT16_MAX;
volatile uint64_t t44 = 7344LLU;
uint16_t x201 = 6105U;
int32_t t46 = 5299;
volatile int32_t x216 = INT32_MIN;
static int32_t x217 = INT32_MAX;
int16_t x219 = INT16_MAX;
static uint32_t t50 = 1U;
uint32_t t51 = 58131U;
volatile int8_t x226 = -29;
int16_t x228 = INT16_MIN;
uint8_t x234 = 2U;
uint64_t t54 = 326026364441718LLU;
int32_t x242 = INT32_MIN;
int16_t x244 = -1;
volatile int32_t t56 = -871744888;
volatile int32_t x250 = INT32_MIN;
volatile int32_t x253 = -1;
uint32_t x255 = 39811U;
uint32_t x261 = 22U;
volatile uint64_t x262 = UINT64_MAX;
int8_t x269 = -12;
int16_t x279 = -86;
volatile uint8_t x281 = 31U;
static int8_t x285 = 1;
int8_t x305 = INT8_MIN;
int16_t x320 = INT16_MAX;
uint64_t x326 = 695758LLU;
static volatile int8_t x333 = 22;
int32_t x338 = -1;
static volatile int16_t x342 = INT16_MAX;
int64_t x343 = INT64_MIN;
static volatile int64_t t79 = -7585LL;
static int16_t x347 = INT16_MIN;
int32_t x351 = INT32_MIN;
uint64_t t81 = 91468700355292900LLU;
uint32_t x353 = UINT32_MAX;
int64_t x359 = INT64_MAX;
int8_t x361 = INT8_MIN;
volatile int32_t t84 = -12580;
int8_t x365 = INT8_MAX;
volatile int8_t x379 = 6;
static volatile uint64_t x381 = UINT64_MAX;
static int8_t x382 = -1;
uint8_t x383 = 63U;
int32_t x390 = INT32_MAX;
static int16_t x395 = INT16_MIN;
volatile int64_t t92 = -530881762885LL;
volatile uint64_t t94 = 1005058390105LLU;
int8_t x413 = INT8_MIN;
static uint16_t x415 = 30079U;
volatile uint32_t t96 = 127251U;
static uint64_t x430 = 101241255308191542LLU;


void f0(void) {
	volatile int8_t x5 = 1;
	static uint64_t x6 = 397478445LLU;
	int32_t x7 = INT32_MIN;
	uint64_t x8 = UINT64_MAX;
	volatile uint64_t t0 = 450222812LLU;

	t0 = (x5-(x6+(x7%x8)));

	if (t0 != 1750005204LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = 208345LLU;
	uint8_t x10 = 4U;

	t1 = (x9-(x10+(x11%x12)));

	if (t1 != 208318LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = 6460756563240297LL;
	volatile int32_t x14 = INT32_MIN;
	int64_t x15 = -1LL;
	int8_t x16 = INT8_MIN;

	t2 = (x13-(x14+(x15%x16)));

	if (t2 != 6460758710723946LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x17 = 3159683U;
	static int64_t x18 = -290LL;
	volatile uint16_t x19 = 12U;
	int16_t x20 = INT16_MIN;
	volatile int64_t t3 = -61LL;

	t3 = (x17-(x18+(x19%x20)));

	if (t3 != 3159961LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x22 = UINT16_MAX;
	uint32_t x23 = 13648U;
	static int16_t x24 = INT16_MAX;
	uint32_t t4 = 1U;

	t4 = (x21-(x22+(x23%x24)));

	if (t4 != 4294888639U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x33 = INT16_MAX;
	static uint8_t x34 = 15U;
	static volatile uint32_t x36 = UINT32_MAX;
	volatile uint32_t t5 = 52516U;

	t5 = (x33-(x34+(x35%x36)));

	if (t5 != 32692U) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x37 = INT32_MAX;
	uint32_t x38 = UINT32_MAX;
	static int32_t x39 = INT32_MAX;
	volatile int64_t x40 = INT64_MIN;
	int64_t t6 = -170756084623LL;

	t6 = (x37-(x38+(x39%x40)));

	if (t6 != -4294967295LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x41 = 1U;
	volatile int64_t x42 = INT64_MIN;
	int16_t x43 = 4;
	static int16_t x44 = INT16_MAX;
	static volatile int64_t t7 = -7145162LL;

	t7 = (x41-(x42+(x43%x44)));

	if (t7 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x45 = 142472LL;
	uint32_t x47 = 234284U;
	int8_t x48 = INT8_MIN;
	volatile int64_t t8 = -3776852888LL;

	t8 = (x45-(x46+(x47%x48)));

	if (t8 != -91812LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x49 = 498336242487870620LLU;
	uint64_t x50 = 975LLU;
	int64_t x51 = 16788LL;
	int16_t x52 = INT16_MIN;
	uint64_t t9 = 142432LLU;

	t9 = (x49-(x50+(x51%x52)));

	if (t9 != 498336242487852857LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x54 = -1;
	volatile uint16_t x55 = 135U;
	int32_t x56 = INT32_MIN;
	volatile int64_t t10 = 3895851LL;

	t10 = (x53-(x54+(x55%x56)));

	if (t10 != -32029650LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x57 = 345185477084LL;
	uint8_t x58 = 106U;
	uint32_t x59 = 2485U;
	int32_t x60 = INT32_MIN;
	int64_t t11 = 2351193411767138LL;

	t11 = (x57-(x58+(x59%x60)));

	if (t11 != 345185474493LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x61 = INT16_MAX;
	static int8_t x63 = -1;
	int16_t x64 = -179;
	volatile int64_t t12 = 3LL;

	t12 = (x61-(x62+(x63%x64)));

	if (t12 != 421377345519LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = -1;
	static volatile int16_t x66 = 63;
	int32_t t13 = 6620204;

	t13 = (x65-(x66+(x67%x68)));

	if (t13 != -152) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x69 = 2054069018U;
	uint64_t x70 = 46040662807489LLU;
	int8_t x72 = -1;
	volatile uint64_t t14 = 14543328039427348LLU;

	t14 = (x69-(x70+(x71%x72)));

	if (t14 != 18446698035100813145LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x73 = UINT16_MAX;
	static uint32_t x74 = UINT32_MAX;
	uint64_t x76 = 664145LLU;
	volatile uint64_t t15 = 134816LLU;

	t15 = (x73-(x74+(x75%x76)));

	if (t15 != 18446744069414649824LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x79 = INT8_MIN;
	static int64_t x80 = 35337LL;
	static int64_t t16 = -73986834LL;

	t16 = (x77-(x78+(x79%x80)));

	if (t16 != 2147483777LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x81 = 2U;
	uint16_t x82 = 19861U;
	uint8_t x84 = UINT8_MAX;
	static volatile int32_t t17 = -54;

	t17 = (x81-(x82+(x83%x84)));

	if (t17 != -19731) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x85 = -1921LL;
	uint16_t x87 = 8339U;
	volatile int64_t t18 = -931912216913LL;

	t18 = (x85-(x86+(x87%x88)));

	if (t18 != -1934LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x89 = INT16_MIN;
	int16_t x91 = INT16_MIN;
	volatile int64_t x92 = INT64_MIN;
	volatile uint64_t t19 = 3183465626064LLU;

	t19 = (x89-(x90+(x91%x92)));

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x93 = UINT32_MAX;
	volatile int16_t x94 = INT16_MAX;
	static int8_t x95 = 8;
	int16_t x96 = -8339;
	uint32_t t20 = 5U;

	t20 = (x93-(x94+(x95%x96)));

	if (t20 != 4294934520U) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x97 = -1;
	int64_t x98 = 714568816LL;
	uint32_t x99 = 60132961U;
	static uint32_t x100 = 4795278U;
	volatile int64_t t21 = -3LL;

	t21 = (x97-(x98+(x99%x100)));

	if (t21 != -717158442LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x101 = -1;
	static int8_t x102 = 17;
	volatile int32_t x103 = -1;

	t22 = (x101-(x102+(x103%x104)));

	if (t22 != 4294966893U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x106 = INT8_MAX;
	int32_t x107 = -1;
	int16_t x108 = INT16_MIN;
	volatile int32_t t23 = 66;

	t23 = (x105-(x106+(x107%x108)));

	if (t23 != 129) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x110 = INT8_MIN;
	static uint64_t t24 = 33165398576383578LLU;

	t24 = (x109-(x110+(x111%x112)));

	if (t24 != 4000926193LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x113 = 27144U;
	int64_t x114 = INT64_MAX;
	int16_t x115 = -46;
	int32_t x116 = -1;

	t25 = (x113-(x114+(x115%x116)));

	if (t25 != -9223372036854748663LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x117 = -1;
	volatile int32_t x120 = INT32_MAX;
	volatile uint32_t t26 = 52U;

	t26 = (x117-(x118+(x119%x120)));

	if (t26 != 4294967167U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x121 = -870;
	int64_t x123 = INT64_MIN;
	volatile int8_t x124 = 3;
	int64_t t27 = 287781760629071874LL;

	t27 = (x121-(x122+(x123%x124)));

	if (t27 != -844LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x127 = INT32_MIN;
	int64_t t28 = -193277LL;

	t28 = (x125-(x126+(x127%x128)));

	if (t28 != -127LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = -1LL;
	int8_t x130 = 0;
	int64_t x131 = INT64_MIN;
	int8_t x132 = INT8_MIN;
	static int64_t t29 = 551670426110LL;

	t29 = (x129-(x130+(x131%x132)));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x133 = 131406374LL;
	int16_t x135 = 0;
	static uint16_t x136 = 651U;
	int64_t t30 = 11LL;

	t30 = (x133-(x134+(x135%x136)));

	if (t30 != 131407376LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x137 = 0;
	volatile uint32_t x138 = UINT32_MAX;
	int32_t x139 = INT32_MIN;
	static uint8_t x140 = UINT8_MAX;
	static uint32_t t31 = 86358U;

	t31 = (x137-(x138+(x139%x140)));

	if (t31 != 129U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x141 = -826603;
	uint16_t x142 = 18U;
	volatile uint32_t x143 = UINT32_MAX;
	static int32_t x144 = -1;

	t32 = (x141-(x142+(x143%x144)));

	if (t32 != 4294140675U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x145 = 114U;
	int32_t x146 = INT32_MIN;
	int32_t x147 = 11;
	uint64_t t33 = 15893859LLU;

	t33 = (x145-(x146+(x147%x148)));

	if (t33 != 2147483751LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x149 = INT16_MIN;
	int8_t x150 = -1;
	volatile uint32_t x152 = 269182U;
	uint64_t t34 = 5359LLU;

	t34 = (x149-(x150+(x151%x152)));

	if (t34 != 18446744073709382010LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x153 = 5127;
	volatile int8_t x154 = 25;
	uint8_t x155 = 0U;
	static volatile uint16_t x156 = 51U;
	volatile int32_t t35 = 957;

	t35 = (x153-(x154+(x155%x156)));

	if (t35 != 5102) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x157 = 572928U;
	int16_t x159 = INT16_MIN;
	int32_t x160 = INT32_MIN;
	volatile int64_t t36 = 41LL;

	t36 = (x157-(x158+(x159%x160)));

	if (t36 != 605547LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x161 = -1;
	static int8_t x162 = INT8_MIN;
	int32_t x163 = -1;
	static volatile int32_t t37 = -412;

	t37 = (x161-(x162+(x163%x164)));

	if (t37 != 128) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x165 = 19631U;
	static volatile uint8_t x167 = 126U;
	uint32_t x168 = 20U;
	volatile int64_t t38 = 104909334091783650LL;

	t38 = (x165-(x166+(x167%x168)));

	if (t38 != -1493320534060850543LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x169 = 91U;
	volatile uint8_t x170 = 28U;
	int32_t x171 = -94;
	volatile int8_t x172 = -1;
	volatile int32_t t39 = -252448973;

	t39 = (x169-(x170+(x171%x172)));

	if (t39 != 63) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x173 = -18;
	int32_t x176 = INT32_MIN;
	int64_t t40 = -1745294044LL;

	t40 = (x173-(x174+(x175%x176)));

	if (t40 != 9223372036854774783LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x177 = -13;
	int8_t x178 = -1;
	int8_t x179 = INT8_MIN;
	int32_t t41 = -8;

	t41 = (x177-(x178+(x179%x180)));

	if (t41 != -12) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x183 = INT64_MIN;
	int8_t x184 = -1;
	static volatile int64_t t42 = 4468381236LL;

	t42 = (x181-(x182+(x183%x184)));

	if (t42 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x186 = -239755736LL;
	static uint32_t x187 = 8U;
	uint32_t x188 = UINT32_MAX;
	volatile int64_t t43 = 2140469253745134LL;

	t43 = (x185-(x186+(x187%x188)));

	if (t43 != 239755727LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x193 = -4279;
	volatile uint32_t x194 = 56814U;
	volatile uint64_t x196 = 16673797326465116LLU;

	t44 = (x193-(x194+(x195%x196)));

	if (t44 != 18446744073709424988LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x197 = INT16_MAX;
	int64_t x198 = 6131346119946LL;
	static int16_t x199 = INT16_MIN;
	int8_t x200 = INT8_MAX;
	static volatile int64_t t45 = 18079837LL;

	t45 = (x197-(x198+(x199%x200)));

	if (t45 != -6131346087177LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x202 = INT8_MAX;
	int32_t x203 = INT32_MIN;
	volatile int32_t x204 = INT32_MAX;

	t46 = (x201-(x202+(x203%x204)));

	if (t46 != 5979) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x205 = INT32_MIN;
	uint8_t x206 = UINT8_MAX;
	uint32_t x207 = UINT32_MAX;
	uint16_t x208 = 3843U;
	static volatile uint32_t t47 = 937643U;

	t47 = (x205-(x206+(x207%x208)));

	if (t47 != 2147479799U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x209 = UINT8_MAX;
	uint16_t x210 = UINT16_MAX;
	static volatile int8_t x211 = -3;
	volatile int16_t x212 = INT16_MIN;
	static volatile int32_t t48 = 1769;

	t48 = (x209-(x210+(x211%x212)));

	if (t48 != -65277) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x213 = -188323588374684049LL;
	uint8_t x214 = 3U;
	uint16_t x215 = 21554U;
	volatile int64_t t49 = -8955404514707398LL;

	t49 = (x213-(x214+(x215%x216)));

	if (t49 != -188323588374705606LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x218 = 61587U;
	static int32_t x220 = INT32_MIN;

	t50 = (x217-(x218+(x219%x220)));

	if (t50 != 2147389293U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x221 = 33373052U;
	uint32_t x222 = 110U;
	int8_t x223 = INT8_MIN;
	int8_t x224 = -42;

	t51 = (x221-(x222+(x223%x224)));

	if (t51 != 33372944U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x225 = INT8_MIN;
	uint64_t x227 = 103217716221045LLU;
	uint64_t t52 = 482464493LLU;

	t52 = (x225-(x226+(x227%x228)));

	if (t52 != 18446640855993330472LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x233 = 314U;
	int16_t x235 = INT16_MIN;
	int32_t x236 = 1;
	volatile int32_t t53 = 2;

	t53 = (x233-(x234+(x235%x236)));

	if (t53 != 312) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x237 = INT32_MAX;
	int32_t x238 = INT32_MIN;
	uint64_t x239 = 7309580018542749LLU;
	int16_t x240 = INT16_MIN;

	t54 = (x237-(x238+(x239%x240)));

	if (t54 != 18439434497985976162LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x241 = 92353217966711085LLU;
	int64_t x243 = -128450895748LL;
	volatile uint64_t t55 = 130LLU;

	t55 = (x241-(x242+(x243%x244)));

	if (t55 != 92353220114194733LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x245 = 12;
	static int32_t x246 = -1;
	uint8_t x247 = 110U;
	int16_t x248 = INT16_MIN;

	t56 = (x245-(x246+(x247%x248)));

	if (t56 != -97) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x249 = 2225U;
	int8_t x251 = -1;
	int64_t x252 = -846215LL;
	int64_t t57 = -75818437387969992LL;

	t57 = (x249-(x250+(x251%x252)));

	if (t57 != 2147485874LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x254 = 18U;
	uint16_t x256 = UINT16_MAX;
	static uint32_t t58 = 620621U;

	t58 = (x253-(x254+(x255%x256)));

	if (t58 != 4294927466U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x257 = -3048;
	uint8_t x258 = 1U;
	int16_t x259 = INT16_MIN;
	int64_t x260 = INT64_MAX;
	volatile int64_t t59 = 118741LL;

	t59 = (x257-(x258+(x259%x260)));

	if (t59 != 29719LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x263 = UINT8_MAX;
	volatile int64_t x264 = 7047207008621471LL;
	volatile uint64_t t60 = 2473293LLU;

	t60 = (x261-(x262+(x263%x264)));

	if (t60 != 18446744073709551384LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x265 = INT8_MIN;
	static int8_t x266 = -1;
	static int32_t x267 = INT32_MAX;
	int8_t x268 = 1;
	volatile int32_t t61 = 1666;

	t61 = (x265-(x266+(x267%x268)));

	if (t61 != -127) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x270 = 0U;
	uint16_t x271 = 11425U;
	static int8_t x272 = INT8_MAX;
	volatile uint32_t t62 = 515U;

	t62 = (x269-(x270+(x271%x272)));

	if (t62 != 4294967162U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x277 = -1;
	int16_t x278 = -15;
	volatile uint16_t x280 = UINT16_MAX;
	static volatile int32_t t63 = 980328;

	t63 = (x277-(x278+(x279%x280)));

	if (t63 != 100) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x282 = INT64_MAX;
	int16_t x283 = INT16_MIN;
	int32_t x284 = -1;
	volatile int64_t t64 = -1778672LL;

	t64 = (x281-(x282+(x283%x284)));

	if (t64 != -9223372036854775776LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x286 = INT32_MIN;
	uint32_t x287 = 147U;
	uint64_t x288 = 4458LLU;
	uint64_t t65 = 167188LLU;

	t65 = (x285-(x286+(x287%x288)));

	if (t65 != 2147483502LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x289 = INT32_MAX;
	volatile int8_t x290 = -1;
	static int16_t x291 = INT16_MAX;
	uint8_t x292 = 5U;
	int32_t t66 = -194;

	t66 = (x289-(x290+(x291%x292)));

	if (t66 != 2147483646) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x293 = INT16_MAX;
	static int32_t x294 = 162835;
	static uint32_t x295 = 11U;
	static volatile int32_t x296 = -1;
	volatile uint32_t t67 = 8111571U;

	t67 = (x293-(x294+(x295%x296)));

	if (t67 != 4294837217U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x297 = -1;
	volatile int16_t x298 = INT16_MAX;
	int8_t x299 = INT8_MAX;
	volatile int8_t x300 = INT8_MIN;
	int32_t t68 = -247052;

	t68 = (x297-(x298+(x299%x300)));

	if (t68 != -32895) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x301 = INT8_MIN;
	uint8_t x302 = UINT8_MAX;
	int32_t x303 = INT32_MIN;
	int16_t x304 = INT16_MIN;
	int32_t t69 = 486882375;

	t69 = (x301-(x302+(x303%x304)));

	if (t69 != -383) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x306 = INT16_MIN;
	int32_t x307 = INT32_MIN;
	int16_t x308 = INT16_MAX;
	volatile int32_t t70 = -2;

	t70 = (x305-(x306+(x307%x308)));

	if (t70 != 32642) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x309 = UINT64_MAX;
	int16_t x310 = -1;
	int64_t x311 = 16923949765439232LL;
	int64_t x312 = INT64_MIN;
	volatile uint64_t t71 = 2870776156320516518LLU;

	t71 = (x309-(x310+(x311%x312)));

	if (t71 != 18429820123944112384LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x313 = INT64_MIN;
	uint64_t x314 = 5370240685LLU;
	static int32_t x315 = -1;
	int8_t x316 = -1;
	uint64_t t72 = 51521742535005999LLU;

	t72 = (x313-(x314+(x315%x316)));

	if (t72 != 9223372031484535123LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint8_t x317 = 9U;
	int64_t x318 = INT64_MAX;
	static uint64_t x319 = 6682195286LLU;
	uint64_t t73 = 14485477LLU;

	t73 = (x317-(x318+(x319%x320)));

	if (t73 != 9223372036854754842LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x321 = -40;
	static uint64_t x322 = UINT64_MAX;
	int32_t x323 = INT32_MIN;
	int8_t x324 = -1;
	uint64_t t74 = 4528991822942947403LLU;

	t74 = (x321-(x322+(x323%x324)));

	if (t74 != 18446744073709551577LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x325 = UINT32_MAX;
	volatile uint32_t x327 = UINT32_MAX;
	uint64_t x328 = 1294924789783LLU;
	volatile uint64_t t75 = 448LLU;

	t75 = (x325-(x326+(x327%x328)));

	if (t75 != 18446744073708855858LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x329 = INT32_MIN;
	static int32_t x330 = INT32_MIN;
	int8_t x331 = 7;
	static volatile int32_t x332 = -1;
	int32_t t76 = 16662;

	t76 = (x329-(x330+(x331%x332)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x334 = UINT64_MAX;
	volatile int64_t x335 = INT64_MAX;
	int8_t x336 = INT8_MIN;
	static volatile uint64_t t77 = 848225558LLU;

	t77 = (x333-(x334+(x335%x336)));

	if (t77 != 18446744073709551512LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x337 = INT64_MIN;
	int16_t x339 = INT16_MIN;
	int32_t x340 = 2;
	int64_t t78 = -35702444278863LL;

	t78 = (x337-(x338+(x339%x340)));

	if (t78 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x341 = 10324U;
	uint32_t x344 = 9979U;

	t79 = (x341-(x342+(x343%x344)));

	if (t79 != -16110LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x345 = 2U;
	int16_t x346 = -1;
	uint64_t x348 = 166297LLU;
	volatile uint64_t t80 = 262998749329789309LLU;

	t80 = (x345-(x346+(x347%x348)));

	if (t80 != 18446744073709524673LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x349 = -11;
	volatile uint64_t x350 = 507957975124LLU;
	uint64_t x352 = UINT64_MAX;

	t81 = (x349-(x350+(x351%x352)));

	if (t81 != 18446743567899060129LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x354 = INT8_MIN;
	volatile uint8_t x355 = 66U;
	int8_t x356 = -1;
	static uint32_t t82 = 166561U;

	t82 = (x353-(x354+(x355%x356)));

	if (t82 != 127U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x357 = 1386753LLU;
	int64_t x358 = INT64_MIN;
	volatile uint32_t x360 = UINT32_MAX;
	static volatile uint64_t t83 = 15234923289271LLU;

	t83 = (x357-(x358+(x359%x360)));

	if (t83 != 9223372034708678914LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x362 = 3U;
	int16_t x363 = -1;
	int16_t x364 = 23;

	t84 = (x361-(x362+(x363%x364)));

	if (t84 != -130) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x366 = INT8_MIN;
	uint32_t x367 = 600220U;
	static uint32_t x368 = 5575U;
	volatile uint32_t t85 = 368910U;

	t85 = (x365-(x366+(x367%x368)));

	if (t85 != 4294963856U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x373 = INT32_MIN;
	int8_t x374 = INT8_MIN;
	static volatile uint32_t x375 = 134935U;
	int16_t x376 = INT16_MIN;
	volatile uint32_t t86 = 27840U;

	t86 = (x373-(x374+(x375%x376)));

	if (t86 != 2147348841U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x377 = -71431991LL;
	int16_t x378 = 21;
	uint32_t x380 = 782U;
	static volatile int64_t t87 = 108879154720LL;

	t87 = (x377-(x378+(x379%x380)));

	if (t87 != -71432018LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x384 = INT64_MAX;
	uint64_t t88 = 47292327LLU;

	t88 = (x381-(x382+(x383%x384)));

	if (t88 != 18446744073709551553LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x385 = 25985U;
	int16_t x386 = -1;
	static int32_t x387 = -1;
	volatile int64_t x388 = INT64_MAX;
	static int64_t t89 = -96478031622609LL;

	t89 = (x385-(x386+(x387%x388)));

	if (t89 != 25987LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x389 = UINT64_MAX;
	static int8_t x391 = -1;
	int8_t x392 = -1;
	uint64_t t90 = 1400467747250183305LLU;

	t90 = (x389-(x390+(x391%x392)));

	if (t90 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x393 = 16827LL;
	int64_t x394 = 1179193527133267LL;
	volatile int8_t x396 = INT8_MIN;
	volatile int64_t t91 = 241226LL;

	t91 = (x393-(x394+(x395%x396)));

	if (t91 != -1179193527116440LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x397 = -1LL;
	static volatile uint8_t x398 = 2U;
	static int64_t x399 = INT64_MIN;
	int64_t x400 = -1LL;

	t92 = (x397-(x398+(x399%x400)));

	if (t92 != -3LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x401 = 44294;
	static int64_t x402 = INT64_MAX;
	static uint64_t x403 = 54973LLU;
	volatile uint32_t x404 = UINT32_MAX;
	uint64_t t93 = 175409425866LLU;

	t93 = (x401-(x402+(x403%x404)));

	if (t93 != 9223372036854765130LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x405 = 752163U;
	uint32_t x406 = 6186U;
	uint64_t x407 = 10996548LLU;
	uint32_t x408 = 1538U;

	t94 = (x405-(x406+(x407%x408)));

	if (t94 != 744591LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x414 = UINT8_MAX;
	static int16_t x416 = INT16_MIN;
	int32_t t95 = 240863561;

	t95 = (x413-(x414+(x415%x416)));

	if (t95 != -30462) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x417 = INT32_MAX;
	uint32_t x418 = 868942U;
	volatile int8_t x419 = -1;
	uint32_t x420 = UINT32_MAX;

	t96 = (x417-(x418+(x419%x420)));

	if (t96 != 2146614705U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x421 = INT32_MIN;
	volatile uint16_t x422 = UINT16_MAX;
	static int32_t x423 = -104686;
	int32_t x424 = INT32_MAX;
	static volatile int32_t t97 = -25333;

	t97 = (x421-(x422+(x423%x424)));

	if (t97 != -2147444497) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x425 = INT32_MAX;
	uint8_t x426 = 14U;
	uint8_t x427 = 18U;
	static int64_t x428 = 1362096554882810LL;
	int64_t t98 = -17170934104LL;

	t98 = (x425-(x426+(x427%x428)));

	if (t98 != 2147483615LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x429 = -762013683;
	static int64_t x431 = INT64_MIN;
	int64_t x432 = -1LL;
	volatile uint64_t t99 = 38549LLU;

	t99 = (x429-(x430+(x431%x432)));

	if (t99 != 18345502817639346391LLU) { NG(); } else { ; }
	
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

