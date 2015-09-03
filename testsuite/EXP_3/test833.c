#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = UINT32_MAX;
int64_t t0 = 57525878LL;
volatile int32_t t2 = 167576;
uint32_t x14 = 27U;
uint8_t x16 = 27U;
int8_t x17 = 11;
static int8_t x22 = INT8_MIN;
int32_t x26 = -1;
int32_t t6 = -9;
volatile int64_t x29 = 25110501046542LL;
int16_t x30 = 4956;
int64_t t7 = -68197645286193789LL;
static int32_t x37 = INT32_MIN;
volatile int32_t x39 = -6453;
static int32_t t9 = -1;
int32_t x42 = INT32_MIN;
int64_t x46 = -1LL;
uint16_t x51 = 9U;
volatile uint16_t x53 = 0U;
uint16_t x62 = 3991U;
int64_t x63 = -1LL;
int16_t x69 = INT16_MIN;
int64_t x78 = INT64_MIN;
volatile int32_t x83 = INT32_MAX;
static volatile uint64_t t21 = 1292299LLU;
int8_t x89 = INT8_MIN;
int32_t x95 = 15924;
int8_t x97 = -1;
int64_t x103 = INT64_MIN;
int64_t x107 = -1LL;
int16_t x109 = 1;
int16_t x112 = INT16_MIN;
static int64_t x134 = INT64_MIN;
uint64_t x144 = 1616761138LLU;
static int32_t x145 = 47502444;
int8_t x148 = INT8_MIN;
static uint16_t x153 = 395U;
int32_t x155 = INT32_MIN;
volatile uint16_t x158 = UINT16_MAX;
uint64_t t39 = 172924071LLU;
int64_t t41 = 22972403110LL;
int64_t t43 = -166420611LL;
int16_t x189 = -1;
int32_t x195 = 1837979;
volatile uint64_t t46 = 4720679385086006634LLU;
int16_t x200 = 8792;
volatile uint64_t t47 = 1083399876699071LLU;
int32_t x202 = 524821;
volatile int64_t t48 = 0LL;
uint8_t x212 = UINT8_MAX;
volatile int8_t x216 = -1;
static int32_t x221 = INT32_MIN;
int64_t x228 = 116765LL;
uint64_t x230 = UINT64_MAX;
volatile uint64_t t54 = 7LLU;
uint64_t x238 = 5495551458LLU;
static volatile uint16_t x241 = 31U;
int64_t x242 = INT64_MAX;
static uint32_t x244 = 30U;
int64_t t57 = 32145238LL;
uint8_t x260 = 14U;
int32_t x266 = INT32_MIN;
static volatile int64_t x267 = INT64_MIN;
static volatile int32_t t62 = -40715751;
int32_t x280 = INT32_MIN;
int8_t x282 = INT8_MAX;
volatile int64_t t66 = 7034LL;
volatile int32_t x289 = INT32_MIN;
static int16_t x294 = INT16_MAX;
int32_t x301 = -27041185;
volatile uint8_t x302 = 5U;
int32_t x303 = -110805;
uint64_t x304 = 907881784773992LLU;
volatile int64_t t71 = -77214806LL;
uint16_t x313 = 6828U;
volatile int8_t x315 = -1;
static volatile uint64_t t75 = 3202078097594017274LLU;
volatile int16_t x333 = -1;
volatile uint32_t x336 = 42654U;
uint64_t x342 = 13934433326356933LLU;
uint32_t x347 = 686463627U;
uint16_t x349 = UINT16_MAX;
volatile int16_t x350 = INT16_MIN;
int16_t x351 = 6598;
int16_t x360 = -1;
volatile int16_t x365 = INT16_MIN;
int8_t x368 = INT8_MIN;
uint32_t x372 = 233433421U;
static int16_t x373 = INT16_MIN;
int16_t x382 = -1;
static volatile int8_t x386 = INT8_MIN;
static int16_t x387 = 710;
volatile uint64_t t91 = 8366951236326172LLU;
static volatile int32_t x391 = INT32_MIN;
int8_t x392 = INT8_MIN;
uint8_t x393 = 2U;
uint64_t x395 = 267518363LLU;
static int8_t x399 = -4;
int64_t x408 = INT64_MIN;
int16_t x417 = INT16_MAX;
int64_t x419 = INT64_MIN;


void f0(void) {
	static int32_t x2 = INT32_MIN;
	static int64_t x3 = INT64_MAX;
	int16_t x4 = INT16_MAX;

	t0 = ((x1^x2)+(x3%x4));

	if (t0 != 2147483654LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MAX;
	volatile int64_t x6 = INT64_MIN;
	int16_t x7 = 246;
	static uint64_t x8 = 1757LLU;
	volatile uint64_t t1 = 7155322096651605LLU;

	t1 = ((x5^x6)+(x7%x8));

	if (t1 != 9223372036854776181LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	volatile uint8_t x10 = 41U;
	uint16_t x11 = 2564U;
	int8_t x12 = INT8_MAX;

	t2 = ((x9^x10)+(x11%x12));

	if (t2 != -18) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	uint64_t x15 = 4624436940969LLU;
	volatile uint64_t t3 = 13548241988908LLU;

	t3 = ((x13^x14)+(x15%x16));

	if (t3 != 4294967271LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = -1639;
	int8_t x19 = 1;
	static volatile int8_t x20 = -1;
	static int32_t t4 = -264079566;

	t4 = ((x17^x18)+(x19%x20));

	if (t4 != -1646) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x21 = 1520774LLU;
	uint32_t x23 = UINT32_MAX;
	volatile int32_t x24 = 231542;
	static uint64_t t5 = 52108489785751160LLU;

	t5 = ((x21^x22)+(x23%x24));

	if (t5 != 18446744073708125463LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x25 = -1067;
	int32_t x27 = -8028;
	static volatile int16_t x28 = -1;

	t6 = ((x25^x26)+(x27%x28));

	if (t6 != 1066) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x31 = INT16_MAX;
	int64_t x32 = 6779712395383282LL;

	t7 = ((x29^x30)+(x31%x32));

	if (t7 != 25110501075537LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = INT8_MIN;
	int16_t x34 = INT16_MIN;
	int32_t x35 = INT32_MAX;
	static int32_t x36 = INT32_MAX;
	volatile int32_t t8 = -3338010;

	t8 = ((x33^x34)+(x35%x36));

	if (t8 != 32640) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x38 = INT16_MAX;
	int32_t x40 = -1;

	t9 = ((x37^x38)+(x39%x40));

	if (t9 != -2147450881) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 23U;
	volatile uint16_t x43 = 1845U;
	uint32_t x44 = 122433523U;
	volatile uint32_t t10 = 74852U;

	t10 = ((x41^x42)+(x43%x44));

	if (t10 != 2147485516U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 14;
	volatile int8_t x47 = -1;
	uint32_t x48 = UINT32_MAX;
	volatile int64_t t11 = 16487LL;

	t11 = ((x45^x46)+(x47%x48));

	if (t11 != -15LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -1LL;
	static int16_t x50 = INT16_MAX;
	int32_t x52 = INT32_MIN;
	int64_t t12 = -72203322106LL;

	t12 = ((x49^x50)+(x51%x52));

	if (t12 != -32759LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x54 = -3;
	volatile uint32_t x55 = UINT32_MAX;
	int64_t x56 = 5764519LL;
	volatile int64_t t13 = 4017321008047LL;

	t13 = ((x53^x54)+(x55%x56));

	if (t13 != 400637LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = UINT16_MAX;
	static int16_t x58 = INT16_MIN;
	uint16_t x59 = 420U;
	static int16_t x60 = INT16_MIN;
	int32_t t14 = 16458020;

	t14 = ((x57^x58)+(x59%x60));

	if (t14 != -32349) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	static int16_t x64 = INT16_MAX;
	static volatile int64_t t15 = 3501034LL;

	t15 = ((x61^x62)+(x63%x64));

	if (t15 != -4074LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -3;
	int64_t x66 = 36197410LL;
	int8_t x67 = INT8_MIN;
	int16_t x68 = INT16_MAX;
	volatile int64_t t16 = -75LL;

	t16 = ((x65^x66)+(x67%x68));

	if (t16 != -36197537LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x70 = -1;
	static uint8_t x71 = 24U;
	int8_t x72 = INT8_MIN;
	volatile int32_t t17 = 0;

	t17 = ((x69^x70)+(x71%x72));

	if (t17 != 32791) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	uint8_t x74 = 0U;
	int32_t x75 = -1030123769;
	int16_t x76 = INT16_MAX;
	int32_t t18 = 57856;

	t18 = ((x73^x74)+(x75%x76));

	if (t18 != -27718) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 18U;
	volatile int32_t x79 = -1;
	int32_t x80 = -1;
	int64_t t19 = 74LL;

	t19 = ((x77^x78)+(x79%x80));

	if (t19 != -9223372036854775790LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	static uint32_t x82 = UINT32_MAX;
	static int32_t x84 = -110;
	uint32_t t20 = 8U;

	t20 = ((x81^x82)+(x83%x84));

	if (t20 != 2147483714U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x85 = INT16_MIN;
	uint64_t x86 = 1026223LLU;
	int8_t x87 = INT8_MIN;
	int8_t x88 = -1;

	t21 = ((x85^x86)+(x87%x88));

	if (t21 != 18446744073708513455LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x90 = 1U;
	volatile uint8_t x91 = UINT8_MAX;
	int64_t x92 = INT64_MIN;
	int64_t t22 = -1LL;

	t22 = ((x89^x90)+(x91%x92));

	if (t22 != 128LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 55U;
	uint32_t x94 = 7U;
	int8_t x96 = -5;
	uint32_t t23 = 62U;

	t23 = ((x93^x94)+(x95%x96));

	if (t23 != 52U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x98 = 1;
	int32_t x99 = -1;
	int16_t x100 = INT16_MIN;
	int32_t t24 = -6271;

	t24 = ((x97^x98)+(x99%x100));

	if (t24 != -3) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x101 = INT32_MAX;
	uint64_t x102 = 273333918448068214LLU;
	static uint16_t x104 = 4343U;
	volatile uint64_t t25 = 17648371LLU;

	t25 = ((x101^x102)+(x103%x104));

	if (t25 != 273333919180805033LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MAX;
	volatile uint16_t x106 = 13U;
	int16_t x108 = 2;
	volatile int64_t t26 = 6704205LL;

	t26 = ((x105^x106)+(x107%x108));

	if (t26 != 2147483633LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x110 = -1;
	volatile int8_t x111 = -46;
	volatile int32_t t27 = 195231033;

	t27 = ((x109^x110)+(x111%x112));

	if (t27 != -48) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x117 = -1;
	uint64_t x118 = UINT64_MAX;
	int64_t x119 = -1LL;
	static volatile uint64_t x120 = 360933112LLU;
	uint64_t t28 = 2231589109LLU;

	t28 = ((x117^x118)+(x119%x120));

	if (t28 != 101678543LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = -1;
	volatile uint16_t x122 = 2326U;
	int64_t x123 = 6516034LL;
	static uint16_t x124 = 1736U;
	volatile int64_t t29 = 407102LL;

	t29 = ((x121^x122)+(x123%x124));

	if (t29 != -1501LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = INT64_MIN;
	int16_t x126 = 1;
	uint16_t x127 = UINT16_MAX;
	static uint16_t x128 = 27983U;
	int64_t t30 = -4243007900686LL;

	t30 = ((x125^x126)+(x127%x128));

	if (t30 != -9223372036854766238LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x129 = 37071;
	static volatile uint16_t x130 = UINT16_MAX;
	uint16_t x131 = UINT16_MAX;
	volatile int32_t x132 = -1;
	int32_t t31 = 1;

	t31 = ((x129^x130)+(x131%x132));

	if (t31 != 28464) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = -7592;
	int8_t x135 = INT8_MIN;
	volatile uint8_t x136 = 1U;
	int64_t t32 = -210520954053826409LL;

	t32 = ((x133^x134)+(x135%x136));

	if (t32 != 9223372036854768216LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x137 = UINT16_MAX;
	volatile int8_t x138 = INT8_MAX;
	volatile int8_t x139 = -1;
	static uint64_t x140 = 18304404822678301LLU;
	static uint64_t t33 = 968241610971148LLU;

	t33 = ((x137^x138)+(x139%x140));

	if (t33 != 14208417272567916LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = 48;
	uint64_t x142 = 6LLU;
	int64_t x143 = -614873030LL;
	static volatile uint64_t t34 = 47766430804161LLU;

	t34 = ((x141^x142)+(x143%x144));

	if (t34 != 577497266LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x146 = 18;
	int64_t x147 = -1LL;
	volatile int64_t t35 = -6257002364LL;

	t35 = ((x145^x146)+(x147%x148));

	if (t35 != 47502461LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x149 = 714775U;
	volatile int8_t x150 = INT8_MIN;
	int8_t x151 = -1;
	volatile int32_t x152 = -1;
	volatile uint32_t t36 = 10156U;

	t36 = ((x149^x150)+(x151%x152));

	if (t36 != 4294252439U) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x154 = 1U;
	static uint16_t x156 = 46U;
	static int32_t t37 = 0;

	t37 = ((x153^x154)+(x155%x156));

	if (t37 != 388) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = -13;
	static int8_t x159 = 13;
	int8_t x160 = 60;
	volatile int32_t t38 = 88457182;

	t38 = ((x157^x158)+(x159%x160));

	if (t38 != -65511) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x161 = -63;
	int32_t x162 = INT32_MIN;
	static volatile int16_t x163 = 7;
	uint64_t x164 = UINT64_MAX;

	t39 = ((x161^x162)+(x163%x164));

	if (t39 != 2147483592LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x169 = UINT8_MAX;
	volatile uint16_t x170 = UINT16_MAX;
	int8_t x171 = INT8_MIN;
	int16_t x172 = -416;
	int32_t t40 = 118;

	t40 = ((x169^x170)+(x171%x172));

	if (t40 != 65152) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x173 = INT64_MIN;
	int8_t x174 = 1;
	int8_t x175 = -1;
	volatile uint32_t x176 = 1462957277U;

	t41 = ((x173^x174)+(x175%x176));

	if (t41 != -9223372035485723066LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x177 = -58;
	int32_t x178 = INT32_MIN;
	int32_t x179 = -1;
	int32_t x180 = INT32_MAX;
	volatile int32_t t42 = 2677417;

	t42 = ((x177^x178)+(x179%x180));

	if (t42 != 2147483589) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x181 = -376533387922565394LL;
	volatile uint32_t x182 = UINT32_MAX;
	int16_t x183 = 1;
	int16_t x184 = -1;

	t43 = ((x181^x182)+(x183%x184));

	if (t43 != -376533391640434415LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x185 = -1;
	static int16_t x186 = -327;
	int32_t x187 = INT32_MIN;
	uint32_t x188 = UINT32_MAX;
	volatile uint32_t t44 = 1442621078U;

	t44 = ((x185^x186)+(x187%x188));

	if (t44 != 2147483974U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x190 = UINT64_MAX;
	static uint16_t x191 = 13256U;
	volatile int8_t x192 = -7;
	static uint64_t t45 = 88LLU;

	t45 = ((x189^x190)+(x191%x192));

	if (t45 != 5LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x193 = 20342U;
	uint64_t x194 = UINT64_MAX;
	uint32_t x196 = 5U;

	t46 = ((x193^x194)+(x195%x196));

	if (t46 != 18446744073709531277LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x197 = INT64_MAX;
	uint64_t x198 = 64975590LLU;
	static uint64_t x199 = UINT64_MAX;

	t47 = ((x197^x198)+(x199%x200));

	if (t47 != 9223372036789801800LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = INT32_MAX;
	int64_t x203 = -343236734LL;
	uint8_t x204 = UINT8_MAX;

	t48 = ((x201^x202)+(x203%x204));

	if (t48 != 2146958722LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x205 = INT16_MAX;
	volatile int32_t x206 = -11;
	static uint8_t x207 = 1U;
	uint64_t x208 = UINT64_MAX;
	uint64_t t49 = 179025802014483LLU;

	t49 = ((x205^x206)+(x207%x208));

	if (t49 != 18446744073709518859LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x209 = INT64_MIN;
	int16_t x210 = 25;
	int8_t x211 = INT8_MAX;
	static volatile int64_t t50 = -57074200875095LL;

	t50 = ((x209^x210)+(x211%x212));

	if (t50 != -9223372036854775656LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x213 = 6938;
	int32_t x214 = INT32_MIN;
	int8_t x215 = INT8_MIN;
	int32_t t51 = -958374;

	t51 = ((x213^x214)+(x215%x216));

	if (t51 != -2147476710) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x222 = INT32_MAX;
	volatile int16_t x223 = INT16_MIN;
	static int64_t x224 = 882605LL;
	static volatile int64_t t52 = -337302341LL;

	t52 = ((x221^x222)+(x223%x224));

	if (t52 != -32769LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x225 = INT8_MAX;
	volatile uint64_t x226 = UINT64_MAX;
	volatile int64_t x227 = -1LL;
	uint64_t t53 = 61253023069LLU;

	t53 = ((x225^x226)+(x227%x228));

	if (t53 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x229 = 1U;
	volatile uint64_t x231 = UINT64_MAX;
	static int16_t x232 = INT16_MIN;

	t54 = ((x229^x230)+(x231%x232));

	if (t54 != 32765LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x237 = UINT8_MAX;
	static volatile int16_t x239 = INT16_MAX;
	int32_t x240 = INT32_MIN;
	uint64_t t55 = 774627LLU;

	t55 = ((x237^x238)+(x239%x240));

	if (t55 != 5495584028LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x243 = INT16_MIN;
	volatile int64_t t56 = 1079406745156050LL;

	t56 = ((x241^x242)+(x243%x244));

	if (t56 != 9223372036854775784LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x245 = UINT8_MAX;
	uint8_t x246 = 1U;
	int8_t x247 = INT8_MIN;
	int64_t x248 = INT64_MIN;

	t57 = ((x245^x246)+(x247%x248));

	if (t57 != 126LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x253 = INT64_MAX;
	volatile int8_t x254 = -1;
	static volatile uint32_t x255 = 88304590U;
	uint8_t x256 = 3U;
	static volatile int64_t t58 = 1381638LL;

	t58 = ((x253^x254)+(x255%x256));

	if (t58 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x257 = UINT16_MAX;
	int64_t x258 = INT64_MIN;
	int64_t x259 = -1LL;
	static volatile int64_t t59 = 1LL;

	t59 = ((x257^x258)+(x259%x260));

	if (t59 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x261 = 937LLU;
	int32_t x262 = INT32_MAX;
	int32_t x263 = INT32_MAX;
	int16_t x264 = INT16_MIN;
	static uint64_t t60 = 324419527325927LLU;

	t60 = ((x261^x262)+(x263%x264));

	if (t60 != 2147515477LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x265 = INT32_MIN;
	int16_t x268 = -1;
	static int64_t t61 = 178904563305LL;

	t61 = ((x265^x266)+(x267%x268));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x269 = -1;
	uint16_t x270 = 192U;
	int32_t x271 = 1;
	volatile int32_t x272 = 15624;

	t62 = ((x269^x270)+(x271%x272));

	if (t62 != -192) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x273 = INT64_MIN;
	static uint8_t x274 = UINT8_MAX;
	volatile int64_t x275 = INT64_MAX;
	int32_t x276 = INT32_MIN;
	volatile int64_t t63 = -3626063057102800747LL;

	t63 = ((x273^x274)+(x275%x276));

	if (t63 != -9223372034707291906LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x277 = -1;
	static uint16_t x278 = 77U;
	int16_t x279 = 16306;
	static volatile int32_t t64 = 789015;

	t64 = ((x277^x278)+(x279%x280));

	if (t64 != 16228) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x281 = -1;
	int32_t x283 = -5521;
	uint64_t x284 = 994614803LLU;
	volatile uint64_t t65 = 6005LLU;

	t65 = ((x281^x282)+(x283%x284));

	if (t65 != 2893718LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x285 = -1;
	int16_t x286 = 1931;
	int64_t x287 = 1478243228222LL;
	int16_t x288 = INT16_MIN;

	t66 = ((x285^x286)+(x287%x288));

	if (t66 != 4786LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x290 = INT8_MAX;
	uint64_t x291 = 97284986867206381LLU;
	volatile uint64_t x292 = UINT64_MAX;
	volatile uint64_t t67 = 11765600LLU;

	t67 = ((x289^x290)+(x291%x292));

	if (t67 != 97284984719722860LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint64_t x293 = 3461109512765621262LLU;
	volatile uint16_t x295 = 91U;
	uint32_t x296 = UINT32_MAX;
	uint64_t t68 = 572951387981911LLU;

	t68 = ((x293^x294)+(x295%x296));

	if (t68 != 3461109512765619276LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x297 = INT16_MIN;
	static uint8_t x298 = 1U;
	volatile uint8_t x299 = UINT8_MAX;
	static int32_t x300 = 118971304;
	volatile int32_t t69 = -488972901;

	t69 = ((x297^x298)+(x299%x300));

	if (t69 != -32512) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t t70 = 5769235059868LLU;

	t70 = ((x301^x302)+(x303%x304));

	if (t70 != 401970644430165LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x305 = 0;
	int8_t x306 = -4;
	int8_t x307 = INT8_MAX;
	int64_t x308 = -4846LL;

	t71 = ((x305^x306)+(x307%x308));

	if (t71 != 123LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x309 = INT64_MIN;
	static int8_t x310 = -1;
	int64_t x311 = -5LL;
	static uint16_t x312 = UINT16_MAX;
	volatile int64_t t72 = -13LL;

	t72 = ((x309^x310)+(x311%x312));

	if (t72 != 9223372036854775802LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x314 = INT16_MIN;
	int32_t x316 = INT32_MIN;
	volatile int32_t t73 = -429479541;

	t73 = ((x313^x314)+(x315%x316));

	if (t73 != -25941) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x317 = 7U;
	volatile int16_t x318 = 41;
	volatile int32_t x319 = INT32_MAX;
	uint8_t x320 = UINT8_MAX;
	int32_t t74 = 4259521;

	t74 = ((x317^x318)+(x319%x320));

	if (t74 != 173) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x321 = INT64_MIN;
	int64_t x322 = INT64_MIN;
	uint64_t x323 = 3559378LLU;
	volatile uint32_t x324 = UINT32_MAX;

	t75 = ((x321^x322)+(x323%x324));

	if (t75 != 3559378LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x325 = 317725730;
	static volatile int16_t x326 = INT16_MIN;
	int64_t x327 = -3300399LL;
	int32_t x328 = INT32_MAX;
	int64_t t76 = -300264922LL;

	t76 = ((x325^x326)+(x327%x328));

	if (t76 != -321044493LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x329 = INT16_MAX;
	static int8_t x330 = 1;
	uint64_t x331 = UINT64_MAX;
	uint64_t x332 = UINT64_MAX;
	volatile uint64_t t77 = 4LLU;

	t77 = ((x329^x330)+(x331%x332));

	if (t77 != 32766LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x334 = INT16_MIN;
	static volatile uint16_t x335 = 945U;
	static uint32_t t78 = 413694266U;

	t78 = ((x333^x334)+(x335%x336));

	if (t78 != 33712U) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x337 = INT32_MIN;
	int8_t x338 = INT8_MIN;
	static uint32_t x339 = UINT32_MAX;
	int16_t x340 = INT16_MIN;
	uint32_t t79 = 0U;

	t79 = ((x337^x338)+(x339%x340));

	if (t79 != 2147516287U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x341 = 52062U;
	static volatile int64_t x343 = INT64_MIN;
	uint8_t x344 = 72U;
	uint64_t t80 = 1LLU;

	t80 = ((x341^x342)+(x343%x344));

	if (t80 != 13934433326371475LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x345 = 0;
	uint16_t x346 = 2U;
	int8_t x348 = 10;
	volatile uint32_t t81 = 3U;

	t81 = ((x345^x346)+(x347%x348));

	if (t81 != 9U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x352 = UINT8_MAX;
	volatile int32_t t82 = -28;

	t82 = ((x349^x350)+(x351%x352));

	if (t82 != -32546) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x353 = 9U;
	int64_t x354 = -1LL;
	uint64_t x355 = UINT64_MAX;
	static int8_t x356 = -55;
	volatile uint64_t t83 = 119367127775949963LLU;

	t83 = ((x353^x354)+(x355%x356));

	if (t83 != 44LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x357 = -8037089LL;
	static int8_t x358 = 5;
	uint32_t x359 = 26U;
	volatile int64_t t84 = 24975192271LL;

	t84 = ((x357^x358)+(x359%x360));

	if (t84 != -8037068LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x361 = UINT32_MAX;
	int32_t x362 = -345017969;
	int8_t x363 = INT8_MIN;
	int64_t x364 = INT64_MIN;
	int64_t t85 = -455441661253642LL;

	t85 = ((x361^x362)+(x363%x364));

	if (t85 != 345017840LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int32_t x366 = -1;
	int64_t x367 = INT64_MAX;
	volatile int64_t t86 = -2112724734122LL;

	t86 = ((x365^x366)+(x367%x368));

	if (t86 != 32894LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x369 = UINT64_MAX;
	int64_t x370 = INT64_MAX;
	int8_t x371 = INT8_MIN;
	static volatile uint64_t t87 = 811LLU;

	t87 = ((x369^x370)+(x371%x372));

	if (t87 != 9223372036947941398LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x374 = 869572792485LLU;
	uint16_t x375 = 30937U;
	int8_t x376 = -1;
	volatile uint64_t t88 = 545096650301895LLU;

	t88 = ((x373^x374)+(x375%x376));

	if (t88 != 18446743204136767653LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x377 = -12;
	int16_t x378 = INT16_MIN;
	int32_t x379 = INT32_MIN;
	int16_t x380 = 161;
	volatile int32_t t89 = -95323204;

	t89 = ((x377^x378)+(x379%x380));

	if (t89 != 32635) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x381 = UINT8_MAX;
	uint32_t x383 = 4635819U;
	uint8_t x384 = UINT8_MAX;
	volatile uint32_t t90 = 5013737U;

	t90 = ((x381^x382)+(x383%x384));

	if (t90 != 4294967214U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x385 = 12U;
	uint64_t x388 = UINT64_MAX;

	t91 = ((x385^x386)+(x387%x388));

	if (t91 != 594LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x389 = INT16_MAX;
	int64_t x390 = INT64_MIN;
	static volatile int64_t t92 = -2562607434LL;

	t92 = ((x389^x390)+(x391%x392));

	if (t92 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x394 = 0LL;
	int64_t x396 = INT64_MIN;
	volatile uint64_t t93 = 37LLU;

	t93 = ((x393^x394)+(x395%x396));

	if (t93 != 267518365LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x397 = INT8_MIN;
	int16_t x398 = 4838;
	uint64_t x400 = 20343LLU;
	static uint64_t t94 = 2711442LLU;

	t94 = ((x397^x398)+(x399%x400));

	if (t94 != 12707LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x401 = -31104602;
	static int8_t x402 = INT8_MAX;
	int32_t x403 = -1;
	static int32_t x404 = INT32_MAX;
	int32_t t95 = 74151;

	t95 = ((x401^x402)+(x403%x404));

	if (t95 != -31104552) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x405 = INT64_MIN;
	int64_t x406 = -718951935289730LL;
	static int8_t x407 = 20;
	volatile int64_t t96 = 766472LL;

	t96 = ((x405^x406)+(x407%x408));

	if (t96 != 9222653084919486098LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x409 = -4492379852LL;
	static int64_t x410 = -6425175842264LL;
	static int8_t x411 = INT8_MAX;
	static int64_t x412 = -1LL;
	int64_t t97 = 270550805LL;

	t97 = ((x409^x410)+(x411%x412));

	if (t97 != 6420734319388LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x418 = INT64_MIN;
	static uint16_t x420 = 15U;
	volatile int64_t t98 = 4LL;

	t98 = ((x417^x418)+(x419%x420));

	if (t98 != -9223372036854743049LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x425 = 3;
	int64_t x426 = 3086130LL;
	static volatile int64_t x427 = INT64_MIN;
	static int32_t x428 = -1;
	int64_t t99 = 31607946359060584LL;

	t99 = ((x425^x426)+(x427%x428));

	if (t99 != 3086129LL) { NG(); } else { ; }
	
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

