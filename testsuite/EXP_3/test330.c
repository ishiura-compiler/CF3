#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x2 = 0;
int64_t x4 = INT64_MAX;
int16_t x8 = -1949;
static int8_t x11 = INT8_MIN;
uint8_t x12 = 3U;
uint64_t x32 = 55LLU;
volatile uint64_t t4 = 24588376992LLU;
volatile int16_t x34 = INT16_MAX;
static volatile int32_t t5 = -5;
int16_t x39 = -1;
static volatile int64_t x41 = -1LL;
int64_t x46 = 207151565806736LL;
int8_t x57 = INT8_MIN;
volatile int16_t x59 = INT16_MIN;
static uint64_t x61 = 5793230449LLU;
volatile uint64_t t12 = 1567820010377020132LLU;
uint64_t x65 = 485297LLU;
static volatile int8_t x67 = 1;
int64_t t17 = 7338896047076LL;
int64_t t19 = -284631528097778800LL;
static volatile uint32_t t20 = 5U;
static int64_t x105 = INT64_MIN;
uint64_t x106 = 3502LLU;
int64_t t23 = 2195261553036223713LL;
uint32_t x125 = 1344822U;
static uint32_t x126 = UINT32_MAX;
int32_t x128 = -1;
static uint16_t x131 = 12U;
uint32_t x134 = UINT32_MAX;
uint32_t t26 = 934911U;
volatile uint16_t x146 = 283U;
volatile int8_t x149 = INT8_MAX;
int64_t x152 = -13204862300LL;
int8_t x153 = INT8_MAX;
volatile uint64_t t30 = 6516702375LLU;
uint16_t x160 = 3632U;
volatile int32_t t31 = 124983860;
int64_t x163 = -1LL;
int32_t t33 = 117049780;
volatile uint8_t x170 = 11U;
static volatile int16_t x173 = 7;
static int16_t x175 = INT16_MIN;
volatile int32_t x179 = -1628;
uint64_t x180 = 2LLU;
uint64_t x184 = 597460436LLU;
static uint64_t x187 = 537722690874LLU;
static int64_t x190 = INT64_MIN;
static int8_t x192 = INT8_MAX;
int64_t t39 = 14955LL;
uint8_t x199 = 0U;
uint64_t x201 = UINT64_MAX;
uint32_t x203 = 86828U;
int16_t x204 = 1;
static uint64_t t42 = 912491767939789137LLU;
int16_t x207 = INT16_MAX;
volatile uint16_t x210 = UINT16_MAX;
int32_t x212 = -1;
static int8_t x223 = -1;
volatile int64_t x224 = INT64_MIN;
volatile int64_t t47 = -359950LL;
uint16_t x231 = UINT16_MAX;
int64_t x238 = -1LL;
uint64_t x239 = 79824170541462LLU;
uint32_t x258 = 105U;
uint16_t x263 = UINT16_MAX;
static volatile uint64_t t53 = 31LLU;
volatile int8_t x265 = -1;
static uint64_t x268 = 192426LLU;
volatile int64_t x272 = -1LL;
int16_t x287 = INT16_MAX;
int8_t x293 = INT8_MIN;
static uint8_t x301 = 1U;
static int8_t x303 = -57;
uint8_t x304 = UINT8_MAX;
volatile int8_t x309 = -1;
volatile int8_t x310 = INT8_MIN;
uint32_t t62 = 17U;
volatile int32_t t63 = 39924564;
int64_t x334 = INT64_MIN;
uint64_t x335 = 30LLU;
static uint64_t x340 = 708582323699752960LLU;
int8_t x346 = INT8_MAX;
int16_t x352 = INT16_MAX;
int8_t x358 = -1;
uint32_t t70 = 5537U;
int64_t t71 = 1004215542843456984LL;
int16_t x366 = -40;
volatile int64_t x375 = 103065LL;
static int32_t x386 = INT32_MIN;
volatile int64_t t77 = 2507773946348LL;
int8_t x398 = INT8_MIN;
volatile int64_t t79 = -24LL;
int32_t x406 = -1;
uint32_t x408 = UINT32_MAX;
volatile uint32_t t80 = 24U;
volatile uint64_t x410 = 13012671LLU;
int8_t x412 = -29;
volatile int64_t x420 = INT64_MIN;
uint8_t x423 = 7U;
volatile int64_t x425 = INT64_MAX;
static int8_t x432 = -1;
volatile uint64_t t89 = 18795947983LLU;
int16_t x447 = -1;
static uint16_t x455 = 5U;
static uint16_t x457 = 898U;
volatile int32_t t93 = 0;
volatile uint64_t x462 = UINT64_MAX;
volatile int16_t x464 = INT16_MAX;
static int16_t x465 = -1;
uint64_t x466 = UINT64_MAX;
uint64_t t95 = 1355139338155120LLU;
int8_t x477 = INT8_MAX;
int16_t x484 = INT16_MIN;
uint16_t x486 = 0U;
volatile int8_t x487 = INT8_MIN;


void f0(void) {
	uint64_t x1 = 5452453LLU;
	volatile int64_t x3 = -1LL;
	volatile uint64_t t0 = 745LLU;

	t0 = ((x1^x2)%(x3-x4));

	if (t0 != 5452453LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int8_t x6 = 25;
	uint32_t x7 = 2922U;
	volatile uint32_t t1 = 1450534102U;

	t1 = ((x5^x6)%(x7-x8));

	if (t1 != 3368U) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint64_t x9 = 0LLU;
	int32_t x10 = INT32_MIN;
	uint64_t t2 = 1407431178031637492LLU;

	t2 = ((x9^x10)%(x11-x12));

	if (t2 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x25 = -222185559;
	uint64_t x26 = 9220LLU;
	int16_t x27 = 6513;
	int32_t x28 = 187050;
	volatile uint64_t t3 = 13353350866045LLU;

	t3 = ((x25^x26)%(x27-x28));

	if (t3 != 18446744073487356845LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x29 = INT16_MAX;
	volatile uint32_t x30 = 1U;
	static int16_t x31 = -2348;

	t4 = ((x29^x30)%(x31-x32));

	if (t4 != 32766LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x33 = INT8_MIN;
	int16_t x35 = INT16_MIN;
	static int8_t x36 = INT8_MIN;

	t5 = ((x33^x34)%(x35-x36));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x37 = INT8_MAX;
	static int64_t x38 = INT64_MIN;
	int32_t x40 = 1745;
	int64_t t6 = -19LL;

	t6 = ((x37^x38)%(x39-x40));

	if (t6 != -1213LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x42 = 249893031;
	uint8_t x43 = 27U;
	static int32_t x44 = -631824;
	volatile int64_t t7 = 132918762LL;

	t7 = ((x41^x42)%(x43-x44));

	if (t7 != -311887LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x45 = INT8_MAX;
	int8_t x47 = -1;
	volatile uint16_t x48 = 27731U;
	volatile int64_t t8 = 16373227746536LL;

	t8 = ((x45^x46)%(x47-x48));

	if (t8 != 8623LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x49 = INT8_MIN;
	int8_t x50 = 0;
	static int16_t x51 = -1;
	int32_t x52 = -12077;
	volatile int32_t t9 = -1941;

	t9 = ((x49^x50)%(x51-x52));

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x53 = 31U;
	uint8_t x54 = 1U;
	int64_t x55 = -1LL;
	int8_t x56 = INT8_MIN;
	volatile int64_t t10 = -191842LL;

	t10 = ((x53^x54)%(x55-x56));

	if (t10 != 30LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x58 = INT16_MAX;
	static uint64_t x60 = 1513392658305LLU;
	volatile uint64_t t11 = 358917333LLU;

	t11 = ((x57^x58)%(x59-x60));

	if (t11 != 1513392658432LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x62 = 5948816863656LL;
	uint64_t x63 = 12457220080LLU;
	uint32_t x64 = UINT32_MAX;

	t12 = ((x61^x62)%(x63-x64));

	if (t12 != 3327920769LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x66 = INT8_MIN;
	uint64_t x68 = 10681460LLU;
	uint64_t t13 = 516207971081LLU;

	t13 = ((x65^x66)%(x67-x68));

	if (t13 != 10196132LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = INT8_MIN;
	int8_t x70 = 25;
	uint8_t x71 = 2U;
	static int64_t x72 = -1LL;
	int64_t t14 = -397624241LL;

	t14 = ((x69^x70)%(x71-x72));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = INT16_MAX;
	volatile int64_t x74 = 1278261299725047LL;
	uint16_t x75 = UINT16_MAX;
	static volatile int16_t x76 = 2509;
	int64_t t15 = 1353027275183LL;

	t15 = ((x73^x74)%(x75-x76));

	if (t15 != 57768LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x77 = INT64_MIN;
	static int64_t x78 = INT64_MAX;
	volatile int8_t x79 = INT8_MIN;
	int64_t x80 = 7122LL;
	volatile int64_t t16 = 65928629657121997LL;

	t16 = ((x77^x78)%(x79-x80));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = INT64_MIN;
	int64_t x82 = INT64_MAX;
	uint32_t x83 = 31530666U;
	int16_t x84 = -245;

	t17 = ((x81^x82)%(x83-x84));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x85 = 0;
	static uint8_t x86 = UINT8_MAX;
	uint16_t x87 = UINT16_MAX;
	static volatile int16_t x88 = INT16_MIN;
	int32_t t18 = -15;

	t18 = ((x85^x86)%(x87-x88));

	if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = INT8_MAX;
	static int64_t x90 = INT64_MAX;
	volatile int8_t x91 = INT8_MAX;
	int16_t x92 = -1812;

	t19 = ((x89^x90)%(x91-x92));

	if (t19 != 1483LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x97 = -2;
	volatile uint16_t x98 = UINT16_MAX;
	uint32_t x99 = 3121U;
	int32_t x100 = 42;

	t20 = ((x97^x98)%(x99-x100));

	if (t20 != 1582U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x107 = UINT32_MAX;
	static int32_t x108 = -23963937;
	uint64_t t21 = 795589LLU;

	t21 = ((x105^x106)%(x107-x108));

	if (t21 != 22733518LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x113 = 43U;
	int16_t x114 = INT16_MAX;
	int8_t x115 = -1;
	static int8_t x116 = 3;
	volatile int32_t t22 = 889712580;

	t22 = ((x113^x114)%(x115-x116));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x121 = INT16_MIN;
	int64_t x122 = INT64_MIN;
	int64_t x123 = INT64_MAX;
	uint8_t x124 = 0U;

	t23 = ((x121^x122)%(x123-x124));

	if (t23 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x127 = INT32_MIN;
	static volatile uint32_t t24 = 173048273U;

	t24 = ((x125^x126)%(x127-x128));

	if (t24 != 2146138824U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x129 = 1940213202U;
	int64_t x130 = -1LL;
	int16_t x132 = INT16_MAX;
	int64_t t25 = -779LL;

	t25 = ((x129^x130)%(x131-x132));

	if (t25 != -3533LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x133 = 2018U;
	volatile int16_t x135 = -1;
	uint16_t x136 = 0U;

	t26 = ((x133^x134)%(x135-x136));

	if (t26 != 4294965277U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x137 = UINT32_MAX;
	uint16_t x138 = 0U;
	uint64_t x139 = UINT64_MAX;
	volatile int64_t x140 = INT64_MIN;
	volatile uint64_t t27 = 3269636LLU;

	t27 = ((x137^x138)%(x139-x140));

	if (t27 != 4294967295LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x145 = UINT32_MAX;
	int32_t x147 = 2316;
	uint16_t x148 = UINT16_MAX;
	static uint32_t t28 = 126534330U;

	t28 = ((x145^x146)%(x147-x148));

	if (t28 != 62935U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x150 = INT16_MAX;
	uint32_t x151 = 578U;
	int64_t t29 = -30385LL;

	t29 = ((x149^x150)%(x151-x152));

	if (t29 != 32640LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x154 = 5U;
	static volatile uint64_t x155 = 220834LLU;
	static uint8_t x156 = 4U;

	t30 = ((x153^x154)%(x155-x156));

	if (t30 != 122LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x157 = INT32_MAX;
	int32_t x158 = INT32_MAX;
	int8_t x159 = INT8_MIN;

	t31 = ((x157^x158)%(x159-x160));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x161 = -1;
	uint64_t x162 = 26682260492739LLU;
	static uint16_t x164 = 13U;
	uint64_t t32 = 23348627LLU;

	t32 = ((x161^x162)%(x163-x164));

	if (t32 != 18446717391449058876LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x165 = -41;
	int8_t x166 = 0;
	static int8_t x167 = -1;
	static volatile int16_t x168 = INT16_MAX;

	t33 = ((x165^x166)%(x167-x168));

	if (t33 != -41) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x169 = 13U;
	volatile int16_t x171 = INT16_MIN;
	static volatile int8_t x172 = -1;
	static int32_t t34 = -15072;

	t34 = ((x169^x170)%(x171-x172));

	if (t34 != 6) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x174 = 203U;
	volatile int16_t x176 = -1;
	uint32_t t35 = 16053605U;

	t35 = ((x173^x174)%(x175-x176));

	if (t35 != 204U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x177 = INT32_MIN;
	int16_t x178 = -1;
	volatile uint64_t t36 = 533044866875LLU;

	t36 = ((x177^x178)%(x179-x180));

	if (t36 != 2147483647LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x181 = 172337;
	int64_t x182 = INT64_MIN;
	int16_t x183 = 0;
	static volatile uint64_t t37 = 14420127573818352LLU;

	t37 = ((x181^x182)%(x183-x184));

	if (t37 != 9223372036854948145LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x185 = 72663437252LL;
	volatile uint64_t x186 = 3299500730802650877LLU;
	volatile int16_t x188 = INT16_MIN;
	static uint64_t t38 = 1LLU;

	t38 = ((x185^x186)%(x187-x188));

	if (t38 != 287050323059LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x189 = INT64_MIN;
	volatile int16_t x191 = INT16_MIN;

	t39 = ((x189^x190)%(x191-x192));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x193 = 98968402631881LLU;
	int64_t x194 = 13874LL;
	uint16_t x195 = 1998U;
	int64_t x196 = INT64_MAX;
	uint64_t t40 = 286115069691041761LLU;

	t40 = ((x193^x194)%(x195-x196));

	if (t40 != 98968402635515LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x197 = -25;
	int16_t x198 = 1;
	volatile int8_t x200 = INT8_MAX;
	volatile int32_t t41 = 3490;

	t41 = ((x197^x198)%(x199-x200));

	if (t41 != -26) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x202 = UINT8_MAX;

	t42 = ((x201^x202)%(x203-x204));

	if (t42 != 18766LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x205 = INT8_MAX;
	int64_t x206 = -1LL;
	int32_t x208 = -2393;
	int64_t t43 = 63LL;

	t43 = ((x205^x206)%(x207-x208));

	if (t43 != -128LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x209 = -16LL;
	static volatile int64_t x211 = INT64_MIN;
	volatile int64_t t44 = 521680322LL;

	t44 = ((x209^x210)%(x211-x212));

	if (t44 != -65521LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x217 = INT8_MIN;
	uint16_t x218 = 332U;
	int32_t x219 = -1;
	uint8_t x220 = UINT8_MAX;
	static int32_t t45 = 17546;

	t45 = ((x217^x218)%(x219-x220));

	if (t45 != -52) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x221 = INT8_MAX;
	uint64_t x222 = 2393094LLU;
	static uint64_t t46 = 110604391LLU;

	t46 = ((x221^x222)%(x223-x224));

	if (t46 != 2393209LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x225 = -1;
	int8_t x226 = -1;
	int64_t x227 = INT64_MAX;
	int8_t x228 = 10;

	t47 = ((x225^x226)%(x227-x228));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x229 = -1LL;
	int64_t x230 = INT64_MIN;
	int16_t x232 = 4712;
	int64_t t48 = 777989636121749LL;

	t48 = ((x229^x230)%(x231-x232));

	if (t48 != 38843LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x233 = INT64_MAX;
	int32_t x234 = INT32_MIN;
	int64_t x235 = -1LL;
	static uint32_t x236 = 320U;
	volatile int64_t t49 = 452033LL;

	t49 = ((x233^x234)%(x235-x236));

	if (t49 != -193LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x237 = 1U;
	volatile int16_t x240 = -1;
	volatile uint64_t t50 = 9911090034LLU;

	t50 = ((x237^x238)%(x239-x240));

	if (t50 != 16854941784018LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x253 = INT16_MIN;
	static int16_t x254 = -1;
	uint32_t x255 = 272972338U;
	volatile int64_t x256 = -3519916377LL;
	int64_t t51 = 8936LL;

	t51 = ((x253^x254)%(x255-x256));

	if (t51 != 32767LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int16_t x257 = INT16_MIN;
	static int64_t x259 = -53034001LL;
	volatile int64_t x260 = INT64_MIN;
	int64_t t52 = 64616654911272746LL;

	t52 = ((x257^x258)%(x259-x260));

	if (t52 != 4294934633LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x261 = 0U;
	uint64_t x262 = 99629712404430LLU;
	uint8_t x264 = 89U;

	t53 = ((x261^x262)%(x263-x264));

	if (t53 != 27992LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x266 = INT32_MIN;
	uint32_t x267 = 56157U;
	volatile uint64_t t54 = 356608014814268879LLU;

	t54 = ((x265^x266)%(x267-x268));

	if (t54 != 2147483647LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x269 = 6533;
	int64_t x270 = INT64_MAX;
	int16_t x271 = 1152;
	volatile int64_t t55 = 151LL;

	t55 = ((x269^x270)%(x271-x272));

	if (t55 != 699LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x273 = INT64_MIN;
	int64_t x274 = INT64_MIN;
	static volatile int64_t x275 = -1LL;
	int32_t x276 = INT32_MIN;
	volatile int64_t t56 = -196849LL;

	t56 = ((x273^x274)%(x275-x276));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x285 = 90U;
	int32_t x286 = -1;
	int64_t x288 = INT64_MAX;
	int64_t t57 = -135624270384748725LL;

	t57 = ((x285^x286)%(x287-x288));

	if (t57 != -91LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x294 = INT16_MIN;
	static volatile uint16_t x295 = 5U;
	int16_t x296 = INT16_MIN;
	volatile int32_t t58 = 485114;

	t58 = ((x293^x294)%(x295-x296));

	if (t58 != 32640) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x302 = 7U;
	volatile uint32_t t59 = 654U;

	t59 = ((x301^x302)%(x303-x304));

	if (t59 != 6U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x305 = INT8_MAX;
	uint32_t x306 = 30U;
	int64_t x307 = -1LL;
	int64_t x308 = -300LL;
	int64_t t60 = 1013LL;

	t60 = ((x305^x306)%(x307-x308));

	if (t60 != 97LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x311 = 1U;
	int8_t x312 = INT8_MIN;
	int32_t t61 = -112373978;

	t61 = ((x309^x310)%(x311-x312));

	if (t61 != 127) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x313 = 1U;
	int32_t x314 = INT32_MIN;
	uint32_t x315 = 112699365U;
	int16_t x316 = INT16_MAX;

	t62 = ((x313^x314)%(x315-x316));

	if (t62 != 6818287U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x325 = UINT8_MAX;
	int32_t x326 = INT32_MIN;
	int8_t x327 = INT8_MAX;
	volatile uint16_t x328 = 191U;

	t63 = ((x325^x326)%(x327-x328));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x329 = -1LL;
	static int32_t x330 = INT32_MAX;
	int8_t x331 = 21;
	static uint32_t x332 = UINT32_MAX;
	static volatile int64_t t64 = -111324LL;

	t64 = ((x329^x330)%(x331-x332));

	if (t64 != -2LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x333 = INT8_MIN;
	int32_t x336 = INT32_MAX;
	uint64_t t65 = 1680780143757732LLU;

	t65 = ((x333^x334)%(x335-x336));

	if (t65 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x337 = 1749;
	volatile uint8_t x338 = 1U;
	static int8_t x339 = INT8_MAX;
	static uint64_t t66 = 6373221331238015LLU;

	t66 = ((x337^x338)%(x339-x340));

	if (t66 != 1748LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x341 = -3;
	uint32_t x342 = 30158247U;
	int16_t x343 = 1;
	uint64_t x344 = UINT64_MAX;
	volatile uint64_t t67 = 484390LLU;

	t67 = ((x341^x342)%(x343-x344));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x345 = INT16_MIN;
	uint16_t x347 = 12026U;
	static volatile int64_t x348 = -36147997460142LL;
	int64_t t68 = 790LL;

	t68 = ((x345^x346)%(x347-x348));

	if (t68 != -32641LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x349 = 97447U;
	static volatile uint16_t x350 = UINT16_MAX;
	volatile uint8_t x351 = UINT8_MAX;
	volatile uint32_t t69 = 1604835936U;

	t69 = ((x349^x350)%(x351-x352));

	if (t69 != 99160U) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x357 = 3U;
	int16_t x359 = INT16_MIN;
	uint32_t x360 = UINT32_MAX;

	t70 = ((x357^x358)%(x359-x360));

	if (t70 != 32763U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x361 = INT64_MAX;
	static int8_t x362 = 22;
	int16_t x363 = INT16_MIN;
	int32_t x364 = 207;

	t71 = ((x361^x362)%(x363-x364));

	if (t71 != 9310LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x365 = UINT32_MAX;
	int16_t x367 = INT16_MAX;
	int64_t x368 = 97712LL;
	int64_t t72 = 28446872LL;

	t72 = ((x365^x366)%(x367-x368));

	if (t72 != 39LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x369 = 1U;
	uint64_t x370 = UINT64_MAX;
	static uint64_t x371 = UINT64_MAX;
	uint8_t x372 = 17U;
	static uint64_t t73 = 748301LLU;

	t73 = ((x369^x370)%(x371-x372));

	if (t73 != 16LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x373 = INT32_MIN;
	uint32_t x374 = 1607U;
	int64_t x376 = INT64_MAX;
	volatile int64_t t74 = 646472026610697219LL;

	t74 = ((x373^x374)%(x375-x376));

	if (t74 != 2147485255LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x381 = 26560553222482236LL;
	int64_t x382 = 190003435087137277LL;
	uint16_t x383 = 15444U;
	volatile int8_t x384 = INT8_MAX;
	volatile int64_t t75 = -4472788317947481LL;

	t75 = ((x381^x382)%(x383-x384));

	if (t75 != 8539LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x385 = INT32_MAX;
	static volatile uint8_t x387 = 121U;
	static volatile int8_t x388 = INT8_MAX;
	int32_t t76 = -522738;

	t76 = ((x385^x386)%(x387-x388));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x389 = 487809792628LL;
	int16_t x390 = INT16_MIN;
	uint32_t x391 = 1464U;
	uint16_t x392 = 37U;

	t77 = ((x389^x390)%(x391-x392));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x393 = INT32_MAX;
	int16_t x394 = 127;
	uint32_t x395 = 20687762U;
	int16_t x396 = -1690;
	static uint32_t t78 = 61411U;

	t78 = ((x393^x394)%(x395-x396));

	if (t78 != 16469964U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x397 = UINT32_MAX;
	uint8_t x399 = 0U;
	int64_t x400 = -1LL;

	t79 = ((x397^x398)%(x399-x400));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x405 = INT32_MAX;
	static volatile int32_t x407 = -93;

	t80 = ((x405^x406)%(x407-x408));

	if (t80 != 2147483648U) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x409 = 533149429U;
	int16_t x411 = 54;
	static volatile uint64_t t81 = 61427225965LLU;

	t81 = ((x409^x410)%(x411-x412));

	if (t81 != 9LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x413 = UINT64_MAX;
	int8_t x414 = INT8_MIN;
	int32_t x415 = 44490;
	int32_t x416 = -1;
	volatile uint64_t t82 = 16775175099LLU;

	t82 = ((x413^x414)%(x415-x416));

	if (t82 != 127LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x417 = 14;
	int16_t x418 = INT16_MIN;
	int64_t x419 = -1LL;
	int64_t t83 = 660813145613LL;

	t83 = ((x417^x418)%(x419-x420));

	if (t83 != -32754LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x421 = 141722065LLU;
	int32_t x422 = INT32_MIN;
	uint16_t x424 = 4U;
	volatile uint64_t t84 = 5114LLU;

	t84 = ((x421^x422)%(x423-x424));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x426 = INT8_MIN;
	int8_t x427 = 41;
	int64_t x428 = INT64_MAX;
	static volatile int64_t t85 = 727053LL;

	t85 = ((x425^x426)%(x427-x428));

	if (t85 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x429 = 112U;
	static volatile int32_t x430 = INT32_MIN;
	uint32_t x431 = 79U;
	uint32_t t86 = 8045346U;

	t86 = ((x429^x430)%(x431-x432));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x433 = INT32_MIN;
	static int32_t x434 = 80288305;
	uint16_t x435 = 27U;
	uint8_t x436 = 94U;
	static int32_t t87 = -389;

	t87 = ((x433^x434)%(x435-x436));

	if (t87 != -56) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x437 = INT8_MIN;
	volatile uint8_t x438 = UINT8_MAX;
	static int8_t x439 = INT8_MAX;
	int16_t x440 = INT16_MIN;
	static volatile int32_t t88 = 0;

	t88 = ((x437^x438)%(x439-x440));

	if (t88 != -129) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x441 = UINT64_MAX;
	static int16_t x442 = INT16_MIN;
	int32_t x443 = -1;
	int32_t x444 = INT32_MIN;

	t89 = ((x441^x442)%(x443-x444));

	if (t89 != 32767LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x445 = -1;
	int16_t x446 = INT16_MAX;
	int8_t x448 = INT8_MIN;
	volatile int32_t t90 = 180;

	t90 = ((x445^x446)%(x447-x448));

	if (t90 != -2) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x449 = -178;
	int16_t x450 = -5;
	int16_t x451 = 1;
	int16_t x452 = -3644;
	int32_t t91 = 3;

	t91 = ((x449^x450)%(x451-x452));

	if (t91 != 181) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x453 = 2935U;
	static volatile uint64_t x454 = 5813309308511994339LLU;
	uint32_t x456 = UINT32_MAX;
	uint64_t t92 = 4662494LLU;

	t92 = ((x453^x454)%(x455-x456));

	if (t92 != 2LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x458 = INT32_MIN;
	int8_t x459 = INT8_MIN;
	int16_t x460 = INT16_MIN;

	t93 = ((x457^x458)%(x459-x460));

	if (t93 != -31870) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x461 = -1;
	static uint16_t x463 = 8U;
	uint64_t t94 = 88637937LLU;

	t94 = ((x461^x462)%(x463-x464));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x467 = INT8_MIN;
	int16_t x468 = 2;

	t95 = ((x465^x466)%(x467-x468));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x469 = INT16_MIN;
	int8_t x470 = INT8_MAX;
	int32_t x471 = -1;
	uint16_t x472 = UINT16_MAX;
	volatile int32_t t96 = -605405;

	t96 = ((x469^x470)%(x471-x472));

	if (t96 != -32641) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x478 = -29;
	uint8_t x479 = 79U;
	uint8_t x480 = 7U;
	volatile int32_t t97 = -901074;

	t97 = ((x477^x478)%(x479-x480));

	if (t97 != -28) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x481 = 0U;
	int64_t x482 = 12298356LL;
	volatile int64_t x483 = -1LL;
	volatile int64_t t98 = 404201337702LL;

	t98 = ((x481^x482)%(x483-x484));

	if (t98 != 10731LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x485 = 793623493913694496LL;
	uint8_t x488 = 1U;
	int64_t t99 = -244472288147453LL;

	t99 = ((x485^x486)%(x487-x488));

	if (t99 != 112LL) { NG(); } else { ; }
	
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

