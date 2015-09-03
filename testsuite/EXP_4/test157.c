#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = INT32_MIN;
static volatile int16_t x13 = -91;
static volatile int16_t x14 = INT16_MIN;
uint64_t x20 = 41092LLU;
uint64_t x32 = 935024699LLU;
int64_t x34 = -1LL;
volatile int8_t x35 = -3;
volatile int32_t x42 = -1;
static uint32_t x54 = 429772405U;
static volatile uint16_t x56 = 7108U;
int32_t x60 = INT32_MIN;
uint8_t x63 = UINT8_MAX;
int64_t t11 = -104LL;
int32_t x81 = INT32_MIN;
static int32_t x84 = INT32_MIN;
int16_t x90 = INT16_MIN;
int32_t x91 = 738;
int8_t x93 = INT8_MIN;
static int64_t x94 = -233743393513329358LL;
int64_t t16 = 32215921044LL;
static uint8_t x101 = 50U;
static int64_t x103 = INT64_MAX;
volatile int8_t x105 = INT8_MIN;
static volatile int64_t x106 = 269LL;
volatile int64_t t21 = -56441LL;
volatile uint64_t t23 = 2034450680535LLU;
static int16_t x137 = INT16_MIN;
uint8_t x139 = UINT8_MAX;
volatile int32_t t24 = -65311;
int64_t x147 = INT64_MAX;
int64_t x148 = -1LL;
volatile uint32_t t27 = 3763U;
int64_t x162 = INT64_MIN;
uint64_t t28 = 31219811LLU;
uint64_t x171 = 62LLU;
static int16_t x174 = INT16_MAX;
int16_t x185 = -1;
int64_t x191 = INT64_MIN;
volatile int16_t x198 = INT16_MAX;
volatile uint64_t t35 = 18238445738LLU;
int64_t t41 = -31818052LL;
uint64_t x231 = UINT64_MAX;
uint32_t x232 = 4435U;
int16_t x241 = 0;
int32_t x250 = 2;
uint64_t x256 = UINT64_MAX;
int64_t x257 = -3990291482120LL;
uint64_t x259 = 485LLU;
uint8_t x262 = 19U;
int32_t x266 = INT32_MIN;
int8_t x271 = INT8_MIN;
volatile int16_t x272 = INT16_MIN;
volatile uint64_t x279 = 2347934572266651039LLU;
int64_t x286 = 163446LL;
uint64_t x290 = 13077349628785LLU;
volatile uint16_t x291 = UINT16_MAX;
int64_t x292 = 64LL;
int16_t x295 = -223;
int8_t x299 = INT8_MAX;
uint64_t t55 = 3213500LLU;
int16_t x301 = INT16_MAX;
volatile uint16_t x302 = 11260U;
uint8_t x307 = 31U;
int16_t x308 = INT16_MAX;
volatile int16_t x310 = -1;
int32_t x326 = 332854942;
static int64_t x327 = INT64_MAX;
int32_t x329 = -718;
int16_t x330 = -4;
static int64_t x332 = INT64_MIN;
uint8_t x334 = UINT8_MAX;
static uint64_t x336 = UINT64_MAX;
uint64_t x357 = 2031763LLU;
int32_t x358 = INT32_MAX;
uint64_t t67 = 56959264213938LLU;
static int8_t x374 = INT8_MAX;
uint64_t t71 = 502421557LLU;
volatile uint64_t x380 = UINT64_MAX;
uint64_t t72 = 722134404409068LLU;
int16_t x383 = -1;
int8_t x384 = -1;
int8_t x386 = -1;
int32_t x387 = -7955142;
int32_t x390 = INT32_MAX;
volatile int16_t x395 = INT16_MAX;
int16_t x408 = INT16_MIN;
int32_t x409 = -1;
uint8_t x416 = 3U;
static volatile int16_t x417 = INT16_MAX;
static int64_t x421 = -1LL;
volatile int8_t x436 = 9;
int32_t t85 = -1;
int32_t x446 = INT32_MIN;
uint64_t x451 = 2557417378578354655LLU;
volatile uint64_t t89 = 135116211364884LLU;
static uint16_t x460 = UINT16_MAX;
volatile uint32_t t93 = 15U;
int64_t x474 = -3798420677LL;
uint32_t x476 = 6401U;
static int8_t x485 = -1;
int32_t x488 = 5932998;
static int8_t x489 = -1;


void f0(void) {
	int16_t x1 = 816;
	int32_t x2 = INT32_MIN;
	volatile uint8_t x4 = 1U;
	int32_t t0 = -267795425;

	t0 = (x1+(x2^(x3+x4)));

	if (t0 != 817) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x9 = 16U;
	uint32_t x10 = 1093963573U;
	int32_t x11 = 7;
	int16_t x12 = INT16_MIN;
	uint32_t t1 = 27U;

	t1 = (x9+(x10^(x11+x12)));

	if (t1 != 3200978754U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x15 = INT8_MIN;
	static int16_t x16 = INT16_MIN;
	volatile int32_t t2 = 1652;

	t2 = (x13+(x14^(x15+x16)));

	if (t2 != 65317) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x17 = INT16_MAX;
	static int32_t x18 = -350;
	uint64_t x19 = 37064433817715093LLU;
	uint64_t t3 = 1408802193993102588LLU;

	t3 = (x17+(x18^(x19+x20)));

	if (t3 != 18409679639891827898LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = UINT64_MAX;
	static int32_t x22 = 760997029;
	int64_t x23 = -538104568LL;
	uint16_t x24 = UINT16_MAX;
	static uint64_t t4 = 97890338104264LLU;

	t4 = (x21+(x22^(x23+x24)));

	if (t4 != 18446744073486584225LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x29 = 33180808355931794LLU;
	int16_t x30 = INT16_MIN;
	volatile int64_t x31 = -1LL;
	uint64_t t5 = 2263418356002523852LLU;

	t5 = (x29+(x30^(x31+x32)));

	if (t5 != 33180807420919500LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x33 = 97U;
	uint16_t x36 = 9U;
	int64_t t6 = 103153142193494361LL;

	t6 = (x33+(x34^(x35+x36)));

	if (t6 != 90LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x41 = 10U;
	uint8_t x43 = 61U;
	volatile int16_t x44 = INT16_MIN;
	volatile int32_t t7 = -1857495;

	t7 = (x41+(x42^(x43+x44)));

	if (t7 != 32716) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x53 = INT64_MIN;
	uint64_t x55 = 1501734676086225856LLU;
	uint64_t t8 = 131771365682468085LLU;

	t8 = (x53+(x54^(x55+x56)));

	if (t8 != 10725106712531720689LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x57 = 2;
	uint8_t x58 = UINT8_MAX;
	volatile uint8_t x59 = 29U;
	int32_t t9 = -12585;

	t9 = (x57+(x58^(x59+x60)));

	if (t9 != -2147483420) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x61 = UINT16_MAX;
	int8_t x62 = INT8_MIN;
	uint8_t x64 = 10U;
	int32_t t10 = -425;

	t10 = (x61+(x62^(x63+x64)));

	if (t10 != 65160) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x65 = INT8_MIN;
	static volatile uint16_t x66 = 0U;
	int16_t x67 = -1;
	int64_t x68 = 6462160LL;

	t11 = (x65+(x66^(x67+x68)));

	if (t11 != 6462031LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x69 = INT8_MAX;
	uint16_t x70 = 28743U;
	uint16_t x71 = 145U;
	static int16_t x72 = INT16_MIN;
	int32_t t12 = -812;

	t12 = (x69+(x70^(x71+x72)));

	if (t12 != -3755) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x73 = -186;
	static int32_t x74 = INT32_MAX;
	int16_t x75 = INT16_MIN;
	int32_t x76 = 35;
	int32_t t13 = 6683090;

	t13 = (x73+(x74^(x75+x76)));

	if (t13 != -2147451102) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x82 = 1673711286LLU;
	static int16_t x83 = 1;
	uint64_t t14 = 26923349LLU;

	t14 = (x81+(x82^(x83+x84)));

	if (t14 != 18446744071088295607LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x89 = -1;
	int8_t x92 = 1;
	volatile int32_t t15 = -13;

	t15 = (x89+(x90^(x91+x92)));

	if (t15 != -32030) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x95 = 64U;
	int64_t x96 = INT64_MIN;

	t16 = (x93+(x94^(x95+x96)));

	if (t16 != 8989628643341446386LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x97 = -1LL;
	static int8_t x98 = -1;
	int32_t x99 = 356759176;
	int8_t x100 = 30;
	volatile int64_t t17 = -1104078LL;

	t17 = (x97+(x98^(x99+x100)));

	if (t17 != -356759208LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x102 = -1703;
	int8_t x104 = -29;
	int64_t t18 = 3981LL;

	t18 = (x101+(x102^(x103+x104)));

	if (t18 != -9223372036854774035LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x107 = 111U;
	uint8_t x108 = 0U;
	int64_t t19 = -42182261477LL;

	t19 = (x105+(x106^(x107+x108)));

	if (t19 != 226LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x109 = 3U;
	int8_t x110 = -1;
	int16_t x111 = 3;
	volatile int32_t x112 = -427543;
	volatile int32_t t20 = 1;

	t20 = (x109+(x110^(x111+x112)));

	if (t20 != 427542) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x121 = UINT32_MAX;
	int64_t x122 = -4078864324968LL;
	static volatile int8_t x123 = INT8_MIN;
	volatile int8_t x124 = 27;

	t21 = (x121+(x122^(x123+x124)));

	if (t21 != 4083159292162LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x125 = 362LLU;
	static uint32_t x126 = 1886190409U;
	volatile int8_t x127 = -1;
	int8_t x128 = INT8_MAX;
	static volatile uint64_t t22 = 345LLU;

	t22 = (x125+(x126^(x127+x128)));

	if (t22 != 1886190753LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x129 = 4230718LLU;
	int32_t x130 = 114338002;
	uint16_t x131 = 26323U;
	int64_t x132 = INT64_MIN;

	t23 = (x129+(x130^(x131+x132)));

	if (t23 != 9223372036973354047LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x138 = -31;
	volatile int8_t x140 = INT8_MAX;

	t24 = (x137+(x138^(x139+x140)));

	if (t24 != -33121) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x145 = INT16_MIN;
	static int16_t x146 = 53;
	int64_t t25 = 14LL;

	t25 = (x145+(x146^(x147+x148)));

	if (t25 != 9223372036854742987LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x153 = 0;
	volatile int16_t x154 = -1;
	int32_t x155 = -1;
	int8_t x156 = -1;
	volatile int32_t t26 = 12941;

	t26 = (x153+(x154^(x155+x156)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x157 = UINT32_MAX;
	int32_t x158 = -1;
	volatile int32_t x159 = -36484609;
	static uint16_t x160 = 662U;

	t27 = (x157+(x158^(x159+x160)));

	if (t27 != 36483945U) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x161 = INT8_MAX;
	int64_t x163 = 1LL;
	uint64_t x164 = 5162923654394LLU;

	t28 = (x161+(x162^(x163+x164)));

	if (t28 != 9223377199778430330LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x165 = 4U;
	volatile int32_t x166 = INT32_MAX;
	static uint64_t x167 = UINT64_MAX;
	int32_t x168 = -1;
	volatile uint64_t t29 = 56838195723424LLU;

	t29 = (x165+(x166^(x167+x168)));

	if (t29 != 18446744071562067973LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x169 = -1;
	int64_t x170 = 181414LL;
	int32_t x172 = -1;
	uint64_t t30 = 286LLU;

	t30 = (x169+(x170^(x171+x172)));

	if (t30 != 181402LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x173 = -4;
	uint8_t x175 = UINT8_MAX;
	static int32_t x176 = INT32_MIN;
	int32_t t31 = -581635994;

	t31 = (x173+(x174^(x175+x176)));

	if (t31 != -2147451140) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x186 = INT64_MIN;
	uint8_t x187 = 68U;
	int16_t x188 = -1;
	volatile int64_t t32 = 931LL;

	t32 = (x185+(x186^(x187+x188)));

	if (t32 != -9223372036854775742LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x189 = INT64_MIN;
	int8_t x190 = INT8_MIN;
	int16_t x192 = 3098;
	volatile int64_t t33 = 493781LL;

	t33 = (x189+(x190^(x191+x192)));

	if (t33 != -3174LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x197 = -1;
	volatile int16_t x199 = 0;
	int64_t x200 = INT64_MIN;
	static int64_t t34 = -16097670848LL;

	t34 = (x197+(x198^(x199+x200)));

	if (t34 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x201 = UINT64_MAX;
	uint16_t x202 = 62U;
	int32_t x203 = INT32_MIN;
	uint16_t x204 = 2574U;

	t35 = (x201+(x202^(x203+x204)));

	if (t35 != 18446744071562070575LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x205 = INT8_MIN;
	volatile uint32_t x206 = 27629967U;
	volatile uint32_t x207 = UINT32_MAX;
	int8_t x208 = INT8_MIN;
	volatile uint32_t t36 = 804656U;

	t36 = (x205+(x206^(x207+x208)));

	if (t36 != 4267337328U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x209 = INT64_MIN;
	int16_t x210 = -1;
	static int8_t x211 = INT8_MIN;
	static uint32_t x212 = 66U;
	volatile int64_t t37 = -5084LL;

	t37 = (x209+(x210^(x211+x212)));

	if (t37 != -9223372036854775747LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x213 = 17578U;
	volatile int32_t x214 = 5323;
	uint64_t x215 = 845296178716LLU;
	static int64_t x216 = INT64_MIN;
	volatile uint64_t t38 = 320913647LLU;

	t38 = (x213+(x214^(x215+x216)));

	if (t38 != 9223372882150967169LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x217 = INT16_MIN;
	uint64_t x218 = UINT64_MAX;
	uint16_t x219 = 6288U;
	volatile int32_t x220 = -3083;
	uint64_t t39 = 1406261591LLU;

	t39 = (x217+(x218^(x219+x220)));

	if (t39 != 18446744073709515642LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x221 = 2061916U;
	int8_t x222 = -17;
	int64_t x223 = 621422LL;
	static int32_t x224 = -72022;
	volatile int64_t t40 = -222435292686498505LL;

	t40 = (x221+(x222^(x223+x224)));

	if (t40 != 1512531LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x225 = INT64_MIN;
	int8_t x226 = -1;
	static volatile int16_t x227 = -1;
	static volatile int8_t x228 = -1;

	t41 = (x225+(x226^(x227+x228)));

	if (t41 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x229 = INT64_MIN;
	int8_t x230 = -1;
	volatile uint64_t t42 = 191404231241666LLU;

	t42 = (x229+(x230^(x231+x232)));

	if (t42 != 9223372036854771373LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x237 = 20U;
	int32_t x238 = INT32_MIN;
	int32_t x239 = 8;
	int8_t x240 = 4;
	static int32_t t43 = -472804722;

	t43 = (x237+(x238^(x239+x240)));

	if (t43 != -2147483616) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x242 = 1698791U;
	uint64_t x243 = 38912170181077LLU;
	int64_t x244 = -1LL;
	uint64_t t44 = 3094LLU;

	t44 = (x241+(x242^(x243+x244)));

	if (t44 != 38912169683507LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x249 = 0;
	int16_t x251 = INT16_MIN;
	static volatile uint32_t x252 = UINT32_MAX;
	uint32_t t45 = 13U;

	t45 = (x249+(x250^(x251+x252)));

	if (t45 != 4294934525U) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x253 = INT8_MIN;
	int64_t x254 = INT64_MAX;
	uint8_t x255 = 3U;
	uint64_t t46 = 1759961416LLU;

	t46 = (x253+(x254^(x255+x256)));

	if (t46 != 9223372036854775677LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x258 = 106113394LLU;
	volatile uint64_t x260 = 5869385946LLU;
	volatile uint64_t t47 = 351776526728149LLU;

	t47 = (x257+(x258^(x259+x260)));

	if (t47 != 18446740089248452037LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x261 = 298;
	uint8_t x263 = 26U;
	uint8_t x264 = 35U;
	volatile int32_t t48 = 3255843;

	t48 = (x261+(x262^(x263+x264)));

	if (t48 != 344) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x265 = -1;
	volatile int8_t x267 = INT8_MAX;
	static uint16_t x268 = 12194U;
	volatile int32_t t49 = 12667807;

	t49 = (x265+(x266^(x267+x268)));

	if (t49 != -2147471328) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x269 = INT32_MIN;
	uint32_t x270 = 1U;
	uint32_t t50 = 93U;

	t50 = (x269+(x270^(x271+x272)));

	if (t50 != 2147450753U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x277 = -1;
	int32_t x278 = -1;
	int16_t x280 = INT16_MIN;
	volatile uint64_t t51 = 603979136LLU;

	t51 = (x277+(x278^(x279+x280)));

	if (t51 != 16098809501442933343LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x285 = INT64_MIN;
	uint64_t x287 = 40399290131LLU;
	volatile int8_t x288 = -1;
	static volatile uint64_t t52 = 4440585LLU;

	t52 = (x285+(x286^(x287+x288)));

	if (t52 != 9223372077254197604LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x289 = -1;
	volatile uint64_t t53 = 13LLU;

	t53 = (x289+(x290^(x291+x292)));

	if (t53 != 13077349563213LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x293 = UINT16_MAX;
	static int8_t x294 = INT8_MAX;
	volatile uint64_t x296 = 556769804772LLU;
	static volatile uint64_t t54 = 12LLU;

	t54 = (x293+(x294^(x295+x296)));

	if (t54 != 556769870201LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x297 = 373936148208LLU;
	static volatile uint8_t x298 = 16U;
	volatile int8_t x300 = -5;

	t55 = (x297+(x298^(x299+x300)));

	if (t55 != 373936148314LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x303 = INT8_MIN;
	uint64_t x304 = UINT64_MAX;
	uint64_t t56 = 11127343895374LLU;

	t56 = (x301+(x302^(x303+x304)));

	if (t56 != 21634LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x305 = INT8_MIN;
	uint16_t x306 = 22225U;
	int32_t t57 = -905641583;

	t57 = (x305+(x306^(x307+x308)));

	if (t57 != 54863) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x309 = -965;
	int8_t x311 = -30;
	static int8_t x312 = -1;
	volatile int32_t t58 = -6123402;

	t58 = (x309+(x310^(x311+x312)));

	if (t58 != -935) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x317 = INT32_MIN;
	static int8_t x318 = INT8_MIN;
	int64_t x319 = INT64_MIN;
	static volatile int32_t x320 = 239;
	static volatile int64_t t59 = 977315764LL;

	t59 = (x317+(x318^(x319+x320)));

	if (t59 != 9223372034707292015LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x321 = UINT16_MAX;
	uint8_t x322 = 30U;
	int16_t x323 = INT16_MIN;
	uint64_t x324 = 1785908LLU;
	uint64_t t60 = 209LLU;

	t60 = (x321+(x322^(x323+x324)));

	if (t60 != 1818665LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x325 = -1;
	static int16_t x328 = -1;
	int64_t t61 = 55142LL;

	t61 = (x325+(x326^(x327+x328)));

	if (t61 != 9223372036521920863LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x331 = 3U;
	int64_t t62 = -485853676630004725LL;

	t62 = (x329+(x330^(x331+x332)));

	if (t62 != 9223372036854775089LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x333 = 108172890U;
	volatile int16_t x335 = 55;
	uint64_t t63 = 13204117539LLU;

	t63 = (x333+(x334^(x335+x336)));

	if (t63 != 108173091LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint64_t x337 = 34936931807040889LLU;
	static int32_t x338 = INT32_MAX;
	uint64_t x339 = UINT64_MAX;
	static volatile int64_t x340 = INT64_MIN;
	static uint64_t t64 = 1LLU;

	t64 = (x337+(x338^(x339+x340)));

	if (t64 != 9258308966514333049LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x349 = 91U;
	int16_t x350 = INT16_MAX;
	static uint8_t x351 = 16U;
	static int16_t x352 = -1;
	volatile int32_t t65 = -21302;

	t65 = (x349+(x350^(x351+x352)));

	if (t65 != 32843) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x353 = -561132733LL;
	volatile uint8_t x354 = 11U;
	int8_t x355 = INT8_MIN;
	int64_t x356 = -1LL;
	int64_t t66 = 100668035481820128LL;

	t66 = (x353+(x354^(x355+x356)));

	if (t66 != -561132873LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x359 = 89476LLU;
	int32_t x360 = 223;

	t67 = (x357+(x358^(x359+x360)));

	if (t67 != 2149425711LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x361 = UINT8_MAX;
	int8_t x362 = -1;
	uint8_t x363 = UINT8_MAX;
	int16_t x364 = 872;
	volatile int32_t t68 = -8772816;

	t68 = (x361+(x362^(x363+x364)));

	if (t68 != -873) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x365 = INT32_MIN;
	static uint64_t x366 = UINT64_MAX;
	int32_t x367 = INT32_MAX;
	volatile uint32_t x368 = 16504U;
	volatile uint64_t t69 = 175LLU;

	t69 = (x365+(x366^(x367+x368)));

	if (t69 != 18446744069414567816LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x369 = 202U;
	uint8_t x370 = 24U;
	int8_t x371 = -1;
	uint64_t x372 = UINT64_MAX;
	uint64_t t70 = 3484168862514LLU;

	t70 = (x369+(x370^(x371+x372)));

	if (t70 != 176LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x373 = INT8_MIN;
	volatile uint64_t x375 = 1785538412431070LLU;
	int8_t x376 = INT8_MIN;

	t71 = (x373+(x374^(x375+x376)));

	if (t71 != 1785538412430753LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x377 = INT64_MIN;
	int16_t x378 = INT16_MAX;
	int8_t x379 = 0;

	t72 = (x377+(x378^(x379+x380)));

	if (t72 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x381 = INT8_MAX;
	int64_t x382 = 34630487733885LL;
	static volatile int64_t t73 = 177189275004945LL;

	t73 = (x381+(x382^(x383+x384)));

	if (t73 != -34630487733758LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x385 = UINT8_MAX;
	static uint32_t x388 = 242U;
	uint32_t t74 = 3684U;

	t74 = (x385+(x386^(x387+x388)));

	if (t74 != 7955154U) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x389 = 7384LL;
	static uint16_t x391 = 4749U;
	static int64_t x392 = INT64_MIN;
	volatile int64_t t75 = -185403215242490996LL;

	t75 = (x389+(x390^(x391+x392)));

	if (t75 != -9223372034707289526LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x393 = -1;
	static uint16_t x394 = UINT16_MAX;
	uint8_t x396 = UINT8_MAX;
	int32_t t76 = 5132668;

	t76 = (x393+(x394^(x395+x396)));

	if (t76 != 32512) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x397 = UINT32_MAX;
	volatile int64_t x398 = -1LL;
	uint16_t x399 = 17U;
	volatile int8_t x400 = 1;
	volatile int64_t t77 = -6034LL;

	t77 = (x397+(x398^(x399+x400)));

	if (t77 != 4294967276LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x401 = 177856958LLU;
	static int64_t x402 = INT64_MIN;
	static int16_t x403 = 1;
	static int16_t x404 = INT16_MIN;
	volatile uint64_t t78 = 492496673649484405LLU;

	t78 = (x401+(x402^(x403+x404)));

	if (t78 != 9223372037032599999LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x405 = INT64_MIN;
	volatile int64_t x406 = INT64_MAX;
	uint64_t x407 = 46842LLU;
	uint64_t t79 = 35LLU;

	t79 = (x405+(x406^(x407+x408)));

	if (t79 != 18446744073709537541LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x410 = -1;
	uint64_t x411 = 56709981714911LLU;
	int32_t x412 = -1;
	static uint64_t t80 = 1050456377LLU;

	t80 = (x409+(x410^(x411+x412)));

	if (t80 != 18446687363727836704LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x413 = -30;
	volatile int8_t x414 = 1;
	static int8_t x415 = INT8_MIN;
	volatile int32_t t81 = 32283870;

	t81 = (x413+(x414^(x415+x416)));

	if (t81 != -156) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x418 = INT16_MAX;
	static int8_t x419 = INT8_MIN;
	uint32_t x420 = 3990050U;
	static volatile uint32_t t82 = 273000415U;

	t82 = (x417+(x418^(x419+x420)));

	if (t82 != 4005468U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x422 = INT16_MAX;
	int8_t x423 = 0;
	int16_t x424 = -1843;
	volatile int64_t t83 = 3002608LL;

	t83 = (x421+(x422^(x423+x424)));

	if (t83 != -30927LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x425 = 1U;
	uint16_t x426 = UINT16_MAX;
	int16_t x427 = INT16_MAX;
	int16_t x428 = -1;
	int32_t t84 = -14;

	t84 = (x425+(x426^(x427+x428)));

	if (t84 != 32770) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x433 = -1;
	uint16_t x434 = 9982U;
	int8_t x435 = INT8_MAX;

	t85 = (x433+(x434^(x435+x436)));

	if (t85 != 9845) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x437 = UINT8_MAX;
	uint16_t x438 = 1U;
	static uint16_t x439 = 20U;
	uint32_t x440 = UINT32_MAX;
	static uint32_t t86 = 1U;

	t86 = (x437+(x438^(x439+x440)));

	if (t86 != 273U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x441 = INT64_MIN;
	int32_t x442 = -1;
	volatile uint32_t x443 = UINT32_MAX;
	uint8_t x444 = 27U;
	volatile int64_t t87 = -255527275226LL;

	t87 = (x441+(x442^(x443+x444)));

	if (t87 != -9223372032559808539LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x445 = INT8_MIN;
	static volatile int16_t x447 = INT16_MIN;
	volatile int32_t x448 = 46076;
	static volatile int32_t t88 = 1;

	t88 = (x445+(x446^(x447+x448)));

	if (t88 != -2147470468) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x449 = UINT32_MAX;
	static volatile uint64_t x450 = 69608135233596825LLU;
	int64_t x452 = INT64_MAX;

	t89 = (x449+(x450^(x451+x452)));

	if (t89 != 11784382788512365638LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x453 = 2U;
	int64_t x454 = INT64_MAX;
	static int64_t x455 = INT64_MIN;
	uint16_t x456 = 211U;
	volatile int64_t t90 = 968LL;

	t90 = (x453+(x454^(x455+x456)));

	if (t90 != -210LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x457 = 66178011674343905LLU;
	uint64_t x458 = UINT64_MAX;
	uint32_t x459 = 27U;
	uint64_t t91 = 109792LLU;

	t91 = (x457+(x458^(x459+x460)));

	if (t91 != 66178011674278342LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x461 = -737634800;
	static uint32_t x462 = 9296502U;
	int64_t x463 = 3546624971116429LL;
	volatile int64_t x464 = INT64_MIN;
	static int64_t t92 = -829868415766017467LL;

	t92 = (x461+(x462^(x463+x464)));

	if (t92 != -9219825412630352885LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x465 = UINT8_MAX;
	uint32_t x466 = UINT32_MAX;
	static int16_t x467 = -1;
	volatile int8_t x468 = -1;

	t93 = (x465+(x466^(x467+x468)));

	if (t93 != 256U) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x469 = -35629;
	uint32_t x470 = UINT32_MAX;
	uint64_t x471 = 12051330850LLU;
	volatile int64_t x472 = -1LL;
	volatile uint64_t t94 = 536LLU;

	t94 = (x469+(x470^(x471+x472)));

	if (t94 != 9423470001LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x473 = 24;
	static int16_t x475 = INT16_MIN;
	static int64_t t95 = 406916943859567463LL;

	t95 = (x473+(x474^(x475+x476)));

	if (t95 != -496555438LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x477 = INT8_MIN;
	static uint16_t x478 = 511U;
	volatile int16_t x479 = 1;
	int32_t x480 = 11016941;
	volatile int32_t t96 = -43176;

	t96 = (x477+(x478^(x479+x480)));

	if (t96 != 11016849) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x481 = 54;
	int64_t x482 = INT64_MIN;
	volatile uint32_t x483 = 26U;
	volatile int64_t x484 = -2030788062942323162LL;
	volatile int64_t t97 = 436226485917LL;

	t97 = (x481+(x482^(x483+x484)));

	if (t97 != 7192583973912452726LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x486 = 260178;
	int16_t x487 = 12;
	int32_t t98 = 55140401;

	t98 = (x485+(x486^(x487+x488)));

	if (t98 != 5865343) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x490 = UINT64_MAX;
	int16_t x491 = INT16_MIN;
	static int16_t x492 = INT16_MIN;
	uint64_t t99 = 552457342427341LLU;

	t99 = (x489+(x490^(x491+x492)));

	if (t99 != 65534LLU) { NG(); } else { ; }
	
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

