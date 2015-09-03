#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x4 = 11;
volatile uint64_t t2 = 1596628960196046224LLU;
static int16_t x14 = 466;
int32_t x22 = -1339091;
int16_t x23 = -4548;
static int32_t t5 = -64;
int64_t x26 = -685472605030184LL;
int8_t x31 = INT8_MIN;
static uint64_t x32 = 1737228632565085063LLU;
volatile uint32_t x33 = 0U;
static uint64_t t8 = 134261535545202LLU;
int8_t x43 = -1;
static int32_t x46 = INT32_MAX;
static int64_t x50 = -74794629LL;
int32_t x56 = -1;
int64_t x61 = -30LL;
static volatile int64_t t15 = -2934619309360831LL;
static int8_t x67 = -33;
volatile int8_t x79 = -1;
static volatile uint64_t t19 = 1LLU;
int64_t x83 = -3009107815800741LL;
int8_t x95 = INT8_MIN;
int32_t x96 = INT32_MIN;
uint32_t x99 = 2277U;
int8_t x103 = -1;
int16_t x111 = INT16_MIN;
int32_t x112 = INT32_MIN;
volatile int32_t t28 = -52045;
int16_t x125 = INT16_MIN;
int64_t x127 = INT64_MIN;
uint32_t x130 = 437U;
int32_t x139 = INT32_MIN;
volatile uint32_t x142 = UINT32_MAX;
int16_t x143 = INT16_MIN;
uint8_t x152 = UINT8_MAX;
volatile uint64_t t34 = 492078602808531700LLU;
int32_t x153 = INT32_MIN;
static uint64_t x160 = 6LLU;
uint32_t x161 = 32744252U;
volatile int64_t x164 = -2485054LL;
volatile int32_t x166 = -1;
volatile int8_t x170 = -53;
volatile int16_t x172 = INT16_MIN;
uint64_t t40 = 0LLU;
static int32_t x179 = -1;
static uint16_t x185 = UINT16_MAX;
int64_t x189 = 7669241LL;
static volatile uint16_t x196 = 396U;
int16_t x197 = -7;
int16_t x199 = -2;
static int16_t x205 = 462;
int32_t x206 = INT32_MIN;
volatile int8_t x210 = INT8_MIN;
volatile uint32_t t49 = 364114206U;
volatile uint16_t x215 = 59U;
static int32_t x216 = 14929;
static volatile int16_t x219 = INT16_MIN;
uint16_t x230 = 48U;
volatile int32_t x233 = INT32_MAX;
static uint16_t x235 = UINT16_MAX;
int16_t x249 = INT16_MAX;
int32_t x250 = -35869864;
uint8_t x254 = 13U;
int16_t x257 = INT16_MAX;
static int32_t x267 = INT32_MIN;
volatile uint16_t x272 = UINT16_MAX;
static uint64_t x275 = 2097360771LLU;
static uint8_t x283 = 17U;
volatile int32_t t66 = 2;
int16_t x288 = INT16_MAX;
uint64_t t68 = 13690558507921882LLU;
static int32_t x301 = -1;
uint16_t x304 = 25U;
int64_t x307 = INT64_MAX;
static int8_t x309 = INT8_MIN;
uint32_t x313 = 10U;
uint32_t x314 = UINT32_MAX;
int16_t x322 = INT16_MAX;
int16_t x329 = INT16_MAX;
volatile uint32_t x335 = 277995587U;
static uint32_t t79 = 479U;
volatile int64_t x339 = INT64_MIN;
int32_t x344 = -1;
int8_t x345 = -5;
static int32_t t83 = 32;
volatile uint64_t t86 = 26447346987083LLU;
static uint32_t x369 = 11270U;
uint8_t x374 = 0U;
int64_t x375 = 154504476864007748LL;
volatile uint32_t x376 = UINT32_MAX;
int64_t t88 = -1173659902860244LL;
int8_t x382 = INT8_MIN;
static volatile int64_t t89 = -6383971367LL;
uint16_t x386 = UINT16_MAX;
volatile int64_t t92 = -11162642552LL;
uint8_t x398 = 58U;
int64_t x408 = INT64_MIN;
uint64_t t95 = 22LLU;
static int64_t x416 = -1LL;
int8_t x419 = -1;
int64_t x420 = INT64_MIN;
volatile int64_t t98 = -1LL;


void f0(void) {
	int16_t x1 = 109;
	int8_t x2 = INT8_MAX;
	int64_t x3 = -6868059381455199LL;
	volatile int64_t t0 = -360LL;

	t0 = (x1%(x2+(x3%x4)));

	if (t0 != 109LL) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint64_t x5 = 11LLU;
	static int8_t x6 = -1;
	volatile int16_t x7 = INT16_MAX;
	int32_t x8 = 3690;
	volatile uint64_t t1 = 925425LLU;

	t1 = (x5%(x6+(x7%x8)));

	if (t1 != 11LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = INT64_MIN;
	int64_t x10 = INT64_MIN;
	int16_t x11 = 4;
	static volatile uint64_t x12 = UINT64_MAX;

	t2 = (x9%(x10+(x11%x12)));

	if (t2 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x13 = 38U;
	static int32_t x15 = 0;
	int16_t x16 = INT16_MAX;
	static volatile int32_t t3 = -125448;

	t3 = (x13%(x14+(x15%x16)));

	if (t3 != 38) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 0U;
	static int8_t x18 = INT8_MIN;
	volatile int16_t x19 = -706;
	uint16_t x20 = 61U;
	uint32_t t4 = 3U;

	t4 = (x17%(x18+(x19%x20)));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int16_t x24 = -1;

	t5 = (x21%(x22+(x23%x24)));

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x25 = 1U;
	volatile uint64_t x27 = UINT64_MAX;
	uint64_t x28 = UINT64_MAX;
	uint64_t t6 = 605314272384LLU;

	t6 = (x25%(x26+(x27%x28)));

	if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	int64_t x30 = 3803937LL;
	uint64_t t7 = 32098097927995LLU;

	t7 = (x29%(x30+(x31%x32)));

	if (t7 != 180962356646970100LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x34 = 1;
	static uint64_t x35 = 2843325LLU;
	uint64_t x36 = 405LLU;

	t8 = (x33%(x34+(x35%x36)));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MAX;
	int64_t x38 = INT64_MIN;
	int8_t x39 = -1;
	uint32_t x40 = 2753092U;
	int64_t t9 = -5176053LL;

	t9 = (x37%(x38+(x39%x40)));

	if (t9 != 2147483647LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	uint16_t x42 = 696U;
	uint32_t x44 = 1U;
	volatile uint32_t t10 = 7051U;

	t10 = (x41%(x42+(x43%x44)));

	if (t10 != 15U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 103U;
	volatile uint64_t x47 = 1239297238878959191LLU;
	static int64_t x48 = -1LL;
	static volatile uint64_t t11 = 7831879LLU;

	t11 = (x45%(x46+(x47%x48)));

	if (t11 != 103LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -1;
	int32_t x51 = 119;
	int32_t x52 = 11950;
	int64_t t12 = 4071066431778508455LL;

	t12 = (x49%(x50+(x51%x52)));

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 7U;
	static int32_t x54 = 3237102;
	static int64_t x55 = -5066LL;
	int64_t t13 = 2951233251420746LL;

	t13 = (x53%(x54+(x55%x56)));

	if (t13 != 7LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = -17;
	int16_t x58 = -1;
	int8_t x59 = INT8_MAX;
	int16_t x60 = INT16_MIN;
	int32_t t14 = 8114;

	t14 = (x57%(x58+(x59%x60)));

	if (t14 != -17) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x62 = UINT16_MAX;
	int16_t x63 = INT16_MIN;
	int32_t x64 = -11;

	t15 = (x61%(x62+(x63%x64)));

	if (t15 != -30LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MAX;
	static int16_t x66 = INT16_MAX;
	int64_t x68 = INT64_MAX;
	static int64_t t16 = -2LL;

	t16 = (x65%(x66+(x67%x68)));

	if (t16 != 127LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = UINT8_MAX;
	int16_t x70 = INT16_MIN;
	int8_t x71 = 31;
	volatile int32_t x72 = INT32_MAX;
	int32_t t17 = -91;

	t17 = (x69%(x70+(x71%x72)));

	if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 15515982308LLU;
	volatile int16_t x74 = INT16_MIN;
	static volatile uint16_t x75 = UINT16_MAX;
	static int32_t x76 = 2;
	static volatile uint64_t t18 = 194027378270523LLU;

	t18 = (x73%(x74+(x75%x76)));

	if (t18 != 15515982308LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = UINT64_MAX;
	int32_t x78 = -21;
	int16_t x80 = INT16_MIN;

	t19 = (x77%(x78+(x79%x80)));

	if (t19 != 21LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x81 = 1061953780U;
	int64_t x82 = -2048037191632LL;
	uint32_t x84 = UINT32_MAX;
	volatile int64_t t20 = 235975594429LL;

	t20 = (x81%(x82+(x83%x84)));

	if (t20 != 1061953780LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x85 = INT8_MIN;
	int64_t x86 = INT64_MIN;
	static uint64_t x87 = 755820625562519582LLU;
	uint64_t x88 = 862LLU;
	uint64_t t21 = 534084348781531LLU;

	t21 = (x85%(x86+(x87%x88)));

	if (t21 != 9223372036854775530LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MAX;
	int64_t x90 = INT64_MIN;
	uint64_t x91 = 7747170LLU;
	int8_t x92 = INT8_MIN;
	static uint64_t t22 = 7610446614407721LLU;

	t22 = (x89%(x90+(x91%x92)));

	if (t22 != 127LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	int8_t x94 = INT8_MIN;
	static int32_t t23 = -4031;

	t23 = (x93%(x94+(x95%x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	volatile int16_t x98 = INT16_MIN;
	static int32_t x100 = INT32_MIN;
	volatile uint32_t t24 = 6026U;

	t24 = (x97%(x98+(x99%x100)));

	if (t24 != 30363U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x101 = INT16_MIN;
	int32_t x102 = 156637;
	int64_t x104 = INT64_MIN;
	static volatile int64_t t25 = -1010LL;

	t25 = (x101%(x102+(x103%x104)));

	if (t25 != -32768LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = -1;
	static uint16_t x110 = UINT16_MAX;
	volatile int32_t t26 = -1;

	t26 = (x109%(x110+(x111%x112)));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x113 = UINT64_MAX;
	uint64_t x114 = 24342734LLU;
	int64_t x115 = INT64_MIN;
	uint16_t x116 = 812U;
	volatile uint64_t t27 = 2416768528778LLU;

	t27 = (x113%(x114+(x115%x116)));

	if (t27 != 9436483LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x121 = 73U;
	int16_t x122 = INT16_MIN;
	uint16_t x123 = 433U;
	int8_t x124 = 20;

	t28 = (x121%(x122+(x123%x124)));

	if (t28 != 73) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x126 = INT32_MAX;
	int64_t x128 = INT64_MIN;
	int64_t t29 = 15451181283130LL;

	t29 = (x125%(x126+(x127%x128)));

	if (t29 != -32768LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x129 = UINT32_MAX;
	int64_t x131 = INT64_MIN;
	int8_t x132 = 20;
	static volatile int64_t t30 = -766246352188994LL;

	t30 = (x129%(x130+(x131%x132)));

	if (t30 != 333LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x137 = -1LL;
	int16_t x138 = INT16_MAX;
	int16_t x140 = -706;
	int64_t t31 = 1027LL;

	t31 = (x137%(x138+(x139%x140)));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x141 = UINT32_MAX;
	volatile int8_t x144 = INT8_MAX;
	volatile uint32_t t32 = 1065869133U;

	t32 = (x141%(x142+(x143%x144)));

	if (t32 != 2U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x145 = 125691470420394976LLU;
	int16_t x146 = INT16_MAX;
	int8_t x147 = INT8_MIN;
	uint8_t x148 = 2U;
	volatile uint64_t t33 = 864389064007LLU;

	t33 = (x145%(x146+(x147%x148)));

	if (t33 != 27684LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x149 = 1044438231U;
	uint64_t x150 = 2273325LLU;
	static int32_t x151 = -1876801;

	t34 = (x149%(x150+(x151%x152)));

	if (t34 != 982515LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x154 = INT64_MIN;
	int16_t x155 = INT16_MIN;
	uint64_t x156 = 3386702551470LLU;
	volatile uint64_t t35 = 1865470LLU;

	t35 = (x153%(x154+(x155%x156)));

	if (t35 != 9223370218882841362LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x157 = -1008956;
	int8_t x158 = INT8_MIN;
	int16_t x159 = INT16_MAX;
	uint64_t t36 = 996704562423028LLU;

	t36 = (x157%(x158+(x159%x160)));

	if (t36 != 18446744073708542660LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x162 = 82U;
	int8_t x163 = INT8_MIN;
	static int64_t t37 = 1LL;

	t37 = (x161%(x162+(x163%x164)));

	if (t37 != 26LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x165 = -3;
	volatile uint16_t x167 = 131U;
	int32_t x168 = 2768909;
	volatile int32_t t38 = 1196376;

	t38 = (x165%(x166+(x167%x168)));

	if (t38 != -3) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x169 = -21681333;
	static int16_t x171 = -1;
	volatile int32_t t39 = -22325737;

	t39 = (x169%(x170+(x171%x172)));

	if (t39 != -9) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x173 = INT8_MIN;
	int64_t x174 = -1146535LL;
	uint64_t x175 = 5665912725552003LLU;
	static int32_t x176 = -16733;

	t40 = (x173%(x174+(x175%x176)));

	if (t40 != 4198155769753148LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x177 = 4U;
	int16_t x178 = -30;
	uint8_t x180 = UINT8_MAX;
	int32_t t41 = -22325099;

	t41 = (x177%(x178+(x179%x180)));

	if (t41 != 4) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x181 = -1;
	int32_t x182 = INT32_MIN;
	int16_t x183 = -65;
	int8_t x184 = -1;
	int32_t t42 = 9007;

	t42 = (x181%(x182+(x183%x184)));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x186 = -1;
	int64_t x187 = -2268247449379298934LL;
	int8_t x188 = INT8_MIN;
	int64_t t43 = -3196LL;

	t43 = (x185%(x186+(x187%x188)));

	if (t43 != 85LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x190 = INT32_MIN;
	uint8_t x191 = UINT8_MAX;
	int8_t x192 = INT8_MIN;
	int64_t t44 = 11829848248247135LL;

	t44 = (x189%(x190+(x191%x192)));

	if (t44 != 7669241LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x193 = 146531U;
	static uint32_t x194 = UINT32_MAX;
	static int8_t x195 = INT8_MAX;
	uint32_t t45 = 2813U;

	t45 = (x193%(x194+(x195%x196)));

	if (t45 != 119U) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int16_t x198 = INT16_MIN;
	int8_t x200 = INT8_MIN;
	static int32_t t46 = -304378;

	t46 = (x197%(x198+(x199%x200)));

	if (t46 != -7) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x201 = -4102061025230425LL;
	int8_t x202 = INT8_MAX;
	int8_t x203 = INT8_MIN;
	uint8_t x204 = UINT8_MAX;
	int64_t t47 = -1916LL;

	t47 = (x201%(x202+(x203%x204)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x207 = UINT16_MAX;
	static volatile int8_t x208 = 2;
	int32_t t48 = -118747;

	t48 = (x205%(x206+(x207%x208)));

	if (t48 != 462) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x209 = 343U;
	uint32_t x211 = UINT32_MAX;
	int16_t x212 = -114;

	t49 = (x209%(x210+(x211%x212)));

	if (t49 != 343U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x213 = INT8_MAX;
	static volatile int16_t x214 = INT16_MIN;
	volatile int32_t t50 = 60701442;

	t50 = (x213%(x214+(x215%x216)));

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x217 = -7161;
	static uint16_t x218 = UINT16_MAX;
	int16_t x220 = -14;
	int32_t t51 = 96348;

	t51 = (x217%(x218+(x219%x220)));

	if (t51 != -7161) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x221 = 393337427135LLU;
	static volatile int64_t x222 = -1338923667691093LL;
	uint8_t x223 = 56U;
	uint16_t x224 = 1278U;
	volatile uint64_t t52 = 2LLU;

	t52 = (x221%(x222+(x223%x224)));

	if (t52 != 393337427135LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x229 = 2343U;
	int16_t x231 = INT16_MAX;
	int32_t x232 = INT32_MIN;
	volatile int32_t t53 = 47582699;

	t53 = (x229%(x230+(x231%x232)));

	if (t53 != 2343) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x234 = INT16_MIN;
	int16_t x236 = INT16_MIN;
	volatile int32_t t54 = -864707540;

	t54 = (x233%(x234+(x235%x236)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x237 = 98224051638LLU;
	int8_t x238 = INT8_MIN;
	int16_t x239 = -1;
	int64_t x240 = -1LL;
	volatile uint64_t t55 = 1647655LLU;

	t55 = (x237%(x238+(x239%x240)));

	if (t55 != 98224051638LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x241 = 43U;
	uint32_t x242 = 12303U;
	int64_t x243 = -42008LL;
	int64_t x244 = -1LL;
	volatile int64_t t56 = -12127106786602LL;

	t56 = (x241%(x242+(x243%x244)));

	if (t56 != 43LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x245 = 48740498LLU;
	int8_t x246 = -29;
	uint16_t x247 = 1600U;
	static int16_t x248 = 8;
	uint64_t t57 = 254112366764537027LLU;

	t57 = (x245%(x246+(x247%x248)));

	if (t57 != 48740498LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x251 = UINT8_MAX;
	int8_t x252 = -7;
	static volatile int32_t t58 = 238;

	t58 = (x249%(x250+(x251%x252)));

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x253 = INT64_MIN;
	int16_t x255 = 1;
	static int32_t x256 = -1;
	int64_t t59 = 3903645191970LL;

	t59 = (x253%(x254+(x255%x256)));

	if (t59 != -8LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x258 = 325685486667251LLU;
	volatile uint16_t x259 = UINT16_MAX;
	int8_t x260 = 25;
	volatile uint64_t t60 = 395424190832LLU;

	t60 = (x257%(x258+(x259%x260)));

	if (t60 != 32767LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x261 = -26488;
	int32_t x262 = 11319;
	int64_t x263 = 3485736243324935LL;
	int32_t x264 = -1;
	volatile int64_t t61 = 3LL;

	t61 = (x261%(x262+(x263%x264)));

	if (t61 != -3850LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x265 = -1;
	int16_t x266 = -53;
	static int16_t x268 = -1;
	volatile int32_t t62 = 22469;

	t62 = (x265%(x266+(x267%x268)));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x269 = 19230572713423LLU;
	uint64_t x270 = UINT64_MAX;
	int64_t x271 = -1LL;
	uint64_t t63 = 12LLU;

	t63 = (x269%(x270+(x271%x272)));

	if (t63 != 19230572713423LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint8_t x273 = 1U;
	int64_t x274 = -29657370LL;
	int8_t x276 = INT8_MIN;
	volatile uint64_t t64 = 605225975705LLU;

	t64 = (x273%(x274+(x275%x276)));

	if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x277 = UINT32_MAX;
	int32_t x278 = INT32_MAX;
	int32_t x279 = -502812863;
	int32_t x280 = 9973147;
	uint32_t t65 = 14455859U;

	t65 = (x277%(x278+(x279%x280)));

	if (t65 != 8311027U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x281 = INT32_MAX;
	uint8_t x282 = 18U;
	volatile int16_t x284 = INT16_MIN;

	t66 = (x281%(x282+(x283%x284)));

	if (t66 != 22) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x285 = -203972005LL;
	static int16_t x286 = INT16_MAX;
	uint8_t x287 = 88U;
	volatile int64_t t67 = -85008411395027005LL;

	t67 = (x285%(x286+(x287%x288)));

	if (t67 != -8165LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x289 = UINT64_MAX;
	uint8_t x290 = 19U;
	int32_t x291 = INT32_MIN;
	int64_t x292 = INT64_MIN;

	t68 = (x289%(x290+(x291%x292)));

	if (t68 != 2147483628LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x293 = INT32_MAX;
	int32_t x294 = 28098;
	static volatile uint8_t x295 = 6U;
	int8_t x296 = INT8_MAX;
	int32_t t69 = -949591;

	t69 = (x293%(x294+(x295%x296)));

	if (t69 != 799) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x297 = 4653493942530334LLU;
	int8_t x298 = -4;
	int64_t x299 = -1LL;
	int64_t x300 = 3201LL;
	volatile uint64_t t70 = 9997893884140908LLU;

	t70 = (x297%(x298+(x299%x300)));

	if (t70 != 4653493942530334LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x302 = 11U;
	static int16_t x303 = 59;
	static int32_t t71 = -31207;

	t71 = (x301%(x302+(x303%x304)));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x305 = INT64_MIN;
	uint64_t x306 = 2037LLU;
	uint16_t x308 = 1U;
	volatile uint64_t t72 = 630732863659LLU;

	t72 = (x305%(x306+(x307%x308)));

	if (t72 != 176LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x310 = UINT64_MAX;
	int64_t x311 = 2122344721107286178LL;
	uint16_t x312 = 151U;
	static uint64_t t73 = 152191LLU;

	t73 = (x309%(x310+(x311%x312)));

	if (t73 != 38LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x315 = INT64_MIN;
	static volatile uint8_t x316 = UINT8_MAX;
	volatile int64_t t74 = 3LL;

	t74 = (x313%(x314+(x315%x316)));

	if (t74 != 10LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x317 = 66626;
	uint16_t x318 = 3U;
	volatile uint32_t x319 = 5U;
	static int32_t x320 = INT32_MIN;
	static uint32_t t75 = 2U;

	t75 = (x317%(x318+(x319%x320)));

	if (t75 != 2U) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x321 = 0U;
	int64_t x323 = INT64_MIN;
	int64_t x324 = INT64_MIN;
	static volatile int64_t t76 = -26802004067LL;

	t76 = (x321%(x322+(x323%x324)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x325 = INT8_MAX;
	static int32_t x326 = INT32_MIN;
	static volatile uint16_t x327 = 5U;
	uint64_t x328 = 2181040131490LLU;
	volatile uint64_t t77 = 4727513LLU;

	t77 = (x325%(x326+(x327%x328)));

	if (t77 != 127LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x330 = UINT32_MAX;
	uint32_t x331 = 2360192U;
	uint32_t x332 = UINT32_MAX;
	volatile uint32_t t78 = 1605414U;

	t78 = (x329%(x330+(x331%x332)));

	if (t78 != 32767U) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x333 = -1;
	int16_t x334 = INT16_MAX;
	int32_t x336 = INT32_MIN;

	t79 = (x333%(x334+(x335%x336)));

	if (t79 != 124541985U) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x337 = 43U;
	volatile uint8_t x338 = UINT8_MAX;
	int16_t x340 = INT16_MIN;
	volatile int64_t t80 = -3582541LL;

	t80 = (x337%(x338+(x339%x340)));

	if (t80 != 43LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x341 = 10797532203916328LLU;
	int64_t x342 = 74032780391LL;
	uint64_t x343 = UINT64_MAX;
	volatile uint64_t t81 = 58318LLU;

	t81 = (x341%(x342+(x343%x344)));

	if (t81 != 73282230151LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x346 = INT32_MIN;
	static uint8_t x347 = UINT8_MAX;
	static int8_t x348 = INT8_MAX;
	volatile int32_t t82 = -8;

	t82 = (x345%(x346+(x347%x348)));

	if (t82 != -5) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x349 = -1;
	uint8_t x350 = UINT8_MAX;
	uint8_t x351 = UINT8_MAX;
	volatile uint8_t x352 = 42U;

	t83 = (x349%(x350+(x351%x352)));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x353 = 1;
	int8_t x354 = INT8_MIN;
	volatile int8_t x355 = INT8_MIN;
	int8_t x356 = INT8_MIN;
	static int32_t t84 = 989030185;

	t84 = (x353%(x354+(x355%x356)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x361 = 2;
	uint8_t x362 = 10U;
	int64_t x363 = INT64_MIN;
	volatile int64_t x364 = INT64_MAX;
	static volatile int64_t t85 = -258158107LL;

	t85 = (x361%(x362+(x363%x364)));

	if (t85 != 2LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x365 = INT64_MIN;
	uint64_t x366 = 8093500LLU;
	int32_t x367 = INT32_MIN;
	static uint8_t x368 = UINT8_MAX;

	t86 = (x365%(x366+(x367%x368)));

	if (t86 != 4669512LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x370 = UINT32_MAX;
	int32_t x371 = INT32_MAX;
	static uint64_t x372 = UINT64_MAX;
	uint64_t t87 = 9274807074606LLU;

	t87 = (x369%(x370+(x371%x372)));

	if (t87 != 11270LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x373 = -7926;

	t88 = (x373%(x374+(x375%x376)));

	if (t88 != -7926LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x381 = -1;
	int64_t x383 = -1LL;
	int64_t x384 = INT64_MIN;

	t89 = (x381%(x382+(x383%x384)));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x385 = INT64_MIN;
	uint32_t x387 = 114285698U;
	int64_t x388 = 844366471869LL;
	volatile int64_t t90 = 1257945105828388LL;

	t90 = (x385%(x386+(x387%x388)));

	if (t90 != -74120690LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x389 = INT64_MAX;
	int16_t x390 = INT16_MAX;
	uint16_t x391 = 5119U;
	uint8_t x392 = 25U;
	int64_t t91 = 24270836127223554LL;

	t91 = (x389%(x390+(x391%x392)));

	if (t91 != 20157LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x393 = 15;
	volatile int64_t x394 = 10780LL;
	volatile int8_t x395 = INT8_MIN;
	static int16_t x396 = INT16_MIN;

	t92 = (x393%(x394+(x395%x396)));

	if (t92 != 15LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x397 = INT32_MIN;
	uint8_t x399 = 1U;
	static int16_t x400 = INT16_MIN;
	static volatile int32_t t93 = 123623473;

	t93 = (x397%(x398+(x399%x400)));

	if (t93 != -55) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x401 = 67LLU;
	int16_t x402 = 1;
	int32_t x403 = -7;
	uint8_t x404 = 1U;
	uint64_t t94 = 28251862559001532LLU;

	t94 = (x401%(x402+(x403%x404)));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x405 = 113670304U;
	int16_t x406 = 9383;
	static uint64_t x407 = 6580LLU;

	t95 = (x405%(x406+(x407%x408)));

	if (t95 != 13744LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x409 = INT64_MIN;
	volatile int16_t x410 = INT16_MIN;
	uint8_t x411 = 63U;
	int32_t x412 = -1;
	int64_t t96 = -1LL;

	t96 = (x409%(x410+(x411%x412)));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x413 = 944900LLU;
	int32_t x414 = INT32_MAX;
	volatile int8_t x415 = 4;
	volatile uint64_t t97 = 8585983636327612LLU;

	t97 = (x413%(x414+(x415%x416)));

	if (t97 != 944900LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x417 = 26U;
	uint32_t x418 = 31710U;

	t98 = (x417%(x418+(x419%x420)));

	if (t98 != 26LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x421 = 4414424085324083786LL;
	int16_t x422 = INT16_MAX;
	static int64_t x423 = INT64_MIN;
	uint64_t x424 = 67707427LLU;
	uint64_t t99 = 13268259802826LLU;

	t99 = (x421%(x422+(x423%x424)));

	if (t99 != 17332586LLU) { NG(); } else { ; }
	
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

