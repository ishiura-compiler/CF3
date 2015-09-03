#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x7 = -1;
int8_t x18 = INT8_MIN;
static int16_t x19 = -1;
static volatile int16_t x21 = INT16_MIN;
int64_t x24 = 48018707785LL;
volatile int32_t t4 = -20;
uint16_t x30 = 1363U;
volatile int64_t x36 = INT64_MIN;
int32_t x41 = -45326;
int64_t x42 = -1LL;
int64_t x43 = 152LL;
uint8_t x49 = 20U;
uint64_t x51 = UINT64_MAX;
int16_t x54 = INT16_MIN;
int8_t x59 = INT8_MAX;
volatile uint32_t t13 = UINT32_MAX;
uint64_t x66 = 491281585235LLU;
volatile int8_t x68 = INT8_MIN;
static int64_t t15 = INT64_MAX;
int64_t x74 = 11247140LL;
volatile int64_t t16 = 5702194LL;
int64_t x78 = INT64_MIN;
static int8_t x82 = INT8_MIN;
volatile int8_t x84 = INT8_MIN;
int64_t x87 = -1LL;
uint8_t x97 = UINT8_MAX;
int16_t x107 = -177;
int32_t x116 = -7885890;
volatile int64_t t27 = -763432030040685LL;
int8_t x133 = INT8_MIN;
volatile int16_t x139 = INT16_MAX;
uint64_t x142 = UINT64_MAX;
volatile uint64_t x145 = UINT64_MAX;
int8_t x147 = INT8_MIN;
volatile int64_t t34 = -7485895385510125LL;
int16_t x157 = 9743;
uint16_t x158 = 24055U;
volatile uint32_t t36 = 58986503U;
int64_t x164 = 25LL;
int32_t x174 = -10454;
volatile uint8_t x175 = 11U;
volatile int32_t t39 = -34;
volatile int8_t x181 = INT8_MAX;
uint16_t x191 = 1U;
static volatile int64_t t43 = -142041LL;
uint64_t x198 = 27097923727150525LLU;
uint64_t t45 = 957014LLU;
int16_t x207 = -78;
volatile int16_t x208 = INT16_MIN;
uint16_t x209 = UINT16_MAX;
uint64_t x210 = 95704047LLU;
int8_t x212 = INT8_MIN;
int32_t t48 = -8112607;
int8_t x221 = -1;
static int16_t x222 = INT16_MIN;
int32_t x224 = -542;
uint32_t x225 = 3U;
uint32_t t51 = 7149761U;
int8_t x230 = INT8_MIN;
int32_t t52 = -1580589;
uint64_t x233 = UINT64_MAX;
int16_t x235 = INT16_MAX;
static volatile uint64_t t53 = 332354984223LLU;
int8_t x242 = 44;
volatile uint64_t x247 = UINT64_MAX;
int64_t t61 = 820135523491LL;
uint8_t x275 = UINT8_MAX;
int32_t x283 = INT32_MAX;
uint32_t x287 = UINT32_MAX;
int8_t x288 = INT8_MAX;
static uint64_t x289 = 134152890664595LLU;
static uint8_t x294 = UINT8_MAX;
int32_t x296 = INT32_MAX;
uint16_t x298 = UINT16_MAX;
int8_t x299 = INT8_MIN;
volatile int32_t x300 = 16059715;
uint16_t x313 = 12410U;
int16_t x314 = 369;
int16_t x327 = 14432;
uint64_t x330 = 571456195LLU;
uint8_t x331 = 5U;
volatile int64_t x335 = INT64_MIN;
int64_t t77 = -4566613LL;
static uint32_t x342 = 16367409U;
volatile int64_t t79 = -210LL;
uint8_t x349 = UINT8_MAX;
static uint16_t x352 = UINT16_MAX;
static uint32_t x355 = UINT32_MAX;
int64_t t82 = 2408810193245403LL;
int64_t x368 = -101LL;
uint16_t x369 = 478U;
static int8_t x375 = INT8_MIN;
int16_t x376 = INT16_MIN;
static uint32_t x377 = 1897U;
volatile int16_t x384 = -223;
uint64_t t89 = 4100297243LLU;
static int16_t x393 = -911;
volatile uint64_t t92 = 536779015921949LLU;
int32_t x403 = 54886246;
volatile uint64_t x406 = UINT64_MAX;
uint64_t x413 = UINT64_MAX;
int32_t x416 = INT32_MIN;
static uint8_t x419 = 3U;
static int64_t x425 = 225125671350LL;
static volatile uint16_t x427 = UINT16_MAX;
int32_t x428 = -124774;
int64_t t99 = 3804LL;


void f0(void) {
	static int8_t x5 = 9;
	volatile int32_t x6 = -838907191;
	int8_t x8 = -1;
	volatile int32_t t0 = 7;

	t0 = ((x5^x6)|(x7-x8));

	if (t0 != -838907200) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x13 = INT32_MIN;
	int64_t x14 = -250053LL;
	uint8_t x15 = UINT8_MAX;
	uint32_t x16 = 2169U;
	static volatile int64_t t1 = -304056LL;

	t1 = ((x13^x14)|(x15-x16));

	if (t1 != 4294967231LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x17 = -1;
	uint16_t x20 = 1457U;
	int32_t t2 = -114;

	t2 = ((x17^x18)|(x19-x20));

	if (t2 != -1409) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x22 = UINT64_MAX;
	int32_t x23 = 2;
	uint64_t t3 = 58LLU;

	t3 = ((x21^x22)|(x23-x24));

	if (t3 != 18446744025690865663LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = INT8_MIN;
	int32_t x26 = -2;
	static uint8_t x27 = 3U;
	uint8_t x28 = UINT8_MAX;

	t4 = ((x25^x26)|(x27-x28));

	if (t4 != -130) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = -499612;
	static volatile int8_t x31 = -1;
	uint8_t x32 = 2U;
	static int32_t t5 = -1;

	t5 = ((x29^x30)|(x31-x32));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x33 = INT32_MAX;
	int64_t x34 = -1LL;
	int64_t x35 = INT64_MIN;
	volatile int64_t t6 = 1238025565398641272LL;

	t6 = ((x33^x34)|(x35-x36));

	if (t6 != -2147483648LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = -1;
	static int64_t x38 = INT64_MIN;
	volatile int8_t x39 = INT8_MIN;
	volatile int32_t x40 = 422832;
	int64_t t7 = -40LL;

	t7 = ((x37^x38)|(x39-x40));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x44 = -908539461750776LL;
	int64_t t8 = -391201833LL;

	t8 = ((x41^x42)|(x43-x44));

	if (t8 != 908539461759389LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = INT64_MIN;
	uint8_t x46 = 9U;
	static int32_t x47 = 2;
	uint8_t x48 = 113U;
	int64_t t9 = 22616251110243LL;

	t9 = ((x45^x46)|(x47-x48));

	if (t9 != -103LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x50 = 48U;
	static int64_t x52 = 1023980814LL;
	uint64_t t10 = 10017211LLU;

	t10 = ((x49^x50)|(x51-x52));

	if (t10 != 18446744072685570805LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x53 = UINT8_MAX;
	volatile uint16_t x55 = 1288U;
	int64_t x56 = -1LL;
	static int64_t t11 = 343201851647LL;

	t11 = ((x53^x54)|(x55-x56));

	if (t11 != -31233LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint32_t x57 = UINT32_MAX;
	int64_t x58 = INT64_MIN;
	uint16_t x60 = UINT16_MAX;
	int64_t t12 = 696253568LL;

	t12 = ((x57^x58)|(x59-x60));

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x61 = INT32_MIN;
	int32_t x62 = -1;
	int16_t x63 = INT16_MIN;
	uint32_t x64 = 344U;

	t13 = ((x61^x62)|(x63-x64));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = INT16_MIN;
	uint64_t x67 = 81LLU;
	static volatile uint64_t t14 = 1469LLU;

	t14 = ((x65^x66)|(x67-x68));

	if (t14 != 18446743582427944147LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = -1LL;
	int64_t x70 = INT64_MIN;
	static int8_t x71 = 1;
	int32_t x72 = -1;

	t15 = ((x69^x70)|(x71-x72));

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = -1LL;
	volatile int32_t x75 = 9463;
	static uint8_t x76 = 8U;

	t16 = ((x73^x74)|(x75-x76));

	if (t16 != -11246081LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = INT16_MIN;
	volatile int8_t x79 = -30;
	int64_t x80 = -1LL;
	int64_t t17 = -114904951678631LL;

	t17 = ((x77^x78)|(x79-x80));

	if (t17 != -29LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x81 = UINT32_MAX;
	static volatile int16_t x83 = -1;
	uint32_t t18 = 25U;

	t18 = ((x81^x82)|(x83-x84));

	if (t18 != 127U) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x85 = INT64_MIN;
	uint8_t x86 = UINT8_MAX;
	volatile uint16_t x88 = UINT16_MAX;
	volatile int64_t t19 = -234750750133434305LL;

	t19 = ((x85^x86)|(x87-x88));

	if (t19 != -65281LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x93 = 396U;
	static int16_t x94 = -1;
	uint16_t x95 = 1955U;
	uint32_t x96 = 129167304U;
	uint32_t t20 = 180771047U;

	t20 = ((x93^x94)|(x95-x96));

	if (t20 != 4294967291U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x98 = INT64_MAX;
	int8_t x99 = -41;
	int8_t x100 = 12;
	int64_t t21 = -893491812LL;

	t21 = ((x97^x98)|(x99-x100));

	if (t21 != -53LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x101 = UINT32_MAX;
	int16_t x102 = INT16_MAX;
	int8_t x103 = INT8_MIN;
	static int16_t x104 = -1;
	static uint32_t t22 = 8464989U;

	t22 = ((x101^x102)|(x103-x104));

	if (t22 != 4294967169U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x105 = UINT64_MAX;
	static uint32_t x106 = 350U;
	uint8_t x108 = UINT8_MAX;
	volatile uint64_t t23 = 1000LLU;

	t23 = ((x105^x106)|(x107-x108));

	if (t23 != 18446744073709551345LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x109 = UINT32_MAX;
	uint64_t x110 = 16585651410745LLU;
	static int16_t x111 = -2543;
	int8_t x112 = INT8_MIN;
	static volatile uint64_t t24 = 3321047323050LLU;

	t24 = ((x109^x110)|(x111-x112));

	if (t24 != 18446744073709551319LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x113 = 5U;
	uint64_t x114 = 28LLU;
	uint8_t x115 = 0U;
	uint64_t t25 = 18763166133LLU;

	t25 = ((x113^x114)|(x115-x116));

	if (t25 != 7885915LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x117 = UINT32_MAX;
	int8_t x118 = -1;
	int64_t x119 = 5901699487LL;
	uint32_t x120 = 5588491U;
	volatile int64_t t26 = -42062898194343914LL;

	t26 = ((x117^x118)|(x119-x120));

	if (t26 != 5896110996LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint16_t x121 = UINT16_MAX;
	int64_t x122 = INT64_MIN;
	int8_t x123 = INT8_MIN;
	int8_t x124 = INT8_MAX;

	t27 = ((x121^x122)|(x123-x124));

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x125 = 295;
	volatile int32_t x126 = INT32_MAX;
	static int8_t x127 = -41;
	int16_t x128 = 452;
	int32_t t28 = -516461362;

	t28 = ((x125^x126)|(x127-x128));

	if (t28 != -293) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x129 = UINT64_MAX;
	static int16_t x130 = INT16_MIN;
	uint32_t x131 = 3954U;
	uint32_t x132 = UINT32_MAX;
	uint64_t t29 = 16239LLU;

	t29 = ((x129^x130)|(x131-x132));

	if (t29 != 32767LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x134 = INT8_MIN;
	int32_t x135 = 102;
	volatile uint32_t x136 = 1054353U;
	volatile uint32_t t30 = 149U;

	t30 = ((x133^x134)|(x135-x136));

	if (t30 != 4293913045U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x137 = -1LL;
	uint64_t x138 = UINT64_MAX;
	int64_t x140 = -1LL;
	volatile uint64_t t31 = 1756993350LLU;

	t31 = ((x137^x138)|(x139-x140));

	if (t31 != 32768LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x141 = 3746U;
	int16_t x143 = INT16_MAX;
	uint32_t x144 = UINT32_MAX;
	volatile uint64_t t32 = 16851450726LLU;

	t32 = ((x141^x142)|(x143-x144));

	if (t32 != 18446744073709547869LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x146 = INT8_MIN;
	volatile uint64_t x148 = 2840357413437123816LLU;
	uint64_t t33 = 101385186LLU;

	t33 = ((x145^x146)|(x147-x148));

	if (t33 != 15606386660272427775LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x149 = 0U;
	int32_t x150 = 2;
	volatile int32_t x151 = INT32_MIN;
	int64_t x152 = 8194LL;

	t34 = ((x149^x150)|(x151-x152));

	if (t34 != -2147491842LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x153 = -1;
	volatile int32_t x154 = -1;
	volatile int64_t x155 = 7450175224096745LL;
	volatile int64_t x156 = -3043947214LL;
	static volatile int64_t t35 = 103595248923544LL;

	t35 = ((x153^x154)|(x155-x156));

	if (t35 != 7450178268043959LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x159 = 435789U;
	int8_t x160 = INT8_MIN;

	t36 = ((x157^x158)|(x159-x160));

	if (t36 != 458749U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x161 = 5U;
	int8_t x162 = INT8_MAX;
	volatile int8_t x163 = -5;
	int64_t t37 = 213245434247LL;

	t37 = ((x161^x162)|(x163-x164));

	if (t37 != -6LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x169 = UINT32_MAX;
	uint16_t x170 = UINT16_MAX;
	volatile int64_t x171 = INT64_MIN;
	volatile int32_t x172 = INT32_MIN;
	int64_t t38 = -6003658550LL;

	t38 = ((x169^x170)|(x171-x172));

	if (t38 != -9223372032559874048LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x173 = 20;
	int32_t x176 = INT32_MAX;

	t39 = ((x173^x174)|(x175-x176));

	if (t39 != -10434) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x182 = -32226852;
	uint8_t x183 = 0U;
	int32_t x184 = -1;
	int32_t t40 = -999;

	t40 = ((x181^x182)|(x183-x184));

	if (t40 != -32226909) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x185 = -5127;
	static uint16_t x186 = 22U;
	static int64_t x187 = INT64_MAX;
	volatile uint16_t x188 = UINT16_MAX;
	int64_t t41 = -3LL;

	t41 = ((x185^x186)|(x187-x188));

	if (t41 != -5137LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x189 = 40U;
	int64_t x190 = INT64_MIN;
	volatile int8_t x192 = 2;
	volatile int64_t t42 = -2LL;

	t42 = ((x189^x190)|(x191-x192));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x193 = 3;
	int8_t x194 = INT8_MIN;
	int64_t x195 = -3998443876LL;
	static int32_t x196 = -368903073;

	t43 = ((x193^x194)|(x195-x196));

	if (t43 != -65LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x197 = INT8_MIN;
	int32_t x199 = INT32_MIN;
	int64_t x200 = INT64_MIN;
	volatile uint64_t t44 = 18765762LLU;

	t44 = ((x197^x198)|(x199-x200));

	if (t44 != 18446744073610441277LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x201 = INT32_MIN;
	static volatile uint64_t x202 = 2873465176223793LLU;
	int64_t x203 = 283060LL;
	static int8_t x204 = INT8_MIN;

	t45 = ((x201^x202)|(x203-x204));

	if (t45 != 18443870608503501365LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x205 = -1;
	int64_t x206 = -1LL;
	static int64_t t46 = 340231974060LL;

	t46 = ((x205^x206)|(x207-x208));

	if (t46 != 32690LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x211 = 1042874327524499LLU;
	static uint64_t t47 = 1615862LLU;

	t47 = ((x209^x210)|(x211-x212));

	if (t47 != 1042874396765459LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x213 = -114827;
	int8_t x214 = INT8_MAX;
	volatile int16_t x215 = 5;
	static int16_t x216 = INT16_MIN;

	t48 = ((x213^x214)|(x215-x216));

	if (t48 != -82161) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x217 = INT16_MIN;
	int32_t x218 = 11452184;
	int16_t x219 = INT16_MIN;
	uint8_t x220 = 89U;
	int32_t t49 = 18573;

	t49 = ((x217^x218)|(x219-x220));

	if (t49 != -32833) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x223 = UINT64_MAX;
	uint64_t t50 = 79183606848260093LLU;

	t50 = ((x221^x222)|(x223-x224));

	if (t50 != 32767LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x226 = 0U;
	int16_t x227 = INT16_MAX;
	int16_t x228 = INT16_MIN;

	t51 = ((x225^x226)|(x227-x228));

	if (t51 != 65535U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x229 = -11689;
	uint8_t x231 = UINT8_MAX;
	uint16_t x232 = 7418U;

	t52 = ((x229^x230)|(x231-x232));

	if (t52 != -4649) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x234 = INT8_MIN;
	int32_t x236 = -1741;

	t53 = ((x233^x234)|(x235-x236));

	if (t53 != 34559LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x237 = 149657149LL;
	int64_t x238 = INT64_MIN;
	static int16_t x239 = INT16_MIN;
	int32_t x240 = 2501;
	volatile int64_t t54 = -13LL;

	t54 = ((x237^x238)|(x239-x240));

	if (t54 != -2497LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x241 = INT64_MAX;
	uint8_t x243 = UINT8_MAX;
	volatile int8_t x244 = 3;
	static int64_t t55 = INT64_MAX;

	t55 = ((x241^x242)|(x243-x244));

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x245 = -1LL;
	int8_t x246 = INT8_MIN;
	int64_t x248 = -885556178442194934LL;
	uint64_t t56 = 271547898355LLU;

	t56 = ((x245^x246)|(x247-x248));

	if (t56 != 885556178442194943LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x249 = INT32_MAX;
	uint64_t x250 = UINT64_MAX;
	uint8_t x251 = UINT8_MAX;
	static int8_t x252 = -1;
	uint64_t t57 = 808057490LLU;

	t57 = ((x249^x250)|(x251-x252));

	if (t57 != 18446744071562068224LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x253 = INT8_MIN;
	static volatile uint32_t x254 = UINT32_MAX;
	uint64_t x255 = 9817421LLU;
	int8_t x256 = INT8_MAX;
	volatile uint64_t t58 = 45LLU;

	t58 = ((x253^x254)|(x255-x256));

	if (t58 != 9817343LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x257 = 1497;
	int8_t x258 = INT8_MIN;
	static int8_t x259 = -53;
	uint16_t x260 = 1U;
	static int32_t t59 = 65853596;

	t59 = ((x257^x258)|(x259-x260));

	if (t59 != -37) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x261 = -1;
	int8_t x262 = 9;
	static int16_t x263 = INT16_MIN;
	uint32_t x264 = 84U;
	uint32_t t60 = 967U;

	t60 = ((x261^x262)|(x263-x264));

	if (t60 != 4294967294U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x265 = 358;
	static int64_t x266 = -105439644871732LL;
	int16_t x267 = -1;
	int64_t x268 = INT64_MIN;

	t61 = ((x265^x266)|(x267-x268));

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x269 = INT16_MIN;
	int32_t x270 = 3;
	uint16_t x271 = 110U;
	static uint64_t x272 = 0LLU;
	uint64_t t62 = 4470222831954991LLU;

	t62 = ((x269^x270)|(x271-x272));

	if (t62 != 18446744073709518959LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x273 = INT16_MIN;
	static int16_t x274 = INT16_MAX;
	int32_t x276 = INT32_MAX;
	volatile int32_t t63 = 25785;

	t63 = ((x273^x274)|(x275-x276));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x277 = 10496585756435LLU;
	uint8_t x278 = 69U;
	int8_t x279 = INT8_MAX;
	volatile uint32_t x280 = 22699U;
	static uint64_t t64 = 41595347837915639LLU;

	t64 = ((x277^x278)|(x279-x280));

	if (t64 != 10496900067286LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x281 = INT64_MIN;
	int32_t x282 = INT32_MIN;
	int8_t x284 = 2;
	int64_t t65 = -16LL;

	t65 = ((x281^x282)|(x283-x284));

	if (t65 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x285 = 420;
	uint8_t x286 = UINT8_MAX;
	uint32_t t66 = 1773193326U;

	t66 = ((x285^x286)|(x287-x288));

	if (t66 != 4294967259U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x290 = 2744LLU;
	volatile int64_t x291 = -1LL;
	int64_t x292 = INT64_MIN;
	volatile uint64_t t67 = 478687723262452693LLU;

	t67 = ((x289^x290)|(x291-x292));

	if (t67 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x293 = -1;
	volatile uint64_t x295 = UINT64_MAX;
	uint64_t t68 = 1LLU;

	t68 = ((x293^x294)|(x295-x296));

	if (t68 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x297 = UINT8_MAX;
	int32_t t69 = -59535174;

	t69 = ((x297^x298)|(x299-x300));

	if (t69 != -16056515) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x301 = 2002544U;
	int16_t x302 = 1778;
	int8_t x303 = INT8_MIN;
	int16_t x304 = INT16_MIN;
	uint32_t t70 = 113213074U;

	t70 = ((x301^x302)|(x303-x304));

	if (t70 != 2031490U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x305 = 0;
	static int32_t x306 = INT32_MIN;
	int64_t x307 = 6335LL;
	uint16_t x308 = 8U;
	int64_t t71 = -42195068208861LL;

	t71 = ((x305^x306)|(x307-x308));

	if (t71 != -2147477321LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x309 = 14449;
	volatile int32_t x310 = INT32_MIN;
	int16_t x311 = INT16_MIN;
	int32_t x312 = INT32_MIN;
	static volatile int32_t t72 = 1068333231;

	t72 = ((x309^x310)|(x311-x312));

	if (t72 != -18319) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x315 = -1;
	int64_t x316 = 128546LL;
	volatile int64_t t73 = 305773487243LL;

	t73 = ((x313^x314)|(x315-x316));

	if (t73 != -116257LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x317 = 1U;
	int8_t x318 = 1;
	volatile int32_t x319 = 26;
	static int16_t x320 = -1;
	static int32_t t74 = 19595286;

	t74 = ((x317^x318)|(x319-x320));

	if (t74 != 27) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x325 = 43;
	uint8_t x326 = 48U;
	int32_t x328 = 7;
	volatile int32_t t75 = 7737;

	t75 = ((x325^x326)|(x327-x328));

	if (t75 != 14427) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x329 = INT8_MIN;
	int32_t x332 = INT32_MAX;
	volatile uint64_t t76 = 1LLU;

	t76 = ((x329^x330)|(x331-x332));

	if (t76 != 18446744073138095431LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x333 = 13831U;
	int32_t x334 = -1;
	int32_t x336 = -9;

	t77 = ((x333^x334)|(x335-x336));

	if (t77 != -13831LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x341 = -93;
	uint32_t x343 = 1105612259U;
	uint32_t x344 = 1256459716U;
	static volatile uint32_t t78 = 14174U;

	t78 = ((x341^x342)|(x343-x344));

	if (t78 != 4278599839U) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x345 = -1;
	int64_t x346 = -97LL;
	int64_t x347 = -1340804807714759LL;
	static int64_t x348 = 25LL;

	t79 = ((x345^x346)|(x347-x348));

	if (t79 != -1340804807714720LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x350 = INT32_MIN;
	int16_t x351 = 28;
	int32_t t80 = -33500766;

	t80 = ((x349^x350)|(x351-x352));

	if (t80 != -65281) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint32_t x353 = 88U;
	volatile int64_t x354 = INT64_MIN;
	static uint16_t x356 = UINT16_MAX;
	int64_t t81 = 5230LL;

	t81 = ((x353^x354)|(x355-x356));

	if (t81 != -9223372032559873960LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x357 = 1U;
	int64_t x358 = INT64_MIN;
	int64_t x359 = -2895765125567LL;
	static uint8_t x360 = 5U;

	t82 = ((x357^x358)|(x359-x360));

	if (t82 != -2895765125571LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x361 = INT8_MAX;
	static int8_t x362 = INT8_MAX;
	static int8_t x363 = INT8_MAX;
	int32_t x364 = INT32_MAX;
	int32_t t83 = -5496;

	t83 = ((x361^x362)|(x363-x364));

	if (t83 != -2147483520) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x365 = 5117484891LLU;
	int8_t x366 = INT8_MAX;
	int8_t x367 = INT8_MAX;
	volatile uint64_t t84 = 2058718994995965763LLU;

	t84 = ((x365^x366)|(x367-x368));

	if (t84 != 5117485028LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x370 = -31;
	int16_t x371 = INT16_MIN;
	uint16_t x372 = 13U;
	volatile int32_t t85 = 3532556;

	t85 = ((x369^x370)|(x371-x372));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x373 = INT64_MAX;
	int8_t x374 = INT8_MAX;
	int64_t t86 = 24366158242619LL;

	t86 = ((x373^x374)|(x375-x376));

	if (t86 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x378 = 4259;
	uint16_t x379 = UINT16_MAX;
	int16_t x380 = -1;
	uint32_t t87 = 150U;

	t87 = ((x377^x378)|(x379-x380));

	if (t87 != 71626U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x381 = INT64_MIN;
	volatile uint32_t x382 = 32182663U;
	uint8_t x383 = 123U;
	int64_t t88 = -1220808655LL;

	t88 = ((x381^x382)|(x383-x384));

	if (t88 != -9223372036822593057LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x385 = 0;
	uint8_t x386 = 0U;
	uint64_t x387 = 31653959LLU;
	uint32_t x388 = UINT32_MAX;

	t89 = ((x385^x386)|(x387-x388));

	if (t89 != 18446744069446238280LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x389 = INT16_MIN;
	int8_t x390 = 13;
	uint32_t x391 = 371641736U;
	volatile uint8_t x392 = 0U;
	static uint32_t t90 = 11U;

	t90 = ((x389^x390)|(x391-x392));

	if (t90 != 4294954381U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x394 = INT8_MAX;
	uint8_t x395 = 84U;
	volatile int64_t x396 = 4232296090024164726LL;
	volatile int64_t t91 = -856369604008387LL;

	t91 = ((x393^x394)|(x395-x396));

	if (t91 != -290LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x397 = 0U;
	int8_t x398 = INT8_MIN;
	static uint64_t x399 = UINT64_MAX;
	volatile uint8_t x400 = 7U;

	t92 = ((x397^x398)|(x399-x400));

	if (t92 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x401 = INT8_MIN;
	uint16_t x402 = 2484U;
	volatile int8_t x404 = INT8_MIN;
	int32_t t93 = -56;

	t93 = ((x401^x402)|(x403-x404));

	if (t93 != -10) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x405 = 62733780598597204LLU;
	static uint32_t x407 = 4662195U;
	static int8_t x408 = -1;
	uint64_t t94 = 926487763437440050LLU;

	t94 = ((x405^x406)|(x407-x408));

	if (t94 != 18384010293115616191LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x409 = INT64_MIN;
	int64_t x410 = INT64_MAX;
	volatile int16_t x411 = INT16_MIN;
	int8_t x412 = INT8_MIN;
	volatile int64_t t95 = -53578445571974546LL;

	t95 = ((x409^x410)|(x411-x412));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x414 = 21722;
	int32_t x415 = -168007594;
	uint64_t t96 = 3982723LLU;

	t96 = ((x413^x414)|(x415-x416));

	if (t96 != 18446744073709546359LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x417 = -1;
	uint16_t x418 = UINT16_MAX;
	volatile uint8_t x420 = UINT8_MAX;
	int32_t t97 = -1620873;

	t97 = ((x417^x418)|(x419-x420));

	if (t97 != -252) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x421 = 27;
	int32_t x422 = INT32_MIN;
	static int16_t x423 = -9;
	static int64_t x424 = -14251419992LL;
	volatile int64_t t98 = 2086102660361226LL;

	t98 = ((x421^x422)|(x423-x424));

	if (t98 != -780965537LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x426 = -1;

	t99 = ((x425^x426)|(x427-x428));

	if (t99 != -225125662867LL) { NG(); } else { ; }
	
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

