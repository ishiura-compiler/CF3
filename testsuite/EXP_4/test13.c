#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = UINT8_MAX;
uint16_t x5 = 34U;
int8_t x7 = INT8_MIN;
uint64_t t2 = 20063LLU;
int8_t x30 = INT8_MAX;
static int64_t x31 = 645LL;
int8_t x46 = 6;
uint16_t x54 = UINT16_MAX;
static int8_t x61 = INT8_MIN;
int64_t t9 = -122408563847LL;
int32_t x65 = INT32_MIN;
static volatile int16_t x73 = 11586;
static volatile int64_t t11 = 63768941907LL;
static int16_t x77 = -7388;
uint32_t x87 = 77U;
int64_t t14 = -1894LL;
int8_t x92 = -1;
uint64_t t15 = 2168503760720LLU;
volatile int64_t x96 = -1LL;
int8_t x98 = -1;
static volatile int64_t t20 = -3873954446712LL;
int16_t x129 = -3444;
int8_t x138 = -1;
static int8_t x151 = INT8_MIN;
int64_t x154 = 1313053385780389862LL;
static int64_t t28 = 6LL;
uint64_t x164 = UINT64_MAX;
static int16_t x165 = 398;
uint32_t x168 = UINT32_MAX;
static volatile int64_t t32 = -43856537362LL;
uint16_t x180 = UINT16_MAX;
uint16_t x186 = 0U;
uint16_t x192 = UINT16_MAX;
int64_t t40 = -47LL;
int32_t x212 = 659515;
int64_t x222 = INT64_MIN;
int8_t x244 = -1;
static volatile uint32_t t49 = 61446U;
volatile uint64_t t50 = 5082747362561356LLU;
static int16_t x261 = INT16_MIN;
int64_t x269 = 0LL;
volatile int16_t x271 = 18;
volatile int64_t x278 = -1LL;
volatile int32_t x284 = INT32_MIN;
int8_t x286 = INT8_MAX;
int64_t x290 = INT64_MIN;
volatile int16_t x295 = INT16_MIN;
static int32_t x299 = INT32_MIN;
static int16_t x309 = -54;
volatile int32_t t63 = -9020611;
int8_t x348 = INT8_MIN;
int32_t x350 = -1;
volatile int8_t x353 = INT8_MIN;
static int16_t x366 = INT16_MAX;
int8_t x367 = INT8_MAX;
static int64_t t72 = 5LL;
static uint16_t x373 = 427U;
int8_t x376 = 10;
uint16_t x381 = 7096U;
uint64_t x393 = UINT64_MAX;
uint8_t x398 = 0U;
volatile uint32_t x401 = 36U;
int8_t x403 = INT8_MIN;
uint32_t x407 = UINT32_MAX;
static volatile uint64_t t82 = 1473324574LLU;
static uint64_t t83 = 272LLU;
static int8_t x421 = 53;
static volatile int8_t x427 = -1;
static int64_t x435 = 1411363LL;
volatile int64_t t86 = 2144374309677244LL;
static int32_t x438 = 1286;
volatile uint64_t t88 = 24705935981561235LLU;
int16_t x482 = INT16_MIN;
int64_t t94 = -35245569484405LL;
static uint8_t x499 = UINT8_MAX;
uint8_t x505 = 0U;
uint8_t x506 = UINT8_MAX;
static int32_t t97 = 465715;
volatile uint8_t x509 = UINT8_MAX;
static uint64_t x511 = 799163365272LLU;
int8_t x513 = INT8_MAX;
uint32_t x516 = 99U;


void f0(void) {
	int32_t x2 = 574045188;
	int8_t x3 = 21;
	uint32_t x4 = 0U;
	static uint32_t t0 = 235453U;

	t0 = (x1^(x2+(x3+x4)));

	if (t0 != 574045414U) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x6 = INT16_MAX;
	uint16_t x8 = 31968U;
	volatile int32_t t1 = 1396;

	t1 = (x5^(x6+(x7+x8)));

	if (t1 != 64637) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x17 = 37U;
	volatile int32_t x18 = INT32_MAX;
	static uint32_t x19 = UINT32_MAX;
	uint64_t x20 = UINT64_MAX;

	t2 = (x17^(x18+(x19+x20)));

	if (t2 != 6442450904LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x21 = -1;
	uint8_t x22 = 0U;
	static int64_t x23 = -21167868526279LL;
	static uint32_t x24 = 6U;
	volatile int64_t t3 = -22208412030LL;

	t3 = (x21^(x22+(x23+x24)));

	if (t3 != 21167868526272LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x29 = INT32_MIN;
	uint64_t x32 = 1642095671276920262LLU;
	volatile uint64_t t4 = 36LLU;

	t4 = (x29^(x30+(x31+x32)));

	if (t4 != 16804648401012187338LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x33 = 22602953085085LL;
	uint16_t x34 = 10492U;
	int16_t x35 = -1;
	int16_t x36 = INT16_MAX;
	int64_t t5 = -23353851LL;

	t5 = (x33^(x34+(x35+x36)));

	if (t5 != 22602953128039LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x45 = INT8_MAX;
	volatile int16_t x47 = -1693;
	int8_t x48 = -1;
	volatile int32_t t6 = -52;

	t6 = (x45^(x46+(x47+x48)));

	if (t6 != -1769) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x53 = 120826U;
	volatile uint8_t x55 = UINT8_MAX;
	int8_t x56 = INT8_MAX;
	static volatile uint32_t t7 = 12763U;

	t7 = (x53^(x54+(x55+x56)));

	if (t7 != 54919U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x57 = 2U;
	uint8_t x58 = UINT8_MAX;
	volatile uint64_t x59 = 190018279LLU;
	int32_t x60 = -278;
	volatile uint64_t t8 = 18567830261LLU;

	t8 = (x57^(x58+(x59+x60)));

	if (t8 != 190018258LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x62 = INT64_MIN;
	volatile uint32_t x63 = 2686U;
	static uint8_t x64 = UINT8_MAX;

	t9 = (x61^(x62+(x63+x64)));

	if (t9 != 9223372036854772989LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x66 = 2;
	static int8_t x67 = INT8_MAX;
	int32_t x68 = INT32_MIN;
	int32_t t10 = 11;

	t10 = (x65^(x66+(x67+x68)));

	if (t10 != 129) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x74 = INT64_MIN;
	int8_t x75 = 22;
	static uint16_t x76 = 7U;

	t11 = (x73^(x74+(x75+x76)));

	if (t11 != -9223372036854764193LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x78 = INT32_MIN;
	static int32_t x79 = 2299;
	static uint8_t x80 = 0U;
	int32_t t12 = -1;

	t12 = (x77^(x78+(x79+x80)));

	if (t12 != 2147478495) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x81 = 55285U;
	static int8_t x82 = INT8_MAX;
	uint8_t x83 = 14U;
	int8_t x84 = 3;
	uint32_t t13 = 309838455U;

	t13 = (x81^(x82+(x83+x84)));

	if (t13 != 55141U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x85 = INT64_MIN;
	int8_t x86 = 1;
	static int32_t x88 = INT32_MAX;

	t14 = (x85^(x86+(x87+x88)));

	if (t14 != -9223372034707292083LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x89 = 8U;
	int8_t x90 = INT8_MAX;
	uint64_t x91 = 1LLU;

	t15 = (x89^(x90+(x91+x92)));

	if (t15 != 119LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x93 = -704281;
	uint16_t x94 = 1752U;
	uint32_t x95 = 0U;
	volatile int64_t t16 = -1250387630534868989LL;

	t16 = (x93^(x94+(x95+x96)));

	if (t16 != -702928LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x97 = -2;
	int32_t x99 = 1904;
	int16_t x100 = INT16_MIN;
	int32_t t17 = -267565318;

	t17 = (x97^(x98+(x99+x100)));

	if (t17 != 30865) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x101 = INT32_MIN;
	static volatile int16_t x102 = -10536;
	uint16_t x103 = 85U;
	static int16_t x104 = -14558;
	volatile int32_t t18 = -610073;

	t18 = (x101^(x102+(x103+x104)));

	if (t18 != 2147458639) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x105 = 102U;
	uint32_t x106 = 1U;
	int8_t x107 = INT8_MAX;
	uint64_t x108 = 5LLU;
	uint64_t t19 = 1267LLU;

	t19 = (x105^(x106+(x107+x108)));

	if (t19 != 227LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x113 = 30865425LL;
	static uint8_t x114 = 115U;
	static int32_t x115 = 880582109;
	volatile int32_t x116 = -1;

	t20 = (x113^(x114+(x115+x116)));

	if (t20 != 900359774LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x121 = UINT16_MAX;
	int16_t x122 = INT16_MAX;
	uint16_t x123 = 176U;
	volatile int8_t x124 = INT8_MIN;
	static volatile int32_t t21 = -254408593;

	t21 = (x121^(x122+(x123+x124)));

	if (t21 != 32720) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x125 = -1;
	int32_t x126 = INT32_MIN;
	uint16_t x127 = 115U;
	int32_t x128 = 112;
	volatile int32_t t22 = 233954653;

	t22 = (x125^(x126+(x127+x128)));

	if (t22 != 2147483420) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x130 = UINT32_MAX;
	static int32_t x131 = 3;
	volatile uint64_t x132 = 63LLU;
	static uint64_t t23 = 116639733LLU;

	t23 = (x129^(x130+(x131+x132)));

	if (t23 != 18446744069414580941LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x137 = 97U;
	int64_t x139 = 2984716004LL;
	volatile int8_t x140 = 1;
	int64_t t24 = 176742LL;

	t24 = (x137^(x138+(x139+x140)));

	if (t24 != 2984715909LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x141 = -1;
	static int16_t x142 = 1639;
	static uint8_t x143 = UINT8_MAX;
	int16_t x144 = -1;
	volatile int32_t t25 = 53466;

	t25 = (x141^(x142+(x143+x144)));

	if (t25 != -1894) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x145 = INT64_MIN;
	volatile uint64_t x146 = 22018122630320LLU;
	volatile uint16_t x147 = UINT16_MAX;
	int16_t x148 = INT16_MIN;
	volatile uint64_t t26 = 438LLU;

	t26 = (x145^(x146+(x147+x148)));

	if (t26 != 9223394054977438895LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x149 = INT16_MAX;
	int32_t x150 = -2;
	uint8_t x152 = UINT8_MAX;
	int32_t t27 = -1;

	t27 = (x149^(x150+(x151+x152)));

	if (t27 != 32642) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x153 = 3440U;
	volatile uint32_t x155 = UINT32_MAX;
	int16_t x156 = INT16_MIN;

	t28 = (x153^(x154+(x155+x156)));

	if (t28 != 1313053390075325077LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x161 = 103682640735729LLU;
	int8_t x162 = INT8_MIN;
	int16_t x163 = -1;
	uint64_t t29 = 2887404363893LLU;

	t29 = (x161^(x162+(x163+x164)));

	if (t29 != 18446640391068816015LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x166 = UINT32_MAX;
	volatile int8_t x167 = INT8_MIN;
	uint32_t t30 = 148147U;

	t30 = (x165^(x166+(x167+x168)));

	if (t30 != 4294967024U) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x169 = INT16_MIN;
	int64_t x170 = 347542068LL;
	volatile int32_t x171 = INT32_MIN;
	uint16_t x172 = 5056U;
	int64_t t31 = 14872348LL;

	t31 = (x169^(x170+(x171+x172)));

	if (t31 != 1799923188LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x173 = INT16_MIN;
	uint16_t x174 = UINT16_MAX;
	int8_t x175 = INT8_MIN;
	volatile int64_t x176 = 40520345399LL;

	t32 = (x173^(x174+(x175+x176)));

	if (t32 != -40520390986LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x177 = 19831430383181859LL;
	int64_t x178 = 978049LL;
	static volatile int16_t x179 = 177;
	volatile int64_t t33 = 19223380100998LL;

	t33 = (x177^(x178+(x179+x180)));

	if (t33 != 19831430384143634LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x181 = 0U;
	uint64_t x182 = 18150630133221LLU;
	int32_t x183 = 642680546;
	int16_t x184 = 5769;
	volatile uint64_t t34 = 6546296LLU;

	t34 = (x181^(x182+(x183+x184)));

	if (t34 != 18151272819536LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x185 = 108U;
	static int64_t x187 = 229153LL;
	static int8_t x188 = 1;
	int64_t t35 = -12772806888410LL;

	t35 = (x185^(x186+(x187+x188)));

	if (t35 != 229198LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x189 = UINT16_MAX;
	int8_t x190 = 4;
	int16_t x191 = -2510;
	volatile int32_t t36 = 1811;

	t36 = (x189^(x190+(x191+x192)));

	if (t36 != 2506) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x193 = INT16_MIN;
	int32_t x194 = -1;
	volatile int64_t x195 = 3435980LL;
	static int32_t x196 = INT32_MAX;
	volatile int64_t t37 = 9LL;

	t37 = (x193^(x194+(x195+x196)));

	if (t37 != -2150896182LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x197 = INT32_MAX;
	uint8_t x198 = 71U;
	int64_t x199 = -1LL;
	int16_t x200 = 1378;
	int64_t t38 = -970974LL;

	t38 = (x197^(x198+(x199+x200)));

	if (t38 != 2147482199LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x201 = INT32_MAX;
	volatile int64_t x202 = INT64_MIN;
	int64_t x203 = INT64_MAX;
	int32_t x204 = -12384712;
	int64_t t39 = -55LL;

	t39 = (x201^(x202+(x203+x204)));

	if (t39 != -2135098936LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x205 = INT64_MIN;
	int64_t x206 = -181232835803515LL;
	volatile int8_t x207 = INT8_MIN;
	int64_t x208 = INT64_MAX;

	t40 = (x205^(x206+(x207+x208)));

	if (t40 != -181232835803644LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x209 = 23U;
	int32_t x210 = INT32_MIN;
	int64_t x211 = -1LL;
	volatile int64_t t41 = 266603854851057LL;

	t41 = (x209^(x210+(x211+x212)));

	if (t41 != -2146824147LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x217 = INT16_MIN;
	static uint64_t x218 = UINT64_MAX;
	uint8_t x219 = UINT8_MAX;
	uint64_t x220 = UINT64_MAX;
	volatile uint64_t t42 = 205929679LLU;

	t42 = (x217^(x218+(x219+x220)));

	if (t42 != 18446744073709519101LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x221 = 9U;
	uint32_t x223 = 149U;
	uint8_t x224 = UINT8_MAX;
	volatile int64_t t43 = 731LL;

	t43 = (x221^(x222+(x223+x224)));

	if (t43 != -9223372036854775395LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x225 = UINT16_MAX;
	static uint8_t x226 = UINT8_MAX;
	int8_t x227 = INT8_MIN;
	int16_t x228 = INT16_MIN;
	int32_t t44 = 1595;

	t44 = (x225^(x226+(x227+x228)));

	if (t44 != -32896) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x233 = -1709043;
	volatile int8_t x234 = 15;
	int16_t x235 = INT16_MAX;
	int64_t x236 = INT64_MIN;
	int64_t t45 = -11862497401335295LL;

	t45 = (x233^(x234+(x235+x236)));

	if (t45 != 9223372036853033987LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x237 = 391U;
	volatile int32_t x238 = -106305;
	int64_t x239 = INT64_MAX;
	uint8_t x240 = 0U;
	int64_t t46 = -168514305LL;

	t46 = (x237^(x238+(x239+x240)));

	if (t46 != 9223372036854669625LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x241 = INT8_MIN;
	uint64_t x242 = 13047LLU;
	static int16_t x243 = -1;
	volatile uint64_t t47 = 25533LLU;

	t47 = (x241^(x242+(x243+x244)));

	if (t47 != 18446744073709538677LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x245 = UINT8_MAX;
	uint8_t x246 = 10U;
	int8_t x247 = -1;
	uint32_t x248 = 1600U;
	uint32_t t48 = 8U;

	t48 = (x245^(x246+(x247+x248)));

	if (t48 != 1718U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x249 = UINT32_MAX;
	static int32_t x250 = 1801;
	uint8_t x251 = 25U;
	volatile uint8_t x252 = 1U;

	t49 = (x249^(x250+(x251+x252)));

	if (t49 != 4294965468U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x257 = INT16_MAX;
	uint64_t x258 = 527252230654137168LLU;
	uint8_t x259 = UINT8_MAX;
	uint32_t x260 = 1438914651U;

	t50 = (x257^(x258+(x259+x260)));

	if (t50 != 527252232093061973LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x262 = 1;
	volatile int8_t x263 = 0;
	int16_t x264 = -1;
	static volatile int32_t t51 = 12616;

	t51 = (x261^(x262+(x263+x264)));

	if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x265 = 33723172737194884LLU;
	int16_t x266 = INT16_MIN;
	uint64_t x267 = 11LLU;
	static int64_t x268 = -798LL;
	static volatile uint64_t t52 = 3215062835LLU;

	t52 = (x265^(x266+(x267+x268)));

	if (t52 != 18413020900972324713LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x270 = 0;
	static uint16_t x272 = UINT16_MAX;
	int64_t t53 = -7195583187788LL;

	t53 = (x269^(x270+(x271+x272)));

	if (t53 != 65553LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x273 = 542974743409190468LLU;
	int8_t x274 = INT8_MAX;
	uint64_t x275 = UINT64_MAX;
	volatile int8_t x276 = -1;
	volatile uint64_t t54 = 16LLU;

	t54 = (x273^(x274+(x275+x276)));

	if (t54 != 542974743409190457LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x277 = -31;
	int16_t x279 = INT16_MAX;
	int64_t x280 = INT64_MIN;
	volatile int64_t t55 = -3LL;

	t55 = (x277^(x278+(x279+x280)));

	if (t55 != 9223372036854743071LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x281 = 492;
	int32_t x282 = INT32_MIN;
	int64_t x283 = INT64_MAX;
	int64_t t56 = -1LL;

	t56 = (x281^(x282+(x283+x284)));

	if (t56 != 9223372032559808019LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x285 = INT16_MIN;
	int16_t x287 = INT16_MIN;
	static volatile int8_t x288 = INT8_MAX;
	int32_t t57 = -832568466;

	t57 = (x285^(x286+(x287+x288)));

	if (t57 != 254) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x289 = -1;
	static volatile int16_t x291 = -121;
	uint8_t x292 = UINT8_MAX;
	static int64_t t58 = 787491060398701382LL;

	t58 = (x289^(x290+(x291+x292)));

	if (t58 != 9223372036854775673LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x293 = 0;
	static uint8_t x294 = UINT8_MAX;
	static volatile uint32_t x296 = 22289820U;
	uint32_t t59 = 89555901U;

	t59 = (x293^(x294+(x295+x296)));

	if (t59 != 22257307U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x297 = INT64_MIN;
	volatile int32_t x298 = -349183;
	static int32_t x300 = INT32_MAX;
	volatile int64_t t60 = -8203586336222869LL;

	t60 = (x297^(x298+(x299+x300)));

	if (t60 != 9223372036854426624LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x301 = INT32_MIN;
	volatile int16_t x302 = INT16_MIN;
	int16_t x303 = INT16_MIN;
	static uint32_t x304 = 7U;
	uint32_t t61 = 31756439U;

	t61 = (x301^(x302+(x303+x304)));

	if (t61 != 2147418119U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x305 = -1;
	uint16_t x306 = 3U;
	int32_t x307 = -235;
	static uint16_t x308 = 1908U;
	int32_t t62 = 975162562;

	t62 = (x305^(x306+(x307+x308)));

	if (t62 != -1677) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x310 = UINT8_MAX;
	volatile int16_t x311 = INT16_MIN;
	uint8_t x312 = UINT8_MAX;

	t63 = (x309^(x310+(x311+x312)));

	if (t63 != 32308) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x321 = -5;
	static int64_t x322 = -1LL;
	uint32_t x323 = UINT32_MAX;
	uint16_t x324 = UINT16_MAX;
	int64_t t64 = -19462063LL;

	t64 = (x321^(x322+(x323+x324)));

	if (t64 != -65530LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x325 = INT64_MIN;
	int16_t x326 = INT16_MAX;
	int8_t x327 = INT8_MIN;
	int16_t x328 = INT16_MAX;
	int64_t t65 = -11934035748LL;

	t65 = (x325^(x326+(x327+x328)));

	if (t65 != -9223372036854710402LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x333 = -118;
	int64_t x334 = 63LL;
	volatile int64_t x335 = 3316718870LL;
	static int64_t x336 = INT64_MIN;
	static volatile int64_t t66 = -28390754292LL;

	t66 = (x333^(x334+(x335+x336)));

	if (t66 != 9223372033538056927LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x341 = 5;
	static volatile uint64_t x342 = UINT64_MAX;
	static int8_t x343 = INT8_MIN;
	uint64_t x344 = 8868LLU;
	volatile uint64_t t67 = 6LLU;

	t67 = (x341^(x342+(x343+x344)));

	if (t67 != 8742LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x345 = -1;
	int8_t x346 = INT8_MIN;
	int64_t x347 = 134LL;
	volatile int64_t t68 = -178984LL;

	t68 = (x345^(x346+(x347+x348)));

	if (t68 != 121LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint32_t x349 = UINT32_MAX;
	uint32_t x351 = UINT32_MAX;
	volatile int64_t x352 = INT64_MIN;
	volatile int64_t t69 = 1LL;

	t69 = (x349^(x350+(x351+x352)));

	if (t69 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x354 = 600;
	uint64_t x355 = 413453038055906587LLU;
	int8_t x356 = INT8_MIN;
	volatile uint64_t t70 = 192LLU;

	t70 = (x353^(x354+(x355+x356)));

	if (t70 != 18033291035653644659LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x357 = INT64_MIN;
	static int16_t x358 = INT16_MIN;
	static int16_t x359 = INT16_MAX;
	uint8_t x360 = UINT8_MAX;
	int64_t t71 = 641288LL;

	t71 = (x357^(x358+(x359+x360)));

	if (t71 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x365 = UINT8_MAX;
	static int64_t x368 = -423LL;

	t72 = (x365^(x366+(x367+x368)));

	if (t72 != 32296LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x369 = 20LLU;
	int32_t x370 = INT32_MIN;
	int64_t x371 = -1LL;
	int8_t x372 = INT8_MIN;
	static uint64_t t73 = 31129903187348971LLU;

	t73 = (x369^(x370+(x371+x372)));

	if (t73 != 18446744071562067819LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x374 = 8U;
	volatile int8_t x375 = INT8_MAX;
	volatile int32_t t74 = -5858636;

	t74 = (x373^(x374+(x375+x376)));

	if (t74 != 314) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x382 = 52078712574LLU;
	int16_t x383 = 2556;
	uint8_t x384 = UINT8_MAX;
	volatile uint64_t t75 = 138177413813909LLU;

	t75 = (x381^(x382+(x383+x384)));

	if (t75 != 52078721601LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x385 = 1;
	volatile int8_t x386 = -3;
	volatile int8_t x387 = 0;
	int32_t x388 = -323182451;
	volatile int32_t t76 = 219;

	t76 = (x385^(x386+(x387+x388)));

	if (t76 != -323182453) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x394 = INT16_MIN;
	int32_t x395 = -1;
	uint16_t x396 = UINT16_MAX;
	static uint64_t t77 = 1LLU;

	t77 = (x393^(x394+(x395+x396)));

	if (t77 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x397 = INT32_MIN;
	int64_t x399 = 2303418053168077836LL;
	uint64_t x400 = 68943833LLU;
	volatile uint64_t t78 = 1LLU;

	t78 = (x397^(x398+(x399+x400)));

	if (t78 != 16143326022097050597LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x402 = -101LL;
	int64_t x404 = -3154198839848313LL;
	int64_t t79 = 17271662709565LL;

	t79 = (x401^(x402+(x403+x404)));

	if (t79 != -3154198839848570LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x405 = 11U;
	int32_t x406 = INT32_MIN;
	int64_t x408 = 159350527LL;
	static int64_t t80 = -1145517555471059LL;

	t80 = (x405^(x406+(x407+x408)));

	if (t80 != 2306834165LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x409 = INT8_MIN;
	volatile int8_t x410 = 6;
	static uint16_t x411 = 19U;
	int64_t x412 = -436705662493084576LL;
	static volatile int64_t t81 = 0LL;

	t81 = (x409^(x410+(x411+x412)));

	if (t81 != 436705662493084665LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint16_t x413 = 237U;
	static uint64_t x414 = UINT64_MAX;
	static int16_t x415 = -1;
	int16_t x416 = -123;

	t82 = (x413^(x414+(x415+x416)));

	if (t82 != 18446744073709551470LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x417 = UINT64_MAX;
	uint16_t x418 = 1170U;
	volatile int64_t x419 = INT64_MIN;
	int8_t x420 = 32;

	t83 = (x417^(x418+(x419+x420)));

	if (t83 != 9223372036854774605LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x422 = INT8_MIN;
	volatile int8_t x423 = INT8_MIN;
	uint64_t x424 = UINT64_MAX;
	uint64_t t84 = 2504289341228LLU;

	t84 = (x421^(x422+(x423+x424)));

	if (t84 != 18446744073709551306LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x425 = 13375LL;
	volatile int64_t x426 = INT64_MIN;
	uint32_t x428 = 2483U;
	volatile int64_t t85 = 18773232347153LL;

	t85 = (x425^(x426+(x427+x428)));

	if (t85 != -9223372036854760051LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x433 = INT32_MIN;
	volatile int64_t x434 = -1LL;
	static int32_t x436 = 387818059;

	t86 = (x433^(x434+(x435+x436)));

	if (t86 != -1758254227LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x437 = 15125U;
	uint8_t x439 = 2U;
	int16_t x440 = INT16_MIN;
	volatile int32_t t87 = 204;

	t87 = (x437^(x438+(x439+x440)));

	if (t87 != -16867) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x449 = -1LL;
	int8_t x450 = INT8_MIN;
	int16_t x451 = -3515;
	static uint64_t x452 = UINT64_MAX;

	t88 = (x449^(x450+(x451+x452)));

	if (t88 != 3643LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x453 = 277406277U;
	int16_t x454 = INT16_MIN;
	static uint8_t x455 = 49U;
	volatile uint64_t x456 = UINT64_MAX;
	uint64_t t89 = 60345318059LLU;

	t89 = (x453^(x454+(x455+x456)));

	if (t89 != 18446744073432162933LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x465 = -1339;
	int64_t x466 = INT64_MIN;
	volatile int16_t x467 = INT16_MAX;
	uint8_t x468 = 1U;
	volatile int64_t t90 = -13LL;

	t90 = (x465^(x466+(x467+x468)));

	if (t90 != 9223372036854741701LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x477 = 1U;
	uint16_t x478 = 0U;
	int8_t x479 = INT8_MIN;
	uint16_t x480 = 7U;
	int32_t t91 = 0;

	t91 = (x477^(x478+(x479+x480)));

	if (t91 != -122) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x481 = INT8_MIN;
	volatile int32_t x483 = INT32_MIN;
	uint32_t x484 = 13638993U;
	uint32_t t92 = 7180637U;

	t92 = (x481^(x482+(x483+x484)));

	if (t92 != 2133877457U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x485 = INT8_MAX;
	uint8_t x486 = 68U;
	uint64_t x487 = 1983119864LLU;
	int16_t x488 = INT16_MIN;
	uint64_t t93 = 5LLU;

	t93 = (x485^(x486+(x487+x488)));

	if (t93 != 1983087171LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x493 = INT64_MAX;
	int32_t x494 = -423553029;
	static int8_t x495 = -1;
	int8_t x496 = 0;

	t94 = (x493^(x494+(x495+x496)));

	if (t94 != -9223372036431222779LL) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint8_t x497 = 37U;
	uint16_t x498 = 8U;
	int8_t x500 = INT8_MIN;
	volatile int32_t t95 = -286644;

	t95 = (x497^(x498+(x499+x500)));

	if (t95 != 162) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x501 = 2U;
	int32_t x502 = INT32_MIN;
	volatile int16_t x503 = 2;
	static int16_t x504 = -1;
	uint32_t t96 = 50315547U;

	t96 = (x501^(x502+(x503+x504)));

	if (t96 != 2147483651U) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x507 = INT32_MIN;
	uint16_t x508 = 6248U;

	t97 = (x505^(x506+(x507+x508)));

	if (t97 != -2147477145) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x510 = 10U;
	int8_t x512 = 0;
	uint64_t t98 = 5491215687LLU;

	t98 = (x509^(x510+(x511+x512)));

	if (t98 != 799163365213LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x514 = 0U;
	static volatile uint32_t x515 = 1397150U;
	static uint32_t t99 = 150751101U;

	t99 = (x513^(x514+(x515+x516)));

	if (t99 != 1397374U) { NG(); } else { ; }
	
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

