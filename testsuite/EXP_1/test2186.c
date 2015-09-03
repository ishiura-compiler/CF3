#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x10 = -1;
int16_t x14 = INT16_MIN;
int64_t t3 = -400192893270LL;
uint8_t x17 = 0U;
int8_t x19 = -15;
static uint16_t x20 = 14U;
uint32_t x23 = 609207394U;
static uint64_t t5 = 628126857709388442LLU;
int8_t x26 = -25;
int64_t x34 = 22786739515LL;
static volatile uint64_t x35 = UINT64_MAX;
int32_t x40 = INT32_MIN;
int32_t t10 = 5;
uint16_t x45 = 234U;
static volatile uint64_t t13 = 19860LLU;
volatile uint64_t x65 = 52920507772580LLU;
int32_t x68 = INT32_MIN;
int8_t x74 = INT8_MIN;
int8_t x82 = INT8_MIN;
static uint8_t x87 = UINT8_MAX;
uint64_t x88 = 95073LLU;
int64_t x91 = INT64_MIN;
volatile int64_t x94 = INT64_MIN;
uint8_t x96 = 49U;
static uint64_t x99 = 13755571097656LLU;
int8_t x100 = INT8_MIN;
int32_t x102 = -363264210;
int32_t x113 = INT32_MAX;
int8_t x117 = INT8_MIN;
int16_t x128 = INT16_MIN;
static int32_t t30 = 629313;
int8_t x129 = 1;
static int32_t x131 = -1;
static int64_t t31 = 19LL;
uint8_t x134 = 1U;
int16_t x138 = 1;
static uint64_t x140 = 15174LLU;
volatile int64_t x144 = INT64_MIN;
uint64_t t36 = 15143501902604LLU;
int16_t x153 = INT16_MIN;
int8_t x159 = INT8_MIN;
int64_t t38 = 40LL;
uint64_t t39 = 0LLU;
uint8_t x167 = UINT8_MAX;
uint64_t x169 = UINT64_MAX;
volatile uint8_t x173 = 0U;
uint32_t x174 = UINT32_MAX;
int8_t x188 = 19;
uint16_t x191 = UINT16_MAX;
uint32_t t45 = 3147U;
int8_t x196 = INT8_MAX;
static int8_t x200 = INT8_MIN;
volatile int16_t x219 = -8;
int16_t x223 = INT16_MIN;
static int16_t x224 = 6808;
int8_t x226 = -1;
int32_t t55 = -3013153;
int8_t x238 = -52;
uint64_t t56 = 1534460869045656LLU;
int64_t x242 = INT64_MAX;
volatile int64_t t58 = 3412537063915769LL;
int64_t t59 = 3LL;
int32_t x253 = 76184;
volatile uint64_t x255 = 2569251811533660LLU;
volatile int8_t x258 = 6;
volatile uint16_t x260 = 96U;
int8_t x266 = INT8_MIN;
int16_t x284 = INT16_MAX;
static uint32_t x287 = 63151314U;
uint32_t x291 = UINT32_MAX;
int8_t x293 = 7;
int32_t x299 = -1;
int16_t x306 = 538;
volatile int64_t t73 = -18390761200442291LL;
volatile int16_t x317 = INT16_MAX;
int16_t x327 = INT16_MIN;
static int32_t x329 = -1;
volatile int32_t x334 = INT32_MIN;
int32_t x335 = 150501;
static int32_t x336 = INT32_MAX;
volatile int64_t t77 = -31212236989010LL;
int64_t t78 = 464207826487812LL;
volatile int64_t x342 = -12902659474421LL;
int8_t x343 = -21;
volatile int64_t t79 = 1176LL;
uint32_t x353 = 119563200U;
int8_t x362 = 57;
int32_t x364 = INT32_MIN;
static volatile int32_t x382 = INT32_MIN;
int8_t x388 = INT8_MIN;
int64_t x398 = INT64_MAX;
int64_t x403 = -394290488926LL;
static int64_t x426 = -1LL;
int64_t x428 = -327135084LL;
volatile int64_t t97 = 11905013835793LL;
int8_t x431 = INT8_MIN;
int64_t t99 = -42726650166039LL;


void f0(void) {
	volatile int16_t x1 = INT16_MAX;
	int32_t x2 = -1;
	int64_t x3 = 878991792895LL;
	volatile int16_t x4 = INT16_MAX;
	int64_t t0 = 18778LL;

	t0 = (((x1^x2)^x3)-x4);

	if (t0 != -878991811840LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = UINT8_MAX;
	int64_t x6 = -1LL;
	volatile int8_t x7 = -2;
	uint8_t x8 = 4U;
	volatile int64_t t1 = -22271381122LL;

	t1 = (((x5^x6)^x7)-x8);

	if (t1 != 250LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	static int32_t x11 = INT32_MIN;
	static int32_t x12 = INT32_MIN;
	static int32_t t2 = 61;

	t2 = (((x9^x10)^x11)-x12);

	if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	volatile int16_t x15 = -1;
	int16_t x16 = INT16_MIN;

	t3 = (((x13^x14)^x15)-x16);

	if (t3 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = -1;
	static int32_t t4 = 0;

	t4 = (((x17^x18)^x19)-x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 4370;
	volatile uint64_t x22 = 23130LLU;
	static int64_t x24 = INT64_MAX;

	t5 = (((x21^x22)^x23)-x24);

	if (t5 != 9223372037463969579LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = -1583573LL;
	volatile int8_t x27 = -2;
	uint64_t x28 = UINT64_MAX;
	volatile uint64_t t6 = 7809907LLU;

	t6 = (((x25^x26)^x27)-x28);

	if (t6 != 18446744073707968051LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	int16_t x30 = INT16_MIN;
	uint16_t x31 = 1U;
	uint64_t x32 = UINT64_MAX;
	volatile uint64_t t7 = 95628961LLU;

	t7 = (((x29^x30)^x31)-x32);

	if (t7 != 9223372036854743042LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = UINT16_MAX;
	uint32_t x36 = 4425U;
	uint64_t t8 = 4LLU;

	t8 = (((x33^x34)^x35)-x36);

	if (t8 != 18446744050922748914LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = -563502303;
	volatile int16_t x38 = -1;
	static uint32_t x39 = 374772943U;
	volatile uint32_t t9 = 118773U;

	t9 = (((x37^x38)^x39)-x40);

	if (t9 != 3082864657U) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = UINT8_MAX;
	static uint16_t x42 = 4U;
	int8_t x43 = -1;
	int16_t x44 = -1;

	t10 = (((x41^x42)^x43)-x44);

	if (t10 != -251) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x46 = INT16_MIN;
	int8_t x47 = -1;
	uint64_t x48 = 7176365190LLU;
	uint64_t t11 = 1246269358LLU;

	t11 = (((x45^x46)^x47)-x48);

	if (t11 != 18446744066533218959LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 147U;
	volatile uint64_t x50 = UINT64_MAX;
	uint16_t x51 = 0U;
	int32_t x52 = INT32_MIN;
	uint64_t t12 = 18734646LLU;

	t12 = (((x49^x50)^x51)-x52);

	if (t12 != 2147483500LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = UINT8_MAX;
	static uint64_t x54 = 33398628292917647LLU;
	volatile uint16_t x55 = UINT16_MAX;
	int64_t x56 = -1LL;

	t13 = (((x53^x54)^x55)-x56);

	if (t13 != 33398628292920976LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -385258807;
	uint16_t x58 = 1U;
	static int8_t x59 = 6;
	static uint64_t x60 = 1142723943462485LLU;
	volatile uint64_t t14 = 8840817676975051LLU;

	t14 = (((x57^x58)^x59)-x60);

	if (t14 != 18445601349380830329LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 9;
	static int8_t x62 = INT8_MAX;
	int32_t x63 = -1;
	volatile uint64_t x64 = UINT64_MAX;
	static uint64_t t15 = 26181728158266LLU;

	t15 = (((x61^x62)^x63)-x64);

	if (t15 != 18446744073709551498LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x66 = 1;
	static volatile uint16_t x67 = 7U;
	uint64_t t16 = 96669402LLU;

	t16 = (((x65^x66)^x67)-x68);

	if (t16 != 52922655256226LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -1;
	int32_t x70 = 3640;
	int8_t x71 = INT8_MIN;
	uint64_t x72 = 823LLU;
	static volatile uint64_t t17 = 3738093536477450283LLU;

	t17 = (((x69^x70)^x71)-x72);

	if (t17 != 2832LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	int8_t x75 = INT8_MIN;
	int8_t x76 = -1;
	volatile int32_t t18 = -32697;

	t18 = (((x73^x74)^x75)-x76);

	if (t18 != -2147483647) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -22;
	static volatile int64_t x78 = -1LL;
	volatile int16_t x79 = INT16_MIN;
	int8_t x80 = -3;
	static volatile int64_t t19 = -27677535326LL;

	t19 = (((x77^x78)^x79)-x80);

	if (t19 != -32744LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 1U;
	static int32_t x83 = -1;
	int16_t x84 = -1;
	static volatile int32_t t20 = 60563;

	t20 = (((x81^x82)^x83)-x84);

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x85 = INT8_MIN;
	static volatile int8_t x86 = INT8_MAX;
	uint64_t t21 = 5893465563494719743LLU;

	t21 = (((x85^x86)^x87)-x88);

	if (t21 != 18446744073709456287LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	uint64_t x90 = 4128996104226359946LLU;
	volatile uint8_t x92 = UINT8_MAX;
	uint64_t t22 = 3071692LLU;

	t22 = (((x89^x90)^x91)-x92);

	if (t22 != 4128996104226359691LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -2;
	static int8_t x95 = INT8_MIN;
	int64_t t23 = -1006604022963LL;

	t23 = (((x93^x94)^x95)-x96);

	if (t23 != -9223372036854775731LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -1;
	volatile uint64_t x98 = 22206444LLU;
	uint64_t t24 = 1402946714LLU;

	t24 = (((x97^x98)^x99)-x100);

	if (t24 != 18446730318158297259LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	volatile int8_t x103 = INT8_MIN;
	int8_t x104 = -11;
	volatile int64_t t25 = -2101923615262LL;

	t25 = (((x101^x102)^x103)-x104);

	if (t25 != -9223372036491511623LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = 120523765739608LL;
	int64_t x106 = INT64_MIN;
	int64_t x107 = -1LL;
	static int64_t x108 = INT64_MAX;
	int64_t t26 = 0LL;

	t26 = (((x105^x106)^x107)-x108);

	if (t26 != -120523765739608LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = UINT64_MAX;
	uint64_t x110 = 105224125121072LLU;
	uint8_t x111 = 5U;
	static uint16_t x112 = UINT16_MAX;
	static uint64_t t27 = 52506078715LLU;

	t27 = (((x109^x110)^x111)-x112);

	if (t27 != 18446638849584365003LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x114 = INT64_MAX;
	int64_t x115 = -1LL;
	uint16_t x116 = 9U;
	static int64_t t28 = 5419818095860LL;

	t28 = (((x113^x114)^x115)-x116);

	if (t28 != -9223372034707292170LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x118 = 144582LLU;
	static volatile int32_t x119 = INT32_MAX;
	volatile int16_t x120 = -1;
	uint64_t t29 = 348349224048LLU;

	t29 = (((x117^x118)^x119)-x120);

	if (t29 != 18446744071562212538LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x125 = UINT16_MAX;
	static int16_t x126 = INT16_MIN;
	volatile int16_t x127 = -81;

	t30 = (((x125^x126)^x127)-x128);

	if (t30 != 65616) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x130 = INT64_MIN;
	volatile int16_t x132 = INT16_MAX;

	t31 = (((x129^x130)^x131)-x132);

	if (t31 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x133 = 8U;
	uint64_t x135 = 62LLU;
	volatile int8_t x136 = INT8_MIN;
	uint64_t t32 = 150440371LLU;

	t32 = (((x133^x134)^x135)-x136);

	if (t32 != 183LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = INT64_MIN;
	int16_t x139 = INT16_MAX;
	static uint64_t t33 = 1537436LLU;

	t33 = (((x137^x138)^x139)-x140);

	if (t33 != 9223372036854793400LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x141 = 59U;
	volatile uint32_t x142 = 144550336U;
	uint64_t x143 = 3673724LLU;
	volatile uint64_t t34 = 32338817362511LLU;

	t34 = (((x141^x142)^x143)-x144);

	if (t34 != 9223372036999849863LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x145 = -121;
	int8_t x146 = INT8_MIN;
	int16_t x147 = -1;
	int32_t x148 = -1;
	volatile int32_t t35 = 743416;

	t35 = (((x145^x146)^x147)-x148);

	if (t35 != -7) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x149 = 249LLU;
	volatile uint16_t x150 = UINT16_MAX;
	int64_t x151 = INT64_MIN;
	uint32_t x152 = UINT32_MAX;

	t36 = (((x149^x150)^x151)-x152);

	if (t36 != 9223372032559873799LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x154 = 806961U;
	volatile int64_t x155 = -68358061629LL;
	int8_t x156 = INT8_MIN;
	volatile int64_t t37 = -186LL;

	t37 = (((x153^x154)^x155)-x156);

	if (t37 != -64785673614LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x157 = INT64_MIN;
	int8_t x158 = INT8_MIN;
	static int32_t x160 = INT32_MIN;

	t38 = (((x157^x158)^x159)-x160);

	if (t38 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = 3;
	static int8_t x162 = INT8_MIN;
	uint64_t x163 = UINT64_MAX;
	uint32_t x164 = UINT32_MAX;

	t39 = (((x161^x162)^x163)-x164);

	if (t39 != 18446744069414584445LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x165 = 8037368LLU;
	int8_t x166 = 23;
	uint64_t x168 = 3939006LLU;
	volatile uint64_t t40 = 1568LLU;

	t40 = (((x165^x166)^x167)-x168);

	if (t40 != 4098130LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x170 = INT32_MIN;
	static int32_t x171 = INT32_MIN;
	static int8_t x172 = -1;
	static uint64_t t41 = 6626727626LLU;

	t41 = (((x169^x170)^x171)-x172);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x175 = 23;
	volatile uint32_t x176 = 3658U;
	volatile uint32_t t42 = 67147U;

	t42 = (((x173^x174)^x175)-x176);

	if (t42 != 4294963614U) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x181 = 0U;
	static volatile int8_t x182 = -1;
	int16_t x183 = -4;
	uint32_t x184 = 922960U;
	static uint32_t t43 = 35U;

	t43 = (((x181^x182)^x183)-x184);

	if (t43 != 4294044339U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x185 = 243814937U;
	static int8_t x186 = 0;
	static int32_t x187 = -1;
	volatile uint32_t t44 = 1282594U;

	t44 = (((x185^x186)^x187)-x188);

	if (t44 != 4051152339U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = -1;
	int16_t x190 = INT16_MIN;
	uint32_t x192 = 0U;

	t45 = (((x189^x190)^x191)-x192);

	if (t45 != 32768U) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x193 = 3609U;
	int8_t x194 = INT8_MAX;
	uint8_t x195 = 72U;
	int32_t t46 = -231586;

	t46 = (((x193^x194)^x195)-x196);

	if (t46 != 3503) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x197 = INT16_MIN;
	int64_t x198 = -753185799LL;
	volatile uint8_t x199 = 0U;
	int64_t t47 = -85530LL;

	t47 = (((x197^x198)^x199)-x200);

	if (t47 != 753192057LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x205 = 6250346112LLU;
	int16_t x206 = INT16_MIN;
	int16_t x207 = INT16_MIN;
	uint32_t x208 = UINT32_MAX;
	uint64_t t48 = 194699760LLU;

	t48 = (((x205^x206)^x207)-x208);

	if (t48 != 1955378817LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x209 = UINT32_MAX;
	int16_t x210 = INT16_MIN;
	static uint16_t x211 = 8U;
	int8_t x212 = -1;
	static volatile uint32_t t49 = 7U;

	t49 = (((x209^x210)^x211)-x212);

	if (t49 != 32760U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x213 = 7214074384999LLU;
	static volatile uint32_t x214 = UINT32_MAX;
	uint16_t x215 = 1648U;
	int32_t x216 = INT32_MIN;
	uint64_t t50 = 35164615691508998LLU;

	t50 = (((x213^x214)^x215)-x216);

	if (t50 != 7214868245480LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x217 = -1;
	static uint64_t x218 = 503101578266372LLU;
	uint8_t x220 = UINT8_MAX;
	uint64_t t51 = 115057131898LLU;

	t51 = (((x217^x218)^x219)-x220);

	if (t51 != 503101578266116LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x221 = 1LLU;
	uint32_t x222 = 22U;
	volatile uint64_t t52 = 246372399029LLU;

	t52 = (((x221^x222)^x223)-x224);

	if (t52 != 18446744073709512063LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x225 = 20299850566589036LLU;
	uint64_t x227 = 48015913LLU;
	static volatile int32_t x228 = -5587;
	static uint64_t t53 = 55719085091LLU;

	t53 = (((x225^x226)^x227)-x228);

	if (t53 != 18426444223162131853LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x229 = INT8_MIN;
	int64_t x230 = -1LL;
	int16_t x231 = INT16_MAX;
	int32_t x232 = INT32_MAX;
	static int64_t t54 = 15725310235LL;

	t54 = (((x229^x230)^x231)-x232);

	if (t54 != -2147451007LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x233 = 48U;
	uint8_t x234 = 10U;
	volatile int8_t x235 = -62;
	int8_t x236 = INT8_MAX;

	t55 = (((x233^x234)^x235)-x236);

	if (t55 != -135) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x237 = -1;
	static uint64_t x239 = 5151212946559LLU;
	static int16_t x240 = INT16_MIN;

	t56 = (((x237^x238)^x239)-x240);

	if (t56 != 5151212979276LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x241 = -1;
	static int16_t x243 = 158;
	static uint16_t x244 = 37U;
	volatile int64_t t57 = 6419584216194070LL;

	t57 = (((x241^x242)^x243)-x244);

	if (t57 != -9223372036854775687LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x245 = INT64_MAX;
	uint32_t x246 = UINT32_MAX;
	static int8_t x247 = -1;
	int16_t x248 = 1;

	t58 = (((x245^x246)^x247)-x248);

	if (t58 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x249 = -1LL;
	volatile uint8_t x250 = 3U;
	static volatile uint32_t x251 = 56747U;
	int64_t x252 = -157LL;

	t59 = (((x249^x250)^x251)-x252);

	if (t59 != -56588LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x254 = 178908295240341665LLU;
	int8_t x256 = -9;
	static volatile uint64_t t60 = 17LLU;

	t60 = (((x253^x254)^x255)-x256);

	if (t60 != 176410717996077678LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x257 = INT16_MIN;
	int16_t x259 = INT16_MIN;
	int32_t t61 = 25925246;

	t61 = (((x257^x258)^x259)-x260);

	if (t61 != -90) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x261 = UINT64_MAX;
	static uint64_t x262 = 3141063LLU;
	uint8_t x263 = 1U;
	volatile int8_t x264 = 0;
	uint64_t t62 = 6989934726293LLU;

	t62 = (((x261^x262)^x263)-x264);

	if (t62 != 18446744073706410553LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x265 = 3U;
	uint16_t x267 = UINT16_MAX;
	static int32_t x268 = INT32_MIN;
	static volatile int32_t t63 = 7;

	t63 = (((x265^x266)^x267)-x268);

	if (t63 != 2147418236) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x269 = INT8_MAX;
	int64_t x270 = INT64_MIN;
	uint8_t x271 = 118U;
	volatile int8_t x272 = 1;
	static volatile int64_t t64 = 16825512175LL;

	t64 = (((x269^x270)^x271)-x272);

	if (t64 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x273 = -572310806829017LL;
	int32_t x274 = INT32_MIN;
	static volatile int16_t x275 = 323;
	static volatile uint8_t x276 = 0U;
	volatile int64_t t65 = 2267198162LL;

	t65 = (((x273^x274)^x275)-x276);

	if (t65 != 572308714973540LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x281 = 1;
	int32_t x282 = 1234599;
	uint16_t x283 = 11U;
	volatile int32_t t66 = -50415;

	t66 = (((x281^x282)^x283)-x284);

	if (t66 != 1201838) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x285 = -506723;
	static uint32_t x286 = 33U;
	int32_t x288 = INT32_MIN;
	uint32_t t67 = 3377710U;

	t67 = (((x285^x286)^x287)-x288);

	if (t67 != 2084296814U) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x289 = INT16_MIN;
	static int32_t x290 = -11802368;
	int16_t x292 = -1;
	volatile uint32_t t68 = 0U;

	t68 = (((x289^x290)^x291)-x292);

	if (t68 != 4283143936U) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x294 = 91U;
	uint16_t x295 = UINT16_MAX;
	int16_t x296 = -12;
	int32_t t69 = 0;

	t69 = (((x293^x294)^x295)-x296);

	if (t69 != 65455) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x297 = UINT64_MAX;
	int8_t x298 = -1;
	int8_t x300 = INT8_MIN;
	uint64_t t70 = 7500407553249813797LLU;

	t70 = (((x297^x298)^x299)-x300);

	if (t70 != 127LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x305 = 10U;
	volatile int8_t x307 = -1;
	uint16_t x308 = UINT16_MAX;
	int32_t t71 = 6687;

	t71 = (((x305^x306)^x307)-x308);

	if (t71 != -66064) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x309 = INT32_MIN;
	uint32_t x310 = 15710024U;
	int8_t x311 = INT8_MIN;
	static volatile int16_t x312 = INT16_MIN;
	static volatile uint32_t t72 = 488U;

	t72 = (((x309^x310)^x311)-x312);

	if (t72 != 2131806408U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x313 = -1753880LL;
	int16_t x314 = INT16_MIN;
	static uint32_t x315 = 15U;
	uint8_t x316 = 47U;

	t73 = (((x313^x314)^x315)-x316);

	if (t73 != 1752248LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x318 = 1U;
	int16_t x319 = -1;
	static int32_t x320 = -5923;
	int32_t t74 = -250975;

	t74 = (((x317^x318)^x319)-x320);

	if (t74 != -26844) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x325 = INT32_MAX;
	int8_t x326 = -1;
	uint8_t x328 = UINT8_MAX;
	static volatile int32_t t75 = 6397;

	t75 = (((x325^x326)^x327)-x328);

	if (t75 != 2147450625) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x330 = UINT64_MAX;
	int8_t x331 = INT8_MAX;
	int8_t x332 = INT8_MIN;
	uint64_t t76 = 8474144422LLU;

	t76 = (((x329^x330)^x331)-x332);

	if (t76 != 255LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x333 = -422229LL;

	t77 = (((x333^x334)^x335)-x336);

	if (t77 != -277169LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x337 = INT8_MIN;
	volatile int64_t x338 = INT64_MIN;
	volatile int8_t x339 = -5;
	int8_t x340 = INT8_MIN;

	t78 = (((x337^x338)^x339)-x340);

	if (t78 != -9223372036854775557LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x341 = 1U;
	int64_t x344 = -1LL;

	t79 = (((x341^x342)^x343)-x344);

	if (t79 != 12902659474402LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x345 = 32U;
	uint32_t x346 = 294735U;
	uint64_t x347 = 78668726LLU;
	static uint32_t x348 = 482386706U;
	uint64_t t80 = 408LLU;

	t80 = (((x345^x346)^x347)-x348);

	if (t80 != 18446744073306077639LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x354 = -1;
	uint8_t x355 = 0U;
	static int8_t x356 = INT8_MIN;
	uint32_t t81 = 6112720U;

	t81 = (((x353^x354)^x355)-x356);

	if (t81 != 4175404223U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x357 = INT64_MIN;
	static int32_t x358 = INT32_MIN;
	volatile uint64_t x359 = 4LLU;
	int8_t x360 = -1;
	volatile uint64_t t82 = 24LLU;

	t82 = (((x357^x358)^x359)-x360);

	if (t82 != 9223372034707292165LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x361 = 1;
	int64_t x363 = 1343137722LL;
	static int64_t t83 = -1045548179LL;

	t83 = (((x361^x362)^x363)-x364);

	if (t83 != 3490621314LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x365 = INT16_MIN;
	int32_t x366 = 934056;
	uint64_t x367 = UINT64_MAX;
	int16_t x368 = INT16_MIN;
	static uint64_t t84 = 75529148LLU;

	t84 = (((x365^x366)^x367)-x368);

	if (t84 != 966487LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x369 = 646;
	static uint16_t x370 = UINT16_MAX;
	static int8_t x371 = INT8_MAX;
	static uint32_t x372 = 618340U;
	uint32_t t85 = 242U;

	t85 = (((x369^x370)^x371)-x372);

	if (t85 != 4294413730U) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x373 = INT8_MIN;
	int16_t x374 = -4;
	int16_t x375 = INT16_MIN;
	int16_t x376 = -44;
	volatile int32_t t86 = 421;

	t86 = (((x373^x374)^x375)-x376);

	if (t86 != -32600) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint16_t x381 = 431U;
	int8_t x383 = 54;
	int64_t x384 = 7464950403986LL;
	volatile int64_t t87 = 1LL;

	t87 = (((x381^x382)^x383)-x384);

	if (t87 != -7467097887225LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x385 = INT8_MIN;
	uint32_t x386 = UINT32_MAX;
	volatile int16_t x387 = INT16_MIN;
	volatile uint32_t t88 = 220U;

	t88 = (((x385^x386)^x387)-x388);

	if (t88 != 4294934783U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x393 = INT16_MAX;
	static uint8_t x394 = 1U;
	int64_t x395 = -956736LL;
	static int32_t x396 = -63;
	volatile int64_t t89 = 30899LL;

	t89 = (((x393^x394)^x395)-x396);

	if (t89 != -976515LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x397 = -1;
	uint32_t x399 = 2811816U;
	int16_t x400 = -1;
	int64_t t90 = -428340410439524501LL;

	t90 = (((x397^x398)^x399)-x400);

	if (t90 != -9223372036851963991LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x401 = 1942246157U;
	volatile int64_t x402 = -1LL;
	static uint64_t x404 = UINT64_MAX;
	volatile uint64_t t91 = 981LLU;

	t91 = (((x401^x402)^x403)-x404);

	if (t91 != 394034885969LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x405 = 5531U;
	uint32_t x406 = 901301475U;
	static uint32_t x407 = UINT32_MAX;
	volatile int64_t x408 = -1LL;
	static volatile int64_t t92 = -13408049851507059LL;

	t92 = (((x405^x406)^x407)-x408);

	if (t92 != 3393662600LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x409 = UINT64_MAX;
	int32_t x410 = INT32_MIN;
	int8_t x411 = INT8_MIN;
	static int8_t x412 = INT8_MAX;
	uint64_t t93 = 375781965872385306LLU;

	t93 = (((x409^x410)^x411)-x412);

	if (t93 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x413 = 8815;
	uint32_t x414 = 101U;
	int8_t x415 = INT8_MAX;
	uint16_t x416 = 55U;
	volatile uint32_t t94 = 244907134U;

	t94 = (((x413^x414)^x415)-x416);

	if (t94 != 8766U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x417 = -1;
	int64_t x418 = INT64_MIN;
	uint32_t x419 = UINT32_MAX;
	uint8_t x420 = 4U;
	int64_t t95 = -25636921390647124LL;

	t95 = (((x417^x418)^x419)-x420);

	if (t95 != 9223372032559808508LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x421 = -1;
	uint16_t x422 = 60U;
	volatile int16_t x423 = -1;
	uint16_t x424 = 7U;
	volatile int32_t t96 = -1;

	t96 = (((x421^x422)^x423)-x424);

	if (t96 != 53) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x425 = INT16_MIN;
	uint8_t x427 = 18U;

	t97 = (((x425^x426)^x427)-x428);

	if (t97 != 327167833LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x429 = -1;
	int16_t x430 = 15;
	int8_t x432 = INT8_MIN;
	int32_t t98 = 267034477;

	t98 = (((x429^x430)^x431)-x432);

	if (t98 != 240) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x433 = UINT8_MAX;
	int64_t x434 = 1LL;
	int64_t x435 = -1LL;
	static uint32_t x436 = 49637986U;

	t99 = (((x433^x434)^x435)-x436);

	if (t99 != -49638241LL) { NG(); } else { ; }
	
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

