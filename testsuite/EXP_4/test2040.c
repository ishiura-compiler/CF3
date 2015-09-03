#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x5 = 1LL;
int8_t x8 = INT8_MIN;
uint32_t x11 = 3887027U;
uint8_t x12 = UINT8_MAX;
uint16_t x18 = 13U;
static int64_t x26 = 21383LL;
int32_t x28 = 2365869;
volatile uint64_t t4 = 325508698166846536LLU;
static int8_t x32 = 1;
static int16_t x35 = -1;
static int64_t t6 = -8182997849466816LL;
uint16_t x39 = UINT16_MAX;
volatile uint8_t x40 = UINT8_MAX;
static volatile int64_t t7 = -22833316769855LL;
int8_t x46 = INT8_MAX;
uint16_t x47 = UINT16_MAX;
volatile uint32_t x48 = UINT32_MAX;
int16_t x53 = 5796;
static uint64_t x55 = UINT64_MAX;
volatile int64_t t13 = -438436272764LL;
uint64_t x66 = 1065715681335939144LLU;
static int32_t x72 = INT32_MIN;
int32_t x76 = -14698819;
volatile uint64_t t16 = 885388472600LLU;
volatile uint64_t t18 = 21254213889219LLU;
int32_t x87 = INT32_MAX;
volatile int64_t x89 = INT64_MIN;
int32_t x107 = INT32_MIN;
uint64_t t24 = 251079263682LLU;
static int16_t x120 = -7640;
int32_t t26 = 31;
int16_t x124 = INT16_MAX;
volatile int8_t x128 = -3;
static uint64_t x131 = UINT64_MAX;
static uint8_t x139 = UINT8_MAX;
static int32_t x148 = -1;
int16_t x150 = 61;
int64_t x152 = INT64_MIN;
int64_t t35 = -10609201LL;
int8_t x178 = INT8_MIN;
int16_t x182 = -1;
int64_t x186 = 1LL;
int64_t x187 = -3531611428LL;
uint64_t x190 = 6729200LLU;
volatile uint64_t t43 = 4042614LLU;
static int32_t x201 = -2766;
int16_t x203 = INT16_MIN;
volatile int32_t t45 = 31;
int16_t x206 = 1;
volatile int64_t t47 = INT64_MAX;
int64_t x218 = INT64_MIN;
static volatile int16_t x233 = -1;
int16_t x238 = 1;
uint64_t x241 = 3182088924586486528LLU;
uint64_t x242 = 187LLU;
uint32_t x244 = 871U;
int16_t x250 = INT16_MIN;
static volatile int64_t t56 = -60864000LL;
static int32_t x261 = INT32_MIN;
int32_t x264 = -1;
volatile uint64_t t60 = UINT64_MAX;
static int16_t x277 = -1195;
int32_t x287 = 57;
uint32_t x289 = 1933074U;
volatile uint32_t x290 = 1U;
volatile uint16_t x292 = 21027U;
volatile int32_t x294 = INT32_MIN;
uint32_t x295 = 0U;
int32_t x306 = INT32_MIN;
static int64_t x308 = -54967LL;
int64_t x319 = INT64_MAX;
static volatile int64_t x321 = -17632516190795LL;
volatile int64_t t72 = 8124159588LL;
uint32_t x358 = 1U;
uint32_t t79 = UINT32_MAX;
int8_t x363 = 4;
int16_t x366 = 13353;
static volatile uint16_t x373 = 868U;
volatile int16_t x387 = INT16_MAX;
int64_t x391 = INT64_MIN;
static int64_t x396 = 17LL;
int64_t t87 = -8122221098060LL;
int64_t x397 = -55875157355972LL;
static int8_t x411 = -19;
int32_t x416 = 16699447;
int8_t x420 = 0;
int8_t x426 = INT8_MIN;
static uint8_t x428 = UINT8_MAX;
int8_t x430 = INT8_MIN;
int32_t x441 = 858;
static volatile int64_t x447 = INT64_MIN;


void f0(void) {
	int32_t x1 = INT32_MIN;
	static int64_t x2 = -1LL;
	uint8_t x3 = UINT8_MAX;
	static uint64_t x4 = 59292684362LLU;
	volatile uint64_t t0 = 1053470731434LLU;

	t0 = (x1|(x2+(x3^x4)));

	if (t0 != 18446744072872693940LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x6 = INT16_MAX;
	int32_t x7 = -2;
	int64_t t1 = 2702834616292036064LL;

	t1 = (x5|(x6+(x7^x8)));

	if (t1 != 32893LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	volatile uint8_t x10 = UINT8_MAX;
	uint32_t t2 = 5949U;

	t2 = (x9|(x10+(x11^x12)));

	if (t2 != 3932159U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = INT32_MAX;
	int16_t x19 = -1;
	int16_t x20 = INT16_MIN;
	volatile int32_t t3 = INT32_MAX;

	t3 = (x17|(x18+(x19^x20)));

	if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x25 = 249LLU;
	int32_t x27 = INT32_MAX;

	t4 = (x25|(x26+(x27^x28)));

	if (t4 != 2145139193LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x29 = UINT32_MAX;
	int8_t x30 = 0;
	uint32_t x31 = 1U;
	static uint32_t t5 = UINT32_MAX;

	t5 = (x29|(x30+(x31^x32)));

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x33 = 2224898767LL;
	int16_t x34 = INT16_MIN;
	static int8_t x36 = 8;

	t6 = (x33|(x34+(x35^x36)));

	if (t6 != -32769LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = 1;
	volatile int64_t x38 = 7787443LL;

	t7 = (x37|(x38+(x39^x40)));

	if (t7 != 7852723LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = -1;
	int64_t x42 = 2131036044627904121LL;
	static volatile int16_t x43 = INT16_MAX;
	int16_t x44 = 0;
	int64_t t8 = -697495248688387948LL;

	t8 = (x41|(x42+(x43^x44)));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x45 = -1;
	uint32_t t9 = UINT32_MAX;

	t9 = (x45|(x46+(x47^x48)));

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x49 = INT32_MAX;
	int8_t x50 = INT8_MAX;
	uint32_t x51 = UINT32_MAX;
	int32_t x52 = -1;
	static uint32_t t10 = 113300U;

	t10 = (x49|(x50+(x51^x52)));

	if (t10 != 2147483647U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x54 = 22;
	static int8_t x56 = INT8_MAX;
	static volatile uint64_t t11 = 505339486031LLU;

	t11 = (x53|(x54+(x55^x56)));

	if (t11 != 18446744073709551542LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x57 = -1;
	static int16_t x58 = INT16_MAX;
	static int64_t x59 = INT64_MIN;
	uint8_t x60 = 1U;
	volatile int64_t t12 = 2398008963LL;

	t12 = (x57|(x58+(x59^x60)));

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x61 = -9478163214LL;
	int64_t x62 = INT64_MIN;
	int8_t x63 = -1;
	uint32_t x64 = 55991U;

	t13 = (x61|(x62+(x63^x64)));

	if (t13 != -8589953542LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = -1;
	volatile int16_t x67 = -1;
	static volatile uint64_t x68 = 227505089533LLU;
	uint64_t t14 = UINT64_MAX;

	t14 = (x65|(x66+(x67^x68)));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = -1;
	int16_t x70 = -1;
	int32_t x71 = -1;
	int32_t t15 = 78765290;

	t15 = (x69|(x70+(x71^x72)));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x73 = 2095526U;
	int32_t x74 = INT32_MAX;
	uint64_t x75 = 633352499LLU;

	t16 = (x73|(x74+(x75^x76)));

	if (t16 != 1524629423LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = INT32_MIN;
	int16_t x78 = 1;
	int64_t x79 = -192595868LL;
	int64_t x80 = 61311320160632LL;
	volatile int64_t t17 = 172LL;

	t17 = (x77|(x78+(x79^x80)));

	if (t17 != -739229411LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x81 = 277801U;
	static uint64_t x82 = 124LLU;
	int64_t x83 = INT64_MAX;
	int8_t x84 = INT8_MAX;

	t18 = (x81|(x82+(x83^x84)));

	if (t18 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x85 = 90U;
	int64_t x86 = INT64_MAX;
	int64_t x88 = -29411427095156872LL;
	int64_t t19 = -790LL;

	t19 = (x85|(x86+(x87^x88)));

	if (t19 != 9193960607623682270LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x90 = -203488602LL;
	int16_t x91 = -5;
	int64_t x92 = 16091LL;
	static int64_t t20 = 1897365751LL;

	t20 = (x89|(x90+(x91^x92)));

	if (t20 != -203504698LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x93 = 7;
	int16_t x94 = 8;
	volatile int64_t x95 = -29889LL;
	static int64_t x96 = -1LL;
	static int64_t t21 = -541060812175262LL;

	t21 = (x93|(x94+(x95^x96)));

	if (t21 != 29903LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x101 = INT8_MAX;
	uint64_t x102 = 1120LLU;
	int8_t x103 = INT8_MAX;
	uint64_t x104 = 0LLU;
	uint64_t t22 = 269963886056969LLU;

	t22 = (x101|(x102+(x103^x104)));

	if (t22 != 1279LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x105 = 89649LLU;
	static int8_t x106 = INT8_MIN;
	int16_t x108 = INT16_MIN;
	uint64_t t23 = 2090352LLU;

	t23 = (x105|(x106+(x107^x108)));

	if (t23 != 2147450801LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x109 = INT32_MAX;
	volatile int64_t x110 = -1LL;
	uint8_t x111 = 16U;
	uint64_t x112 = 17401373600299878LLU;

	t24 = (x109|(x110+(x111^x112)));

	if (t24 != 17401375679840255LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x113 = INT8_MIN;
	uint8_t x114 = 1U;
	static int8_t x115 = -6;
	volatile int8_t x116 = INT8_MAX;
	int32_t t25 = 5642071;

	t25 = (x113|(x114+(x115^x116)));

	if (t25 != -122) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x117 = UINT8_MAX;
	int8_t x118 = INT8_MAX;
	int32_t x119 = INT32_MIN;

	t26 = (x117|(x118+(x119^x120)));

	if (t26 != 2147476223) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x121 = INT16_MIN;
	uint64_t x122 = 768029867LLU;
	uint16_t x123 = 24U;
	static uint64_t t27 = 2007124124LLU;

	t27 = (x121|(x122+(x123^x124)));

	if (t27 != 18446744073709532306LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x125 = -4362;
	uint16_t x126 = 3221U;
	static uint32_t x127 = 334922U;
	uint32_t t28 = 201688U;

	t28 = (x125|(x126+(x127^x128)));

	if (t28 != 4294967038U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = -1LL;
	int32_t x130 = INT32_MIN;
	uint16_t x132 = 5893U;
	static volatile uint64_t t29 = UINT64_MAX;

	t29 = (x129|(x130+(x131^x132)));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x137 = -1;
	uint8_t x138 = 28U;
	int64_t x140 = INT64_MAX;
	static volatile int64_t t30 = 16808321598032083LL;

	t30 = (x137|(x138+(x139^x140)));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x145 = UINT8_MAX;
	int8_t x146 = -1;
	uint64_t x147 = 24421LLU;
	volatile uint64_t t31 = 3341677389LLU;

	t31 = (x145|(x146+(x147^x148)));

	if (t31 != 18446744073709527295LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x149 = 482U;
	int8_t x151 = INT8_MAX;
	static int64_t t32 = -491687538896645455LL;

	t32 = (x149|(x150+(x151^x152)));

	if (t32 != -9223372036854775298LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x153 = INT16_MAX;
	int8_t x154 = INT8_MIN;
	volatile int32_t x155 = -1;
	uint16_t x156 = UINT16_MAX;
	static volatile int32_t t33 = -50101;

	t33 = (x153|(x154+(x155^x156)));

	if (t33 != -65537) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x157 = -1;
	int8_t x158 = INT8_MAX;
	volatile int16_t x159 = INT16_MAX;
	int64_t x160 = 456LL;
	volatile int64_t t34 = -10526274403507011LL;

	t34 = (x157|(x158+(x159^x160)));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x161 = -1;
	volatile int16_t x162 = INT16_MIN;
	static uint16_t x163 = UINT16_MAX;
	int64_t x164 = 1544312433683597LL;

	t35 = (x161|(x162+(x163^x164)));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x165 = -1LL;
	volatile int32_t x166 = -1;
	volatile int64_t x167 = INT64_MIN;
	uint16_t x168 = UINT16_MAX;
	volatile int64_t t36 = 1LL;

	t36 = (x165|(x166+(x167^x168)));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x169 = 38564267U;
	int64_t x170 = -15364266681890LL;
	volatile int32_t x171 = 36633995;
	int8_t x172 = INT8_MIN;
	volatile int64_t t37 = -30401010577322LL;

	t37 = (x169|(x170+(x171^x172)));

	if (t37 != -15364265280533LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x173 = INT64_MIN;
	int64_t x174 = 1438295015147202LL;
	volatile uint16_t x175 = 6U;
	int8_t x176 = INT8_MIN;
	int64_t t38 = -1146119857680913LL;

	t38 = (x173|(x174+(x175^x176)));

	if (t38 != -9221933741839628728LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x177 = 0U;
	int32_t x179 = INT32_MAX;
	int64_t x180 = -78917106678018004LL;
	volatile int64_t t39 = 6336037LL;

	t39 = (x177|(x178+(x179^x180)));

	if (t39 != -78917106736910509LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x181 = -17;
	int8_t x183 = INT8_MAX;
	static int8_t x184 = -23;
	volatile int32_t t40 = -7375;

	t40 = (x181|(x182+(x183^x184)));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x185 = -1LL;
	uint32_t x188 = 0U;
	volatile int64_t t41 = 95574469193678199LL;

	t41 = (x185|(x186+(x187^x188)));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x189 = INT64_MIN;
	int32_t x191 = -1;
	int32_t x192 = 101083154;
	uint64_t t42 = 519037435555604LLU;

	t42 = (x189|(x190+(x191^x192)));

	if (t42 != 18446744073615197661LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x193 = INT8_MIN;
	int32_t x194 = INT32_MIN;
	static uint64_t x195 = 3925614LLU;
	int16_t x196 = -1;

	t43 = (x193|(x194+(x195^x196)));

	if (t43 != 18446744073709551505LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x197 = 76LLU;
	static int16_t x198 = INT16_MAX;
	int8_t x199 = 4;
	static int8_t x200 = INT8_MIN;
	uint64_t t44 = 1937627271LLU;

	t44 = (x197|(x198+(x199^x200)));

	if (t44 != 32719LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x202 = INT8_MIN;
	volatile int16_t x204 = -2;

	t45 = (x201|(x202+(x203^x204)));

	if (t45 != -130) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x205 = 1U;
	static int32_t x207 = INT32_MAX;
	int8_t x208 = -1;
	volatile int32_t t46 = -1300;

	t46 = (x205|(x206+(x207^x208)));

	if (t46 != -2147483647) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x209 = 3639;
	int16_t x210 = -1;
	int16_t x211 = 17;
	int64_t x212 = INT64_MAX;

	t47 = (x209|(x210+(x211^x212)));

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x217 = 517988U;
	uint64_t x219 = UINT64_MAX;
	uint32_t x220 = 6U;
	static uint64_t t48 = 34LLU;

	t48 = (x217|(x218+(x219^x220)));

	if (t48 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x221 = INT8_MIN;
	uint8_t x222 = 26U;
	int64_t x223 = -1LL;
	int32_t x224 = INT32_MIN;
	static volatile int64_t t49 = 274342559108LL;

	t49 = (x221|(x222+(x223^x224)));

	if (t49 != -103LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x225 = 41865521LLU;
	volatile uint8_t x226 = 24U;
	static int16_t x227 = -1;
	int8_t x228 = INT8_MIN;
	volatile uint64_t t50 = 2002147157952LLU;

	t50 = (x225|(x226+(x227^x228)));

	if (t50 != 41865655LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x229 = INT32_MAX;
	uint64_t x230 = 834910015031437569LLU;
	int16_t x231 = -2031;
	uint32_t x232 = UINT32_MAX;
	uint64_t t51 = 17490LLU;

	t51 = (x229|(x230+(x231^x232)));

	if (t51 != 834910016350715903LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x234 = 143652161664LL;
	volatile uint64_t x235 = 7003177989LLU;
	volatile int8_t x236 = INT8_MAX;
	volatile uint64_t t52 = UINT64_MAX;

	t52 = (x233|(x234+(x235^x236)));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x237 = INT32_MAX;
	int64_t x239 = 862LL;
	uint32_t x240 = 26U;
	volatile int64_t t53 = 268LL;

	t53 = (x237|(x238+(x239^x240)));

	if (t53 != 2147483647LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x243 = 68U;
	uint64_t t54 = 382252LLU;

	t54 = (x241|(x242+(x243^x244)));

	if (t54 != 3182088924586486750LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x245 = INT32_MAX;
	int32_t x246 = INT32_MIN;
	uint8_t x247 = 53U;
	int32_t x248 = 440109;
	int32_t t55 = -12044059;

	t55 = (x245|(x246+(x247^x248)));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x249 = -173734;
	static int8_t x251 = INT8_MIN;
	static int64_t x252 = 389784575977LL;

	t56 = (x249|(x250+(x251^x252)));

	if (t56 != -1669LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x257 = INT64_MAX;
	static int8_t x258 = -2;
	uint64_t x259 = UINT64_MAX;
	volatile int32_t x260 = 15146561;
	uint64_t t57 = UINT64_MAX;

	t57 = (x257|(x258+(x259^x260)));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x262 = -1LL;
	int32_t x263 = -1;
	static int64_t t58 = 34LL;

	t58 = (x261|(x262+(x263^x264)));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x265 = INT8_MIN;
	volatile int64_t x266 = 24951816LL;
	static uint32_t x267 = 20240U;
	int16_t x268 = -1;
	volatile int64_t t59 = 0LL;

	t59 = (x265|(x266+(x267^x268)));

	if (t59 != -9LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x269 = UINT64_MAX;
	int8_t x270 = INT8_MIN;
	volatile int64_t x271 = INT64_MIN;
	int32_t x272 = INT32_MAX;

	t60 = (x269|(x270+(x271^x272)));

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x273 = -2;
	static int16_t x274 = INT16_MAX;
	static uint32_t x275 = UINT32_MAX;
	uint16_t x276 = 5558U;
	volatile uint32_t t61 = 563567U;

	t61 = (x273|(x274+(x275^x276)));

	if (t61 != 4294967294U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x278 = INT64_MIN;
	int8_t x279 = INT8_MAX;
	uint8_t x280 = 3U;
	int64_t t62 = -218192LL;

	t62 = (x277|(x278+(x279^x280)));

	if (t62 != -1155LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x281 = INT64_MAX;
	int64_t x282 = -1LL;
	int8_t x283 = INT8_MIN;
	uint8_t x284 = UINT8_MAX;
	volatile int64_t t63 = -16127543392LL;

	t63 = (x281|(x282+(x283^x284)));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x285 = 1;
	uint32_t x286 = 316224442U;
	int8_t x288 = INT8_MAX;
	uint32_t t64 = 53946166U;

	t64 = (x285|(x286+(x287^x288)));

	if (t64 != 316224513U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x291 = INT32_MIN;
	uint32_t t65 = 13048U;

	t65 = (x289|(x290+(x291^x292)));

	if (t65 != 2149416758U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x293 = INT32_MIN;
	static int8_t x296 = 19;
	volatile uint32_t t66 = 33691031U;

	t66 = (x293|(x294+(x295^x296)));

	if (t66 != 2147483667U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x301 = 28LL;
	int8_t x302 = -12;
	int64_t x303 = 14057403549813LL;
	volatile uint64_t x304 = UINT64_MAX;
	static uint64_t t67 = 59LLU;

	t67 = (x301|(x302+(x303^x304)));

	if (t67 != 18446730016306001790LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x305 = 2U;
	int16_t x307 = INT16_MIN;
	int64_t t68 = 83LL;

	t68 = (x305|(x306+(x307^x308)));

	if (t68 != -2147440309LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x309 = 17U;
	int8_t x310 = INT8_MIN;
	int64_t x311 = INT64_MAX;
	uint16_t x312 = 141U;
	static int64_t t69 = -19189900LL;

	t69 = (x309|(x310+(x311^x312)));

	if (t69 != 9223372036854775539LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x313 = UINT64_MAX;
	int16_t x314 = 0;
	int64_t x315 = 1628806261220LL;
	int32_t x316 = -46;
	volatile uint64_t t70 = UINT64_MAX;

	t70 = (x313|(x314+(x315^x316)));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x317 = 6;
	int64_t x318 = INT64_MAX;
	static int16_t x320 = -11;
	int64_t t71 = -10465LL;

	t71 = (x317|(x318+(x319^x320)));

	if (t71 != 15LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x322 = 56U;
	int32_t x323 = 122;
	uint32_t x324 = 564U;

	t72 = (x321|(x322+(x323^x324)));

	if (t72 != -17632516190281LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x325 = -124;
	int32_t x326 = INT32_MIN;
	int16_t x327 = -18;
	int64_t x328 = INT64_MIN;
	static int64_t t73 = -57074061619LL;

	t73 = (x325|(x326+(x327^x328)));

	if (t73 != -18LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x333 = INT64_MAX;
	volatile uint32_t x334 = 665207U;
	int16_t x335 = -1;
	volatile uint32_t x336 = 12U;
	volatile int64_t t74 = INT64_MAX;

	t74 = (x333|(x334+(x335^x336)));

	if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x337 = INT16_MIN;
	static volatile uint16_t x338 = 0U;
	int32_t x339 = INT32_MAX;
	int32_t x340 = INT32_MIN;
	int32_t t75 = 193;

	t75 = (x337|(x338+(x339^x340)));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x345 = INT64_MIN;
	volatile int8_t x346 = -1;
	static volatile int64_t x347 = INT64_MIN;
	int16_t x348 = INT16_MIN;
	static volatile int64_t t76 = -7156702703131364LL;

	t76 = (x345|(x346+(x347^x348)));

	if (t76 != -32769LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x349 = -7702;
	uint64_t x350 = UINT64_MAX;
	volatile int32_t x351 = INT32_MIN;
	static int64_t x352 = INT64_MIN;
	uint64_t t77 = UINT64_MAX;

	t77 = (x349|(x350+(x351^x352)));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x353 = 1U;
	static uint64_t x354 = 1792LLU;
	static uint32_t x355 = 2171U;
	static int16_t x356 = INT16_MIN;
	static uint64_t t78 = 1978257322636LLU;

	t78 = (x353|(x354+(x355^x356)));

	if (t78 != 4294938491LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x357 = 3142191U;
	int8_t x359 = -1;
	uint8_t x360 = 4U;

	t79 = (x357|(x358+(x359^x360)));

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x361 = INT32_MAX;
	int64_t x362 = 4746460854059LL;
	volatile int16_t x364 = INT16_MIN;
	volatile int64_t t80 = 29968620460356539LL;

	t80 = (x361|(x362+(x363^x364)));

	if (t80 != 4748086345727LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x365 = 0;
	volatile uint16_t x367 = 123U;
	static volatile int32_t x368 = -2937671;
	volatile int32_t t81 = -1;

	t81 = (x365|(x366+(x367^x368)));

	if (t81 != -2924309) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x369 = -1;
	uint32_t x370 = UINT32_MAX;
	static int8_t x371 = INT8_MIN;
	int16_t x372 = INT16_MAX;
	static uint32_t t82 = UINT32_MAX;

	t82 = (x369|(x370+(x371^x372)));

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x374 = 3026949862LLU;
	uint8_t x375 = 47U;
	int64_t x376 = 36893LL;
	static uint64_t t83 = 47328074468199815LLU;

	t83 = (x373|(x374+(x375^x376)));

	if (t83 != 3026986876LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x381 = -1;
	int8_t x382 = INT8_MIN;
	int8_t x383 = -20;
	static int32_t x384 = -1;
	volatile int32_t t84 = 13050;

	t84 = (x381|(x382+(x383^x384)));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x385 = -342;
	volatile uint16_t x386 = UINT16_MAX;
	int32_t x388 = INT32_MIN;
	int32_t t85 = -147930;

	t85 = (x385|(x386+(x387^x388)));

	if (t85 != -2) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int32_t x389 = -4521;
	int32_t x390 = -1;
	int64_t x392 = -406913905835LL;
	int64_t t86 = -3375713LL;

	t86 = (x389|(x390+(x391^x392)));

	if (t86 != -4265LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x393 = INT16_MIN;
	volatile int16_t x394 = INT16_MIN;
	volatile int8_t x395 = -1;

	t87 = (x393|(x394+(x395^x396)));

	if (t87 != -18LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x398 = 29U;
	int16_t x399 = INT16_MIN;
	uint8_t x400 = 33U;
	int64_t t88 = 102593691838LL;

	t88 = (x397|(x398+(x399^x400)));

	if (t88 != -28098LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x401 = INT16_MAX;
	uint16_t x402 = 141U;
	volatile uint16_t x403 = 678U;
	volatile uint64_t x404 = UINT64_MAX;
	uint64_t t89 = UINT64_MAX;

	t89 = (x401|(x402+(x403^x404)));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x405 = -1;
	volatile uint16_t x406 = 2U;
	int8_t x407 = INT8_MAX;
	uint64_t x408 = 508209381310694133LLU;
	volatile uint64_t t90 = UINT64_MAX;

	t90 = (x405|(x406+(x407^x408)));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x409 = 1U;
	int16_t x410 = INT16_MAX;
	int8_t x412 = 0;
	int32_t t91 = 5588536;

	t91 = (x409|(x410+(x411^x412)));

	if (t91 != 32749) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x413 = -1;
	volatile int32_t x414 = -1;
	int32_t x415 = 2;
	static volatile int32_t t92 = -596;

	t92 = (x413|(x414+(x415^x416)));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x417 = INT32_MIN;
	int16_t x418 = INT16_MAX;
	uint64_t x419 = 0LLU;
	static uint64_t t93 = 359LLU;

	t93 = (x417|(x418+(x419^x420)));

	if (t93 != 18446744071562100735LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x421 = INT64_MAX;
	uint16_t x422 = UINT16_MAX;
	int32_t x423 = -1;
	volatile uint64_t x424 = UINT64_MAX;
	uint64_t t94 = 316LLU;

	t94 = (x421|(x422+(x423^x424)));

	if (t94 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x425 = 30341U;
	static uint64_t x427 = 2LLU;
	uint64_t t95 = 6LLU;

	t95 = (x425|(x426+(x427^x428)));

	if (t95 != 30461LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x429 = 29U;
	volatile int8_t x431 = 1;
	volatile int32_t x432 = -1;
	volatile int32_t t96 = 0;

	t96 = (x429|(x430+(x431^x432)));

	if (t96 != -129) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x433 = -1;
	int64_t x434 = -1LL;
	int32_t x435 = INT32_MIN;
	int64_t x436 = 15239121435LL;
	int64_t t97 = 3615427687951LL;

	t97 = (x433|(x434+(x435^x436)));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x442 = 486793256;
	int8_t x443 = INT8_MAX;
	static int64_t x444 = INT64_MIN;
	volatile int64_t t98 = 21091LL;

	t98 = (x441|(x442+(x443^x444)));

	if (t98 != -9223372036367981569LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x445 = UINT64_MAX;
	static int8_t x446 = INT8_MIN;
	uint32_t x448 = 70128075U;
	static volatile uint64_t t99 = UINT64_MAX;

	t99 = (x445|(x446+(x447^x448)));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

