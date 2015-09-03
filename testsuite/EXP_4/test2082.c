#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x5 = UINT8_MAX;
uint16_t x6 = UINT16_MAX;
uint32_t x8 = 15U;
uint8_t x11 = UINT8_MAX;
int8_t x13 = INT8_MAX;
static volatile int64_t t3 = -2691673701LL;
uint16_t x44 = UINT16_MAX;
int8_t x45 = 0;
int32_t x48 = INT32_MIN;
uint32_t x50 = 1706U;
uint16_t x55 = UINT16_MAX;
static uint32_t x61 = 524825000U;
static int8_t x71 = 0;
volatile uint8_t x75 = 17U;
static int64_t x78 = -1LL;
int32_t x83 = -1;
int16_t x95 = -113;
int32_t x105 = INT32_MIN;
int16_t x107 = INT16_MAX;
volatile int32_t t22 = 0;
int16_t x109 = -1;
int8_t x111 = 62;
static uint64_t t24 = 1847LLU;
static int32_t t26 = 77066;
int32_t x129 = -1;
int8_t x131 = 7;
volatile uint64_t x132 = 226416337692LLU;
uint64_t t27 = UINT64_MAX;
int64_t x135 = INT64_MIN;
int32_t x140 = INT32_MAX;
uint16_t x144 = 19U;
uint32_t x160 = UINT32_MAX;
int64_t t34 = 4952LL;
int64_t x161 = -268500590664LL;
static int16_t x168 = -1;
int32_t t36 = -2084720;
uint64_t t37 = 314828202060230LLU;
static volatile int64_t t38 = -75LL;
int16_t x177 = INT16_MIN;
int64_t x180 = INT64_MAX;
uint32_t x184 = UINT32_MAX;
int64_t t40 = -5769872986695273LL;
int8_t x188 = 19;
int16_t x192 = -1;
int32_t x197 = INT32_MIN;
uint64_t x198 = 10392780LLU;
int32_t x199 = INT32_MIN;
uint64_t t44 = 10933LLU;
static uint8_t x201 = 34U;
volatile int8_t x217 = INT8_MIN;
int64_t x219 = -1132413404999165756LL;
uint32_t x222 = UINT32_MAX;
volatile int32_t t50 = 120836309;
int32_t x234 = INT32_MIN;
int64_t x235 = 1227209386590319179LL;
int8_t x236 = 19;
static int8_t x241 = INT8_MIN;
static int64_t t53 = -43256LL;
volatile int8_t x247 = 4;
int32_t x257 = INT32_MIN;
volatile uint64_t x269 = 417777019920LLU;
static int16_t x270 = -1;
volatile int16_t x271 = -3443;
volatile int8_t x272 = -1;
volatile uint64_t t60 = 16902LLU;
int16_t x283 = INT16_MIN;
static uint32_t x288 = 102929731U;
int32_t x289 = INT32_MAX;
static int64_t x291 = INT64_MAX;
int16_t x292 = -1;
static int64_t t65 = -418457090LL;
static uint16_t x295 = 987U;
uint16_t x299 = UINT16_MAX;
uint32_t x313 = UINT32_MAX;
uint16_t x333 = 29375U;
int8_t x346 = -1;
int64_t x348 = -1LL;
volatile int64_t t78 = 547717LL;
volatile int32_t x357 = -1;
volatile uint16_t x360 = 1U;
static uint8_t x364 = UINT8_MAX;
static volatile uint64_t t81 = 1584251210195680LLU;
int8_t x365 = INT8_MIN;
volatile int64_t t82 = 714LL;
int32_t x374 = INT32_MIN;
uint16_t x380 = 5259U;
volatile int16_t x384 = 1166;
int32_t x387 = 159247710;
int64_t x392 = INT64_MIN;
uint64_t x395 = UINT64_MAX;
int64_t x399 = 218268397678LL;
int32_t x400 = INT32_MIN;
volatile int64_t t90 = 32092640663879LL;
uint32_t x403 = UINT32_MAX;
static int8_t x412 = -14;
int64_t x414 = INT64_MAX;
int32_t x415 = 0;
int32_t x416 = -1;
static int64_t x417 = -1LL;
int8_t x422 = 0;
static volatile uint16_t x425 = 1U;
static int64_t x426 = 104024447LL;
uint32_t x428 = 2482U;
int16_t x433 = INT16_MIN;
int32_t x434 = -1;
int16_t x435 = INT16_MIN;


void f0(void) {
	volatile uint16_t x1 = UINT16_MAX;
	int16_t x2 = -2071;
	int32_t x3 = -22;
	int64_t x4 = -1LL;
	int64_t t0 = -1339355480053116LL;

	t0 = (x1-(x2%(x3^x4)));

	if (t0 != 65548LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x7 = -1;
	volatile uint32_t t1 = 92993755U;

	t1 = (x5-(x6%(x7^x8)));

	if (t1 != 4294902016U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	uint64_t x10 = UINT64_MAX;
	int8_t x12 = -12;
	volatile uint64_t t2 = 5858978LLU;

	t2 = (x9-(x10%(x11^x12)));

	if (t2 != 9223372036854775563LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = 1638436;
	int64_t x15 = INT64_MIN;
	int32_t x16 = -1;

	t3 = (x13-(x14%(x15^x16)));

	if (t3 != -1638309LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	static volatile uint16_t x18 = 1U;
	static uint8_t x19 = 1U;
	static volatile uint32_t x20 = 417U;
	uint64_t t4 = 592140469072LLU;

	t4 = (x17-(x18%(x19^x20)));

	if (t4 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	uint8_t x22 = 6U;
	volatile int64_t x23 = -1LL;
	static int16_t x24 = 12;
	int64_t t5 = -280LL;

	t5 = (x21-(x22%(x23^x24)));

	if (t5 != 2147483641LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 2404707U;
	volatile int16_t x26 = INT16_MAX;
	volatile int8_t x27 = INT8_MAX;
	int32_t x28 = INT32_MIN;
	volatile uint32_t t6 = 512U;

	t6 = (x25-(x26%(x27^x28)));

	if (t6 != 2371940U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = 712404105;
	int64_t x34 = -40LL;
	int8_t x35 = 15;
	static int64_t x36 = INT64_MAX;
	int64_t t7 = -7259281609575024LL;

	t7 = (x33-(x34%(x35^x36)));

	if (t7 != 712404145LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x41 = 3U;
	int32_t x42 = INT32_MAX;
	volatile uint64_t x43 = UINT64_MAX;
	volatile uint64_t t8 = 69672943961302452LLU;

	t8 = (x41-(x42%(x43^x44)));

	if (t8 != 18446744071562067972LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x46 = INT16_MIN;
	int8_t x47 = INT8_MIN;
	int32_t t9 = -1469652;

	t9 = (x45-(x46%(x47^x48)));

	if (t9 != 32768) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x49 = 5U;
	int32_t x51 = 6;
	uint16_t x52 = 1949U;
	volatile uint32_t t10 = 6271U;

	t10 = (x49-(x50%(x51^x52)));

	if (t10 != 4294965595U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = -38;
	uint64_t x54 = UINT64_MAX;
	static uint64_t x56 = 59LLU;
	volatile uint64_t t11 = 85734288LLU;

	t11 = (x53-(x54%(x55^x56)));

	if (t11 != 18446744073709490351LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = -81436;
	static uint8_t x58 = UINT8_MAX;
	static volatile int16_t x59 = 3;
	uint64_t x60 = UINT64_MAX;
	volatile uint64_t t12 = 1051965741556994LLU;

	t12 = (x57-(x58%(x59^x60)));

	if (t12 != 18446744073709469925LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x62 = 8U;
	int8_t x63 = 54;
	volatile int32_t x64 = -1;
	volatile uint32_t t13 = 78717610U;

	t13 = (x61-(x62%(x63^x64)));

	if (t13 != 524824992U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = -1;
	int64_t x70 = INT64_MIN;
	static int32_t x72 = INT32_MIN;
	int64_t t14 = -1LL;

	t14 = (x69-(x70%(x71^x72)));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x73 = INT32_MIN;
	static volatile uint64_t x74 = UINT64_MAX;
	static volatile int32_t x76 = INT32_MAX;
	uint64_t t15 = 6359750987LLU;

	t15 = (x73-(x74%(x75^x76)));

	if (t15 != 18446744071562066673LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x77 = 3U;
	static int32_t x79 = -1;
	int64_t x80 = INT64_MAX;
	int64_t t16 = 68796911494287210LL;

	t16 = (x77-(x78%(x79^x80)));

	if (t16 != 4LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x81 = 287203117;
	static volatile uint32_t x82 = 10113U;
	static int64_t x84 = INT64_MAX;
	volatile int64_t t17 = -7215LL;

	t17 = (x81-(x82%(x83^x84)));

	if (t17 != 287193004LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x89 = 0;
	static volatile int8_t x90 = -6;
	volatile uint8_t x91 = 123U;
	int8_t x92 = -1;
	int32_t t18 = -431;

	t18 = (x89-(x90%(x91^x92)));

	if (t18 != 6) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x93 = INT16_MAX;
	int16_t x94 = 0;
	volatile int32_t x96 = INT32_MAX;
	volatile int32_t t19 = -1;

	t19 = (x93-(x94%(x95^x96)));

	if (t19 != 32767) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x97 = 29327LLU;
	int8_t x98 = INT8_MAX;
	uint8_t x99 = 40U;
	int32_t x100 = -1;
	uint64_t t20 = 3362361991170258LLU;

	t20 = (x97-(x98%(x99^x100)));

	if (t20 != 29323LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x101 = UINT8_MAX;
	int8_t x102 = INT8_MIN;
	static volatile uint16_t x103 = 1U;
	int64_t x104 = -1LL;
	static int64_t t21 = 22000516809LL;

	t21 = (x101-(x102%(x103^x104)));

	if (t21 != 255LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x106 = -6542704;
	int32_t x108 = -1;

	t22 = (x105-(x106%(x107^x108)));

	if (t22 != -2147461776) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x110 = 2U;
	int64_t x112 = -6345LL;
	static int64_t t23 = 3593311559626669832LL;

	t23 = (x109-(x110%(x111^x112)));

	if (t23 != -3LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x113 = -309028704;
	static int16_t x114 = -1;
	int32_t x115 = INT32_MIN;
	uint64_t x116 = 14423905LLU;

	t24 = (x113-(x114%(x115^x116)));

	if (t24 != 18446744071267463170LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x117 = 4U;
	volatile uint32_t x118 = UINT32_MAX;
	uint32_t x119 = 1U;
	uint64_t x120 = 201012LLU;
	volatile uint64_t t25 = 183680942417LLU;

	t25 = (x117-(x118%(x119^x120)));

	if (t25 != 18446744073709428083LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x125 = -765677920;
	static uint16_t x126 = 36U;
	static volatile int32_t x127 = -3193283;
	uint16_t x128 = UINT16_MAX;

	t26 = (x125-(x126%(x127^x128)));

	if (t26 != -765677956) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x130 = 0;

	t27 = (x129-(x130%(x131^x132)));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x133 = -1;
	uint32_t x134 = UINT32_MAX;
	static uint8_t x136 = UINT8_MAX;
	int64_t t28 = 101LL;

	t28 = (x133-(x134%(x135^x136)));

	if (t28 != -4294967296LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x137 = 4060LLU;
	volatile uint16_t x138 = 15564U;
	static int64_t x139 = INT64_MIN;
	uint64_t t29 = 10119293878989LLU;

	t29 = (x137-(x138%(x139^x140)));

	if (t29 != 18446744073709540112LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x141 = 30144U;
	int64_t x142 = -1LL;
	uint64_t x143 = UINT64_MAX;
	static volatile uint64_t t30 = 689489342549422450LLU;

	t30 = (x141-(x142%(x143^x144)));

	if (t30 != 30125LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x145 = INT32_MIN;
	int64_t x146 = -363454102572979737LL;
	int64_t x147 = -41580187LL;
	int64_t x148 = INT64_MAX;
	static volatile int64_t t31 = -10LL;

	t31 = (x145-(x146%(x147^x148)));

	if (t31 != 363454100425496089LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x149 = -1;
	uint8_t x150 = 1U;
	uint32_t x151 = 6401815U;
	volatile int16_t x152 = -1;
	volatile uint32_t t32 = 4898114U;

	t32 = (x149-(x150%(x151^x152)));

	if (t32 != 4294967294U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x153 = -1LL;
	volatile int8_t x154 = INT8_MIN;
	int8_t x155 = -15;
	static volatile uint16_t x156 = 5U;
	static int64_t t33 = -219401LL;

	t33 = (x153-(x154%(x155^x156)));

	if (t33 != 7LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x157 = 38U;
	int64_t x158 = INT64_MAX;
	int8_t x159 = INT8_MAX;

	t34 = (x157-(x158%(x159^x160)));

	if (t34 != -8153LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x162 = 74U;
	int32_t x163 = -2804;
	int32_t x164 = 12272807;
	static volatile int64_t t35 = -495781237896LL;

	t35 = (x161-(x162%(x163^x164)));

	if (t35 != -268500590738LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x165 = 63U;
	static int32_t x166 = -1;
	int32_t x167 = INT32_MIN;

	t36 = (x165-(x166%(x167^x168)));

	if (t36 != 64) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x169 = 16488402141562580LLU;
	int64_t x170 = -1LL;
	volatile int64_t x171 = 1651519169LL;
	int64_t x172 = -313206527373341LL;

	t37 = (x169-(x170%(x171^x172)));

	if (t37 != 16488402141562581LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x173 = 195534789LL;
	uint8_t x174 = 23U;
	int64_t x175 = INT64_MAX;
	volatile uint16_t x176 = 8076U;

	t38 = (x173-(x174%(x175^x176)));

	if (t38 != 195534766LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x178 = UINT16_MAX;
	uint8_t x179 = 121U;
	int64_t t39 = 1627409406366408LL;

	t39 = (x177-(x178%(x179^x180)));

	if (t39 != -98303LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x181 = -1LL;
	int8_t x182 = 6;
	int8_t x183 = INT8_MIN;

	t40 = (x181-(x182%(x183^x184)));

	if (t40 != -7LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x185 = UINT32_MAX;
	static uint32_t x186 = 196U;
	static volatile int32_t x187 = INT32_MIN;
	static uint32_t t41 = 62074U;

	t41 = (x185-(x186%(x187^x188)));

	if (t41 != 4294967099U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x189 = -5;
	static volatile int64_t x190 = -724050LL;
	uint16_t x191 = UINT16_MAX;
	int64_t t42 = -3LL;

	t42 = (x189-(x190%(x191^x192)));

	if (t42 != 3149LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x193 = INT64_MIN;
	volatile uint32_t x194 = UINT32_MAX;
	volatile uint64_t x195 = 2144161152454776762LLU;
	uint8_t x196 = 91U;
	static volatile uint64_t t43 = 58024144063LLU;

	t43 = (x193-(x194%(x195^x196)));

	if (t43 != 9223372032559808513LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x200 = 13U;

	t44 = (x197-(x198%(x199^x200)));

	if (t44 != 18446744071551675188LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x202 = INT8_MAX;
	int8_t x203 = -4;
	volatile int8_t x204 = INT8_MAX;
	volatile int32_t t45 = 7;

	t45 = (x201-(x202%(x203^x204)));

	if (t45 != 32) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x209 = INT32_MAX;
	int32_t x210 = 128706;
	int64_t x211 = 1136413814690LL;
	int32_t x212 = INT32_MIN;
	int64_t t46 = -1LL;

	t46 = (x209-(x210%(x211^x212)));

	if (t46 != 2147354941LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x213 = INT16_MAX;
	uint8_t x214 = 3U;
	int32_t x215 = INT32_MIN;
	volatile uint32_t x216 = 64U;
	uint32_t t47 = 0U;

	t47 = (x213-(x214%(x215^x216)));

	if (t47 != 32764U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x218 = 15LLU;
	int16_t x220 = -1;
	uint64_t t48 = 2413470847140LLU;

	t48 = (x217-(x218%(x219^x220)));

	if (t48 != 18446744073709551473LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x221 = 9975U;
	uint64_t x223 = 86575105458840652LLU;
	static int32_t x224 = INT32_MIN;
	static volatile uint64_t t49 = 7LLU;

	t49 = (x221-(x222%(x223^x224)));

	if (t49 != 18446744069414594296LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x229 = UINT8_MAX;
	static int32_t x230 = INT32_MIN;
	static int16_t x231 = INT16_MAX;
	static uint16_t x232 = UINT16_MAX;

	t50 = (x229-(x230%(x231^x232)));

	if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x233 = INT16_MIN;
	volatile int64_t t51 = -17126960860387507LL;

	t51 = (x233-(x234%(x235^x236)));

	if (t51 != 2147450880LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x237 = 101555LLU;
	int16_t x238 = -1;
	int8_t x239 = INT8_MIN;
	static int8_t x240 = -1;
	volatile uint64_t t52 = 2LLU;

	t52 = (x237-(x238%(x239^x240)));

	if (t52 != 101556LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x242 = INT8_MIN;
	int64_t x243 = INT64_MIN;
	uint32_t x244 = 103U;

	t53 = (x241-(x242%(x243^x244)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x245 = UINT64_MAX;
	int32_t x246 = INT32_MIN;
	volatile int64_t x248 = -100421238215LL;
	uint64_t t54 = 481638425007527LLU;

	t54 = (x245-(x246%(x247^x248)));

	if (t54 != 2147483647LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x249 = INT64_MIN;
	int8_t x250 = INT8_MIN;
	int8_t x251 = INT8_MIN;
	int32_t x252 = INT32_MIN;
	volatile int64_t t55 = -1915788079033095992LL;

	t55 = (x249-(x250%(x251^x252)));

	if (t55 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x253 = 162276731321478431LLU;
	int32_t x254 = INT32_MIN;
	static uint32_t x255 = 2798005U;
	static int16_t x256 = INT16_MAX;
	volatile uint64_t t56 = 12487036LLU;

	t56 = (x253-(x254%(x255^x256)));

	if (t56 != 162276731320066113LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x258 = INT64_MAX;
	int32_t x259 = INT32_MIN;
	static int32_t x260 = -407060192;
	int64_t t57 = 139769980073138326LL;

	t57 = (x257-(x258%(x259^x260)));

	if (t57 != -3293748639LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x261 = 5317612733132936LL;
	int32_t x262 = -41584085;
	int8_t x263 = INT8_MIN;
	int64_t x264 = 705165633532LL;
	int64_t t58 = 9741308778915685LL;

	t58 = (x261-(x262%(x263^x264)));

	if (t58 != 5317612774717021LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x265 = UINT32_MAX;
	volatile int64_t x266 = INT64_MAX;
	int64_t x267 = -1LL;
	uint64_t x268 = 4901816793396112107LLU;
	static uint64_t t59 = 14652424611793218LLU;

	t59 = (x265-(x266%(x267^x268)));

	if (t59 != 9223372041149743104LLU) { NG(); } else { ; }
	
}

void f60(void) {


	t60 = (x269-(x270%(x271^x272)));

	if (t60 != 417777019921LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x273 = -9;
	volatile int64_t x274 = 3297831LL;
	int64_t x275 = 3556533335686532173LL;
	volatile int32_t x276 = INT32_MIN;
	int64_t t61 = -277LL;

	t61 = (x273-(x274%(x275^x276)));

	if (t61 != -3297840LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x277 = INT8_MAX;
	int8_t x278 = INT8_MIN;
	static volatile int64_t x279 = INT64_MIN;
	uint16_t x280 = UINT16_MAX;
	int64_t t62 = 275283340944LL;

	t62 = (x277-(x278%(x279^x280)));

	if (t62 != 255LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x281 = 4907;
	uint8_t x282 = 14U;
	int64_t x284 = INT64_MAX;
	static volatile int64_t t63 = 11LL;

	t63 = (x281-(x282%(x283^x284)));

	if (t63 != 4893LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x285 = 15U;
	uint8_t x286 = 21U;
	int8_t x287 = -1;
	static uint32_t t64 = 244301U;

	t64 = (x285-(x286%(x287^x288)));

	if (t64 != 4294967290U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x290 = 51U;

	t65 = (x289-(x290%(x291^x292)));

	if (t65 != 2147483596LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x293 = -1;
	uint64_t x294 = 4907148818771351158LLU;
	uint8_t x296 = 19U;
	volatile uint64_t t66 = 123199110783611182LLU;

	t66 = (x293-(x294%(x295^x296)));

	if (t66 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x297 = 1;
	static int32_t x298 = -942924979;
	int16_t x300 = -2;
	volatile int32_t t67 = -50969841;

	t67 = (x297-(x298%(x299^x300)));

	if (t67 != 7400) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x301 = INT8_MIN;
	uint16_t x302 = 32U;
	uint64_t x303 = 26882967768LLU;
	int8_t x304 = 17;
	static volatile uint64_t t68 = 4867064LLU;

	t68 = (x301-(x302%(x303^x304)));

	if (t68 != 18446744073709551456LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x305 = INT16_MIN;
	int32_t x306 = -1;
	int8_t x307 = -1;
	int8_t x308 = INT8_MAX;
	volatile int32_t t69 = 298839;

	t69 = (x305-(x306%(x307^x308)));

	if (t69 != -32767) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x314 = 231U;
	uint8_t x315 = UINT8_MAX;
	uint16_t x316 = 1517U;
	static volatile uint32_t t70 = 360734193U;

	t70 = (x313-(x314%(x315^x316)));

	if (t70 != 4294967064U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x317 = INT8_MIN;
	int32_t x318 = -81855;
	static int16_t x319 = -1;
	int16_t x320 = INT16_MAX;
	int32_t t71 = -343722305;

	t71 = (x317-(x318%(x319^x320)));

	if (t71 != 16191) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x321 = INT16_MIN;
	int16_t x322 = 3;
	static int16_t x323 = -1;
	uint8_t x324 = 33U;
	volatile int32_t t72 = 3189;

	t72 = (x321-(x322%(x323^x324)));

	if (t72 != -32771) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x329 = INT8_MIN;
	int64_t x330 = 66272269295LL;
	uint8_t x331 = 6U;
	volatile int32_t x332 = INT32_MIN;
	int64_t t73 = 60089LL;

	t73 = (x329-(x330%(x331^x332)));

	if (t73 != -1847760163LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x334 = -14314;
	static int16_t x335 = INT16_MAX;
	int32_t x336 = INT32_MIN;
	int32_t t74 = -119914;

	t74 = (x333-(x334%(x335^x336)));

	if (t74 != 43689) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x337 = INT32_MAX;
	int64_t x338 = -1LL;
	volatile int64_t x339 = 13LL;
	volatile uint8_t x340 = 2U;
	int64_t t75 = -101LL;

	t75 = (x337-(x338%(x339^x340)));

	if (t75 != 2147483648LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x341 = INT64_MIN;
	int8_t x342 = 0;
	volatile int32_t x343 = INT32_MAX;
	int32_t x344 = INT32_MIN;
	int64_t t76 = INT64_MIN;

	t76 = (x341-(x342%(x343^x344)));

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x345 = 8U;
	int64_t x347 = 182211761LL;
	int64_t t77 = 230002282728271LL;

	t77 = (x345-(x346%(x347^x348)));

	if (t77 != 9LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x349 = 55U;
	int32_t x350 = 1;
	int32_t x351 = INT32_MIN;
	int64_t x352 = -153LL;

	t78 = (x349-(x350%(x351^x352)));

	if (t78 != 54LL) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x353 = INT32_MIN;
	uint16_t x354 = UINT16_MAX;
	int64_t x355 = INT64_MIN;
	uint64_t x356 = 622645428710LLU;
	static uint64_t t79 = 2210LLU;

	t79 = (x353-(x354%(x355^x356)));

	if (t79 != 18446744071562002433LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x358 = 29U;
	static int32_t x359 = -1;
	volatile uint32_t t80 = 1014U;

	t80 = (x357-(x358%(x359^x360)));

	if (t80 != 4294967266U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x361 = 0U;
	volatile uint64_t x362 = 15140814392LLU;
	uint32_t x363 = 421882U;

	t81 = (x361-(x362%(x363^x364)));

	if (t81 != 18446744073709300257LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x366 = INT8_MAX;
	uint32_t x367 = 496163U;
	int64_t x368 = INT64_MIN;

	t82 = (x365-(x366%(x367^x368)));

	if (t82 != -255LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x369 = 229;
	static volatile int64_t x370 = INT64_MAX;
	uint8_t x371 = UINT8_MAX;
	volatile int32_t x372 = -13333;
	volatile int64_t t83 = 0LL;

	t83 = (x369-(x370%(x371^x372)));

	if (t83 != -6258LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x373 = -1;
	uint8_t x375 = UINT8_MAX;
	uint64_t x376 = UINT64_MAX;
	volatile uint64_t t84 = 2670112LLU;

	t84 = (x373-(x374%(x375^x376)));

	if (t84 != 2147483647LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x377 = -7;
	int64_t x378 = INT64_MIN;
	static int8_t x379 = -1;
	volatile int64_t t85 = -4499598389907228LL;

	t85 = (x377-(x378%(x379^x380)));

	if (t85 != 3201LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x381 = INT32_MIN;
	int64_t x382 = INT64_MIN;
	volatile int64_t x383 = -1LL;
	volatile int64_t t86 = 433380647283LL;

	t86 = (x381-(x382%(x383^x384)));

	if (t86 != -2147482980LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x385 = -1LL;
	uint8_t x386 = 33U;
	int32_t x388 = INT32_MAX;
	volatile int64_t t87 = -3LL;

	t87 = (x385-(x386%(x387^x388)));

	if (t87 != -34LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x389 = INT8_MIN;
	int16_t x390 = -807;
	uint16_t x391 = 27108U;
	volatile int64_t t88 = -350371931305625LL;

	t88 = (x389-(x390%(x391^x392)));

	if (t88 != 679LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x393 = INT16_MIN;
	int64_t x394 = -1LL;
	static uint16_t x396 = UINT16_MAX;
	uint64_t t89 = 132716950599187571LLU;

	t89 = (x393-(x394%(x395^x396)));

	if (t89 != 18446744073709453313LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x397 = 10260U;
	uint8_t x398 = 84U;

	t90 = (x397-(x398%(x399^x400)));

	if (t90 != 10176LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x401 = -452;
	int64_t x402 = INT64_MIN;
	int64_t x404 = -6269LL;
	int64_t t91 = -4431140342846LL;

	t91 = (x401-(x402%(x403^x404)));

	if (t91 != 19643460LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x405 = 382659617U;
	volatile int8_t x406 = -1;
	static volatile uint8_t x407 = 50U;
	int64_t x408 = INT64_MAX;
	int64_t t92 = 2923624214LL;

	t92 = (x405-(x406%(x407^x408)));

	if (t92 != 382659618LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x409 = -1LL;
	static int16_t x410 = INT16_MAX;
	int8_t x411 = 1;
	static volatile int64_t t93 = 8574319043LL;

	t93 = (x409-(x410%(x411^x412)));

	if (t93 != -8LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x413 = 10U;
	volatile int64_t t94 = 2087217760281600LL;

	t94 = (x413-(x414%(x415^x416)));

	if (t94 != 10LL) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x418 = INT32_MIN;
	int32_t x419 = 0;
	static int8_t x420 = -1;
	volatile int64_t t95 = 2436472613507LL;

	t95 = (x417-(x418%(x419^x420)));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x421 = -21;
	uint32_t x423 = UINT32_MAX;
	int64_t x424 = -1LL;
	static int64_t t96 = -59249298854LL;

	t96 = (x421-(x422%(x423^x424)));

	if (t96 != -21LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x427 = INT32_MAX;
	static int64_t t97 = -677568940LL;

	t97 = (x425-(x426%(x427^x428)));

	if (t97 != -104024446LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x436 = -1;
	static int32_t t98 = -7305;

	t98 = (x433-(x434%(x435^x436)));

	if (t98 != -32767) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x437 = -1;
	int64_t x438 = INT64_MIN;
	int16_t x439 = INT16_MAX;
	static volatile uint64_t x440 = UINT64_MAX;
	uint64_t t99 = 400791LLU;

	t99 = (x437-(x438%(x439^x440)));

	if (t99 != 9223372036854775807LLU) { NG(); } else { ; }
	
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

