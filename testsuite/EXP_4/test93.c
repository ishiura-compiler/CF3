#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 2115507;
uint64_t x5 = 579791788407LLU;
static int32_t x9 = -57553905;
uint8_t x18 = UINT8_MAX;
uint16_t x21 = 29U;
uint64_t x22 = 1LLU;
uint64_t x25 = 13837459249187087LLU;
static int32_t x28 = 419;
static int64_t x29 = INT64_MAX;
static uint64_t x35 = 166297307078LLU;
int64_t t8 = INT64_MIN;
int64_t x43 = -1LL;
static int16_t x54 = 1;
int32_t x58 = INT32_MIN;
volatile int32_t x59 = -604927324;
volatile int32_t t12 = -18542;
int8_t x61 = 19;
uint64_t x66 = 708205848471963LLU;
volatile uint32_t t14 = 130484545U;
int64_t x81 = -4603628113595LL;
volatile int64_t x85 = -1LL;
int64_t x90 = -2185270833237811LL;
static int64_t x94 = -419351406729907LL;
int64_t x96 = -1LL;
volatile int16_t x98 = INT16_MIN;
uint64_t x100 = 1948938LLU;
static int32_t x116 = -1;
int64_t t25 = INT64_MIN;
static uint64_t x121 = UINT64_MAX;
int32_t x126 = INT32_MAX;
int32_t x127 = 0;
uint32_t x132 = 20U;
int64_t t29 = INT64_MIN;
volatile uint32_t x142 = 31U;
int32_t t31 = -6;
uint16_t x148 = 59U;
static volatile int32_t t32 = 224;
static int64_t x155 = 23722LL;
volatile int8_t x166 = -45;
int64_t x168 = INT64_MIN;
uint64_t x195 = UINT64_MAX;
volatile int32_t x199 = -1;
int64_t x208 = -240036LL;
volatile int32_t x210 = INT32_MIN;
uint16_t x211 = 9U;
int64_t x212 = INT64_MIN;
int8_t x219 = -1;
int64_t t47 = INT64_MAX;
static volatile int64_t x234 = INT64_MAX;
uint8_t x239 = 5U;
static int32_t x240 = INT32_MIN;
uint32_t x241 = 579U;
uint32_t x264 = 70977U;
int32_t x268 = INT32_MIN;
volatile uint16_t x274 = 186U;
static volatile int32_t t58 = -142;
volatile int64_t t59 = INT64_MIN;
static uint32_t x289 = UINT32_MAX;
int32_t x291 = 622521900;
uint64_t x296 = 46079118865LLU;
int16_t x307 = INT16_MIN;
int64_t x312 = INT64_MAX;
static volatile int32_t t67 = 4741;
static int64_t x315 = INT64_MIN;
int8_t x322 = INT8_MAX;
static int32_t t71 = -12878147;
int16_t x330 = INT16_MIN;
int8_t x335 = -1;
uint64_t x337 = UINT64_MAX;
int32_t x339 = INT32_MIN;
int8_t x343 = INT8_MAX;
uint8_t x347 = UINT8_MAX;
int16_t x348 = 0;
static volatile int16_t x354 = INT16_MAX;
uint64_t x356 = 1LLU;
int64_t x359 = -151757477LL;
int64_t x360 = INT64_MAX;
static uint16_t x369 = 3724U;
uint8_t x376 = 98U;
uint64_t x381 = 555194576LLU;
int32_t x382 = INT32_MIN;
volatile uint8_t x385 = 19U;
uint32_t x387 = 46785U;
static uint32_t x388 = 24848037U;
int32_t x394 = INT32_MAX;
int64_t t86 = INT64_MIN;
uint32_t x397 = UINT32_MAX;
int8_t x400 = 1;
static volatile int32_t t88 = INT32_MIN;
int32_t x406 = INT32_MIN;
static int8_t x409 = INT8_MIN;
volatile int32_t t90 = 4;
uint64_t x423 = 3294598597LLU;
volatile int32_t t95 = -7841536;
volatile uint32_t x434 = 1065042920U;
volatile int8_t x435 = INT8_MIN;
static int16_t x436 = INT16_MIN;
volatile uint64_t x438 = 41804049623044LLU;
int32_t x442 = -1;
int32_t x445 = -13;


void f0(void) {
	static int8_t x1 = INT8_MAX;
	int8_t x2 = 1;
	static int32_t x3 = INT32_MAX;
	uint64_t x4 = 28888LLU;

	t0 = (x1-(x2==(x3+x4)));

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x6 = 115U;
	static uint32_t x7 = 194167U;
	int16_t x8 = INT16_MAX;
	volatile uint64_t t1 = 1812675LLU;

	t1 = (x5-(x6==(x7+x8)));

	if (t1 != 579791788407LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = INT8_MIN;
	volatile int32_t x11 = -1;
	uint64_t x12 = 234365055346LLU;
	static int32_t t2 = -3943667;

	t2 = (x9-(x10==(x11+x12)));

	if (t2 != -57553905) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x13 = UINT32_MAX;
	int32_t x14 = -1;
	uint64_t x15 = UINT64_MAX;
	int64_t x16 = 781330055LL;
	uint32_t t3 = UINT32_MAX;

	t3 = (x13-(x14==(x15+x16)));

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	uint16_t x19 = 31632U;
	static int16_t x20 = -3;
	int64_t t4 = INT64_MIN;

	t4 = (x17-(x18==(x19+x20)));

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x23 = UINT32_MAX;
	int16_t x24 = INT16_MAX;
	static int32_t t5 = -19;

	t5 = (x21-(x22==(x23+x24)));

	if (t5 != 29) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x26 = -1LL;
	volatile int16_t x27 = INT16_MIN;
	uint64_t t6 = 6360LLU;

	t6 = (x25-(x26==(x27+x28)));

	if (t6 != 13837459249187087LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = -1;
	uint16_t x31 = 88U;
	int64_t x32 = -1LL;
	int64_t t7 = INT64_MAX;

	t7 = (x29-(x30==(x31+x32)));

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	int8_t x34 = -1;
	int64_t x36 = INT64_MIN;

	t8 = (x33-(x34==(x35+x36)));

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = 58690562;
	uint16_t x38 = 361U;
	static int16_t x39 = 531;
	static int64_t x40 = INT64_MIN;
	int32_t t9 = -7563820;

	t9 = (x37-(x38==(x39+x40)));

	if (t9 != 58690562) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 737U;
	volatile uint16_t x42 = 1U;
	int16_t x44 = -1;
	static uint32_t t10 = 93357U;

	t10 = (x41-(x42==(x43+x44)));

	if (t10 != 737U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x53 = -14;
	int16_t x55 = -878;
	static int64_t x56 = -1LL;
	int32_t t11 = 1;

	t11 = (x53-(x54==(x55+x56)));

	if (t11 != -14) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x57 = INT16_MIN;
	static uint32_t x60 = UINT32_MAX;

	t12 = (x57-(x58==(x59+x60)));

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x62 = 10U;
	int8_t x63 = INT8_MIN;
	int8_t x64 = INT8_MIN;
	volatile int32_t t13 = -227;

	t13 = (x61-(x62==(x63+x64)));

	if (t13 != 19) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x65 = 0U;
	int8_t x67 = INT8_MAX;
	uint8_t x68 = 9U;

	t14 = (x65-(x66==(x67+x68)));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = INT8_MIN;
	static int64_t x70 = -51766394051LL;
	int32_t x71 = INT32_MIN;
	uint64_t x72 = 47406037LLU;
	int32_t t15 = 44902973;

	t15 = (x69-(x70==(x71+x72)));

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = INT8_MAX;
	uint8_t x74 = UINT8_MAX;
	int16_t x75 = INT16_MIN;
	int32_t x76 = -1;
	int32_t t16 = 133188996;

	t16 = (x73-(x74==(x75+x76)));

	if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint16_t x82 = 1U;
	int64_t x83 = INT64_MIN;
	static uint16_t x84 = UINT16_MAX;
	int64_t t17 = -4582537LL;

	t17 = (x81-(x82==(x83+x84)));

	if (t17 != -4603628113595LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x86 = 2194777146LLU;
	static int64_t x87 = -1LL;
	int16_t x88 = -1;
	volatile int64_t t18 = 1LL;

	t18 = (x85-(x86==(x87+x88)));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x89 = INT32_MIN;
	int16_t x91 = INT16_MIN;
	int8_t x92 = INT8_MAX;
	volatile int32_t t19 = INT32_MIN;

	t19 = (x89-(x90==(x91+x92)));

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x93 = 12LLU;
	int64_t x95 = -240098830909LL;
	volatile uint64_t t20 = 20351025506849LLU;

	t20 = (x93-(x94==(x95+x96)));

	if (t20 != 12LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x97 = 0LLU;
	uint8_t x99 = 2U;
	static volatile uint64_t t21 = 109LLU;

	t21 = (x97-(x98==(x99+x100)));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x105 = INT16_MIN;
	static volatile int8_t x106 = INT8_MAX;
	volatile int16_t x107 = -1;
	volatile int32_t x108 = -32849;
	volatile int32_t t22 = -17771;

	t22 = (x105-(x106==(x107+x108)));

	if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x109 = 2U;
	int8_t x110 = INT8_MIN;
	static int16_t x111 = -1;
	int64_t x112 = INT64_MAX;
	int32_t t23 = 1466;

	t23 = (x109-(x110==(x111+x112)));

	if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x113 = INT16_MIN;
	uint16_t x114 = UINT16_MAX;
	int32_t x115 = 113;
	volatile int32_t t24 = 254131355;

	t24 = (x113-(x114==(x115+x116)));

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x117 = INT64_MIN;
	static int8_t x118 = INT8_MIN;
	int64_t x119 = INT64_MIN;
	static uint64_t x120 = 858156LLU;

	t25 = (x117-(x118==(x119+x120)));

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x122 = 858187194455LLU;
	volatile int64_t x123 = INT64_MAX;
	int16_t x124 = -1;
	uint64_t t26 = UINT64_MAX;

	t26 = (x121-(x122==(x123+x124)));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x125 = 5U;
	volatile int32_t x128 = -1;
	static volatile int32_t t27 = 7065194;

	t27 = (x125-(x126==(x127+x128)));

	if (t27 != 5) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x129 = 0U;
	static uint64_t x130 = 1123LLU;
	int8_t x131 = 8;
	volatile int32_t t28 = -52155445;

	t28 = (x129-(x130==(x131+x132)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x133 = INT64_MIN;
	volatile uint8_t x134 = 47U;
	int8_t x135 = 1;
	static uint16_t x136 = 5U;

	t29 = (x133-(x134==(x135+x136)));

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x137 = INT32_MAX;
	uint8_t x138 = 3U;
	int16_t x139 = -1;
	uint32_t x140 = 75172047U;
	static int32_t t30 = INT32_MAX;

	t30 = (x137-(x138==(x139+x140)));

	if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x141 = INT16_MIN;
	volatile int8_t x143 = -19;
	int16_t x144 = -508;

	t31 = (x141-(x142==(x143+x144)));

	if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x145 = 259;
	int64_t x146 = -1LL;
	volatile uint8_t x147 = 16U;

	t32 = (x145-(x146==(x147+x148)));

	if (t32 != 259) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x149 = INT32_MAX;
	static int16_t x150 = 194;
	int32_t x151 = INT32_MAX;
	static uint32_t x152 = 584804092U;
	static volatile int32_t t33 = INT32_MAX;

	t33 = (x149-(x150==(x151+x152)));

	if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x153 = 7619492114695817268LLU;
	uint32_t x154 = 6617661U;
	uint8_t x156 = 34U;
	volatile uint64_t t34 = 103998099996LLU;

	t34 = (x153-(x154==(x155+x156)));

	if (t34 != 7619492114695817268LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x157 = -1;
	volatile int16_t x158 = -1;
	int32_t x159 = -1;
	uint8_t x160 = 60U;
	volatile int32_t t35 = -6442;

	t35 = (x157-(x158==(x159+x160)));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x161 = INT8_MIN;
	volatile uint16_t x162 = 4U;
	uint64_t x163 = 2520531117564222410LLU;
	int32_t x164 = -5987;
	int32_t t36 = 40874503;

	t36 = (x161-(x162==(x163+x164)));

	if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x165 = INT8_MAX;
	int32_t x167 = 4115;
	volatile int32_t t37 = -1064939;

	t37 = (x165-(x166==(x167+x168)));

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = INT16_MIN;
	static int16_t x170 = INT16_MAX;
	uint64_t x171 = UINT64_MAX;
	static int8_t x172 = -9;
	volatile int32_t t38 = 2614660;

	t38 = (x169-(x170==(x171+x172)));

	if (t38 != -32768) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x173 = UINT8_MAX;
	uint64_t x174 = 1356365287064443305LLU;
	volatile int8_t x175 = -1;
	int16_t x176 = INT16_MAX;
	static volatile int32_t t39 = 3161;

	t39 = (x173-(x174==(x175+x176)));

	if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x185 = INT16_MIN;
	int16_t x186 = 3;
	static int8_t x187 = 7;
	static uint32_t x188 = 3201022U;
	volatile int32_t t40 = 23324708;

	t40 = (x185-(x186==(x187+x188)));

	if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x189 = INT16_MAX;
	int16_t x190 = INT16_MIN;
	volatile int64_t x191 = -34186016LL;
	static int32_t x192 = -1;
	static volatile int32_t t41 = 43405523;

	t41 = (x189-(x190==(x191+x192)));

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x193 = INT16_MIN;
	int32_t x194 = 2276569;
	int16_t x196 = INT16_MAX;
	int32_t t42 = 72194;

	t42 = (x193-(x194==(x195+x196)));

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x197 = UINT32_MAX;
	uint64_t x198 = 204869399200LLU;
	int64_t x200 = -407LL;
	uint32_t t43 = UINT32_MAX;

	t43 = (x197-(x198==(x199+x200)));

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x201 = 12U;
	uint16_t x202 = 118U;
	uint32_t x203 = UINT32_MAX;
	static int64_t x204 = -1LL;
	volatile int32_t t44 = 2316347;

	t44 = (x201-(x202==(x203+x204)));

	if (t44 != 12) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x205 = -5;
	int16_t x206 = INT16_MAX;
	static int64_t x207 = -10270682598LL;
	volatile int32_t t45 = 97;

	t45 = (x205-(x206==(x207+x208)));

	if (t45 != -5) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x209 = 0;
	volatile int32_t t46 = 3290315;

	t46 = (x209-(x210==(x211+x212)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x217 = INT64_MAX;
	static int64_t x218 = INT64_MIN;
	static uint32_t x220 = 9069157U;

	t47 = (x217-(x218==(x219+x220)));

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x225 = UINT64_MAX;
	static uint8_t x226 = UINT8_MAX;
	volatile int8_t x227 = INT8_MIN;
	int16_t x228 = -1;
	static uint64_t t48 = UINT64_MAX;

	t48 = (x225-(x226==(x227+x228)));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x233 = INT64_MAX;
	int32_t x235 = 1;
	uint64_t x236 = UINT64_MAX;
	volatile int64_t t49 = INT64_MAX;

	t49 = (x233-(x234==(x235+x236)));

	if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x237 = 39288042541939LLU;
	static uint16_t x238 = UINT16_MAX;
	volatile uint64_t t50 = 201299LLU;

	t50 = (x237-(x238==(x239+x240)));

	if (t50 != 39288042541939LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x242 = INT32_MIN;
	int64_t x243 = -1448LL;
	int8_t x244 = -5;
	uint32_t t51 = 197740052U;

	t51 = (x241-(x242==(x243+x244)));

	if (t51 != 579U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x245 = INT32_MAX;
	volatile uint8_t x246 = UINT8_MAX;
	volatile uint32_t x247 = 169613U;
	int8_t x248 = INT8_MAX;
	int32_t t52 = INT32_MAX;

	t52 = (x245-(x246==(x247+x248)));

	if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x253 = INT32_MAX;
	uint32_t x254 = 98U;
	int64_t x255 = -113725400044LL;
	int16_t x256 = INT16_MIN;
	volatile int32_t t53 = INT32_MAX;

	t53 = (x253-(x254==(x255+x256)));

	if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x257 = UINT8_MAX;
	int8_t x258 = INT8_MAX;
	uint64_t x259 = 1648732LLU;
	int16_t x260 = INT16_MIN;
	int32_t t54 = 426903746;

	t54 = (x257-(x258==(x259+x260)));

	if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x261 = -31;
	volatile int8_t x262 = INT8_MAX;
	uint64_t x263 = UINT64_MAX;
	volatile int32_t t55 = 2592461;

	t55 = (x261-(x262==(x263+x264)));

	if (t55 != -31) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x265 = 508U;
	static int64_t x266 = INT64_MIN;
	int32_t x267 = INT32_MAX;
	volatile int32_t t56 = -2;

	t56 = (x265-(x266==(x267+x268)));

	if (t56 != 508) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x269 = UINT64_MAX;
	int32_t x270 = -1;
	volatile int16_t x271 = INT16_MAX;
	int32_t x272 = INT32_MIN;
	uint64_t t57 = UINT64_MAX;

	t57 = (x269-(x270==(x271+x272)));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x273 = -25;
	int16_t x275 = 10;
	int32_t x276 = INT32_MIN;

	t58 = (x273-(x274==(x275+x276)));

	if (t58 != -25) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x277 = INT64_MIN;
	static uint16_t x278 = UINT16_MAX;
	int8_t x279 = 0;
	int32_t x280 = INT32_MAX;

	t59 = (x277-(x278==(x279+x280)));

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x281 = UINT8_MAX;
	uint64_t x282 = 3005501502020712893LLU;
	uint16_t x283 = 1U;
	int8_t x284 = INT8_MIN;
	int32_t t60 = 7949;

	t60 = (x281-(x282==(x283+x284)));

	if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x285 = -10893;
	volatile int16_t x286 = INT16_MAX;
	volatile int64_t x287 = INT64_MAX;
	volatile uint64_t x288 = 4537761148998LLU;
	static volatile int32_t t61 = 0;

	t61 = (x285-(x286==(x287+x288)));

	if (t61 != -10893) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x290 = 1U;
	static int16_t x292 = 15485;
	static volatile uint32_t t62 = UINT32_MAX;

	t62 = (x289-(x290==(x291+x292)));

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x293 = -3;
	volatile int8_t x294 = INT8_MAX;
	int32_t x295 = -962843;
	int32_t t63 = -1048053;

	t63 = (x293-(x294==(x295+x296)));

	if (t63 != -3) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x297 = -1LL;
	volatile int8_t x298 = -1;
	int8_t x299 = INT8_MAX;
	static int8_t x300 = INT8_MIN;
	int64_t t64 = -82805792LL;

	t64 = (x297-(x298==(x299+x300)));

	if (t64 != -2LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x301 = INT64_MIN;
	int16_t x302 = -1;
	int32_t x303 = -1;
	uint64_t x304 = 19175072699LLU;
	int64_t t65 = INT64_MIN;

	t65 = (x301-(x302==(x303+x304)));

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x305 = INT8_MAX;
	volatile uint32_t x306 = UINT32_MAX;
	volatile uint8_t x308 = 7U;
	volatile int32_t t66 = -3975308;

	t66 = (x305-(x306==(x307+x308)));

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x309 = INT8_MIN;
	uint64_t x310 = 15424449308310LLU;
	int64_t x311 = INT64_MIN;

	t67 = (x309-(x310==(x311+x312)));

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x313 = -163696404687LL;
	static volatile int32_t x314 = 0;
	uint32_t x316 = 49U;
	volatile int64_t t68 = -6595LL;

	t68 = (x313-(x314==(x315+x316)));

	if (t68 != -163696404687LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x317 = 65;
	int64_t x318 = INT64_MAX;
	int8_t x319 = INT8_MIN;
	uint32_t x320 = UINT32_MAX;
	volatile int32_t t69 = 1;

	t69 = (x317-(x318==(x319+x320)));

	if (t69 != 65) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x321 = UINT16_MAX;
	int16_t x323 = 1;
	uint8_t x324 = UINT8_MAX;
	volatile int32_t t70 = 0;

	t70 = (x321-(x322==(x323+x324)));

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x325 = -19;
	static int8_t x326 = INT8_MIN;
	int64_t x327 = -40259969LL;
	int16_t x328 = -1;

	t71 = (x325-(x326==(x327+x328)));

	if (t71 != -19) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x329 = INT16_MIN;
	static int8_t x331 = -1;
	static volatile uint32_t x332 = 6U;
	int32_t t72 = -7;

	t72 = (x329-(x330==(x331+x332)));

	if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x333 = -6829941319808LL;
	uint16_t x334 = 503U;
	volatile uint32_t x336 = 27954U;
	int64_t t73 = -1880150LL;

	t73 = (x333-(x334==(x335+x336)));

	if (t73 != -6829941319808LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x338 = 2141651790875LLU;
	uint32_t x340 = 44801409U;
	uint64_t t74 = UINT64_MAX;

	t74 = (x337-(x338==(x339+x340)));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x341 = 31;
	volatile int16_t x342 = -1;
	int16_t x344 = -172;
	static int32_t t75 = -4;

	t75 = (x341-(x342==(x343+x344)));

	if (t75 != 31) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x345 = 4U;
	static int32_t x346 = INT32_MAX;
	int32_t t76 = 292173;

	t76 = (x345-(x346==(x347+x348)));

	if (t76 != 4) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x353 = INT64_MAX;
	uint8_t x355 = 21U;
	volatile int64_t t77 = INT64_MAX;

	t77 = (x353-(x354==(x355+x356)));

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x357 = 4U;
	int32_t x358 = INT32_MAX;
	volatile uint32_t t78 = 1912250351U;

	t78 = (x357-(x358==(x359+x360)));

	if (t78 != 4U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x361 = INT64_MIN;
	uint64_t x362 = 489818LLU;
	volatile uint32_t x363 = 1U;
	uint8_t x364 = 78U;
	int64_t t79 = INT64_MIN;

	t79 = (x361-(x362==(x363+x364)));

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x370 = 2U;
	uint16_t x371 = 0U;
	static int8_t x372 = INT8_MIN;
	volatile int32_t t80 = 1509792;

	t80 = (x369-(x370==(x371+x372)));

	if (t80 != 3724) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x373 = 158U;
	uint8_t x374 = 5U;
	volatile int32_t x375 = -21;
	volatile uint32_t t81 = 241320754U;

	t81 = (x373-(x374==(x375+x376)));

	if (t81 != 158U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x377 = INT16_MIN;
	uint16_t x378 = 15613U;
	int64_t x379 = 14135782LL;
	int64_t x380 = 28756604920LL;
	int32_t t82 = 26639;

	t82 = (x377-(x378==(x379+x380)));

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x383 = 5686U;
	int16_t x384 = INT16_MIN;
	volatile uint64_t t83 = 24856359497LLU;

	t83 = (x381-(x382==(x383+x384)));

	if (t83 != 555194576LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x386 = 361898274U;
	static int32_t t84 = 69329293;

	t84 = (x385-(x386==(x387+x388)));

	if (t84 != 19) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x389 = -1;
	volatile int8_t x390 = INT8_MIN;
	volatile uint8_t x391 = 0U;
	static uint16_t x392 = 254U;
	static int32_t t85 = -20102;

	t85 = (x389-(x390==(x391+x392)));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x393 = INT64_MIN;
	volatile int16_t x395 = INT16_MIN;
	static volatile int8_t x396 = 24;

	t86 = (x393-(x394==(x395+x396)));

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x398 = INT8_MAX;
	int8_t x399 = -1;
	volatile uint32_t t87 = UINT32_MAX;

	t87 = (x397-(x398==(x399+x400)));

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x401 = INT32_MIN;
	static int8_t x402 = -1;
	volatile uint16_t x403 = UINT16_MAX;
	int16_t x404 = INT16_MIN;

	t88 = (x401-(x402==(x403+x404)));

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x405 = UINT8_MAX;
	volatile int8_t x407 = -1;
	int64_t x408 = INT64_MAX;
	int32_t t89 = 4;

	t89 = (x405-(x406==(x407+x408)));

	if (t89 != 255) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x410 = -1;
	volatile int64_t x411 = 1LL;
	int16_t x412 = INT16_MIN;

	t90 = (x409-(x410==(x411+x412)));

	if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x413 = INT16_MIN;
	volatile int16_t x414 = INT16_MIN;
	uint32_t x415 = UINT32_MAX;
	volatile int32_t x416 = INT32_MAX;
	volatile int32_t t91 = 479622550;

	t91 = (x413-(x414==(x415+x416)));

	if (t91 != -32768) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x417 = INT64_MAX;
	static int8_t x418 = -3;
	int16_t x419 = -1;
	static volatile int64_t x420 = 296903LL;
	volatile int64_t t92 = INT64_MAX;

	t92 = (x417-(x418==(x419+x420)));

	if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x421 = -1;
	uint32_t x422 = 5073U;
	int8_t x424 = 29;
	int32_t t93 = 484;

	t93 = (x421-(x422==(x423+x424)));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x425 = -1;
	static uint8_t x426 = UINT8_MAX;
	int32_t x427 = INT32_MAX;
	uint64_t x428 = 790116454LLU;
	int32_t t94 = 1;

	t94 = (x425-(x426==(x427+x428)));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x429 = 1U;
	uint64_t x430 = 1574403LLU;
	uint32_t x431 = 3710377U;
	volatile int32_t x432 = 10123;

	t95 = (x429-(x430==(x431+x432)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x433 = -7;
	int32_t t96 = -1;

	t96 = (x433-(x434==(x435+x436)));

	if (t96 != -7) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x437 = INT32_MIN;
	int8_t x439 = INT8_MAX;
	int16_t x440 = -1;
	static int32_t t97 = INT32_MIN;

	t97 = (x437-(x438==(x439+x440)));

	if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x441 = -1;
	volatile int16_t x443 = INT16_MIN;
	int32_t x444 = 4773;
	int32_t t98 = -29008;

	t98 = (x441-(x442==(x443+x444)));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x446 = INT32_MAX;
	int8_t x447 = -1;
	static uint64_t x448 = 195710116LLU;
	volatile int32_t t99 = 14;

	t99 = (x445-(x446==(x447+x448)));

	if (t99 != -13) { NG(); } else { ; }
	
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

