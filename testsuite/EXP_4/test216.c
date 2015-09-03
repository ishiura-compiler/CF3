#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x4 = UINT32_MAX;
int32_t t2 = 0;
uint64_t x32 = 10108163469815LLU;
int32_t t4 = -257;
int8_t x37 = INT8_MIN;
uint32_t x40 = 78911U;
volatile int32_t t7 = 115272954;
volatile int64_t x48 = -10401964164691467LL;
volatile int32_t x53 = 42211;
volatile int8_t x56 = INT8_MIN;
int32_t t10 = -112623;
volatile int64_t x59 = -129707LL;
volatile int32_t x60 = -1;
volatile uint16_t x70 = 24727U;
int32_t x74 = INT32_MIN;
uint16_t x75 = 22U;
uint8_t x79 = 86U;
volatile int32_t t16 = -1497861;
int32_t x91 = INT32_MAX;
uint32_t x100 = UINT32_MAX;
static int32_t t20 = 0;
int32_t x116 = INT32_MAX;
int32_t t22 = -9;
int64_t x118 = INT64_MAX;
static volatile uint16_t x126 = 2176U;
uint64_t x132 = UINT64_MAX;
volatile int32_t t26 = -14505;
volatile int8_t x133 = INT8_MAX;
int16_t x137 = INT16_MIN;
uint64_t x143 = 92090LLU;
static int32_t t31 = 1;
int64_t x163 = 931664901LL;
uint64_t x168 = UINT64_MAX;
static volatile int32_t t34 = 1347702;
static int8_t x172 = INT8_MIN;
static int64_t x174 = 1250378661800LL;
static volatile int32_t t37 = -148095396;
int64_t x190 = 794004217LL;
static uint8_t x195 = 10U;
volatile int16_t x197 = 1;
int32_t x201 = -1;
volatile int16_t x203 = -1;
int16_t x205 = 0;
static int8_t x236 = INT8_MIN;
int64_t x243 = -444991921585LL;
int16_t x249 = INT16_MIN;
int16_t x261 = 1;
uint64_t x265 = 0LLU;
volatile int32_t t54 = 2836432;
int16_t x281 = INT16_MAX;
uint8_t x287 = 6U;
int32_t x293 = -13;
uint16_t x295 = 84U;
volatile int32_t t58 = -2;
static int8_t x299 = 21;
int32_t t59 = 1905926;
int8_t x307 = -15;
uint8_t x310 = 40U;
int64_t x311 = -184935LL;
volatile uint8_t x314 = 22U;
int16_t x324 = INT16_MIN;
int8_t x342 = -1;
volatile uint16_t x344 = UINT16_MAX;
int32_t t67 = -112;
int8_t x352 = INT8_MAX;
int64_t x357 = INT64_MIN;
int32_t t69 = 3;
uint32_t x364 = UINT32_MAX;
volatile int32_t t71 = 14;
uint64_t x370 = UINT64_MAX;
static int32_t x375 = 1419;
int16_t x376 = -1529;
int16_t x379 = -1;
int16_t x382 = INT16_MIN;
int64_t x385 = INT64_MIN;
static volatile int8_t x389 = INT8_MIN;
int16_t x401 = 0;
int8_t x402 = 3;
volatile int32_t x409 = -1;
volatile int64_t x411 = -1LL;
uint64_t x413 = 19927779570421LLU;
int32_t x424 = 0;
int16_t x427 = INT16_MIN;
static uint32_t x428 = UINT32_MAX;
int32_t t84 = 0;
volatile int64_t x433 = INT64_MIN;
volatile uint8_t x436 = 0U;
int8_t x448 = INT8_MAX;
volatile int32_t t90 = 15394;
uint32_t x453 = 694U;
int8_t x458 = -1;
int8_t x460 = INT8_MAX;
int16_t x462 = 0;
int32_t x463 = 1;
int64_t x466 = INT64_MIN;
uint32_t x470 = UINT32_MAX;
int16_t x476 = 1;
int32_t t97 = -24;
static int32_t x483 = -1;
int64_t x491 = -325881378321320924LL;


void f0(void) {
	volatile int16_t x1 = INT16_MAX;
	int64_t x2 = INT64_MIN;
	int8_t x3 = -2;
	int32_t t0 = 19;

	t0 = (x1==(x2/(x3-x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MIN;
	static int8_t x10 = 1;
	uint8_t x11 = UINT8_MAX;
	int16_t x12 = INT16_MIN;
	volatile int32_t t1 = 10242940;

	t1 = (x9==(x10/(x11-x12)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = -1LL;
	int32_t x14 = INT32_MIN;
	static uint8_t x15 = UINT8_MAX;
	uint8_t x16 = 3U;

	t2 = (x13==(x14/(x15-x16)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x21 = INT32_MIN;
	volatile uint16_t x22 = 216U;
	static volatile int32_t x23 = 1852;
	static int16_t x24 = INT16_MIN;
	volatile int32_t t3 = 2;

	t3 = (x21==(x22/(x23-x24)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x29 = -1;
	static int32_t x30 = -1;
	uint32_t x31 = UINT32_MAX;

	t4 = (x29==(x30/(x31-x32)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x33 = INT32_MIN;
	static int16_t x34 = -1;
	int64_t x35 = -1LL;
	uint32_t x36 = 47497U;
	volatile int32_t t5 = -88;

	t5 = (x33==(x34/(x35-x36)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x38 = 52U;
	uint32_t x39 = 219019U;
	volatile int32_t t6 = 9670217;

	t6 = (x37==(x38/(x39-x40)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x41 = -1LL;
	int8_t x42 = INT8_MIN;
	volatile int16_t x43 = INT16_MIN;
	static volatile int8_t x44 = INT8_MIN;

	t7 = (x41==(x42/(x43-x44)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x45 = INT8_MIN;
	int64_t x46 = -1LL;
	uint8_t x47 = 4U;
	volatile int32_t t8 = -7519765;

	t8 = (x45==(x46/(x47-x48)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x49 = 66920631LLU;
	uint16_t x50 = 29U;
	static int16_t x51 = -1;
	volatile int16_t x52 = -5;
	int32_t t9 = -4036630;

	t9 = (x49==(x50/(x51-x52)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x54 = -1;
	static uint8_t x55 = UINT8_MAX;

	t10 = (x53==(x54/(x55-x56)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x57 = 7;
	int8_t x58 = -1;
	volatile int32_t t11 = 7930066;

	t11 = (x57==(x58/(x59-x60)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x65 = -3602477503391662LL;
	int64_t x66 = INT64_MIN;
	volatile int16_t x67 = INT16_MIN;
	volatile int8_t x68 = -4;
	static volatile int32_t t12 = 40547753;

	t12 = (x65==(x66/(x67-x68)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x69 = INT16_MAX;
	int64_t x71 = -1LL;
	static volatile uint8_t x72 = 10U;
	volatile int32_t t13 = 1505002;

	t13 = (x69==(x70/(x71-x72)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x73 = 9533244807073646LLU;
	volatile int16_t x76 = -370;
	volatile int32_t t14 = -29799;

	t14 = (x73==(x74/(x75-x76)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x77 = UINT64_MAX;
	int8_t x78 = 40;
	uint32_t x80 = UINT32_MAX;
	int32_t t15 = -1566895;

	t15 = (x77==(x78/(x79-x80)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x81 = INT32_MIN;
	static int32_t x82 = -3912;
	volatile int16_t x83 = 19;
	int16_t x84 = INT16_MIN;

	t16 = (x81==(x82/(x83-x84)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x85 = INT8_MIN;
	volatile int32_t x86 = -1;
	static int16_t x87 = -1;
	int64_t x88 = INT64_MIN;
	int32_t t17 = -41;

	t17 = (x85==(x86/(x87-x88)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x89 = 74U;
	volatile int32_t x90 = 1730;
	static volatile uint8_t x92 = 1U;
	int32_t t18 = -33422115;

	t18 = (x89==(x90/(x91-x92)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x97 = 204462664U;
	int16_t x98 = INT16_MAX;
	volatile uint32_t x99 = 222622U;
	volatile int32_t t19 = 3182;

	t19 = (x97==(x98/(x99-x100)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x101 = INT8_MIN;
	int16_t x102 = -16;
	uint32_t x103 = 37040838U;
	int32_t x104 = -7750406;

	t20 = (x101==(x102/(x103-x104)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x105 = UINT8_MAX;
	uint64_t x106 = 5125238404LLU;
	static int16_t x107 = -254;
	static int64_t x108 = 120044LL;
	volatile int32_t t21 = 243;

	t21 = (x105==(x106/(x107-x108)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x113 = -1812;
	uint64_t x114 = 27914391532LLU;
	static int8_t x115 = -1;

	t22 = (x113==(x114/(x115-x116)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x117 = 8091053806345LLU;
	int16_t x119 = INT16_MIN;
	int16_t x120 = -241;
	volatile int32_t t23 = -7769903;

	t23 = (x117==(x118/(x119-x120)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x121 = -1;
	volatile uint16_t x122 = 1U;
	int32_t x123 = INT32_MIN;
	int8_t x124 = INT8_MIN;
	volatile int32_t t24 = -13;

	t24 = (x121==(x122/(x123-x124)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x125 = -3;
	uint32_t x127 = 214457U;
	uint32_t x128 = 12377363U;
	volatile int32_t t25 = -1;

	t25 = (x125==(x126/(x127-x128)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x129 = UINT64_MAX;
	volatile int16_t x130 = INT16_MAX;
	int16_t x131 = -15790;

	t26 = (x129==(x130/(x131-x132)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x134 = INT16_MAX;
	int64_t x135 = -13791127329580415LL;
	int32_t x136 = 1;
	int32_t t27 = 0;

	t27 = (x133==(x134/(x135-x136)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x138 = INT8_MIN;
	volatile int32_t x139 = -1;
	uint64_t x140 = 18LLU;
	volatile int32_t t28 = -261;

	t28 = (x137==(x138/(x139-x140)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x141 = INT16_MIN;
	volatile int64_t x142 = -1LL;
	int16_t x144 = -1;
	volatile int32_t t29 = 3;

	t29 = (x141==(x142/(x143-x144)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x149 = INT16_MIN;
	int8_t x150 = -1;
	volatile int64_t x151 = INT64_MIN;
	int8_t x152 = -49;
	int32_t t30 = 148694;

	t30 = (x149==(x150/(x151-x152)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x153 = INT32_MAX;
	int16_t x154 = -1;
	volatile uint32_t x155 = UINT32_MAX;
	int32_t x156 = INT32_MAX;

	t31 = (x153==(x154/(x155-x156)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x157 = INT16_MAX;
	volatile int64_t x158 = INT64_MAX;
	uint64_t x159 = UINT64_MAX;
	uint8_t x160 = 3U;
	int32_t t32 = 53;

	t32 = (x157==(x158/(x159-x160)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x161 = INT8_MIN;
	int32_t x162 = INT32_MIN;
	volatile int8_t x164 = -7;
	int32_t t33 = -49002868;

	t33 = (x161==(x162/(x163-x164)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x165 = 775459691U;
	static int64_t x166 = 59001777729LL;
	static volatile int32_t x167 = INT32_MIN;

	t34 = (x165==(x166/(x167-x168)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x169 = INT8_MAX;
	static volatile uint8_t x170 = UINT8_MAX;
	int16_t x171 = INT16_MAX;
	int32_t t35 = -8;

	t35 = (x169==(x170/(x171-x172)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x173 = 0LL;
	int16_t x175 = -54;
	int16_t x176 = INT16_MIN;
	int32_t t36 = -38888;

	t36 = (x173==(x174/(x175-x176)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x185 = INT32_MIN;
	int32_t x186 = INT32_MIN;
	uint64_t x187 = UINT64_MAX;
	uint32_t x188 = 1937835881U;

	t37 = (x185==(x186/(x187-x188)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x189 = 1195U;
	static int32_t x191 = INT32_MIN;
	int8_t x192 = 0;
	static int32_t t38 = 0;

	t38 = (x189==(x190/(x191-x192)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x193 = INT32_MIN;
	uint8_t x194 = 0U;
	uint64_t x196 = UINT64_MAX;
	int32_t t39 = 329608;

	t39 = (x193==(x194/(x195-x196)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x198 = INT16_MIN;
	int32_t x199 = INT32_MIN;
	static volatile int32_t x200 = -3209;
	int32_t t40 = 2165;

	t40 = (x197==(x198/(x199-x200)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x202 = INT64_MAX;
	uint8_t x204 = 0U;
	volatile int32_t t41 = -511238;

	t41 = (x201==(x202/(x203-x204)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x206 = UINT64_MAX;
	static int32_t x207 = 122;
	int8_t x208 = 24;
	static int32_t t42 = -2;

	t42 = (x205==(x206/(x207-x208)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x217 = -1;
	uint16_t x218 = 1U;
	uint8_t x219 = 23U;
	int16_t x220 = 11206;
	volatile int32_t t43 = -8468460;

	t43 = (x217==(x218/(x219-x220)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x225 = 15485U;
	volatile int16_t x226 = INT16_MIN;
	static int32_t x227 = INT32_MIN;
	int8_t x228 = INT8_MIN;
	volatile int32_t t44 = 947841765;

	t44 = (x225==(x226/(x227-x228)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x229 = 254;
	uint8_t x230 = 3U;
	int64_t x231 = -1LL;
	static volatile int8_t x232 = INT8_MAX;
	int32_t t45 = -3610207;

	t45 = (x229==(x230/(x231-x232)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x233 = 1548015479997974827LL;
	static uint32_t x234 = 73U;
	static int8_t x235 = -1;
	int32_t t46 = 108568277;

	t46 = (x233==(x234/(x235-x236)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x241 = INT32_MIN;
	uint32_t x242 = UINT32_MAX;
	static int8_t x244 = -1;
	int32_t t47 = 8134;

	t47 = (x241==(x242/(x243-x244)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x245 = 0;
	int32_t x246 = -3;
	int16_t x247 = INT16_MIN;
	int8_t x248 = INT8_MIN;
	static int32_t t48 = 159854826;

	t48 = (x245==(x246/(x247-x248)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x250 = INT16_MIN;
	uint32_t x251 = UINT32_MAX;
	uint32_t x252 = 26867U;
	int32_t t49 = -2377;

	t49 = (x249==(x250/(x251-x252)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x253 = 524U;
	uint64_t x254 = 2LLU;
	int64_t x255 = -1LL;
	int32_t x256 = INT32_MAX;
	volatile int32_t t50 = -1029414815;

	t50 = (x253==(x254/(x255-x256)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x257 = 347;
	uint8_t x258 = UINT8_MAX;
	volatile uint8_t x259 = 1U;
	static int32_t x260 = 855;
	int32_t t51 = 1;

	t51 = (x257==(x258/(x259-x260)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x262 = UINT8_MAX;
	int32_t x263 = INT32_MIN;
	uint64_t x264 = 4046LLU;
	static int32_t t52 = 1;

	t52 = (x261==(x262/(x263-x264)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x266 = UINT32_MAX;
	int8_t x267 = INT8_MAX;
	volatile int16_t x268 = 1786;
	int32_t t53 = -13;

	t53 = (x265==(x266/(x267-x268)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x269 = 4874461841206007083LLU;
	int16_t x270 = INT16_MIN;
	int16_t x271 = INT16_MIN;
	uint8_t x272 = 106U;

	t54 = (x269==(x270/(x271-x272)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x282 = INT8_MAX;
	int64_t x283 = 68652722498908LL;
	int64_t x284 = -1LL;
	volatile int32_t t55 = 11017417;

	t55 = (x281==(x282/(x283-x284)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x285 = INT16_MAX;
	int16_t x286 = INT16_MIN;
	uint8_t x288 = UINT8_MAX;
	int32_t t56 = -20284414;

	t56 = (x285==(x286/(x287-x288)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x289 = 29715713330670LLU;
	int64_t x290 = INT64_MIN;
	int8_t x291 = -1;
	uint8_t x292 = 42U;
	int32_t t57 = -20320;

	t57 = (x289==(x290/(x291-x292)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x294 = -770083;
	int32_t x296 = 195842;

	t58 = (x293==(x294/(x295-x296)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x297 = 8U;
	int16_t x298 = INT16_MAX;
	int16_t x300 = 332;

	t59 = (x297==(x298/(x299-x300)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x305 = INT8_MIN;
	int32_t x306 = INT32_MAX;
	static int16_t x308 = -1;
	static volatile int32_t t60 = 3625132;

	t60 = (x305==(x306/(x307-x308)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x309 = -1;
	volatile uint32_t x312 = UINT32_MAX;
	int32_t t61 = -1;

	t61 = (x309==(x310/(x311-x312)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x313 = INT16_MIN;
	uint16_t x315 = 1U;
	int8_t x316 = INT8_MIN;
	int32_t t62 = -101971284;

	t62 = (x313==(x314/(x315-x316)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x321 = -1;
	uint16_t x322 = 2499U;
	volatile int64_t x323 = -1LL;
	volatile int32_t t63 = -681690624;

	t63 = (x321==(x322/(x323-x324)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x329 = UINT16_MAX;
	int32_t x330 = INT32_MIN;
	int32_t x331 = 0;
	uint32_t x332 = 12153443U;
	volatile int32_t t64 = 12;

	t64 = (x329==(x330/(x331-x332)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x337 = UINT8_MAX;
	volatile uint64_t x338 = UINT64_MAX;
	int32_t x339 = INT32_MIN;
	int8_t x340 = INT8_MIN;
	int32_t t65 = 17559034;

	t65 = (x337==(x338/(x339-x340)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x341 = UINT16_MAX;
	int32_t x343 = 0;
	volatile int32_t t66 = -2160;

	t66 = (x341==(x342/(x343-x344)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x345 = INT32_MIN;
	int8_t x346 = INT8_MIN;
	volatile uint32_t x347 = 277424235U;
	static int32_t x348 = -5341;

	t67 = (x345==(x346/(x347-x348)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x349 = -39;
	uint16_t x350 = UINT16_MAX;
	uint64_t x351 = 188LLU;
	static volatile int32_t t68 = 29;

	t68 = (x349==(x350/(x351-x352)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x358 = 13380;
	int8_t x359 = INT8_MAX;
	uint8_t x360 = UINT8_MAX;

	t69 = (x357==(x358/(x359-x360)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x361 = 181806U;
	volatile int64_t x362 = INT64_MIN;
	static int32_t x363 = INT32_MAX;
	volatile int32_t t70 = 0;

	t70 = (x361==(x362/(x363-x364)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x365 = 0U;
	int16_t x366 = INT16_MIN;
	int32_t x367 = INT32_MIN;
	int64_t x368 = INT64_MIN;

	t71 = (x365==(x366/(x367-x368)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x369 = UINT8_MAX;
	uint32_t x371 = 19702U;
	int16_t x372 = INT16_MIN;
	volatile int32_t t72 = 19466802;

	t72 = (x369==(x370/(x371-x372)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x373 = INT8_MIN;
	int64_t x374 = INT64_MAX;
	volatile int32_t t73 = 7762;

	t73 = (x373==(x374/(x375-x376)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x377 = 6;
	int16_t x378 = -1;
	uint16_t x380 = 27617U;
	int32_t t74 = -3510;

	t74 = (x377==(x378/(x379-x380)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x381 = INT64_MIN;
	int64_t x383 = INT64_MIN;
	static int32_t x384 = INT32_MIN;
	static int32_t t75 = 215596486;

	t75 = (x381==(x382/(x383-x384)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x386 = 86251LL;
	uint16_t x387 = 1880U;
	static volatile uint64_t x388 = 6LLU;
	int32_t t76 = -146748908;

	t76 = (x385==(x386/(x387-x388)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x390 = 14177U;
	uint8_t x391 = 0U;
	int16_t x392 = INT16_MIN;
	volatile int32_t t77 = -289589;

	t77 = (x389==(x390/(x391-x392)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x397 = -93650939625007335LL;
	int16_t x398 = -1;
	int32_t x399 = INT32_MAX;
	uint64_t x400 = UINT64_MAX;
	int32_t t78 = -1;

	t78 = (x397==(x398/(x399-x400)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x403 = INT8_MIN;
	int64_t x404 = -4398609504LL;
	int32_t t79 = -42;

	t79 = (x401==(x402/(x403-x404)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int32_t x405 = -1;
	uint16_t x406 = UINT16_MAX;
	int16_t x407 = INT16_MIN;
	uint64_t x408 = UINT64_MAX;
	volatile int32_t t80 = -1;

	t80 = (x405==(x406/(x407-x408)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x410 = 61U;
	int32_t x412 = -1011074331;
	int32_t t81 = 1;

	t81 = (x409==(x410/(x411-x412)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x414 = 0;
	volatile int64_t x415 = 29832LL;
	volatile int64_t x416 = 47LL;
	volatile int32_t t82 = -101337;

	t82 = (x413==(x414/(x415-x416)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x421 = 11063;
	uint64_t x422 = UINT64_MAX;
	uint32_t x423 = 902455U;
	static int32_t t83 = -62644;

	t83 = (x421==(x422/(x423-x424)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x425 = 1857599U;
	uint64_t x426 = 3987056287349366808LLU;

	t84 = (x425==(x426/(x427-x428)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x429 = 4;
	int8_t x430 = 32;
	volatile int8_t x431 = -9;
	uint8_t x432 = 2U;
	int32_t t85 = -11044;

	t85 = (x429==(x430/(x431-x432)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x434 = INT32_MIN;
	static uint8_t x435 = UINT8_MAX;
	static volatile int32_t t86 = 27224299;

	t86 = (x433==(x434/(x435-x436)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x437 = INT8_MIN;
	uint32_t x438 = 299539353U;
	static volatile int16_t x439 = -1;
	int64_t x440 = -5346835247LL;
	volatile int32_t t87 = 907689;

	t87 = (x437==(x438/(x439-x440)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x441 = -97270586261LL;
	volatile int8_t x442 = 1;
	static int16_t x443 = INT16_MIN;
	uint16_t x444 = 105U;
	int32_t t88 = -1;

	t88 = (x441==(x442/(x443-x444)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x445 = INT64_MIN;
	static uint64_t x446 = 2LLU;
	int32_t x447 = INT32_MAX;
	volatile int32_t t89 = -427423;

	t89 = (x445==(x446/(x447-x448)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x449 = INT64_MIN;
	int16_t x450 = INT16_MIN;
	uint16_t x451 = UINT16_MAX;
	uint32_t x452 = UINT32_MAX;

	t90 = (x449==(x450/(x451-x452)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x454 = INT64_MIN;
	int16_t x455 = INT16_MAX;
	static int8_t x456 = -1;
	int32_t t91 = -938;

	t91 = (x453==(x454/(x455-x456)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x457 = INT8_MIN;
	static int8_t x459 = -1;
	int32_t t92 = 231;

	t92 = (x457==(x458/(x459-x460)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x461 = INT16_MIN;
	static int32_t x464 = -67074775;
	int32_t t93 = 202;

	t93 = (x461==(x462/(x463-x464)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x465 = 438318049U;
	uint32_t x467 = 51885U;
	int32_t x468 = INT32_MIN;
	int32_t t94 = -57848679;

	t94 = (x465==(x466/(x467-x468)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x469 = 294LL;
	int8_t x471 = 7;
	uint8_t x472 = UINT8_MAX;
	volatile int32_t t95 = 71025603;

	t95 = (x469==(x470/(x471-x472)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int8_t x473 = INT8_MAX;
	uint64_t x474 = 801440174924981232LLU;
	int32_t x475 = INT32_MAX;
	volatile int32_t t96 = -4766868;

	t96 = (x473==(x474/(x475-x476)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x477 = INT16_MIN;
	static int16_t x478 = INT16_MIN;
	int16_t x479 = -106;
	int8_t x480 = INT8_MIN;

	t97 = (x477==(x478/(x479-x480)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x481 = -1LL;
	static int32_t x482 = -596;
	int64_t x484 = INT64_MIN;
	volatile int32_t t98 = -11;

	t98 = (x481==(x482/(x483-x484)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x489 = INT32_MAX;
	int64_t x490 = -1756003LL;
	volatile uint16_t x492 = 48U;
	int32_t t99 = 15665764;

	t99 = (x489==(x490/(x491-x492)));

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

