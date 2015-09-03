#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x5 = -1070;
int16_t x7 = -1;
int16_t x8 = -1;
uint64_t x17 = 506001863261LLU;
int8_t x23 = INT8_MAX;
uint32_t x24 = 10439U;
uint32_t t5 = 15737357U;
volatile uint8_t x30 = 48U;
int64_t t6 = 2737392354104915LL;
int32_t x34 = -1;
int16_t x43 = -1;
static int64_t t9 = -208823LL;
volatile uint8_t x54 = 46U;
volatile uint64_t x56 = 7558372009055640LLU;
volatile uint8_t x69 = 0U;
volatile int16_t x72 = -51;
volatile int8_t x74 = INT8_MAX;
int16_t x75 = -878;
volatile int16_t x97 = INT16_MIN;
int16_t x100 = INT16_MAX;
volatile int32_t x104 = -1;
volatile int32_t t21 = -942331651;
volatile uint8_t x105 = 2U;
int32_t x107 = -53888799;
uint16_t x108 = 31U;
uint8_t x119 = UINT8_MAX;
int32_t x122 = 9807965;
static volatile int32_t x140 = 192597271;
uint16_t x142 = 11698U;
uint32_t t30 = 161U;
int8_t x158 = INT8_MIN;
int16_t x159 = 76;
uint16_t x166 = UINT16_MAX;
volatile int64_t x176 = -50LL;
volatile int64_t x191 = INT64_MAX;
int16_t x192 = -1;
volatile int32_t x196 = 5571;
int32_t x197 = 67638;
int32_t x198 = -1;
volatile int32_t x200 = -1;
int8_t x210 = INT8_MAX;
uint64_t x224 = 13633971016746113LLU;
volatile int32_t x233 = -56234939;
int8_t x239 = INT8_MIN;
uint64_t x240 = UINT64_MAX;
int64_t x245 = -1LL;
int64_t x254 = -15500752734632335LL;
volatile int32_t x259 = -1;
int8_t x265 = -1;
uint32_t x267 = UINT32_MAX;
static int32_t t57 = 1619146;
static volatile int64_t x270 = INT64_MIN;
int8_t x272 = INT8_MAX;
volatile int32_t t59 = -3852;
uint16_t x282 = 29U;
static int64_t x283 = INT64_MAX;
uint16_t x284 = 1365U;
uint16_t x285 = 6984U;
static int64_t t62 = -882LL;
static int16_t x289 = INT16_MAX;
volatile int32_t t63 = 26;
static uint8_t x307 = UINT8_MAX;
volatile uint64_t x310 = 1835117471419078LLU;
static uint64_t x318 = 1387486572084LLU;
uint8_t x320 = UINT8_MAX;
uint16_t x325 = UINT16_MAX;
uint64_t x330 = UINT64_MAX;
static volatile int32_t t71 = -14145385;
int64_t t72 = 27708729LL;
int8_t x342 = -1;
int64_t x343 = INT64_MAX;
uint64_t x346 = 146894980276784622LLU;
static uint8_t x360 = UINT8_MAX;
int32_t x363 = -1;
uint32_t x367 = UINT32_MAX;
volatile int64_t x386 = INT64_MAX;
static uint32_t t84 = 145015873U;
static uint8_t x394 = 0U;
int8_t x403 = INT8_MIN;
int8_t x405 = 5;
int16_t x407 = -1;
int8_t x410 = INT8_MAX;
int32_t t89 = -82;
volatile uint64_t x422 = 243LLU;
uint16_t x426 = 118U;
volatile uint64_t t91 = 35677187LLU;
int32_t x431 = INT32_MIN;
int64_t x434 = INT64_MIN;
uint16_t x445 = 0U;
int32_t x449 = INT32_MAX;
int64_t x450 = INT64_MIN;
uint16_t x461 = 3U;
int64_t x463 = -69058542LL;
int64_t x465 = INT64_MIN;


void f0(void) {
	int64_t x1 = -26254139526LL;
	int64_t x2 = -1LL;
	volatile int8_t x3 = -44;
	uint8_t x4 = UINT8_MAX;
	int64_t t0 = -13893LL;

	t0 = (x1+((x2==x3)+x4));

	if (t0 != -26254139271LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x6 = 8452U;
	int32_t t1 = -12890461;

	t1 = (x5+((x6==x7)+x8));

	if (t1 != -1071) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	int64_t x10 = INT64_MIN;
	int8_t x11 = INT8_MIN;
	int8_t x12 = -4;
	int32_t t2 = -504835500;

	t2 = (x9+((x10==x11)+x12));

	if (t2 != -5) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 80U;
	static uint8_t x14 = UINT8_MAX;
	int16_t x15 = -8;
	static volatile int8_t x16 = -10;
	volatile int32_t t3 = 116;

	t3 = (x13+((x14==x15)+x16));

	if (t3 != 70) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x18 = UINT16_MAX;
	uint8_t x19 = UINT8_MAX;
	int64_t x20 = INT64_MIN;
	volatile uint64_t t4 = 1413484327696LLU;

	t4 = (x17+((x18==x19)+x20));

	if (t4 != 9223372542856639069LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = 0;
	int16_t x22 = INT16_MIN;

	t5 = (x21+((x22==x23)+x24));

	if (t5 != 10439U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x29 = 0LL;
	int8_t x31 = INT8_MIN;
	int64_t x32 = -1LL;

	t6 = (x29+((x30==x31)+x32));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = 1117277032862978123LLU;
	int64_t x35 = INT64_MIN;
	int32_t x36 = INT32_MIN;
	uint64_t t7 = 54271861943376291LLU;

	t7 = (x33+((x34==x35)+x36));

	if (t7 != 1117277030715494475LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = -1;
	uint64_t x38 = UINT64_MAX;
	static volatile int16_t x39 = INT16_MAX;
	uint32_t x40 = 139955U;
	static uint32_t t8 = 98752679U;

	t8 = (x37+((x38==x39)+x40));

	if (t8 != 139954U) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x41 = INT64_MIN;
	int8_t x42 = -3;
	static int64_t x44 = INT64_MAX;

	t9 = (x41+((x42==x43)+x44));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MIN;
	uint8_t x46 = UINT8_MAX;
	volatile uint32_t x47 = UINT32_MAX;
	uint8_t x48 = UINT8_MAX;
	static int32_t t10 = 261511;

	t10 = (x45+((x46==x47)+x48));

	if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x53 = 436U;
	uint8_t x55 = 1U;
	volatile uint64_t t11 = 1759151126343322LLU;

	t11 = (x53+((x54==x55)+x56));

	if (t11 != 7558372009056076LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x57 = -1;
	static uint32_t x58 = 812816U;
	volatile int64_t x59 = -1LL;
	static volatile uint16_t x60 = UINT16_MAX;
	int32_t t12 = -112420;

	t12 = (x57+((x58==x59)+x60));

	if (t12 != 65534) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x65 = -265;
	int32_t x66 = -1;
	volatile uint16_t x67 = 1U;
	uint8_t x68 = UINT8_MAX;
	int32_t t13 = -149827227;

	t13 = (x65+((x66==x67)+x68));

	if (t13 != -10) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x70 = INT64_MAX;
	static volatile int64_t x71 = INT64_MIN;
	volatile int32_t t14 = 3;

	t14 = (x69+((x70==x71)+x72));

	if (t14 != -51) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x73 = -1LL;
	int16_t x76 = INT16_MIN;
	volatile int64_t t15 = 15001701434LL;

	t15 = (x73+((x74==x75)+x76));

	if (t15 != -32769LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = INT16_MAX;
	int16_t x78 = 25;
	uint8_t x79 = UINT8_MAX;
	static int32_t x80 = 248;
	int32_t t16 = 1866093;

	t16 = (x77+((x78==x79)+x80));

	if (t16 != 33015) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x85 = -1LL;
	int32_t x86 = -1;
	int32_t x87 = INT32_MAX;
	static volatile int16_t x88 = -1;
	static int64_t t17 = 146636002807313989LL;

	t17 = (x85+((x86==x87)+x88));

	if (t17 != -2LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x89 = 1111054542LLU;
	int8_t x90 = -1;
	volatile int8_t x91 = 9;
	volatile uint32_t x92 = 543U;
	volatile uint64_t t18 = 273316972724779LLU;

	t18 = (x89+((x90==x91)+x92));

	if (t18 != 1111055085LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x93 = INT16_MIN;
	int32_t x94 = -1;
	uint32_t x95 = 96U;
	int8_t x96 = INT8_MIN;
	volatile int32_t t19 = 1461552;

	t19 = (x93+((x94==x95)+x96));

	if (t19 != -32896) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x98 = UINT8_MAX;
	int64_t x99 = 283409568160761106LL;
	volatile int32_t t20 = -71826741;

	t20 = (x97+((x98==x99)+x100));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x101 = -1;
	int8_t x102 = INT8_MIN;
	static int64_t x103 = INT64_MIN;

	t21 = (x101+((x102==x103)+x104));

	if (t21 != -2) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x106 = 0;
	volatile int32_t t22 = -21614;

	t22 = (x105+((x106==x107)+x108));

	if (t22 != 33) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x109 = 416766LLU;
	static uint16_t x110 = 980U;
	static uint64_t x111 = 6785613991LLU;
	static uint32_t x112 = UINT32_MAX;
	static uint64_t t23 = 34446294022756LLU;

	t23 = (x109+((x110==x111)+x112));

	if (t23 != 4295384061LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x117 = 0LL;
	int32_t x118 = 0;
	int8_t x120 = INT8_MIN;
	volatile int64_t t24 = -251388143058005732LL;

	t24 = (x117+((x118==x119)+x120));

	if (t24 != -128LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x121 = -1LL;
	volatile int64_t x123 = INT64_MIN;
	volatile uint8_t x124 = 110U;
	int64_t t25 = -57499LL;

	t25 = (x121+((x122==x123)+x124));

	if (t25 != 109LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x129 = INT32_MIN;
	static uint16_t x130 = 3U;
	int64_t x131 = INT64_MIN;
	int64_t x132 = -134520755566670LL;
	static int64_t t26 = 12129367612262LL;

	t26 = (x129+((x130==x131)+x132));

	if (t26 != -134522903050318LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x133 = UINT8_MAX;
	uint64_t x134 = UINT64_MAX;
	int16_t x135 = -1;
	volatile int32_t x136 = 11957;
	volatile int32_t t27 = 121;

	t27 = (x133+((x134==x135)+x136));

	if (t27 != 12213) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x137 = 5;
	static volatile int16_t x138 = INT16_MIN;
	int32_t x139 = 49;
	static volatile int32_t t28 = -237483044;

	t28 = (x137+((x138==x139)+x140));

	if (t28 != 192597276) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x141 = 0;
	int32_t x143 = INT32_MAX;
	volatile uint32_t x144 = 111U;
	volatile uint32_t t29 = 13090U;

	t29 = (x141+((x142==x143)+x144));

	if (t29 != 111U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x149 = -1;
	volatile int32_t x150 = -1;
	uint64_t x151 = 210847723252013LLU;
	uint32_t x152 = UINT32_MAX;

	t30 = (x149+((x150==x151)+x152));

	if (t30 != 4294967294U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x153 = -1;
	uint32_t x154 = 4212U;
	static uint64_t x155 = 3515592LLU;
	uint16_t x156 = 20U;
	int32_t t31 = 2;

	t31 = (x153+((x154==x155)+x156));

	if (t31 != 19) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x157 = -1;
	static int16_t x160 = INT16_MIN;
	int32_t t32 = -229727;

	t32 = (x157+((x158==x159)+x160));

	if (t32 != -32769) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x161 = INT8_MIN;
	volatile uint32_t x162 = UINT32_MAX;
	int16_t x163 = 73;
	static int64_t x164 = -98591LL;
	int64_t t33 = 40LL;

	t33 = (x161+((x162==x163)+x164));

	if (t33 != -98719LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x165 = UINT16_MAX;
	int32_t x167 = -1;
	volatile uint8_t x168 = 1U;
	int32_t t34 = -18798453;

	t34 = (x165+((x166==x167)+x168));

	if (t34 != 65536) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x169 = UINT32_MAX;
	int8_t x170 = -1;
	int8_t x171 = INT8_MIN;
	uint32_t x172 = UINT32_MAX;
	volatile uint32_t t35 = 437665U;

	t35 = (x169+((x170==x171)+x172));

	if (t35 != 4294967294U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x173 = INT32_MIN;
	uint16_t x174 = UINT16_MAX;
	uint64_t x175 = 127983LLU;
	int64_t t36 = -314151916LL;

	t36 = (x173+((x174==x175)+x176));

	if (t36 != -2147483698LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x177 = -1;
	int8_t x178 = INT8_MIN;
	int8_t x179 = -1;
	int16_t x180 = 1;
	int32_t t37 = 0;

	t37 = (x177+((x178==x179)+x180));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x181 = 29;
	volatile int8_t x182 = -1;
	int8_t x183 = 58;
	static volatile uint32_t x184 = 52U;
	static volatile uint32_t t38 = 32135U;

	t38 = (x181+((x182==x183)+x184));

	if (t38 != 81U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x185 = -1;
	static int32_t x186 = INT32_MIN;
	static int32_t x187 = INT32_MIN;
	uint8_t x188 = 4U;
	int32_t t39 = -3;

	t39 = (x185+((x186==x187)+x188));

	if (t39 != 4) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint8_t x189 = 40U;
	int16_t x190 = INT16_MAX;
	volatile int32_t t40 = 90;

	t40 = (x189+((x190==x191)+x192));

	if (t40 != 39) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x193 = 114089319U;
	static int32_t x194 = -460091204;
	int8_t x195 = INT8_MAX;
	uint32_t t41 = 1U;

	t41 = (x193+((x194==x195)+x196));

	if (t41 != 114094890U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x199 = INT32_MIN;
	int32_t t42 = 29256;

	t42 = (x197+((x198==x199)+x200));

	if (t42 != 67637) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x201 = -1;
	int64_t x202 = 9653822618826LL;
	uint8_t x203 = 7U;
	int32_t x204 = -13109977;
	static volatile int32_t t43 = 16739485;

	t43 = (x201+((x202==x203)+x204));

	if (t43 != -13109978) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x209 = 10;
	int8_t x211 = INT8_MIN;
	static int8_t x212 = -1;
	static volatile int32_t t44 = 633462;

	t44 = (x209+((x210==x211)+x212));

	if (t44 != 9) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x213 = 113U;
	uint8_t x214 = 3U;
	int64_t x215 = INT64_MIN;
	uint64_t x216 = 419LLU;
	volatile uint64_t t45 = 1343759168467LLU;

	t45 = (x213+((x214==x215)+x216));

	if (t45 != 532LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x217 = INT32_MIN;
	int64_t x218 = 1LL;
	int64_t x219 = -40484726650LL;
	volatile int32_t x220 = 1392;
	int32_t t46 = 24;

	t46 = (x217+((x218==x219)+x220));

	if (t46 != -2147482256) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x221 = INT8_MIN;
	int16_t x222 = -8461;
	int16_t x223 = INT16_MIN;
	volatile uint64_t t47 = 7829819995350368507LLU;

	t47 = (x221+((x222==x223)+x224));

	if (t47 != 13633971016745985LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x225 = UINT32_MAX;
	volatile int16_t x226 = -1;
	int32_t x227 = 205;
	volatile int8_t x228 = -18;
	uint32_t t48 = 0U;

	t48 = (x225+((x226==x227)+x228));

	if (t48 != 4294967277U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x234 = 10587U;
	int64_t x235 = INT64_MIN;
	volatile int16_t x236 = INT16_MAX;
	static volatile int32_t t49 = -799628310;

	t49 = (x233+((x234==x235)+x236));

	if (t49 != -56202172) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x237 = 14;
	uint16_t x238 = 1U;
	uint64_t t50 = 1461217LLU;

	t50 = (x237+((x238==x239)+x240));

	if (t50 != 13LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x241 = UINT64_MAX;
	uint8_t x242 = UINT8_MAX;
	uint64_t x243 = 0LLU;
	int8_t x244 = INT8_MAX;
	volatile uint64_t t51 = 38843LLU;

	t51 = (x241+((x242==x243)+x244));

	if (t51 != 126LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x246 = 20399581092LLU;
	volatile uint32_t x247 = 1439492984U;
	int64_t x248 = INT64_MAX;
	int64_t t52 = -1931LL;

	t52 = (x245+((x246==x247)+x248));

	if (t52 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x249 = 2;
	static int16_t x250 = INT16_MIN;
	int64_t x251 = INT64_MAX;
	int8_t x252 = INT8_MAX;
	int32_t t53 = -209;

	t53 = (x249+((x250==x251)+x252));

	if (t53 != 129) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x253 = 347185;
	static uint64_t x255 = UINT64_MAX;
	volatile int8_t x256 = INT8_MIN;
	static volatile int32_t t54 = 1;

	t54 = (x253+((x254==x255)+x256));

	if (t54 != 347057) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x257 = INT8_MAX;
	volatile uint16_t x258 = 271U;
	int64_t x260 = 30LL;
	int64_t t55 = 177981LL;

	t55 = (x257+((x258==x259)+x260));

	if (t55 != 157LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x261 = -6466898854154525LL;
	static volatile int64_t x262 = INT64_MIN;
	volatile uint32_t x263 = 102611352U;
	int16_t x264 = 2;
	static int64_t t56 = 14533091502LL;

	t56 = (x261+((x262==x263)+x264));

	if (t56 != -6466898854154523LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x266 = -1;
	int16_t x268 = -779;

	t57 = (x265+((x266==x267)+x268));

	if (t57 != -779) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x269 = -1;
	volatile uint8_t x271 = UINT8_MAX;
	int32_t t58 = -120;

	t58 = (x269+((x270==x271)+x272));

	if (t58 != 126) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x273 = 46U;
	int32_t x274 = INT32_MIN;
	static int16_t x275 = -1;
	volatile int32_t x276 = INT32_MIN;

	t59 = (x273+((x274==x275)+x276));

	if (t59 != -2147483602) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x277 = -1;
	int8_t x278 = -1;
	static int16_t x279 = INT16_MIN;
	int64_t x280 = -148568298653LL;
	volatile int64_t t60 = -514772098746783199LL;

	t60 = (x277+((x278==x279)+x280));

	if (t60 != -148568298654LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x281 = -291039450LL;
	int64_t t61 = 3301LL;

	t61 = (x281+((x282==x283)+x284));

	if (t61 != -291038085LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x286 = INT16_MIN;
	int32_t x287 = INT32_MIN;
	int64_t x288 = INT64_MIN;

	t62 = (x285+((x286==x287)+x288));

	if (t62 != -9223372036854768824LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x290 = INT8_MAX;
	uint16_t x291 = 859U;
	uint8_t x292 = 41U;

	t63 = (x289+((x290==x291)+x292));

	if (t63 != 32808) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x293 = 10;
	volatile uint8_t x294 = 4U;
	uint16_t x295 = UINT16_MAX;
	uint32_t x296 = UINT32_MAX;
	volatile uint32_t t64 = 25231559U;

	t64 = (x293+((x294==x295)+x296));

	if (t64 != 9U) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x297 = 3714031530LLU;
	uint16_t x298 = 23U;
	uint8_t x299 = 2U;
	int8_t x300 = INT8_MIN;
	static volatile uint64_t t65 = 471542LLU;

	t65 = (x297+((x298==x299)+x300));

	if (t65 != 3714031402LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x305 = 1U;
	int16_t x306 = INT16_MIN;
	static uint16_t x308 = UINT16_MAX;
	volatile int32_t t66 = 228570;

	t66 = (x305+((x306==x307)+x308));

	if (t66 != 65536) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x309 = 1;
	int32_t x311 = -1;
	uint64_t x312 = UINT64_MAX;
	uint64_t t67 = 47517064674LLU;

	t67 = (x309+((x310==x311)+x312));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x313 = INT8_MAX;
	static volatile int64_t x314 = INT64_MIN;
	uint32_t x315 = 1981U;
	static uint32_t x316 = 30084920U;
	volatile uint32_t t68 = 1380685U;

	t68 = (x313+((x314==x315)+x316));

	if (t68 != 30085047U) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x317 = INT8_MIN;
	volatile uint32_t x319 = 326540U;
	volatile int32_t t69 = 862691818;

	t69 = (x317+((x318==x319)+x320));

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x326 = INT32_MAX;
	volatile uint16_t x327 = UINT16_MAX;
	int8_t x328 = 49;
	int32_t t70 = 80;

	t70 = (x325+((x326==x327)+x328));

	if (t70 != 65584) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x329 = 6946;
	volatile int8_t x331 = 1;
	int8_t x332 = INT8_MIN;

	t71 = (x329+((x330==x331)+x332));

	if (t71 != 6818) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x337 = INT64_MIN;
	static volatile uint8_t x338 = 3U;
	uint32_t x339 = 2U;
	static int64_t x340 = 32217949LL;

	t72 = (x337+((x338==x339)+x340));

	if (t72 != -9223372036822557859LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x341 = INT16_MAX;
	int16_t x344 = INT16_MIN;
	volatile int32_t t73 = -6696674;

	t73 = (x341+((x342==x343)+x344));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x345 = UINT32_MAX;
	volatile uint16_t x347 = 20755U;
	volatile int16_t x348 = INT16_MIN;
	volatile uint32_t t74 = 28633592U;

	t74 = (x345+((x346==x347)+x348));

	if (t74 != 4294934527U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x349 = -1LL;
	int64_t x350 = INT64_MIN;
	volatile uint64_t x351 = 466596658900220LLU;
	int8_t x352 = -1;
	int64_t t75 = 16826854920879870LL;

	t75 = (x349+((x350==x351)+x352));

	if (t75 != -2LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x353 = 401045001U;
	int16_t x354 = -1;
	static uint64_t x355 = UINT64_MAX;
	uint16_t x356 = 401U;
	uint32_t t76 = 137671U;

	t76 = (x353+((x354==x355)+x356));

	if (t76 != 401045403U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x357 = 6;
	int32_t x358 = -1;
	int64_t x359 = 36981095826LL;
	int32_t t77 = -2883122;

	t77 = (x357+((x358==x359)+x360));

	if (t77 != 261) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x361 = 11948U;
	static int64_t x362 = -1LL;
	int64_t x364 = INT64_MIN;
	volatile int64_t t78 = -2949105037243840617LL;

	t78 = (x361+((x362==x363)+x364));

	if (t78 != -9223372036854763859LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x365 = UINT16_MAX;
	static volatile int16_t x366 = 596;
	uint32_t x368 = 252U;
	static volatile uint32_t t79 = 1U;

	t79 = (x365+((x366==x367)+x368));

	if (t79 != 65787U) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x369 = INT32_MIN;
	int32_t x370 = INT32_MAX;
	int64_t x371 = INT64_MIN;
	int64_t x372 = 1LL;
	static volatile int64_t t80 = 10962LL;

	t80 = (x369+((x370==x371)+x372));

	if (t80 != -2147483647LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x377 = -1LL;
	static int32_t x378 = INT32_MIN;
	int32_t x379 = INT32_MIN;
	uint64_t x380 = UINT64_MAX;
	volatile uint64_t t81 = UINT64_MAX;

	t81 = (x377+((x378==x379)+x380));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x381 = INT16_MIN;
	static uint8_t x382 = UINT8_MAX;
	uint32_t x383 = 615807U;
	static uint64_t x384 = UINT64_MAX;
	uint64_t t82 = 592099LLU;

	t82 = (x381+((x382==x383)+x384));

	if (t82 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x385 = INT32_MIN;
	static int8_t x387 = 30;
	uint32_t x388 = 27548U;
	volatile uint32_t t83 = 3278905U;

	t83 = (x385+((x386==x387)+x388));

	if (t83 != 2147511196U) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x389 = 11U;
	uint16_t x390 = UINT16_MAX;
	uint64_t x391 = 39513047511LLU;
	int8_t x392 = INT8_MIN;

	t84 = (x389+((x390==x391)+x392));

	if (t84 != 4294967179U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x393 = 9LL;
	volatile int8_t x395 = -1;
	static int32_t x396 = -1;
	int64_t t85 = 31710188LL;

	t85 = (x393+((x394==x395)+x396));

	if (t85 != 8LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x397 = INT16_MIN;
	int8_t x398 = 1;
	static volatile int8_t x399 = 11;
	int8_t x400 = INT8_MIN;
	int32_t t86 = -22;

	t86 = (x397+((x398==x399)+x400));

	if (t86 != -32896) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x401 = INT16_MIN;
	static int16_t x402 = INT16_MIN;
	uint64_t x404 = UINT64_MAX;
	uint64_t t87 = 130972140573LLU;

	t87 = (x401+((x402==x403)+x404));

	if (t87 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x406 = INT64_MIN;
	int8_t x408 = -1;
	int32_t t88 = -641;

	t88 = (x405+((x406==x407)+x408));

	if (t88 != 4) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x409 = -4798;
	static uint32_t x411 = UINT32_MAX;
	static int16_t x412 = INT16_MIN;

	t89 = (x409+((x410==x411)+x412));

	if (t89 != -37566) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x421 = -1;
	static volatile uint8_t x423 = 15U;
	uint8_t x424 = 3U;
	static volatile int32_t t90 = 509763;

	t90 = (x421+((x422==x423)+x424));

	if (t90 != 2) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x425 = INT64_MIN;
	int32_t x427 = INT32_MIN;
	uint64_t x428 = UINT64_MAX;

	t91 = (x425+((x426==x427)+x428));

	if (t91 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x429 = 14137U;
	static volatile int64_t x430 = 146457165327LL;
	volatile int8_t x432 = INT8_MAX;
	int32_t t92 = 4658727;

	t92 = (x429+((x430==x431)+x432));

	if (t92 != 14264) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x433 = 0U;
	static uint8_t x435 = UINT8_MAX;
	uint32_t x436 = 46U;
	uint32_t t93 = 2155451U;

	t93 = (x433+((x434==x435)+x436));

	if (t93 != 46U) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x441 = 219392177974028LLU;
	static volatile int8_t x442 = INT8_MIN;
	int16_t x443 = INT16_MIN;
	volatile uint32_t x444 = 24772U;
	uint64_t t94 = 7524011LLU;

	t94 = (x441+((x442==x443)+x444));

	if (t94 != 219392177998800LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x446 = INT8_MIN;
	uint32_t x447 = UINT32_MAX;
	volatile int16_t x448 = -2;
	int32_t t95 = 159238;

	t95 = (x445+((x446==x447)+x448));

	if (t95 != -2) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint64_t x451 = 497LLU;
	static int8_t x452 = INT8_MIN;
	volatile int32_t t96 = 72034115;

	t96 = (x449+((x450==x451)+x452));

	if (t96 != 2147483519) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x457 = 7;
	uint64_t x458 = UINT64_MAX;
	int8_t x459 = INT8_MAX;
	int8_t x460 = INT8_MIN;
	volatile int32_t t97 = -112301;

	t97 = (x457+((x458==x459)+x460));

	if (t97 != -121) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x462 = 1U;
	volatile int64_t x464 = 148096317LL;
	volatile int64_t t98 = 6618893LL;

	t98 = (x461+((x462==x463)+x464));

	if (t98 != 148096320LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x466 = 1;
	int8_t x467 = INT8_MIN;
	volatile int16_t x468 = INT16_MAX;
	int64_t t99 = -28LL;

	t99 = (x465+((x466==x467)+x468));

	if (t99 != -9223372036854743041LL) { NG(); } else { ; }
	
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

