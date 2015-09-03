#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint8_t x4 = UINT8_MAX;
int64_t x20 = INT64_MIN;
uint64_t t4 = 12LLU;
volatile int16_t x32 = -4;
volatile int32_t t7 = -987;
static volatile uint16_t x34 = 61U;
uint64_t x35 = 141092590708LLU;
volatile uint64_t t8 = 100167404LLU;
uint64_t x38 = 0LLU;
static uint64_t t9 = 5LLU;
static int32_t x49 = INT32_MIN;
uint64_t t12 = 3846324LLU;
volatile int64_t x53 = -31215LL;
uint8_t x57 = 60U;
volatile uint64_t x60 = 7866185726633338LLU;
uint64_t t14 = 11LLU;
int32_t x67 = -1;
static int32_t x69 = -1;
volatile uint64_t x70 = 2960588667LLU;
int32_t x71 = INT32_MIN;
uint64_t x75 = 34021847233LLU;
static int16_t x88 = 37;
uint64_t x98 = 228322135759443372LLU;
uint8_t x104 = UINT8_MAX;
volatile int32_t x113 = 324528;
int32_t x114 = INT32_MIN;
volatile int8_t x116 = -1;
int8_t x122 = INT8_MIN;
int16_t x123 = INT16_MIN;
int8_t x135 = -1;
uint64_t x143 = UINT64_MAX;
uint8_t x146 = 6U;
int8_t x158 = INT8_MIN;
volatile uint16_t x159 = UINT16_MAX;
static int64_t x161 = -3172042LL;
int32_t x162 = -1;
int16_t x168 = -1;
int32_t x173 = INT32_MAX;
volatile int64_t t39 = -762721376008444LL;
static int32_t x180 = -1398;
int16_t x189 = INT16_MIN;
uint8_t x190 = 4U;
uint64_t x192 = 221028472165582481LLU;
int8_t x195 = INT8_MIN;
int32_t x200 = INT32_MIN;
int64_t x206 = -7949458472LL;
volatile int64_t t47 = -51LL;
static volatile int16_t x223 = INT16_MIN;
int64_t t51 = -207684587739446253LL;
static uint64_t x225 = 3LLU;
static int32_t x226 = 13265951;
volatile int8_t x227 = INT8_MIN;
volatile int64_t t53 = 1526628453455559LL;
uint32_t x233 = 241056U;
volatile int8_t x235 = -1;
int32_t x236 = 1;
int16_t x242 = INT16_MIN;
int16_t x243 = 479;
static int64_t x250 = INT64_MIN;
int8_t x251 = INT8_MIN;
int32_t x268 = -1;
uint32_t x271 = 1U;
uint32_t x272 = 81U;
volatile int32_t x275 = INT32_MIN;
uint64_t x280 = 122434911810LLU;
uint16_t x289 = 25873U;
int8_t x297 = INT8_MIN;
static uint64_t x298 = 73479237LLU;
uint64_t x303 = UINT64_MAX;
uint8_t x318 = 9U;
int32_t t75 = 39691;
int8_t x330 = 1;
uint16_t x331 = 0U;
uint32_t x333 = UINT32_MAX;
int32_t x334 = -1;
static uint32_t x339 = 26590U;
uint64_t x342 = UINT64_MAX;
static int32_t x344 = INT32_MIN;
int16_t x346 = 1;
int16_t x350 = INT16_MIN;
int64_t x356 = 18990930852440LL;
volatile int64_t t84 = -24282LL;
int32_t x361 = INT32_MIN;
int16_t x370 = INT16_MIN;
int16_t x372 = INT16_MIN;
int64_t t88 = -139289530LL;
uint16_t x380 = 4151U;
volatile int32_t x392 = INT32_MAX;
static uint64_t x393 = 207783065545064LLU;
volatile int16_t x395 = -17;
uint64_t x409 = UINT64_MAX;
static volatile uint64_t t95 = 47426LLU;
static volatile uint8_t x414 = 2U;
static volatile uint64_t t96 = 15132610081LLU;
volatile int64_t t97 = 14LL;
int64_t x424 = INT64_MIN;
int8_t x425 = -1;


void f0(void) {
	int16_t x1 = INT16_MAX;
	int32_t x2 = INT32_MIN;
	uint16_t x3 = 15U;
	volatile int32_t t0 = -786;

	t0 = (x1+((x2^x3)%x4));

	if (t0 != 32654) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 1U;
	int32_t x6 = INT32_MIN;
	int16_t x7 = INT16_MIN;
	volatile uint32_t x8 = 16U;
	volatile uint32_t t1 = 3825U;

	t1 = (x5+((x6^x7)%x8));

	if (t1 != 1U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	uint32_t x10 = UINT32_MAX;
	volatile int32_t x11 = INT32_MIN;
	uint8_t x12 = UINT8_MAX;
	volatile uint32_t t2 = UINT32_MAX;

	t2 = (x9+((x10^x11)%x12));

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 3136LL;
	int32_t x14 = 448925262;
	static int32_t x15 = INT32_MIN;
	uint64_t x16 = 112LLU;
	uint64_t t3 = 354195021751300LLU;

	t3 = (x13+((x14^x15)%x16));

	if (t3 != 3166LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	static uint64_t x18 = 132623189760800393LLU;
	uint8_t x19 = 21U;

	t4 = (x17+((x18^x19)%x20));

	if (t4 != 9355995226615576220LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -31;
	static volatile int32_t x22 = INT32_MIN;
	int32_t x23 = -1170;
	static volatile int16_t x24 = 1709;
	volatile int32_t t5 = 132044;

	t5 = (x21+((x22^x23)%x24));

	if (t5 != 899) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	static int32_t x26 = INT32_MIN;
	volatile uint64_t x27 = 1393322649LLU;
	static uint16_t x28 = 138U;
	volatile uint64_t t6 = 28462LLU;

	t6 = (x25+((x26^x27)%x28));

	if (t6 != 18446744073709518931LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	volatile int8_t x30 = -2;
	int16_t x31 = INT16_MIN;

	t7 = (x29+((x30^x31)%x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x33 = UINT8_MAX;
	volatile int16_t x36 = -1;

	t8 = (x33+((x34^x35)%x36));

	if (t8 != 141092590920LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = UINT8_MAX;
	int32_t x39 = INT32_MIN;
	int32_t x40 = -10749254;

	t9 = (x37+((x38^x39)%x40));

	if (t9 != 18446744071562068223LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	uint8_t x42 = 11U;
	int8_t x43 = 0;
	static int64_t x44 = 1075790808902982LL;
	int64_t t10 = -2716314233664LL;

	t10 = (x41+((x42^x43)%x44));

	if (t10 != -2147483637LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	static volatile uint64_t x46 = UINT64_MAX;
	volatile int32_t x47 = -66478835;
	uint64_t x48 = UINT64_MAX;
	volatile uint64_t t11 = 16LLU;

	t11 = (x45+((x46^x47)%x48));

	if (t11 != 2213962481LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x50 = UINT64_MAX;
	static int16_t x51 = 7437;
	int16_t x52 = -4;

	t12 = (x49+((x50^x51)%x52));

	if (t12 != 18446744071562060530LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = INT16_MAX;
	static int8_t x55 = -1;
	int32_t x56 = -9613;
	int64_t t13 = -1LL;

	t13 = (x53+((x54^x55)%x56));

	if (t13 != -35144LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = -1;
	int32_t x59 = INT32_MIN;

	t14 = (x57+((x58^x59)%x60));

	if (t14 != 2147483707LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x65 = 3405098LL;
	uint64_t x66 = UINT64_MAX;
	int64_t x68 = INT64_MAX;
	static uint64_t t15 = 2358995330225LLU;

	t15 = (x65+((x66^x67)%x68));

	if (t15 != 3405098LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x72 = 8852523188LLU;
	static uint64_t t16 = 300675097837262LLU;

	t16 = (x69+((x70^x71)%x72));

	if (t16 != 7197339270LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x73 = UINT16_MAX;
	int32_t x74 = INT32_MIN;
	int64_t x76 = INT64_MIN;
	volatile uint64_t t17 = 2164216751600993321LLU;

	t17 = (x73+((x74^x75)%x76));

	if (t17 != 9223372004304695488LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = 51789528950LL;
	static uint8_t x78 = 2U;
	int8_t x79 = 0;
	int64_t x80 = INT64_MIN;
	volatile int64_t t18 = -34894805938316209LL;

	t18 = (x77+((x78^x79)%x80));

	if (t18 != 51789528952LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x81 = UINT16_MAX;
	uint8_t x82 = UINT8_MAX;
	static int8_t x83 = -5;
	volatile int16_t x84 = INT16_MIN;
	volatile int32_t t19 = 59;

	t19 = (x81+((x82^x83)%x84));

	if (t19 != 65283) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = 1488240934223LL;
	int64_t x86 = -869302222761059548LL;
	volatile int64_t x87 = -976275735073482604LL;
	static volatile int64_t t20 = -178854368LL;

	t20 = (x85+((x86^x87)%x88));

	if (t20 != 1488240934249LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = INT32_MIN;
	int64_t x90 = -3131248993994LL;
	static int64_t x91 = 141155982205285LL;
	uint16_t x92 = 16U;
	volatile int64_t t21 = -22528728357LL;

	t21 = (x89+((x90^x91)%x92));

	if (t21 != -2147483661LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x93 = UINT8_MAX;
	uint8_t x94 = UINT8_MAX;
	volatile int16_t x95 = INT16_MIN;
	volatile int8_t x96 = INT8_MAX;
	int32_t t22 = 166516786;

	t22 = (x93+((x94^x95)%x96));

	if (t22 != 254) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x97 = 114519590736LLU;
	volatile int64_t x99 = -325086367965725LL;
	static int64_t x100 = -153LL;
	static volatile uint64_t t23 = 62LLU;

	t23 = (x97+((x98^x99)%x100));

	if (t23 != 18218733583880621983LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint64_t x101 = 108341LLU;
	int8_t x102 = INT8_MAX;
	int16_t x103 = INT16_MAX;
	uint64_t t24 = 2LLU;

	t24 = (x101+((x102^x103)%x104));

	if (t24 != 108341LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x105 = INT8_MIN;
	uint16_t x106 = 6U;
	volatile uint16_t x107 = 414U;
	uint32_t x108 = UINT32_MAX;
	volatile uint32_t t25 = 1063559462U;

	t25 = (x105+((x106^x107)%x108));

	if (t25 != 280U) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x115 = 576U;
	volatile uint32_t t26 = 7136147U;

	t26 = (x113+((x114^x115)%x116));

	if (t26 != 2147808752U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = -255;
	int64_t x118 = INT64_MIN;
	int32_t x119 = 182;
	uint16_t x120 = UINT16_MAX;
	int64_t t27 = 961114920553269LL;

	t27 = (x117+((x118^x119)%x120));

	if (t27 != -32841LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x121 = 2055490013247946LLU;
	volatile int32_t x124 = 126785383;
	volatile uint64_t t28 = 56436468533063877LLU;

	t28 = (x121+((x122^x123)%x124));

	if (t28 != 2055490013280586LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x133 = -1LL;
	static uint8_t x134 = 27U;
	static int64_t x136 = INT64_MAX;
	volatile int64_t t29 = 272387918801615LL;

	t29 = (x133+((x134^x135)%x136));

	if (t29 != -29LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x137 = INT16_MIN;
	static volatile int32_t x138 = -1;
	int8_t x139 = -1;
	volatile int16_t x140 = -1;
	volatile int32_t t30 = -168316;

	t30 = (x137+((x138^x139)%x140));

	if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x141 = 0U;
	int8_t x142 = INT8_MIN;
	int16_t x144 = 3;
	uint64_t t31 = 33534878LLU;

	t31 = (x141+((x142^x143)%x144));

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x145 = INT64_MIN;
	int16_t x147 = INT16_MAX;
	int16_t x148 = INT16_MIN;
	int64_t t32 = 25066148558642862LL;

	t32 = (x145+((x146^x147)%x148));

	if (t32 != -9223372036854743047LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x149 = INT8_MIN;
	uint64_t x150 = UINT64_MAX;
	static volatile int32_t x151 = 53809739;
	uint16_t x152 = 307U;
	volatile uint64_t t33 = 4LLU;

	t33 = (x149+((x150^x151)%x152));

	if (t33 != 18446744073709551577LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x153 = -1;
	static volatile uint64_t x154 = 122845071541688LLU;
	static uint16_t x155 = 197U;
	int32_t x156 = INT32_MIN;
	volatile uint64_t t34 = 9100036077441LLU;

	t34 = (x153+((x154^x155)%x156));

	if (t34 != 122845071541628LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x157 = INT16_MIN;
	int64_t x160 = INT64_MIN;
	volatile int64_t t35 = -84008297939343LL;

	t35 = (x157+((x158^x159)%x160));

	if (t35 != -98177LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x163 = INT16_MAX;
	uint8_t x164 = 1U;
	int64_t t36 = 58160130729619470LL;

	t36 = (x161+((x162^x163)%x164));

	if (t36 != -3172042LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x165 = INT64_MIN;
	static uint64_t x166 = 10665008178582074LLU;
	int8_t x167 = -1;
	uint64_t t37 = 4560LLU;

	t37 = (x165+((x166^x167)%x168));

	if (t37 != 9212707028676193733LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = INT16_MAX;
	int8_t x170 = INT8_MIN;
	int64_t x171 = INT64_MAX;
	static uint32_t x172 = UINT32_MAX;
	volatile int64_t t38 = 1LL;

	t38 = (x169+((x170^x171)%x172));

	if (t38 != -2147450754LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x174 = INT64_MIN;
	int16_t x175 = INT16_MIN;
	volatile int64_t x176 = 779413616893131912LL;

	t39 = (x173+((x174^x175)%x176));

	if (t39 != 649822253177775655LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x177 = INT16_MIN;
	static uint8_t x178 = UINT8_MAX;
	uint32_t x179 = 8306633U;
	volatile uint32_t t40 = 4836U;

	t40 = (x177+((x178^x179)%x180));

	if (t40 != 8273718U) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x181 = 27U;
	int8_t x182 = INT8_MIN;
	volatile uint8_t x183 = UINT8_MAX;
	uint8_t x184 = UINT8_MAX;
	int32_t t41 = -110;

	t41 = (x181+((x182^x183)%x184));

	if (t41 != -102) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x185 = 502118558829023357LLU;
	static int8_t x186 = -1;
	volatile int32_t x187 = INT32_MIN;
	volatile uint32_t x188 = 117046U;
	volatile uint64_t t42 = 60772606206724447LLU;

	t42 = (x185+((x186^x187)%x188));

	if (t42 != 502118558829064042LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x191 = 12U;
	static volatile uint64_t t43 = 67817242548924975LLU;

	t43 = (x189+((x190^x191)%x192));

	if (t43 != 18446744073709518856LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x193 = INT8_MAX;
	int32_t x194 = INT32_MIN;
	int64_t x196 = -1LL;
	volatile int64_t t44 = -224LL;

	t44 = (x193+((x194^x195)%x196));

	if (t44 != 127LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x197 = INT32_MIN;
	volatile int64_t x198 = INT64_MAX;
	static volatile int16_t x199 = -1;
	int64_t t45 = -4LL;

	t45 = (x197+((x198^x199)%x200));

	if (t45 != -2147483648LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x201 = INT64_MAX;
	static uint8_t x202 = UINT8_MAX;
	static volatile int64_t x203 = INT64_MIN;
	int8_t x204 = -1;
	int64_t t46 = INT64_MAX;

	t46 = (x201+((x202^x203)%x204));

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x205 = UINT8_MAX;
	int64_t x207 = INT64_MAX;
	int8_t x208 = INT8_MIN;

	t47 = (x205+((x206^x207)%x208));

	if (t47 != 166LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x209 = -1LL;
	uint16_t x210 = 1U;
	volatile int32_t x211 = -1;
	uint8_t x212 = 4U;
	volatile int64_t t48 = -4120358LL;

	t48 = (x209+((x210^x211)%x212));

	if (t48 != -3LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x213 = INT64_MIN;
	uint16_t x214 = 2987U;
	int64_t x215 = INT64_MAX;
	uint64_t x216 = UINT64_MAX;
	uint64_t t49 = 338125348050LLU;

	t49 = (x213+((x214^x215)%x216));

	if (t49 != 18446744073709548628LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x217 = INT8_MIN;
	static volatile int64_t x218 = 1381407410659LL;
	int16_t x219 = INT16_MAX;
	uint32_t x220 = 3U;
	volatile int64_t t50 = 516359LL;

	t50 = (x217+((x218^x219)%x220));

	if (t50 != -126LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x221 = 2;
	uint8_t x222 = UINT8_MAX;
	int64_t x224 = 942276233548384LL;

	t51 = (x221+((x222^x223)%x224));

	if (t51 != -32511LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x228 = INT8_MIN;
	uint64_t t52 = 2344170687LLU;

	t52 = (x225+((x226^x227)%x228));

	if (t52 != 18446744073709551522LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x229 = -201586501040523LL;
	uint32_t x230 = 16049664U;
	uint32_t x231 = 152453873U;
	int64_t x232 = INT64_MIN;

	t53 = (x229+((x230^x231)%x232));

	if (t53 != -201586335192218LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x234 = 315U;
	volatile uint32_t t54 = 27675776U;

	t54 = (x233+((x234^x235)%x236));

	if (t54 != 241056U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x237 = 522436U;
	int32_t x238 = INT32_MIN;
	static uint64_t x239 = 12794126438LLU;
	int16_t x240 = INT16_MIN;
	uint64_t t55 = 47539266284005LLU;

	t55 = (x237+((x238^x239)%x240));

	if (t55 != 18446744062881880362LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x241 = -150248;
	uint16_t x244 = UINT16_MAX;
	int32_t t56 = -12;

	t56 = (x241+((x242^x243)%x244));

	if (t56 != -182537) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x245 = UINT32_MAX;
	int64_t x246 = 235LL;
	static volatile uint16_t x247 = UINT16_MAX;
	int32_t x248 = INT32_MIN;
	int64_t t57 = 60LL;

	t57 = (x245+((x246^x247)%x248));

	if (t57 != 4295032595LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x249 = -129028255;
	uint32_t x252 = 174U;
	volatile int64_t t58 = 1LL;

	t58 = (x249+((x250^x251)%x252));

	if (t58 != -129028255LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x253 = 13003363883LL;
	int64_t x254 = INT64_MIN;
	int64_t x255 = -79947438LL;
	uint64_t x256 = UINT64_MAX;
	volatile uint64_t t59 = 1779389164445443166LLU;

	t59 = (x253+((x254^x255)%x256));

	if (t59 != 9223372049778192253LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x257 = INT32_MAX;
	int64_t x258 = 440014LL;
	uint16_t x259 = 60U;
	volatile int16_t x260 = INT16_MIN;
	int64_t t60 = 2925LL;

	t60 = (x257+((x258^x259)%x260));

	if (t60 != 2147497713LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int8_t x261 = 1;
	static volatile int64_t x262 = -4424464432173LL;
	volatile uint32_t x263 = 15811551U;
	int8_t x264 = INT8_MIN;
	volatile int64_t t61 = -774377881497871481LL;

	t61 = (x261+((x262^x263)%x264));

	if (t61 != -115LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x265 = -1;
	int32_t x266 = 3479;
	static int64_t x267 = 652177240LL;
	volatile int64_t t62 = 62116416LL;

	t62 = (x265+((x266^x267)%x268));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x269 = INT64_MIN;
	uint64_t x270 = 1266LLU;
	static uint64_t t63 = 22876612273861118LLU;

	t63 = (x269+((x270^x271)%x272));

	if (t63 != 9223372036854775860LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x273 = INT64_MAX;
	int64_t x274 = -1LL;
	int8_t x276 = -1;
	volatile int64_t t64 = INT64_MAX;

	t64 = (x273+((x274^x275)%x276));

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x277 = 24U;
	uint8_t x278 = 64U;
	int16_t x279 = -1;
	uint64_t t65 = 3234LLU;

	t65 = (x277+((x278^x279)%x280));

	if (t65 != 55154310185LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x281 = INT16_MIN;
	uint32_t x282 = 32551269U;
	uint16_t x283 = 12U;
	int64_t x284 = 388984954LL;
	volatile int64_t t66 = -60855412645115LL;

	t66 = (x281+((x282^x283)%x284));

	if (t66 != 32518505LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x285 = INT16_MIN;
	int16_t x286 = -1512;
	int32_t x287 = INT32_MAX;
	int8_t x288 = -57;
	volatile int32_t t67 = -1;

	t67 = (x285+((x286^x287)%x288));

	if (t67 != -32780) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x290 = 14U;
	int32_t x291 = -1;
	int16_t x292 = INT16_MIN;
	volatile int32_t t68 = 1;

	t68 = (x289+((x290^x291)%x292));

	if (t68 != 25858) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x293 = -3599;
	int32_t x294 = 381119;
	int16_t x295 = -1;
	volatile int32_t x296 = -1594341;
	volatile int32_t t69 = 210492;

	t69 = (x293+((x294^x295)%x296));

	if (t69 != -384719) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x299 = -700;
	int8_t x300 = INT8_MIN;
	uint64_t t70 = 3691480426LLU;

	t70 = (x297+((x298^x299)%x300));

	if (t70 != 18446744073636071553LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x301 = UINT16_MAX;
	static int32_t x302 = INT32_MIN;
	static int8_t x304 = 1;
	static uint64_t t71 = 373621488989050238LLU;

	t71 = (x301+((x302^x303)%x304));

	if (t71 != 65535LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x305 = INT32_MAX;
	volatile int32_t x306 = 9313610;
	int32_t x307 = INT32_MAX;
	volatile int16_t x308 = -1;
	volatile int32_t t72 = INT32_MAX;

	t72 = (x305+((x306^x307)%x308));

	if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x309 = -1176;
	int64_t x310 = INT64_MIN;
	static int8_t x311 = INT8_MAX;
	int64_t x312 = -15LL;
	volatile int64_t t73 = -24472LL;

	t73 = (x309+((x310^x311)%x312));

	if (t73 != -1177LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x313 = INT32_MIN;
	static uint8_t x314 = UINT8_MAX;
	uint16_t x315 = 49U;
	uint16_t x316 = 20029U;
	static int32_t t74 = 16224651;

	t74 = (x313+((x314^x315)%x316));

	if (t74 != -2147483442) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x317 = -1;
	uint16_t x319 = 15424U;
	int32_t x320 = INT32_MIN;

	t75 = (x317+((x318^x319)%x320));

	if (t75 != 15432) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x321 = INT8_MIN;
	static volatile int64_t x322 = 4309632LL;
	static uint8_t x323 = 0U;
	int64_t x324 = INT64_MIN;
	int64_t t76 = 1LL;

	t76 = (x321+((x322^x323)%x324));

	if (t76 != 4309504LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x325 = -10568383092630086LL;
	int64_t x326 = INT64_MIN;
	int32_t x327 = INT32_MIN;
	int16_t x328 = INT16_MIN;
	static int64_t t77 = 3697494036170224478LL;

	t77 = (x325+((x326^x327)%x328));

	if (t77 != -10568383092630086LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x329 = 210845LL;
	static int16_t x332 = INT16_MAX;
	static int64_t t78 = -35307LL;

	t78 = (x329+((x330^x331)%x332));

	if (t78 != 210846LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x335 = INT8_MIN;
	int16_t x336 = INT16_MAX;
	volatile uint32_t t79 = 182226651U;

	t79 = (x333+((x334^x335)%x336));

	if (t79 != 126U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x337 = INT16_MIN;
	uint64_t x338 = UINT64_MAX;
	uint64_t x340 = 5956406564383LLU;
	volatile uint64_t t80 = 68LLU;

	t80 = (x337+((x338^x339)%x340));

	if (t80 != 3112891045343LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x341 = 64U;
	int64_t x343 = -1LL;
	volatile uint64_t t81 = 4048111318LLU;

	t81 = (x341+((x342^x343)%x344));

	if (t81 != 64LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x345 = 41U;
	uint32_t x347 = 46697U;
	uint8_t x348 = UINT8_MAX;
	volatile uint32_t t82 = 58U;

	t82 = (x345+((x346^x347)%x348));

	if (t82 != 72U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x349 = 23937U;
	uint8_t x351 = 0U;
	static int32_t x352 = INT32_MAX;
	uint32_t t83 = 6600695U;

	t83 = (x349+((x350^x351)%x352));

	if (t83 != 4294958465U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x353 = INT8_MIN;
	volatile int16_t x354 = 54;
	volatile int8_t x355 = -8;

	t84 = (x353+((x354^x355)%x356));

	if (t84 != -178LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x357 = 7828;
	uint8_t x358 = 28U;
	int64_t x359 = INT64_MIN;
	int64_t x360 = INT64_MIN;
	volatile int64_t t85 = -1729949128LL;

	t85 = (x357+((x358^x359)%x360));

	if (t85 != -9223372036854767952LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x362 = -1;
	int16_t x363 = INT16_MIN;
	int16_t x364 = INT16_MAX;
	int32_t t86 = INT32_MIN;

	t86 = (x361+((x362^x363)%x364));

	if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x365 = INT16_MIN;
	int64_t x366 = INT64_MAX;
	int32_t x367 = -67074140;
	uint32_t x368 = 1U;
	static volatile int64_t t87 = 0LL;

	t87 = (x365+((x366^x367)%x368));

	if (t87 != -32768LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x369 = -13;
	int64_t x371 = INT64_MAX;

	t88 = (x369+((x370^x371)%x372));

	if (t88 != -14LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x377 = 116541LLU;
	int64_t x378 = 19351087141676LL;
	uint32_t x379 = UINT32_MAX;
	volatile uint64_t t89 = 928LLU;

	t89 = (x377+((x378^x379)%x380));

	if (t89 != 119387LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x381 = UINT16_MAX;
	uint32_t x382 = UINT32_MAX;
	int64_t x383 = INT64_MAX;
	volatile int16_t x384 = INT16_MIN;
	int64_t t90 = 140446072205928600LL;

	t90 = (x381+((x382^x383)%x384));

	if (t90 != 65535LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x389 = UINT32_MAX;
	static volatile int8_t x390 = -17;
	int64_t x391 = INT64_MIN;
	static int64_t t91 = -260464274534771LL;

	t91 = (x389+((x390^x391)%x392));

	if (t91 != 6442450927LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x394 = -14;
	int8_t x396 = -1;
	volatile uint64_t t92 = 127318685974239097LLU;

	t92 = (x393+((x394^x395)%x396));

	if (t92 != 207783065545064LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x401 = INT8_MAX;
	int64_t x402 = INT64_MIN;
	volatile uint16_t x403 = UINT16_MAX;
	static int8_t x404 = INT8_MIN;
	static volatile int64_t t93 = -22919713691313838LL;

	t93 = (x401+((x402^x403)%x404));

	if (t93 != 126LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x405 = INT16_MAX;
	static int32_t x406 = -1;
	volatile int32_t x407 = INT32_MAX;
	int8_t x408 = 26;
	int32_t t94 = -7554064;

	t94 = (x405+((x406^x407)%x408));

	if (t94 != 32743) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x410 = -1;
	uint8_t x411 = 2U;
	uint64_t x412 = 124LLU;

	t95 = (x409+((x410^x411)%x412));

	if (t95 != 12LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x413 = INT64_MAX;
	uint64_t x415 = UINT64_MAX;
	int32_t x416 = INT32_MIN;

	t96 = (x413+((x414^x415)%x416));

	if (t96 != 9223372039002259452LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x417 = 204;
	static int16_t x418 = 1223;
	uint16_t x419 = 15517U;
	int64_t x420 = -1LL;

	t97 = (x417+((x418^x419)%x420));

	if (t97 != 204LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x421 = 44763828LL;
	uint64_t x422 = UINT64_MAX;
	int32_t x423 = INT32_MAX;
	static volatile uint64_t t98 = 834LLU;

	t98 = (x421+((x422^x423)%x424));

	if (t98 != 9223372034752055988LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x426 = -106217970LL;
	uint8_t x427 = UINT8_MAX;
	uint8_t x428 = 5U;
	int64_t t99 = -68292403208642LL;

	t99 = (x425+((x426^x427)%x428));

	if (t99 != -4LL) { NG(); } else { ; }
	
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

