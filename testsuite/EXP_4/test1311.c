#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x1 = UINT16_MAX;
uint8_t x15 = 36U;
int32_t t3 = 12966826;
int8_t x35 = 0;
volatile int64_t t8 = 64132234LL;
uint32_t x38 = UINT32_MAX;
uint8_t x46 = 104U;
int8_t x49 = -1;
int64_t x54 = INT64_MIN;
volatile uint8_t x58 = 9U;
static int8_t x62 = -50;
int16_t x66 = INT16_MIN;
int32_t x67 = INT32_MIN;
volatile uint8_t x70 = UINT8_MAX;
uint8_t x76 = 0U;
uint16_t x80 = 37U;
int32_t t20 = 34570480;
volatile int8_t x86 = 0;
int64_t x98 = INT64_MIN;
static volatile int64_t t24 = 639341LL;
static int16_t x104 = -1;
uint32_t x105 = UINT32_MAX;
int64_t x108 = INT64_MIN;
uint16_t x110 = UINT16_MAX;
static volatile uint8_t x114 = 106U;
uint16_t x119 = 1U;
volatile int32_t x122 = INT32_MIN;
uint16_t x123 = 19U;
volatile int8_t x125 = -1;
static uint8_t x131 = 35U;
int16_t x143 = INT16_MIN;
static int8_t x152 = INT8_MIN;
uint32_t x159 = 751U;
int64_t x160 = 191107010013LL;
uint16_t x164 = UINT16_MAX;
uint8_t x168 = 2U;
int64_t x173 = INT64_MAX;
int32_t x182 = -1;
int32_t t45 = -327;
int16_t x187 = -1;
uint8_t x191 = UINT8_MAX;
int64_t x195 = INT64_MIN;
static int16_t x196 = INT16_MIN;
static int16_t x197 = -1;
static volatile int32_t t50 = 13998690;
uint64_t x209 = UINT64_MAX;
uint8_t x211 = 62U;
static int8_t x212 = INT8_MAX;
volatile uint16_t x216 = 173U;
int64_t x218 = INT64_MIN;
static uint32_t x221 = UINT32_MAX;
static int8_t x222 = INT8_MIN;
uint16_t x223 = 7U;
int64_t x229 = INT64_MIN;
static int32_t x233 = INT32_MIN;
int16_t x234 = -1;
uint16_t x236 = UINT16_MAX;
int64_t x237 = INT64_MIN;
uint8_t x240 = UINT8_MAX;
int32_t x242 = -532;
static int32_t x246 = -53631235;
volatile int32_t t61 = -52320;
int8_t x249 = -1;
uint16_t x256 = 12U;
int32_t t63 = 62;
volatile uint16_t x257 = 58U;
static int32_t t64 = -302825;
static int8_t x264 = INT8_MIN;
static int32_t x265 = -126412021;
static uint8_t x272 = 12U;
uint16_t x274 = UINT16_MAX;
static uint16_t x276 = 1523U;
static volatile int32_t t68 = 74780963;
uint64_t x278 = 143371951746LLU;
int32_t t70 = -48326375;
uint16_t x286 = 1U;
static volatile uint16_t x296 = 214U;
int64_t x300 = -214021093908LL;
uint16_t x303 = 3U;
static int64_t t76 = 146758LL;
int32_t x309 = -1;
int32_t x313 = -28;
volatile int32_t t81 = -5623;
static int64_t x331 = INT64_MIN;
int64_t x332 = INT64_MIN;
int64_t t82 = -5086217355LL;
uint64_t x338 = 2789385096LLU;
int32_t x341 = INT32_MIN;
volatile int32_t t86 = 64707;
static uint8_t x351 = UINT8_MAX;
volatile uint8_t x354 = 45U;
uint32_t x356 = 92U;
int8_t x359 = INT8_MIN;
volatile int32_t t89 = -14202;
int16_t x363 = INT16_MIN;
uint8_t x367 = 11U;
static int64_t x371 = INT64_MAX;
static volatile int32_t t92 = 4836341;
int32_t x375 = 1;
int64_t t95 = 2163731206LL;
int32_t x386 = INT32_MIN;
int64_t x389 = 116339909535802086LL;
int32_t x390 = INT32_MAX;
volatile int16_t x395 = INT16_MIN;
uint16_t x398 = UINT16_MAX;
static int16_t x400 = INT16_MIN;


void f0(void) {
	uint64_t x2 = 17878036940450909LLU;
	uint8_t x3 = 54U;
	static int8_t x4 = INT8_MIN;
	volatile int32_t t0 = -54;

	t0 = (x1&(x2<=(x3==x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MIN;
	int8_t x6 = INT8_MAX;
	static volatile uint16_t x7 = 20117U;
	static int8_t x8 = 1;
	int64_t t1 = 335416556LL;

	t1 = (x5&(x6<=(x7==x8)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -2591365222280LL;
	uint8_t x10 = 0U;
	static uint32_t x11 = 1U;
	int8_t x12 = 22;
	int64_t t2 = 1240811594275990LL;

	t2 = (x9&(x10<=(x11==x12)));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	volatile uint32_t x14 = UINT32_MAX;
	int64_t x16 = -2251LL;

	t3 = (x13&(x14<=(x15==x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 3421125;
	int64_t x18 = -325838486085LL;
	uint8_t x19 = 81U;
	uint32_t x20 = UINT32_MAX;
	static volatile int32_t t4 = -514546;

	t4 = (x17&(x18<=(x19==x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 3U;
	int8_t x22 = 1;
	volatile uint64_t x23 = 374LLU;
	static int32_t x24 = -54;
	int32_t t5 = 107258285;

	t5 = (x21&(x22<=(x23==x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 1U;
	uint16_t x26 = 0U;
	int8_t x27 = -1;
	int32_t x28 = INT32_MIN;
	volatile int32_t t6 = -16;

	t6 = (x25&(x26<=(x27==x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	uint16_t x30 = UINT16_MAX;
	uint32_t x31 = 814U;
	int16_t x32 = INT16_MAX;
	int32_t t7 = 281658191;

	t7 = (x29&(x30<=(x31==x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = INT64_MIN;
	uint64_t x34 = 2774419587668942LLU;
	int8_t x36 = 50;

	t8 = (x33&(x34<=(x35==x36)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 98U;
	volatile int8_t x39 = 0;
	volatile uint32_t x40 = 782U;
	volatile int32_t t9 = 8258879;

	t9 = (x37&(x38<=(x39==x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x41 = 6607LLU;
	int16_t x42 = 0;
	static uint8_t x43 = 1U;
	int16_t x44 = INT16_MAX;
	uint64_t t10 = 39286LLU;

	t10 = (x41&(x42<=(x43==x44)));

	if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = 184;
	volatile int8_t x47 = INT8_MAX;
	static uint8_t x48 = 15U;
	static int32_t t11 = 19397573;

	t11 = (x45&(x46<=(x47==x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x50 = 0;
	static volatile int16_t x51 = -204;
	uint32_t x52 = UINT32_MAX;
	volatile int32_t t12 = -1488;

	t12 = (x49&(x50<=(x51==x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x53 = INT32_MIN;
	uint32_t x55 = UINT32_MAX;
	int64_t x56 = -1LL;
	int32_t t13 = 10;

	t13 = (x53&(x54<=(x55==x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MAX;
	int8_t x59 = INT8_MIN;
	uint64_t x60 = 78663370758LLU;
	int32_t t14 = -16129;

	t14 = (x57&(x58<=(x59==x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -17;
	int64_t x63 = INT64_MAX;
	int8_t x64 = INT8_MAX;
	volatile int32_t t15 = 7441733;

	t15 = (x61&(x62<=(x63==x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 6886242501310161022LLU;
	int32_t x68 = -1;
	uint64_t t16 = 7847832LLU;

	t16 = (x65&(x66<=(x67==x68)));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -1;
	int8_t x71 = INT8_MIN;
	volatile uint16_t x72 = 10243U;
	int32_t t17 = 241193405;

	t17 = (x69&(x70<=(x71==x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 27U;
	static volatile uint64_t x74 = 7512200041589LLU;
	int8_t x75 = -1;
	int32_t t18 = -1648107;

	t18 = (x73&(x74<=(x75==x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MAX;
	int16_t x78 = INT16_MIN;
	volatile int32_t x79 = INT32_MAX;
	int32_t t19 = -2;

	t19 = (x77&(x78<=(x79==x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	int64_t x82 = 906568446LL;
	int16_t x83 = INT16_MIN;
	uint16_t x84 = 0U;

	t20 = (x81&(x82<=(x83==x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 3651431436LLU;
	int8_t x87 = -1;
	int8_t x88 = INT8_MIN;
	volatile uint64_t t21 = 374718LLU;

	t21 = (x85&(x86<=(x87==x88)));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 4U;
	uint32_t x90 = 217660584U;
	uint8_t x91 = 0U;
	int8_t x92 = INT8_MIN;
	int32_t t22 = -20791435;

	t22 = (x89&(x90<=(x91==x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	int8_t x94 = INT8_MAX;
	volatile int16_t x95 = 436;
	static int32_t x96 = INT32_MIN;
	int64_t t23 = -188919334LL;

	t23 = (x93&(x94<=(x95==x96)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = INT64_MAX;
	int8_t x99 = 6;
	static int32_t x100 = INT32_MAX;

	t24 = (x97&(x98<=(x99==x100)));

	if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	int8_t x102 = -1;
	uint8_t x103 = 7U;
	int32_t t25 = 798754662;

	t25 = (x101&(x102<=(x103==x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x106 = INT8_MIN;
	uint64_t x107 = 9802LLU;
	uint32_t t26 = 29U;

	t26 = (x105&(x106<=(x107==x108)));

	if (t26 != 1U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MAX;
	volatile int64_t x111 = INT64_MAX;
	volatile int32_t x112 = -1;
	volatile int32_t t27 = 19542106;

	t27 = (x109&(x110<=(x111==x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	int64_t x115 = INT64_MAX;
	static uint16_t x116 = UINT16_MAX;
	volatile int64_t t28 = -85199713502784LL;

	t28 = (x113&(x114<=(x115==x116)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 2U;
	volatile uint64_t x118 = UINT64_MAX;
	volatile int64_t x120 = 346LL;
	static int32_t t29 = 0;

	t29 = (x117&(x118<=(x119==x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint64_t x121 = 7504097LLU;
	static uint32_t x124 = UINT32_MAX;
	uint64_t t30 = 104985LLU;

	t30 = (x121&(x122<=(x123==x124)));

	if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x126 = INT8_MIN;
	static uint16_t x127 = UINT16_MAX;
	static int8_t x128 = -1;
	volatile int32_t t31 = -6128376;

	t31 = (x125&(x126<=(x127==x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MAX;
	static int64_t x130 = -1LL;
	uint32_t x132 = 78549026U;
	int32_t t32 = -241427377;

	t32 = (x129&(x130<=(x131==x132)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 2839854474LLU;
	uint16_t x134 = 1744U;
	volatile int16_t x135 = -1;
	uint64_t x136 = UINT64_MAX;
	uint64_t t33 = 313610126278LLU;

	t33 = (x133&(x134<=(x135==x136)));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x137 = INT8_MIN;
	volatile int8_t x138 = INT8_MAX;
	int16_t x139 = INT16_MIN;
	int8_t x140 = INT8_MIN;
	volatile int32_t t34 = -672605370;

	t34 = (x137&(x138<=(x139==x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -1;
	uint8_t x142 = 33U;
	int64_t x144 = -1066486925701823LL;
	static int32_t t35 = 0;

	t35 = (x141&(x142<=(x143==x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x145 = UINT8_MAX;
	uint32_t x146 = 26U;
	static uint64_t x147 = UINT64_MAX;
	int16_t x148 = INT16_MIN;
	int32_t t36 = -514;

	t36 = (x145&(x146<=(x147==x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -58;
	uint32_t x150 = UINT32_MAX;
	volatile int32_t x151 = INT32_MAX;
	int32_t t37 = 52788477;

	t37 = (x149&(x150<=(x151==x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = UINT8_MAX;
	int64_t x154 = INT64_MAX;
	int64_t x155 = INT64_MIN;
	volatile int8_t x156 = -1;
	static volatile int32_t t38 = -761615;

	t38 = (x153&(x154<=(x155==x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 17005899U;
	static uint32_t x158 = 10926U;
	uint32_t t39 = 291715593U;

	t39 = (x157&(x158<=(x159==x160)));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -1;
	volatile uint64_t x162 = 150159128906776LLU;
	int8_t x163 = -1;
	volatile int32_t t40 = 242252349;

	t40 = (x161&(x162<=(x163==x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = 28;
	uint32_t x166 = 8808547U;
	int64_t x167 = INT64_MIN;
	int32_t t41 = 35;

	t41 = (x165&(x166<=(x167==x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = 3;
	volatile int32_t x170 = INT32_MIN;
	volatile uint8_t x171 = 74U;
	int32_t x172 = -764464;
	int32_t t42 = 57563;

	t42 = (x169&(x170<=(x171==x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x174 = UINT8_MAX;
	int32_t x175 = -134292694;
	volatile int8_t x176 = INT8_MIN;
	int64_t t43 = 704696535774LL;

	t43 = (x173&(x174<=(x175==x176)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int32_t x177 = 0;
	int32_t x178 = -1289380;
	int32_t x179 = 463;
	volatile uint32_t x180 = 456945U;
	static int32_t t44 = -4027830;

	t44 = (x177&(x178<=(x179==x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x181 = -1;
	volatile int8_t x183 = INT8_MAX;
	uint64_t x184 = UINT64_MAX;

	t45 = (x181&(x182<=(x183==x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = 44;
	int16_t x186 = INT16_MIN;
	int8_t x188 = INT8_MAX;
	int32_t t46 = -713097676;

	t46 = (x185&(x186<=(x187==x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = 468237592768041LL;
	static int8_t x190 = INT8_MIN;
	int16_t x192 = 1;
	volatile int64_t t47 = 3173LL;

	t47 = (x189&(x190<=(x191==x192)));

	if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x193 = INT32_MAX;
	int64_t x194 = INT64_MAX;
	int32_t t48 = -1;

	t48 = (x193&(x194<=(x195==x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x198 = INT16_MIN;
	int64_t x199 = 17059826923LL;
	int8_t x200 = -1;
	static int32_t t49 = -2022;

	t49 = (x197&(x198<=(x199==x200)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MAX;
	static int32_t x202 = INT32_MAX;
	uint32_t x203 = 1029U;
	static int64_t x204 = INT64_MIN;

	t50 = (x201&(x202<=(x203==x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -1129988288418295403LL;
	volatile int32_t x206 = INT32_MIN;
	int16_t x207 = INT16_MIN;
	int64_t x208 = INT64_MIN;
	int64_t t51 = 1890870281570LL;

	t51 = (x205&(x206<=(x207==x208)));

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x210 = INT16_MAX;
	volatile uint64_t t52 = 28116LLU;

	t52 = (x209&(x210<=(x211==x212)));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x213 = 876U;
	uint8_t x214 = 38U;
	uint16_t x215 = 4680U;
	volatile int32_t t53 = 7419707;

	t53 = (x213&(x214<=(x215==x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x217 = 54U;
	int64_t x219 = INT64_MAX;
	int32_t x220 = INT32_MIN;
	static int32_t t54 = 100798562;

	t54 = (x217&(x218<=(x219==x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x224 = INT64_MIN;
	static volatile uint32_t t55 = 692442U;

	t55 = (x221&(x222<=(x223==x224)));

	if (t55 != 1U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x225 = UINT8_MAX;
	int32_t x226 = -1;
	uint8_t x227 = 56U;
	int8_t x228 = 5;
	volatile int32_t t56 = -10747;

	t56 = (x225&(x226<=(x227==x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x230 = INT8_MIN;
	volatile int32_t x231 = INT32_MAX;
	uint8_t x232 = 13U;
	int64_t t57 = 19598168486LL;

	t57 = (x229&(x230<=(x231==x232)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x235 = -1;
	volatile int32_t t58 = 1;

	t58 = (x233&(x234<=(x235==x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x238 = 76384U;
	uint16_t x239 = UINT16_MAX;
	static volatile int64_t t59 = -495862976649147295LL;

	t59 = (x237&(x238<=(x239==x240)));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x241 = UINT64_MAX;
	int16_t x243 = INT16_MAX;
	uint16_t x244 = UINT16_MAX;
	volatile uint64_t t60 = 1691441492LLU;

	t60 = (x241&(x242<=(x243==x244)));

	if (t60 != 1LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 54U;
	int64_t x247 = INT64_MIN;
	static int32_t x248 = -1;

	t61 = (x245&(x246<=(x247==x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x250 = INT32_MIN;
	static uint8_t x251 = 2U;
	uint16_t x252 = UINT16_MAX;
	volatile int32_t t62 = -40;

	t62 = (x249&(x250<=(x251==x252)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint8_t x253 = 52U;
	volatile int16_t x254 = INT16_MIN;
	static int32_t x255 = INT32_MIN;

	t63 = (x253&(x254<=(x255==x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x258 = 28U;
	static volatile int64_t x259 = -1LL;
	int16_t x260 = -1;

	t64 = (x257&(x258<=(x259==x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MAX;
	uint16_t x262 = 761U;
	uint16_t x263 = UINT16_MAX;
	int32_t t65 = -78960;

	t65 = (x261&(x262<=(x263==x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint8_t x266 = 103U;
	int64_t x267 = INT64_MAX;
	uint64_t x268 = UINT64_MAX;
	volatile int32_t t66 = -337275;

	t66 = (x265&(x266<=(x267==x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = -1;
	int64_t x270 = 28418317262106LL;
	int32_t x271 = 0;
	int32_t t67 = 8201;

	t67 = (x269&(x270<=(x271==x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = 1U;
	static int64_t x275 = INT64_MIN;

	t68 = (x273&(x274<=(x275==x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x277 = 394U;
	uint64_t x279 = 2053694928LLU;
	int8_t x280 = INT8_MAX;
	static int32_t t69 = 24085;

	t69 = (x277&(x278<=(x279==x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = -1;
	volatile int64_t x282 = 80LL;
	uint16_t x283 = UINT16_MAX;
	static volatile uint32_t x284 = 1230945U;

	t70 = (x281&(x282<=(x283==x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = UINT8_MAX;
	volatile int64_t x287 = INT64_MIN;
	static uint64_t x288 = 3936280118LLU;
	volatile int32_t t71 = 539;

	t71 = (x285&(x286<=(x287==x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = -1;
	int32_t x290 = INT32_MIN;
	static volatile int16_t x291 = 5664;
	uint16_t x292 = 40U;
	int32_t t72 = 0;

	t72 = (x289&(x290<=(x291==x292)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = 3U;
	int64_t x294 = INT64_MIN;
	uint8_t x295 = UINT8_MAX;
	int32_t t73 = 129053;

	t73 = (x293&(x294<=(x295==x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = 237868U;
	int16_t x298 = -57;
	int32_t x299 = -1;
	volatile uint32_t t74 = 117570440U;

	t74 = (x297&(x298<=(x299==x300)));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x301 = 17880U;
	int64_t x302 = INT64_MIN;
	static uint32_t x304 = UINT32_MAX;
	volatile uint32_t t75 = 4460440U;

	t75 = (x301&(x302<=(x303==x304)));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = -300942334067280068LL;
	int16_t x306 = -1;
	int64_t x307 = INT64_MIN;
	int16_t x308 = INT16_MIN;

	t76 = (x305&(x306<=(x307==x308)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x310 = INT8_MIN;
	int16_t x311 = -1;
	int32_t x312 = -1833;
	volatile int32_t t77 = -445659;

	t77 = (x309&(x310<=(x311==x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x314 = 41U;
	int8_t x315 = INT8_MIN;
	static int64_t x316 = 15494212LL;
	static volatile int32_t t78 = -9407168;

	t78 = (x313&(x314<=(x315==x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x317 = UINT8_MAX;
	int16_t x318 = INT16_MIN;
	int8_t x319 = INT8_MIN;
	uint64_t x320 = 773102750LLU;
	volatile int32_t t79 = 7;

	t79 = (x317&(x318<=(x319==x320)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x321 = 1329817;
	int64_t x322 = INT64_MIN;
	volatile uint32_t x323 = 220866U;
	uint16_t x324 = 7310U;
	volatile int32_t t80 = 98649027;

	t80 = (x321&(x322<=(x323==x324)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MAX;
	uint64_t x326 = 14985246LLU;
	volatile int8_t x327 = 0;
	static int64_t x328 = -284934899260647LL;

	t81 = (x325&(x326<=(x327==x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x329 = -1LL;
	volatile uint32_t x330 = UINT32_MAX;

	t82 = (x329&(x330<=(x331==x332)));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MIN;
	int16_t x334 = INT16_MIN;
	uint8_t x335 = UINT8_MAX;
	uint32_t x336 = 170848U;
	volatile int32_t t83 = 130654;

	t83 = (x333&(x334<=(x335==x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x337 = INT32_MIN;
	uint8_t x339 = UINT8_MAX;
	uint32_t x340 = 27210U;
	volatile int32_t t84 = -11885427;

	t84 = (x337&(x338<=(x339==x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x342 = INT16_MIN;
	static int32_t x343 = 988;
	static int64_t x344 = INT64_MAX;
	volatile int32_t t85 = 127455;

	t85 = (x341&(x342<=(x343==x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MIN;
	uint8_t x346 = 2U;
	volatile int16_t x347 = INT16_MAX;
	int64_t x348 = -1LL;

	t86 = (x345&(x346<=(x347==x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -1;
	static int8_t x350 = -2;
	uint32_t x352 = UINT32_MAX;
	int32_t t87 = 209638;

	t87 = (x349&(x350<=(x351==x352)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x353 = INT16_MIN;
	uint32_t x355 = 222602U;
	static volatile int32_t t88 = -18797656;

	t88 = (x353&(x354<=(x355==x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = -6;
	static volatile int32_t x358 = -22609;
	int16_t x360 = -1;

	t89 = (x357&(x358<=(x359==x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x361 = UINT32_MAX;
	volatile uint64_t x362 = 8801939733499911986LLU;
	int32_t x364 = INT32_MAX;
	static uint32_t t90 = 235500189U;

	t90 = (x361&(x362<=(x363==x364)));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x365 = INT64_MAX;
	int32_t x366 = INT32_MIN;
	uint16_t x368 = 23U;
	int64_t t91 = -5648866051LL;

	t91 = (x365&(x366<=(x367==x368)));

	if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = UINT8_MAX;
	static volatile int64_t x370 = -6LL;
	int32_t x372 = INT32_MAX;

	t92 = (x369&(x370<=(x371==x372)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = 105160598;
	uint16_t x374 = 615U;
	int16_t x376 = 4471;
	volatile int32_t t93 = -210772;

	t93 = (x373&(x374<=(x375==x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MIN;
	static volatile int16_t x378 = 44;
	int64_t x379 = INT64_MIN;
	uint8_t x380 = 24U;
	int64_t t94 = 6372948936633LL;

	t94 = (x377&(x378<=(x379==x380)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x381 = 7LL;
	static uint16_t x382 = 3U;
	static volatile uint32_t x383 = UINT32_MAX;
	int16_t x384 = -1;

	t95 = (x381&(x382<=(x383==x384)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x385 = -9060LL;
	static uint64_t x387 = 115069273635317LLU;
	int16_t x388 = INT16_MAX;
	int64_t t96 = 125454907781325LL;

	t96 = (x385&(x386<=(x387==x388)));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x391 = UINT64_MAX;
	static int64_t x392 = 1300273498LL;
	static int64_t t97 = 1424904LL;

	t97 = (x389&(x390<=(x391==x392)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = UINT32_MAX;
	uint64_t x394 = 42481283889LLU;
	uint64_t x396 = 152750LLU;
	uint32_t t98 = 34124381U;

	t98 = (x393&(x394<=(x395==x396)));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MIN;
	int32_t x399 = INT32_MAX;
	static int64_t t99 = 48563344LL;

	t99 = (x397&(x398<=(x399==x400)));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

