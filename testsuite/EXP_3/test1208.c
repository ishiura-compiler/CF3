#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -1LL;
int32_t x6 = -3203369;
int32_t x12 = -26246824;
uint64_t x14 = 7397102953464LLU;
uint64_t t3 = 8LLU;
static int32_t x21 = INT32_MIN;
uint64_t x22 = 37481145130LLU;
int16_t x32 = -15;
uint8_t x36 = 104U;
volatile uint64_t t7 = 1296LLU;
volatile int8_t x38 = INT8_MIN;
static int32_t x39 = INT32_MAX;
int32_t t8 = 49178261;
int8_t x46 = INT8_MIN;
int8_t x56 = 41;
static int64_t t12 = -3259605595941LL;
uint16_t x65 = UINT16_MAX;
static uint64_t x67 = 1639LLU;
uint8_t x74 = 88U;
int8_t x77 = -1;
int16_t x85 = INT16_MAX;
int32_t x87 = -1;
static int64_t x91 = -1LL;
int8_t x96 = INT8_MIN;
static int64_t x97 = INT64_MAX;
uint16_t x98 = UINT16_MAX;
volatile uint16_t x102 = UINT16_MAX;
int64_t x108 = 0LL;
int16_t x111 = INT16_MAX;
volatile uint64_t t23 = 224838426982702LLU;
int8_t x119 = INT8_MIN;
uint32_t x132 = 677545559U;
int32_t x138 = 2042290;
uint64_t t32 = 4LLU;
static uint64_t x169 = 2268432338LLU;
uint64_t x170 = UINT64_MAX;
volatile uint64_t t36 = 194LLU;
int64_t x178 = INT64_MAX;
uint16_t x180 = 9U;
volatile uint64_t t39 = 2431880783949125546LLU;
int64_t t40 = -381054896205LL;
int64_t t41 = -2344048LL;
int32_t t44 = -289347282;
uint64_t x210 = UINT64_MAX;
int16_t x218 = INT16_MIN;
uint64_t x221 = UINT64_MAX;
volatile uint64_t x223 = 213726008533805LLU;
int16_t x226 = -1;
static volatile int16_t x227 = -1;
uint32_t x233 = 38641U;
uint32_t x237 = 193352586U;
static volatile int32_t x240 = 1332;
uint32_t t52 = 0U;
int16_t x245 = INT16_MIN;
static int32_t x253 = -30679207;
int32_t t56 = -19;
uint16_t x259 = 74U;
static volatile int8_t x261 = -1;
volatile int32_t t58 = INT32_MAX;
int32_t t59 = -105;
uint8_t x271 = 0U;
volatile int16_t x278 = 196;
int16_t x284 = 5245;
int32_t x285 = 4779;
int8_t x296 = 0;
uint32_t t67 = 398995U;
volatile uint32_t x306 = 91884716U;
int32_t t71 = INT32_MAX;
int32_t x326 = INT32_MAX;
uint8_t x327 = 36U;
volatile uint8_t x337 = 53U;
uint16_t x338 = 770U;
uint16_t x345 = 1U;
int16_t x350 = -1;
static volatile int8_t x351 = -7;
int8_t x359 = INT8_MIN;
uint32_t t78 = 24747257U;
static int8_t x368 = 3;
int32_t x371 = INT32_MIN;
volatile uint64_t x378 = UINT64_MAX;
int16_t x382 = INT16_MAX;
int32_t x386 = INT32_MAX;
volatile uint64_t t85 = 292LLU;
int32_t x397 = -1;
uint32_t t87 = 3533U;
volatile uint16_t x405 = UINT16_MAX;
int16_t x406 = INT16_MAX;
volatile int32_t t89 = 9;
int16_t x418 = -60;
uint8_t x419 = 0U;
uint32_t x423 = 4158827U;
volatile int32_t t92 = 260724318;
uint64_t t93 = 692853059198LLU;
int32_t x433 = INT32_MIN;
volatile uint32_t t94 = 24725U;
uint32_t x442 = 103180074U;
volatile int64_t x443 = INT64_MIN;
static volatile uint32_t t95 = 26U;
int16_t x449 = 1;
int64_t x451 = INT64_MAX;
uint64_t x455 = 272919345LLU;


void f0(void) {
	int64_t x1 = 151767917928277536LL;
	static int8_t x3 = INT8_MIN;
	int64_t x4 = INT64_MIN;
	volatile int64_t t0 = 7057LL;

	t0 = ((x1-x2)|(x3==x4));

	if (t0 != 151767917928277537LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = UINT32_MAX;
	uint16_t x7 = 0U;
	static int16_t x8 = 1;
	volatile uint32_t t1 = 291U;

	t1 = ((x5-x6)|(x7==x8));

	if (t1 != 3203368U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	static int32_t x10 = 1;
	static int32_t x11 = 339;
	int32_t t2 = 2;

	t2 = ((x9-x10)|(x11==x12));

	if (t2 != -2) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	int8_t x15 = -1;
	uint8_t x16 = 7U;

	t3 = ((x13-x14)|(x15==x16));

	if (t3 != 18446736676606598151LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint32_t x23 = 663797508U;
	volatile int16_t x24 = -497;
	uint64_t t4 = 3741196LLU;

	t4 = ((x21-x22)|(x23==x24));

	if (t4 != 18446744034080922838LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = 0;
	int16_t x26 = -1;
	volatile int16_t x27 = INT16_MIN;
	int32_t x28 = -1817543;
	int32_t t5 = 488841918;

	t5 = ((x25-x26)|(x27==x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = 251190405LL;
	volatile int16_t x30 = 0;
	uint16_t x31 = 1U;
	int64_t t6 = -198742108239766LL;

	t6 = ((x29-x30)|(x31==x32));

	if (t6 != 251190405LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x33 = UINT64_MAX;
	volatile int16_t x34 = 4;
	uint64_t x35 = UINT64_MAX;

	t7 = ((x33-x34)|(x35==x36));

	if (t7 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x37 = 389918;
	int32_t x40 = 16055259;

	t8 = ((x37-x38)|(x39==x40));

	if (t8 != 390046) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = -1;
	static int16_t x42 = INT16_MIN;
	volatile int8_t x43 = -1;
	int16_t x44 = INT16_MIN;
	volatile int32_t t9 = -5298;

	t9 = ((x41-x42)|(x43==x44));

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = 8499LLU;
	static int32_t x47 = INT32_MIN;
	static int16_t x48 = 168;
	volatile uint64_t t10 = 51156620257087LLU;

	t10 = ((x45-x46)|(x47==x48));

	if (t10 != 8627LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x49 = 7189048466LLU;
	int16_t x50 = INT16_MIN;
	int32_t x51 = -1;
	static int8_t x52 = INT8_MAX;
	volatile uint64_t t11 = 745649039313781423LLU;

	t11 = ((x49-x50)|(x51==x52));

	if (t11 != 7189081234LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = INT64_MIN;
	int8_t x54 = -1;
	static int8_t x55 = INT8_MIN;

	t12 = ((x53-x54)|(x55==x56));

	if (t12 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x61 = -7;
	static int16_t x62 = -1;
	static int64_t x63 = -1LL;
	volatile uint64_t x64 = 3LLU;
	int32_t t13 = 4;

	t13 = ((x61-x62)|(x63==x64));

	if (t13 != -6) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x66 = INT8_MIN;
	uint8_t x68 = 1U;
	volatile int32_t t14 = -10745;

	t14 = ((x65-x66)|(x67==x68));

	if (t14 != 65663) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = INT16_MAX;
	uint64_t x75 = 10018668538801769LLU;
	volatile uint16_t x76 = 495U;
	volatile int32_t t15 = 774028596;

	t15 = ((x73-x74)|(x75==x76));

	if (t15 != 32679) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x78 = 429649651096LL;
	int8_t x79 = INT8_MIN;
	static int64_t x80 = INT64_MAX;
	int64_t t16 = 455925622141LL;

	t16 = ((x77-x78)|(x79==x80));

	if (t16 != -429649651097LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x86 = INT8_MAX;
	uint8_t x88 = 0U;
	static int32_t t17 = -3888578;

	t17 = ((x85-x86)|(x87==x88));

	if (t17 != 32640) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x89 = INT8_MAX;
	static int64_t x90 = INT64_MAX;
	int32_t x92 = -3379;
	int64_t t18 = 174407950153050LL;

	t18 = ((x89-x90)|(x91==x92));

	if (t18 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x93 = 115415638U;
	static int8_t x94 = INT8_MAX;
	static int64_t x95 = 1LL;
	volatile uint32_t t19 = 209925673U;

	t19 = ((x93-x94)|(x95==x96));

	if (t19 != 115415511U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x99 = UINT16_MAX;
	uint32_t x100 = 6436725U;
	volatile int64_t t20 = 1753724544847951232LL;

	t20 = ((x97-x98)|(x99==x100));

	if (t20 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x101 = 20U;
	volatile uint16_t x103 = 123U;
	int64_t x104 = -1LL;
	int32_t t21 = 9632671;

	t21 = ((x101-x102)|(x103==x104));

	if (t21 != -65515) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x105 = 2;
	int16_t x106 = -1;
	uint64_t x107 = 4671328LLU;
	volatile int32_t t22 = 1;

	t22 = ((x105-x106)|(x107==x108));

	if (t22 != 3) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x109 = UINT64_MAX;
	static volatile int64_t x110 = 3116614147LL;
	volatile int16_t x112 = INT16_MIN;

	t23 = ((x109-x110)|(x111==x112));

	if (t23 != 18446744070592937468LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x113 = 91U;
	uint8_t x114 = UINT8_MAX;
	int8_t x115 = -36;
	volatile int8_t x116 = -1;
	static volatile uint32_t t24 = 388018U;

	t24 = ((x113-x114)|(x115==x116));

	if (t24 != 4294967132U) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x117 = UINT8_MAX;
	int32_t x118 = INT32_MAX;
	int16_t x120 = INT16_MIN;
	int32_t t25 = 555;

	t25 = ((x117-x118)|(x119==x120));

	if (t25 != -2147483392) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x121 = 0U;
	int64_t x122 = 2LL;
	int64_t x123 = -375591288158LL;
	volatile int64_t x124 = -160213992445LL;
	int64_t t26 = 355LL;

	t26 = ((x121-x122)|(x123==x124));

	if (t26 != -2LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x129 = INT32_MIN;
	int32_t x130 = INT32_MIN;
	int16_t x131 = INT16_MIN;
	volatile int32_t t27 = 113616096;

	t27 = ((x129-x130)|(x131==x132));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x133 = 49U;
	volatile int8_t x134 = INT8_MIN;
	uint8_t x135 = 56U;
	int64_t x136 = INT64_MAX;
	int32_t t28 = -416369;

	t28 = ((x133-x134)|(x135==x136));

	if (t28 != 177) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int32_t x137 = -3;
	int32_t x139 = -1;
	int32_t x140 = -1;
	int32_t t29 = 289;

	t29 = ((x137-x138)|(x139==x140));

	if (t29 != -2042293) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x141 = INT8_MAX;
	uint8_t x142 = 1U;
	volatile int16_t x143 = INT16_MAX;
	int16_t x144 = INT16_MIN;
	static volatile int32_t t30 = -15;

	t30 = ((x141-x142)|(x143==x144));

	if (t30 != 126) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x149 = -1;
	int64_t x150 = -1LL;
	static uint64_t x151 = UINT64_MAX;
	volatile int8_t x152 = -1;
	static int64_t t31 = -4499LL;

	t31 = ((x149-x150)|(x151==x152));

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x153 = 0LLU;
	volatile int32_t x154 = INT32_MIN;
	int8_t x155 = INT8_MIN;
	int8_t x156 = -60;

	t32 = ((x153-x154)|(x155==x156));

	if (t32 != 2147483648LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x157 = UINT16_MAX;
	volatile int16_t x158 = -1;
	volatile int64_t x159 = INT64_MIN;
	volatile int16_t x160 = 19;
	volatile int32_t t33 = -209290489;

	t33 = ((x157-x158)|(x159==x160));

	if (t33 != 65536) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x161 = UINT64_MAX;
	volatile uint16_t x162 = UINT16_MAX;
	uint8_t x163 = 0U;
	static uint16_t x164 = 2U;
	volatile uint64_t t34 = 5040986LLU;

	t34 = ((x161-x162)|(x163==x164));

	if (t34 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x171 = UINT64_MAX;
	int16_t x172 = INT16_MIN;
	static volatile uint64_t t35 = 2LLU;

	t35 = ((x169-x170)|(x171==x172));

	if (t35 != 2268432339LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x173 = UINT16_MAX;
	uint64_t x174 = UINT64_MAX;
	int16_t x175 = INT16_MAX;
	int8_t x176 = 3;

	t36 = ((x173-x174)|(x175==x176));

	if (t36 != 65536LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x177 = 642450332555LLU;
	static int16_t x179 = 4753;
	volatile uint64_t t37 = 0LLU;

	t37 = ((x177-x178)|(x179==x180));

	if (t37 != 9223372679305108364LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x181 = -1;
	uint8_t x182 = 3U;
	uint32_t x183 = UINT32_MAX;
	uint8_t x184 = 53U;
	int32_t t38 = -6414;

	t38 = ((x181-x182)|(x183==x184));

	if (t38 != -4) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x185 = UINT8_MAX;
	uint64_t x186 = 3954176231887016244LLU;
	static int16_t x187 = 245;
	int16_t x188 = INT16_MIN;

	t39 = ((x185-x186)|(x187==x188));

	if (t39 != 14492567841822535627LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x189 = 1921367725U;
	int64_t x190 = -1760201810LL;
	static uint16_t x191 = 42U;
	volatile uint64_t x192 = UINT64_MAX;

	t40 = ((x189-x190)|(x191==x192));

	if (t40 != 3681569535LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x193 = 0LL;
	volatile int64_t x194 = 365373458LL;
	int8_t x195 = INT8_MIN;
	volatile int8_t x196 = -1;

	t41 = ((x193-x194)|(x195==x196));

	if (t41 != -365373458LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x197 = INT64_MIN;
	uint64_t x198 = UINT64_MAX;
	volatile int64_t x199 = INT64_MIN;
	int16_t x200 = -9265;
	uint64_t t42 = 303LLU;

	t42 = ((x197-x198)|(x199==x200));

	if (t42 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x201 = -106360256186LL;
	int16_t x202 = -1;
	uint16_t x203 = UINT16_MAX;
	volatile uint16_t x204 = 19823U;
	volatile int64_t t43 = -207LL;

	t43 = ((x201-x202)|(x203==x204));

	if (t43 != -106360256185LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x205 = 1;
	volatile uint16_t x206 = 2702U;
	static int64_t x207 = INT64_MIN;
	int16_t x208 = INT16_MAX;

	t44 = ((x205-x206)|(x207==x208));

	if (t44 != -2701) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x209 = UINT8_MAX;
	uint8_t x211 = UINT8_MAX;
	volatile uint32_t x212 = 32017U;
	uint64_t t45 = 11LLU;

	t45 = ((x209-x210)|(x211==x212));

	if (t45 != 256LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x213 = 1569115039492LLU;
	volatile int16_t x214 = INT16_MIN;
	int16_t x215 = INT16_MIN;
	int64_t x216 = -3443230639114LL;
	uint64_t t46 = 1948169680LLU;

	t46 = ((x213-x214)|(x215==x216));

	if (t46 != 1569115072260LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x217 = INT32_MIN;
	int32_t x219 = INT32_MIN;
	int64_t x220 = INT64_MAX;
	volatile int32_t t47 = 0;

	t47 = ((x217-x218)|(x219==x220));

	if (t47 != -2147450880) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x222 = 74;
	static uint8_t x224 = 46U;
	uint64_t t48 = 160622817LLU;

	t48 = ((x221-x222)|(x223==x224));

	if (t48 != 18446744073709551541LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x225 = -18;
	int64_t x228 = INT64_MIN;
	volatile int32_t t49 = 378728;

	t49 = ((x225-x226)|(x227==x228));

	if (t49 != -17) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x229 = -6729;
	volatile int8_t x230 = 15;
	volatile int64_t x231 = -1LL;
	int32_t x232 = -3;
	static int32_t t50 = 7772107;

	t50 = ((x229-x230)|(x231==x232));

	if (t50 != -6744) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x234 = 7U;
	int16_t x235 = INT16_MIN;
	int32_t x236 = -15561255;
	volatile uint32_t t51 = 203328U;

	t51 = ((x233-x234)|(x235==x236));

	if (t51 != 38634U) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x238 = 12U;
	int16_t x239 = -1;

	t52 = ((x237-x238)|(x239==x240));

	if (t52 != 193352574U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x241 = 125;
	int64_t x242 = 0LL;
	int16_t x243 = INT16_MAX;
	static int16_t x244 = 5;
	static int64_t t53 = -324LL;

	t53 = ((x241-x242)|(x243==x244));

	if (t53 != 125LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x246 = 42872U;
	static uint64_t x247 = 719276782235LLU;
	volatile uint16_t x248 = 5U;
	volatile uint32_t t54 = 26195542U;

	t54 = ((x245-x246)|(x247==x248));

	if (t54 != 4294891656U) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x249 = 5418407U;
	static int64_t x250 = -1LL;
	uint16_t x251 = 6U;
	int64_t x252 = INT64_MAX;
	static int64_t t55 = 7589LL;

	t55 = ((x249-x250)|(x251==x252));

	if (t55 != 5418408LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x254 = INT32_MIN;
	int16_t x255 = INT16_MAX;
	int16_t x256 = INT16_MIN;

	t56 = ((x253-x254)|(x255==x256));

	if (t56 != 2116804441) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x257 = UINT16_MAX;
	volatile int32_t x258 = -1;
	static volatile int16_t x260 = 3893;
	static volatile int32_t t57 = 1196;

	t57 = ((x257-x258)|(x259==x260));

	if (t57 != 65536) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x262 = INT32_MIN;
	uint64_t x263 = 76562531342LLU;
	volatile uint16_t x264 = 0U;

	t58 = ((x261-x262)|(x263==x264));

	if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x265 = -1;
	uint8_t x266 = UINT8_MAX;
	int8_t x267 = -1;
	volatile uint16_t x268 = 7372U;

	t59 = ((x265-x266)|(x267==x268));

	if (t59 != -256) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x269 = INT8_MAX;
	uint64_t x270 = UINT64_MAX;
	int16_t x272 = INT16_MAX;
	uint64_t t60 = 3011387547LLU;

	t60 = ((x269-x270)|(x271==x272));

	if (t60 != 128LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int64_t x273 = INT64_MIN;
	volatile uint64_t x274 = UINT64_MAX;
	static uint16_t x275 = UINT16_MAX;
	uint32_t x276 = 1U;
	uint64_t t61 = 19772347LLU;

	t61 = ((x273-x274)|(x275==x276));

	if (t61 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x277 = INT8_MIN;
	static volatile int64_t x279 = -1LL;
	uint64_t x280 = UINT64_MAX;
	int32_t t62 = -1673386;

	t62 = ((x277-x278)|(x279==x280));

	if (t62 != -323) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x281 = UINT16_MAX;
	volatile uint8_t x282 = UINT8_MAX;
	uint64_t x283 = 520785LLU;
	int32_t t63 = 4861117;

	t63 = ((x281-x282)|(x283==x284));

	if (t63 != 65280) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x286 = UINT16_MAX;
	volatile uint8_t x287 = 15U;
	static uint8_t x288 = 8U;
	static volatile int32_t t64 = 285;

	t64 = ((x285-x286)|(x287==x288));

	if (t64 != -60756) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x289 = INT64_MAX;
	volatile uint64_t x290 = 13599079LLU;
	volatile int32_t x291 = INT32_MIN;
	static int8_t x292 = 15;
	uint64_t t65 = 431LLU;

	t65 = ((x289-x290)|(x291==x292));

	if (t65 != 9223372036841176728LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x293 = -1;
	int64_t x294 = INT64_MIN;
	uint64_t x295 = 2949145299LLU;
	volatile int64_t t66 = INT64_MAX;

	t66 = ((x293-x294)|(x295==x296));

	if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x297 = 55114440U;
	volatile uint16_t x298 = 179U;
	int16_t x299 = 3724;
	static int64_t x300 = INT64_MAX;

	t67 = ((x297-x298)|(x299==x300));

	if (t67 != 55114261U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x301 = INT16_MAX;
	uint32_t x302 = UINT32_MAX;
	uint8_t x303 = 102U;
	uint8_t x304 = 63U;
	uint32_t t68 = 3669U;

	t68 = ((x301-x302)|(x303==x304));

	if (t68 != 32768U) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x305 = -1;
	uint32_t x307 = 1907200837U;
	int8_t x308 = -1;
	static uint32_t t69 = 3731U;

	t69 = ((x305-x306)|(x307==x308));

	if (t69 != 4203082579U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x317 = UINT64_MAX;
	volatile int16_t x318 = -74;
	uint64_t x319 = 665LLU;
	volatile int8_t x320 = INT8_MAX;
	volatile uint64_t t70 = 217611321228455LLU;

	t70 = ((x317-x318)|(x319==x320));

	if (t70 != 73LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x321 = -1;
	int32_t x322 = INT32_MIN;
	uint8_t x323 = UINT8_MAX;
	int16_t x324 = INT16_MIN;

	t71 = ((x321-x322)|(x323==x324));

	if (t71 != INT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x325 = -1;
	uint16_t x328 = 299U;
	static volatile int32_t t72 = INT32_MIN;

	t72 = ((x325-x326)|(x327==x328));

	if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x339 = -7927376LL;
	int64_t x340 = 715LL;
	int32_t t73 = 246;

	t73 = ((x337-x338)|(x339==x340));

	if (t73 != -717) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int8_t x341 = INT8_MIN;
	static int32_t x342 = INT32_MIN;
	uint32_t x343 = 48U;
	int16_t x344 = INT16_MAX;
	int32_t t74 = -1539649;

	t74 = ((x341-x342)|(x343==x344));

	if (t74 != 2147483520) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x346 = UINT64_MAX;
	uint32_t x347 = UINT32_MAX;
	static uint16_t x348 = 15U;
	volatile uint64_t t75 = 251338650131326LLU;

	t75 = ((x345-x346)|(x347==x348));

	if (t75 != 2LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x349 = 15U;
	static uint32_t x352 = 855U;
	static int32_t t76 = 67;

	t76 = ((x349-x350)|(x351==x352));

	if (t76 != 16) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x357 = 108U;
	uint16_t x358 = 3U;
	int8_t x360 = INT8_MAX;
	int32_t t77 = 5443;

	t77 = ((x357-x358)|(x359==x360));

	if (t77 != 105) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x361 = UINT16_MAX;
	volatile uint32_t x362 = UINT32_MAX;
	uint16_t x363 = UINT16_MAX;
	static uint16_t x364 = UINT16_MAX;

	t78 = ((x361-x362)|(x363==x364));

	if (t78 != 65537U) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint32_t x365 = UINT32_MAX;
	uint8_t x366 = 1U;
	int8_t x367 = INT8_MAX;
	static volatile uint32_t t79 = 7925U;

	t79 = ((x365-x366)|(x367==x368));

	if (t79 != 4294967294U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x369 = UINT64_MAX;
	int32_t x370 = 153966;
	int32_t x372 = 0;
	volatile uint64_t t80 = 13368LLU;

	t80 = ((x369-x370)|(x371==x372));

	if (t80 != 18446744073709397649LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x373 = 26608910LLU;
	int16_t x374 = INT16_MIN;
	uint8_t x375 = UINT8_MAX;
	static int8_t x376 = -7;
	volatile uint64_t t81 = 1361113188191LLU;

	t81 = ((x373-x374)|(x375==x376));

	if (t81 != 26641678LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x377 = INT8_MAX;
	int32_t x379 = INT32_MIN;
	uint32_t x380 = 3U;
	volatile uint64_t t82 = 2059545971821775LLU;

	t82 = ((x377-x378)|(x379==x380));

	if (t82 != 128LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x381 = 2128982;
	int32_t x383 = -1653;
	int8_t x384 = INT8_MIN;
	int32_t t83 = 133;

	t83 = ((x381-x382)|(x383==x384));

	if (t83 != 2096215) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x385 = 4U;
	int16_t x387 = INT16_MAX;
	static uint8_t x388 = UINT8_MAX;
	volatile int32_t t84 = 63;

	t84 = ((x385-x386)|(x387==x388));

	if (t84 != -2147483643) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x389 = UINT64_MAX;
	int64_t x390 = 1894916674201LL;
	int64_t x391 = 4690LL;
	uint8_t x392 = 10U;

	t85 = ((x389-x390)|(x391==x392));

	if (t85 != 18446742178792877414LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x393 = -36577;
	volatile int64_t x394 = INT64_MIN;
	volatile int8_t x395 = -1;
	static int32_t x396 = -1;
	int64_t t86 = 1252LL;

	t86 = ((x393-x394)|(x395==x396));

	if (t86 != 9223372036854739231LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x398 = 100808829U;
	volatile uint16_t x399 = 23U;
	int32_t x400 = INT32_MIN;

	t87 = ((x397-x398)|(x399==x400));

	if (t87 != 4194158466U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x401 = 188U;
	static int64_t x402 = -1LL;
	int8_t x403 = -1;
	volatile int16_t x404 = INT16_MIN;
	int64_t t88 = -198455875006LL;

	t88 = ((x401-x402)|(x403==x404));

	if (t88 != 189LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x407 = -1;
	static int64_t x408 = -168811311LL;

	t89 = ((x405-x406)|(x407==x408));

	if (t89 != 32768) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x413 = INT8_MIN;
	uint8_t x414 = UINT8_MAX;
	int64_t x415 = INT64_MIN;
	int8_t x416 = 0;
	int32_t t90 = 1;

	t90 = ((x413-x414)|(x415==x416));

	if (t90 != -383) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x417 = INT8_MAX;
	volatile int16_t x420 = -1;
	volatile int32_t t91 = 69;

	t91 = ((x417-x418)|(x419==x420));

	if (t91 != 187) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x421 = -1;
	volatile uint16_t x422 = 84U;
	int64_t x424 = -221179275897656436LL;

	t92 = ((x421-x422)|(x423==x424));

	if (t92 != -85) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x429 = 1969839368105LLU;
	uint32_t x430 = UINT32_MAX;
	uint32_t x431 = 1034652156U;
	uint16_t x432 = UINT16_MAX;

	t93 = ((x429-x430)|(x431==x432));

	if (t93 != 1965544400810LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x434 = 321704775U;
	int8_t x435 = INT8_MIN;
	int16_t x436 = -1;

	t94 = ((x433-x434)|(x435==x436));

	if (t94 != 1825778873U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x441 = -2;
	static volatile uint16_t x444 = 25U;

	t95 = ((x441-x442)|(x443==x444));

	if (t95 != 4191787220U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x445 = UINT64_MAX;
	int32_t x446 = INT32_MIN;
	volatile uint8_t x447 = 2U;
	int64_t x448 = INT64_MAX;
	volatile uint64_t t96 = 2947043575LLU;

	t96 = ((x445-x446)|(x447==x448));

	if (t96 != 2147483647LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x450 = INT8_MAX;
	int8_t x452 = INT8_MAX;
	static int32_t t97 = 1;

	t97 = ((x449-x450)|(x451==x452));

	if (t97 != -126) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x453 = -1;
	volatile uint32_t x454 = 697788U;
	int16_t x456 = -319;
	static uint32_t t98 = 1453U;

	t98 = ((x453-x454)|(x455==x456));

	if (t98 != 4294269507U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x461 = INT32_MIN;
	int16_t x462 = -1;
	uint16_t x463 = UINT16_MAX;
	uint8_t x464 = 1U;
	int32_t t99 = -5629;

	t99 = ((x461-x462)|(x463==x464));

	if (t99 != -2147483647) { NG(); } else { ; }
	
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

