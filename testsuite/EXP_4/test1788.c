#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x21 = 43323200;
int8_t x22 = INT8_MIN;
static uint8_t x23 = 20U;
volatile int32_t t2 = -20;
int16_t x34 = INT16_MIN;
int32_t t3 = 1211;
uint64_t x37 = 410073310832261LLU;
static int32_t t6 = 2;
uint16_t x73 = 8563U;
int32_t t9 = -13;
volatile uint8_t x91 = 58U;
uint8_t x92 = UINT8_MAX;
static volatile int64_t x99 = INT64_MIN;
volatile int64_t x100 = INT64_MAX;
volatile uint16_t x106 = UINT16_MAX;
int8_t x108 = INT8_MIN;
int8_t x128 = -27;
static uint16_t x131 = UINT16_MAX;
int16_t x132 = 1035;
int8_t x140 = INT8_MIN;
uint64_t x149 = 6499121959752LLU;
volatile int64_t x154 = 1LL;
int8_t x156 = 0;
int8_t x159 = INT8_MIN;
int8_t x164 = 1;
static volatile uint8_t x172 = UINT8_MAX;
int8_t x184 = INT8_MIN;
int16_t x189 = 372;
volatile uint64_t x201 = 752198656126697LLU;
uint64_t x207 = 94177899LLU;
uint8_t x212 = 11U;
static uint16_t x221 = 4U;
static int64_t x223 = INT64_MIN;
volatile int8_t x230 = 0;
int32_t x236 = INT32_MIN;
int32_t x237 = 0;
volatile int32_t x243 = -1;
static int8_t x247 = INT8_MIN;
volatile int32_t t38 = 1012918435;
static volatile uint8_t x257 = 7U;
int64_t x260 = INT64_MAX;
static int32_t t40 = 491139;
int32_t x263 = -1;
int64_t x275 = -1LL;
volatile uint64_t t43 = 66579819421LLU;
volatile int32_t t44 = -363274;
uint16_t x285 = 154U;
int64_t x289 = INT64_MAX;
int32_t x292 = 14070614;
int64_t t47 = INT64_MAX;
int16_t x299 = INT16_MIN;
int32_t x320 = -1;
int64_t x326 = INT64_MIN;
uint32_t x337 = 783U;
volatile uint32_t t54 = 3U;
int8_t x379 = INT8_MIN;
volatile uint32_t t57 = 23460399U;
static int32_t t58 = -222040;
static uint64_t x385 = 789443944347062LLU;
uint32_t x401 = UINT32_MAX;
uint32_t x405 = UINT32_MAX;
uint32_t x406 = 3182288U;
volatile int8_t x407 = INT8_MIN;
int64_t x418 = INT64_MIN;
uint16_t x420 = 22U;
uint64_t x421 = UINT64_MAX;
static uint64_t x422 = 2555022704364LLU;
volatile uint32_t x430 = 2048403004U;
uint64_t x433 = UINT64_MAX;
volatile int16_t x435 = INT16_MIN;
static int8_t x439 = INT8_MAX;
int32_t x466 = -41115;
static volatile int64_t x467 = INT64_MIN;
int32_t x470 = INT32_MAX;
static int8_t x473 = 12;
static volatile int64_t x504 = INT64_MIN;
static volatile int16_t x515 = -1;
static int16_t x530 = -3481;
int16_t x533 = 0;
int8_t x544 = INT8_MIN;
int32_t t82 = 195514966;
uint64_t x564 = 666571948344851LLU;
uint16_t x605 = UINT16_MAX;
uint64_t x640 = 50924LLU;
uint8_t x642 = UINT8_MAX;
uint32_t x654 = 92199U;
volatile uint32_t x657 = 1543040154U;


void f0(void) {
	volatile uint64_t x1 = 2850605LLU;
	int8_t x2 = INT8_MIN;
	int16_t x3 = 1;
	static int16_t x4 = -1;
	uint64_t t0 = 21495550804LLU;

	t0 = (x1>>(x2==(x3&x4)));

	if (t0 != 2850605LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x13 = INT16_MAX;
	int8_t x14 = -1;
	int8_t x15 = 3;
	int16_t x16 = INT16_MIN;
	volatile int32_t t1 = 994773799;

	t1 = (x13>>(x14==(x15&x16)));

	if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x24 = UINT64_MAX;

	t2 = (x21>>(x22==(x23&x24)));

	if (t2 != 43323200) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x33 = 30396U;
	static int64_t x35 = INT64_MIN;
	static volatile int8_t x36 = -9;

	t3 = (x33>>(x34==(x35&x36)));

	if (t3 != 30396) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x38 = INT16_MIN;
	int64_t x39 = INT64_MIN;
	int64_t x40 = INT64_MIN;
	uint64_t t4 = 1688612100LLU;

	t4 = (x37>>(x38==(x39&x40)));

	if (t4 != 410073310832261LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x41 = 3U;
	volatile uint16_t x42 = 0U;
	uint64_t x43 = 3914529LLU;
	uint64_t x44 = 24LLU;
	volatile int32_t t5 = 2353794;

	t5 = (x41>>(x42==(x43&x44)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x45 = 14;
	int8_t x46 = INT8_MIN;
	static volatile uint16_t x47 = 66U;
	volatile int16_t x48 = -1;

	t6 = (x45>>(x46==(x47&x48)));

	if (t6 != 14) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x57 = 9361763LLU;
	int32_t x58 = 64720863;
	int16_t x59 = -1;
	int64_t x60 = INT64_MAX;
	static uint64_t t7 = 23258655599878LLU;

	t7 = (x57>>(x58==(x59&x60)));

	if (t7 != 9361763LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x61 = 1U;
	int32_t x62 = INT32_MAX;
	uint16_t x63 = 2035U;
	int64_t x64 = -1LL;
	volatile uint32_t t8 = 295U;

	t8 = (x61>>(x62==(x63&x64)));

	if (t8 != 1U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x74 = 595LLU;
	int32_t x75 = INT32_MIN;
	int64_t x76 = INT64_MAX;

	t9 = (x73>>(x74==(x75&x76)));

	if (t9 != 8563) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x85 = 859299U;
	int64_t x86 = INT64_MAX;
	uint32_t x87 = 141898281U;
	uint16_t x88 = 59U;
	volatile uint32_t t10 = 55U;

	t10 = (x85>>(x86==(x87&x88)));

	if (t10 != 859299U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x89 = 15U;
	static int16_t x90 = INT16_MAX;
	volatile uint32_t t11 = 51608U;

	t11 = (x89>>(x90==(x91&x92)));

	if (t11 != 15U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x93 = INT8_MAX;
	static volatile int64_t x94 = INT64_MAX;
	int8_t x95 = 7;
	int16_t x96 = -903;
	int32_t t12 = -667694;

	t12 = (x93>>(x94==(x95&x96)));

	if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x97 = UINT8_MAX;
	int64_t x98 = -2967LL;
	int32_t t13 = -30;

	t13 = (x97>>(x98==(x99&x100)));

	if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x105 = 12878310834315892LLU;
	volatile int64_t x107 = -3609352572LL;
	volatile uint64_t t14 = 5817831097223355LLU;

	t14 = (x105>>(x106==(x107&x108)));

	if (t14 != 12878310834315892LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x113 = 122709U;
	int32_t x114 = INT32_MAX;
	int64_t x115 = -1LL;
	int8_t x116 = -37;
	volatile uint32_t t15 = 1109617U;

	t15 = (x113>>(x114==(x115&x116)));

	if (t15 != 122709U) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x117 = 136021828U;
	static volatile int64_t x118 = -1LL;
	int32_t x119 = INT32_MIN;
	static int32_t x120 = INT32_MAX;
	uint32_t t16 = 392U;

	t16 = (x117>>(x118==(x119&x120)));

	if (t16 != 136021828U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x125 = INT8_MAX;
	uint8_t x126 = UINT8_MAX;
	volatile int64_t x127 = INT64_MIN;
	static int32_t t17 = 80962090;

	t17 = (x125>>(x126==(x127&x128)));

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x129 = UINT64_MAX;
	int16_t x130 = -3;
	volatile uint64_t t18 = UINT64_MAX;

	t18 = (x129>>(x130==(x131&x132)));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x137 = UINT32_MAX;
	int8_t x138 = -1;
	int16_t x139 = -1;
	volatile uint32_t t19 = UINT32_MAX;

	t19 = (x137>>(x138==(x139&x140)));

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x150 = -1;
	volatile int16_t x151 = INT16_MAX;
	uint64_t x152 = 91LLU;
	volatile uint64_t t20 = 12447953135014353LLU;

	t20 = (x149>>(x150==(x151&x152)));

	if (t20 != 6499121959752LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x153 = 3U;
	static uint8_t x155 = UINT8_MAX;
	volatile int32_t t21 = -56232337;

	t21 = (x153>>(x154==(x155&x156)));

	if (t21 != 3) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x157 = 17;
	int64_t x158 = 56098421625205037LL;
	int32_t x160 = INT32_MIN;
	static int32_t t22 = 1122150;

	t22 = (x157>>(x158==(x159&x160)));

	if (t22 != 17) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x161 = UINT64_MAX;
	int64_t x162 = 7282164LL;
	int8_t x163 = 10;
	volatile uint64_t t23 = UINT64_MAX;

	t23 = (x161>>(x162==(x163&x164)));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x169 = UINT64_MAX;
	volatile int32_t x170 = 0;
	int32_t x171 = -147147;
	uint64_t t24 = UINT64_MAX;

	t24 = (x169>>(x170==(x171&x172)));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x177 = INT16_MAX;
	volatile uint64_t x178 = 7172556052432178364LLU;
	static int64_t x179 = -1LL;
	int16_t x180 = 5990;
	volatile int32_t t25 = -937;

	t25 = (x177>>(x178==(x179&x180)));

	if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x181 = 80037257203874LLU;
	int8_t x182 = INT8_MAX;
	uint8_t x183 = 91U;
	volatile uint64_t t26 = 55213373527LLU;

	t26 = (x181>>(x182==(x183&x184)));

	if (t26 != 80037257203874LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x190 = 1U;
	static uint32_t x191 = 1U;
	uint64_t x192 = 658336789316990618LLU;
	volatile int32_t t27 = 25848745;

	t27 = (x189>>(x190==(x191&x192)));

	if (t27 != 372) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x197 = 3U;
	uint64_t x198 = 11941559LLU;
	int32_t x199 = -67827859;
	static uint8_t x200 = 73U;
	volatile int32_t t28 = 199834817;

	t28 = (x197>>(x198==(x199&x200)));

	if (t28 != 3) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x202 = INT64_MAX;
	static uint16_t x203 = UINT16_MAX;
	int32_t x204 = -1;
	volatile uint64_t t29 = 87629196426LLU;

	t29 = (x201>>(x202==(x203&x204)));

	if (t29 != 752198656126697LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x205 = 679U;
	static int8_t x206 = -1;
	int8_t x208 = 3;
	int32_t t30 = 7939710;

	t30 = (x205>>(x206==(x207&x208)));

	if (t30 != 679) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x209 = 920;
	int32_t x210 = INT32_MIN;
	volatile uint8_t x211 = 0U;
	volatile int32_t t31 = -320556441;

	t31 = (x209>>(x210==(x211&x212)));

	if (t31 != 920) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x222 = -1;
	uint32_t x224 = UINT32_MAX;
	volatile int32_t t32 = 2;

	t32 = (x221>>(x222==(x223&x224)));

	if (t32 != 4) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x225 = 28;
	uint32_t x226 = UINT32_MAX;
	uint64_t x227 = 883LLU;
	uint16_t x228 = 16U;
	volatile int32_t t33 = -66461625;

	t33 = (x225>>(x226==(x227&x228)));

	if (t33 != 28) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x229 = 1578U;
	int32_t x231 = INT32_MAX;
	static int32_t x232 = INT32_MIN;
	uint32_t t34 = 1221U;

	t34 = (x229>>(x230==(x231&x232)));

	if (t34 != 789U) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint16_t x233 = 31547U;
	int64_t x234 = -1LL;
	int32_t x235 = -1;
	volatile int32_t t35 = -2;

	t35 = (x233>>(x234==(x235&x236)));

	if (t35 != 31547) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x238 = INT32_MIN;
	int64_t x239 = INT64_MAX;
	static uint8_t x240 = UINT8_MAX;
	volatile int32_t t36 = 255;

	t36 = (x237>>(x238==(x239&x240)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x241 = INT64_MAX;
	uint64_t x242 = 58201231LLU;
	uint64_t x244 = 2569651692101862LLU;
	int64_t t37 = INT64_MAX;

	t37 = (x241>>(x242==(x243&x244)));

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x245 = 7703U;
	int8_t x246 = INT8_MAX;
	int64_t x248 = -1LL;

	t38 = (x245>>(x246==(x247&x248)));

	if (t38 != 7703) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x253 = 6326;
	static int64_t x254 = 303165141LL;
	volatile uint32_t x255 = 7329U;
	int8_t x256 = INT8_MIN;
	volatile int32_t t39 = -157;

	t39 = (x253>>(x254==(x255&x256)));

	if (t39 != 6326) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x258 = 100723230U;
	int16_t x259 = INT16_MIN;

	t40 = (x257>>(x258==(x259&x260)));

	if (t40 != 7) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x261 = UINT16_MAX;
	uint64_t x262 = 19926913564429LLU;
	uint64_t x264 = 2927211668072019347LLU;
	volatile int32_t t41 = 176721;

	t41 = (x261>>(x262==(x263&x264)));

	if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x265 = 45U;
	uint64_t x266 = UINT64_MAX;
	uint16_t x267 = 873U;
	int64_t x268 = -1LL;
	int32_t t42 = -68;

	t42 = (x265>>(x266==(x267&x268)));

	if (t42 != 45) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x273 = 418479963746596LLU;
	volatile int64_t x274 = INT64_MIN;
	int16_t x276 = INT16_MIN;

	t43 = (x273>>(x274==(x275&x276)));

	if (t43 != 418479963746596LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x277 = 26760U;
	static volatile int16_t x278 = INT16_MIN;
	int16_t x279 = INT16_MAX;
	int32_t x280 = INT32_MIN;

	t44 = (x277>>(x278==(x279&x280)));

	if (t44 != 26760) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x281 = 0U;
	static int8_t x282 = INT8_MAX;
	int8_t x283 = INT8_MAX;
	static int8_t x284 = INT8_MAX;
	int32_t t45 = 32406878;

	t45 = (x281>>(x282==(x283&x284)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x286 = 32339U;
	static int8_t x287 = INT8_MIN;
	static int64_t x288 = INT64_MIN;
	volatile int32_t t46 = -114888;

	t46 = (x285>>(x286==(x287&x288)));

	if (t46 != 154) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x290 = INT32_MIN;
	int8_t x291 = -1;

	t47 = (x289>>(x290==(x291&x292)));

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x297 = INT32_MAX;
	int16_t x298 = INT16_MIN;
	volatile int16_t x300 = INT16_MIN;
	int32_t t48 = 304019;

	t48 = (x297>>(x298==(x299&x300)));

	if (t48 != 1073741823) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x317 = INT8_MAX;
	volatile int32_t x318 = INT32_MIN;
	int64_t x319 = INT64_MIN;
	int32_t t49 = 16;

	t49 = (x317>>(x318==(x319&x320)));

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x325 = UINT16_MAX;
	static int64_t x327 = -1LL;
	int16_t x328 = INT16_MAX;
	volatile int32_t t50 = 40166;

	t50 = (x325>>(x326==(x327&x328)));

	if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x338 = 1;
	uint64_t x339 = UINT64_MAX;
	static int16_t x340 = 1;
	static uint32_t t51 = 95253926U;

	t51 = (x337>>(x338==(x339&x340)));

	if (t51 != 391U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x341 = INT16_MAX;
	int16_t x342 = -1;
	volatile int64_t x343 = -1LL;
	int32_t x344 = 2708261;
	int32_t t52 = -122262201;

	t52 = (x341>>(x342==(x343&x344)));

	if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x345 = 2272785LL;
	int8_t x346 = -1;
	static uint64_t x347 = 4425572908489823744LLU;
	volatile int32_t x348 = INT32_MIN;
	static int64_t t53 = -2805681033756535617LL;

	t53 = (x345>>(x346==(x347&x348)));

	if (t53 != 2272785LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x361 = 57395344U;
	volatile uint8_t x362 = UINT8_MAX;
	volatile int64_t x363 = -21099945793604994LL;
	int32_t x364 = -4;

	t54 = (x361>>(x362==(x363&x364)));

	if (t54 != 57395344U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x365 = UINT8_MAX;
	uint32_t x366 = UINT32_MAX;
	volatile int32_t x367 = INT32_MIN;
	static int32_t x368 = INT32_MIN;
	int32_t t55 = 0;

	t55 = (x365>>(x366==(x367&x368)));

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x373 = INT32_MAX;
	uint16_t x374 = 1834U;
	volatile int8_t x375 = -1;
	static volatile int64_t x376 = INT64_MIN;
	int32_t t56 = INT32_MAX;

	t56 = (x373>>(x374==(x375&x376)));

	if (t56 != INT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint32_t x377 = 304960U;
	int8_t x378 = 0;
	int16_t x380 = INT16_MIN;

	t57 = (x377>>(x378==(x379&x380)));

	if (t57 != 304960U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x381 = 1U;
	uint32_t x382 = 51485U;
	static volatile int32_t x383 = 0;
	static uint8_t x384 = 3U;

	t58 = (x381>>(x382==(x383&x384)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x386 = -77927395887997917LL;
	int8_t x387 = -1;
	volatile int32_t x388 = INT32_MIN;
	uint64_t t59 = 2528520493484LLU;

	t59 = (x385>>(x386==(x387&x388)));

	if (t59 != 789443944347062LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x389 = UINT8_MAX;
	int8_t x390 = INT8_MIN;
	static uint8_t x391 = UINT8_MAX;
	int32_t x392 = -1;
	int32_t t60 = -3423;

	t60 = (x389>>(x390==(x391&x392)));

	if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x402 = INT64_MAX;
	int8_t x403 = INT8_MAX;
	int16_t x404 = 200;
	uint32_t t61 = UINT32_MAX;

	t61 = (x401>>(x402==(x403&x404)));

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x408 = INT8_MIN;
	volatile uint32_t t62 = UINT32_MAX;

	t62 = (x405>>(x406==(x407&x408)));

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x417 = INT64_MAX;
	volatile uint64_t x419 = UINT64_MAX;
	volatile int64_t t63 = INT64_MAX;

	t63 = (x417>>(x418==(x419&x420)));

	if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x423 = 5U;
	uint16_t x424 = 13U;
	static uint64_t t64 = UINT64_MAX;

	t64 = (x421>>(x422==(x423&x424)));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x429 = UINT8_MAX;
	int32_t x431 = -32134576;
	uint16_t x432 = 420U;
	int32_t t65 = 300;

	t65 = (x429>>(x430==(x431&x432)));

	if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x434 = INT16_MIN;
	static volatile uint8_t x436 = UINT8_MAX;
	uint64_t t66 = UINT64_MAX;

	t66 = (x433>>(x434==(x435&x436)));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x437 = 0;
	uint8_t x438 = 1U;
	static int8_t x440 = INT8_MIN;
	int32_t t67 = -6255952;

	t67 = (x437>>(x438==(x439&x440)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x441 = 9983817U;
	static volatile int32_t x442 = 0;
	uint16_t x443 = 6108U;
	static int8_t x444 = -1;
	static uint32_t t68 = 300U;

	t68 = (x441>>(x442==(x443&x444)));

	if (t68 != 9983817U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x449 = UINT32_MAX;
	static uint8_t x450 = 39U;
	int32_t x451 = -1;
	uint32_t x452 = UINT32_MAX;
	volatile uint32_t t69 = UINT32_MAX;

	t69 = (x449>>(x450==(x451&x452)));

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x453 = 105U;
	int16_t x454 = 7842;
	uint16_t x455 = UINT16_MAX;
	uint32_t x456 = 6758U;
	int32_t t70 = -15;

	t70 = (x453>>(x454==(x455&x456)));

	if (t70 != 105) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x457 = 106748;
	volatile int64_t x458 = -87816LL;
	static int32_t x459 = -1;
	uint8_t x460 = 12U;
	int32_t t71 = -56;

	t71 = (x457>>(x458==(x459&x460)));

	if (t71 != 106748) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x465 = 890698315212163LLU;
	static int8_t x468 = 52;
	volatile uint64_t t72 = 2LLU;

	t72 = (x465>>(x466==(x467&x468)));

	if (t72 != 890698315212163LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x469 = UINT16_MAX;
	uint8_t x471 = 1U;
	uint64_t x472 = 112102223999LLU;
	int32_t t73 = 54122253;

	t73 = (x469>>(x470==(x471&x472)));

	if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x474 = 244490524U;
	int16_t x475 = INT16_MAX;
	int32_t x476 = 101;
	volatile int32_t t74 = -890999;

	t74 = (x473>>(x474==(x475&x476)));

	if (t74 != 12) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x501 = UINT32_MAX;
	uint8_t x502 = 36U;
	volatile int16_t x503 = INT16_MIN;
	uint32_t t75 = UINT32_MAX;

	t75 = (x501>>(x502==(x503&x504)));

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x505 = 744856U;
	static uint64_t x506 = UINT64_MAX;
	int16_t x507 = INT16_MAX;
	int32_t x508 = INT32_MIN;
	volatile uint32_t t76 = 1181U;

	t76 = (x505>>(x506==(x507&x508)));

	if (t76 != 744856U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x513 = 1774;
	int32_t x514 = 2979;
	volatile uint64_t x516 = 180126697LLU;
	int32_t t77 = -614;

	t77 = (x513>>(x514==(x515&x516)));

	if (t77 != 1774) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x517 = INT8_MAX;
	uint16_t x518 = 0U;
	int32_t x519 = -989;
	int32_t x520 = -122832;
	int32_t t78 = 11881721;

	t78 = (x517>>(x518==(x519&x520)));

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x521 = 1411176831U;
	static int16_t x522 = INT16_MIN;
	uint16_t x523 = 10476U;
	uint32_t x524 = UINT32_MAX;
	volatile uint32_t t79 = 117670U;

	t79 = (x521>>(x522==(x523&x524)));

	if (t79 != 1411176831U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x529 = 7438264;
	volatile uint8_t x531 = 28U;
	int32_t x532 = -170510847;
	int32_t t80 = -2;

	t80 = (x529>>(x530==(x531&x532)));

	if (t80 != 7438264) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x534 = 1;
	int64_t x535 = 16872785279964627LL;
	uint16_t x536 = UINT16_MAX;
	int32_t t81 = 767;

	t81 = (x533>>(x534==(x535&x536)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x541 = 62985;
	int16_t x542 = -1;
	volatile uint16_t x543 = UINT16_MAX;

	t82 = (x541>>(x542==(x543&x544)));

	if (t82 != 62985) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x553 = 4650132692482LLU;
	static int32_t x554 = INT32_MAX;
	uint64_t x555 = UINT64_MAX;
	volatile int32_t x556 = INT32_MAX;
	uint64_t t83 = 197812434226LLU;

	t83 = (x553>>(x554==(x555&x556)));

	if (t83 != 2325066346241LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x561 = 2;
	static uint16_t x562 = 3488U;
	uint32_t x563 = 26541427U;
	volatile int32_t t84 = -214;

	t84 = (x561>>(x562==(x563&x564)));

	if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x565 = UINT8_MAX;
	uint8_t x566 = UINT8_MAX;
	volatile int8_t x567 = INT8_MAX;
	volatile int32_t x568 = -14;
	volatile int32_t t85 = 26;

	t85 = (x565>>(x566==(x567&x568)));

	if (t85 != 255) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x569 = 12U;
	static uint64_t x570 = 1LLU;
	volatile int64_t x571 = INT64_MIN;
	uint8_t x572 = UINT8_MAX;
	int32_t t86 = -7028;

	t86 = (x569>>(x570==(x571&x572)));

	if (t86 != 12) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x581 = 2313269805461LL;
	volatile int64_t x582 = INT64_MIN;
	static int16_t x583 = INT16_MAX;
	int64_t x584 = INT64_MAX;
	volatile int64_t t87 = -3245749741395714207LL;

	t87 = (x581>>(x582==(x583&x584)));

	if (t87 != 2313269805461LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x585 = 2U;
	static int64_t x586 = 12932878245LL;
	uint8_t x587 = UINT8_MAX;
	volatile uint64_t x588 = UINT64_MAX;
	static int32_t t88 = 28864;

	t88 = (x585>>(x586==(x587&x588)));

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x589 = INT32_MAX;
	int8_t x590 = INT8_MIN;
	uint16_t x591 = 790U;
	uint64_t x592 = 36595498300888274LLU;
	int32_t t89 = INT32_MAX;

	t89 = (x589>>(x590==(x591&x592)));

	if (t89 != INT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x593 = 1;
	int16_t x594 = INT16_MIN;
	uint64_t x595 = UINT64_MAX;
	static int8_t x596 = INT8_MIN;
	volatile int32_t t90 = 9162;

	t90 = (x593>>(x594==(x595&x596)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x601 = 422279LLU;
	int16_t x602 = 1597;
	static int64_t x603 = INT64_MIN;
	int64_t x604 = -1LL;
	static volatile uint64_t t91 = 64269676891LLU;

	t91 = (x601>>(x602==(x603&x604)));

	if (t91 != 422279LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x606 = INT64_MAX;
	int8_t x607 = 1;
	int8_t x608 = INT8_MAX;
	static volatile int32_t t92 = -526180;

	t92 = (x605>>(x606==(x607&x608)));

	if (t92 != 65535) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int64_t x613 = INT64_MAX;
	uint64_t x614 = UINT64_MAX;
	int8_t x615 = INT8_MIN;
	uint16_t x616 = UINT16_MAX;
	int64_t t93 = INT64_MAX;

	t93 = (x613>>(x614==(x615&x616)));

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x621 = INT32_MAX;
	static int32_t x622 = INT32_MIN;
	volatile uint16_t x623 = UINT16_MAX;
	int16_t x624 = -3625;
	volatile int32_t t94 = INT32_MAX;

	t94 = (x621>>(x622==(x623&x624)));

	if (t94 != INT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x637 = UINT16_MAX;
	int64_t x638 = INT64_MIN;
	static uint64_t x639 = 15545475LLU;
	int32_t t95 = -465;

	t95 = (x637>>(x638==(x639&x640)));

	if (t95 != 65535) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x641 = 2U;
	int64_t x643 = 1389376507784796222LL;
	uint16_t x644 = 1716U;
	int32_t t96 = -14876;

	t96 = (x641>>(x642==(x643&x644)));

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x649 = 1U;
	static int64_t x650 = INT64_MAX;
	int32_t x651 = -670;
	volatile uint64_t x652 = 9860319643LLU;
	int32_t t97 = 1307175;

	t97 = (x649>>(x650==(x651&x652)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x653 = 321097U;
	uint8_t x655 = 0U;
	int16_t x656 = INT16_MIN;
	uint32_t t98 = 2605U;

	t98 = (x653>>(x654==(x655&x656)));

	if (t98 != 321097U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x658 = UINT64_MAX;
	uint32_t x659 = 770191904U;
	volatile int8_t x660 = INT8_MAX;
	volatile uint32_t t99 = 401664705U;

	t99 = (x657>>(x658==(x659&x660)));

	if (t99 != 1543040154U) { NG(); } else { ; }
	
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

