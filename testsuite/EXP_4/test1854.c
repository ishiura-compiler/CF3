#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x4 = -7717LL;
int32_t x9 = -28;
int8_t x13 = INT8_MIN;
int64_t x14 = INT64_MAX;
int32_t t5 = 9428;
int64_t x25 = INT64_MIN;
uint8_t x31 = 109U;
static int32_t t8 = -11978;
int32_t t9 = 1021029052;
static uint32_t x45 = 52566011U;
uint32_t x59 = 45261759U;
int32_t t16 = 7;
static int16_t x75 = -40;
static int32_t x78 = -1;
volatile int32_t x88 = 11034;
static int16_t x94 = -1;
volatile int32_t t23 = -868685;
uint8_t x97 = 5U;
uint32_t x98 = UINT32_MAX;
static uint32_t x108 = 300850U;
static int32_t t26 = -24;
static volatile int32_t t27 = -26;
static int32_t x116 = INT32_MAX;
volatile int32_t t28 = 29429;
int32_t x117 = INT32_MAX;
int16_t x120 = INT16_MAX;
uint16_t x131 = 0U;
static int64_t x137 = -2332LL;
int64_t x140 = INT64_MIN;
static int32_t x145 = INT32_MIN;
uint8_t x146 = UINT8_MAX;
int32_t t36 = -53;
uint8_t x149 = 0U;
static volatile int8_t x152 = -1;
volatile int32_t t37 = -183;
int32_t x158 = 1406318;
static volatile int32_t t39 = 1;
uint8_t x169 = 46U;
uint8_t x174 = 12U;
uint8_t x175 = 21U;
volatile int32_t t44 = 563437106;
int16_t x185 = -86;
int32_t t47 = 5;
volatile uint32_t x194 = UINT32_MAX;
static int64_t x196 = INT64_MIN;
int8_t x208 = INT8_MIN;
volatile int32_t t55 = -10773;
volatile int16_t x227 = 1;
int8_t x228 = -11;
static volatile uint8_t x232 = UINT8_MAX;
int16_t x234 = -10362;
int32_t t61 = 0;
uint64_t x257 = 18944431460570264LLU;
static volatile int32_t t66 = -63;
int32_t x281 = INT32_MIN;
static uint8_t x284 = 4U;
int64_t x286 = -42282778077786159LL;
int32_t x291 = INT32_MIN;
static int32_t x297 = INT32_MIN;
int64_t x298 = INT64_MAX;
int64_t x303 = INT64_MIN;
volatile int32_t t76 = 101382;
uint8_t x316 = 0U;
int64_t x317 = -268758LL;
static int8_t x321 = INT8_MIN;
volatile uint8_t x322 = 12U;
int64_t x335 = 56540LL;
int64_t x339 = INT64_MIN;
static int8_t x340 = INT8_MIN;
int64_t x343 = -1LL;
int32_t t85 = 429544;
volatile int64_t x350 = INT64_MIN;
int64_t x351 = INT64_MIN;
int32_t t87 = 2555324;
volatile uint16_t x356 = 9U;
static int8_t x362 = INT8_MIN;
int64_t x368 = INT64_MAX;
int32_t t91 = 745112128;
static int16_t x377 = INT16_MIN;
int32_t t94 = 8236549;
volatile int8_t x381 = 57;
volatile int16_t x389 = INT16_MIN;
int32_t t97 = 60621295;
volatile int32_t x394 = -1;
int16_t x395 = -3;
int64_t x396 = -1LL;
volatile int32_t t98 = -609182;
volatile int16_t x397 = -1;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int64_t x2 = -191681956205906LL;
	uint16_t x3 = 7431U;
	volatile int32_t t0 = -221;

	t0 = (x1==(x2^(x3&x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -26;
	int32_t x6 = INT32_MIN;
	uint16_t x7 = 27U;
	volatile uint16_t x8 = 13U;
	int32_t t1 = -27835177;

	t1 = (x5==(x6^(x7&x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x10 = -471;
	int16_t x11 = INT16_MAX;
	static volatile int8_t x12 = -7;
	int32_t t2 = 15165;

	t2 = (x9==(x10^(x11&x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x15 = INT32_MIN;
	static int16_t x16 = INT16_MAX;
	volatile int32_t t3 = 497622;

	t3 = (x13==(x14^(x15&x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	uint32_t x18 = 2194U;
	int8_t x19 = -1;
	int32_t x20 = 125146264;
	int32_t t4 = -65947;

	t4 = (x17==(x18^(x19&x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 6572;
	uint32_t x22 = UINT32_MAX;
	volatile int16_t x23 = INT16_MAX;
	volatile uint16_t x24 = 4447U;

	t5 = (x21==(x22^(x23&x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x26 = 624552951273461269LLU;
	static int8_t x27 = INT8_MAX;
	int16_t x28 = INT16_MIN;
	int32_t t6 = -8;

	t6 = (x25==(x26^(x27&x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	int64_t x30 = INT64_MIN;
	uint16_t x32 = 454U;
	int32_t t7 = 21726672;

	t7 = (x29==(x30^(x31&x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = INT32_MAX;
	uint32_t x34 = 2533U;
	int8_t x35 = 3;
	int64_t x36 = INT64_MAX;

	t8 = (x33==(x34^(x35&x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	uint16_t x38 = UINT16_MAX;
	uint8_t x39 = UINT8_MAX;
	int64_t x40 = INT64_MIN;

	t9 = (x37==(x38^(x39&x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x41 = UINT16_MAX;
	int8_t x42 = -2;
	static int64_t x43 = INT64_MAX;
	int32_t x44 = INT32_MAX;
	volatile int32_t t10 = 37406;

	t10 = (x41==(x42^(x43&x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x46 = 3U;
	int64_t x47 = 94893250LL;
	static int16_t x48 = 0;
	volatile int32_t t11 = 10831;

	t11 = (x45==(x46^(x47&x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x49 = 1723461U;
	int32_t x50 = INT32_MIN;
	int64_t x51 = INT64_MAX;
	static int32_t x52 = INT32_MAX;
	volatile int32_t t12 = 24907403;

	t12 = (x49==(x50^(x51&x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = -11;
	uint32_t x54 = 61U;
	uint16_t x55 = UINT16_MAX;
	volatile int64_t x56 = 38697262841LL;
	volatile int32_t t13 = -12137;

	t13 = (x53==(x54^(x55&x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x57 = 2109LLU;
	static int64_t x58 = INT64_MIN;
	static int8_t x60 = INT8_MIN;
	static int32_t t14 = 249906;

	t14 = (x57==(x58^(x59&x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint32_t x61 = 5U;
	static uint32_t x62 = 37282163U;
	uint64_t x63 = 360353358167LLU;
	int32_t x64 = -1032665832;
	volatile int32_t t15 = 0;

	t15 = (x61==(x62^(x63&x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = UINT64_MAX;
	int16_t x66 = -25;
	uint64_t x67 = 2812964LLU;
	int16_t x68 = -1844;

	t16 = (x65==(x66^(x67&x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MAX;
	int64_t x70 = -73287168LL;
	static volatile int8_t x71 = -1;
	volatile int32_t x72 = INT32_MIN;
	int32_t t17 = -1;

	t17 = (x69==(x70^(x71&x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x73 = INT32_MIN;
	int32_t x74 = INT32_MIN;
	uint64_t x76 = 261549417353122LLU;
	volatile int32_t t18 = -6217;

	t18 = (x73==(x74^(x75&x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	uint8_t x79 = UINT8_MAX;
	int8_t x80 = -36;
	int32_t t19 = 223158301;

	t19 = (x77==(x78^(x79&x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -1;
	volatile uint32_t x82 = UINT32_MAX;
	volatile int32_t x83 = 3586;
	volatile int16_t x84 = 1362;
	int32_t t20 = 1045175;

	t20 = (x81==(x82^(x83&x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x85 = -1;
	volatile int8_t x86 = INT8_MAX;
	uint8_t x87 = UINT8_MAX;
	int32_t t21 = -3;

	t21 = (x85==(x86^(x87&x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = -1;
	static uint64_t x90 = 34LLU;
	int32_t x91 = INT32_MIN;
	int32_t x92 = INT32_MIN;
	volatile int32_t t22 = -128150453;

	t22 = (x89==(x90^(x91&x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = 24;
	int16_t x95 = INT16_MIN;
	int8_t x96 = 2;

	t23 = (x93==(x94^(x95&x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int32_t x99 = -31;
	int8_t x100 = -1;
	static volatile int32_t t24 = -1033867717;

	t24 = (x97==(x98^(x99&x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	uint32_t x102 = 1810724530U;
	static int16_t x103 = INT16_MAX;
	volatile int16_t x104 = INT16_MIN;
	static volatile int32_t t25 = 71110;

	t25 = (x101==(x102^(x103&x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x105 = 10U;
	int32_t x106 = INT32_MIN;
	uint32_t x107 = UINT32_MAX;

	t26 = (x105==(x106^(x107&x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	int8_t x110 = INT8_MIN;
	int16_t x111 = INT16_MAX;
	int64_t x112 = INT64_MAX;

	t27 = (x109==(x110^(x111&x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	int32_t x114 = -1;
	volatile uint32_t x115 = UINT32_MAX;

	t28 = (x113==(x114^(x115&x116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x118 = INT32_MAX;
	static volatile uint32_t x119 = 1247402U;
	int32_t t29 = 804457;

	t29 = (x117==(x118^(x119&x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x121 = INT32_MAX;
	volatile int8_t x122 = INT8_MIN;
	volatile int64_t x123 = INT64_MAX;
	int16_t x124 = -9;
	static int32_t t30 = 32609;

	t30 = (x121==(x122^(x123&x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x125 = INT8_MIN;
	int16_t x126 = -4;
	volatile int8_t x127 = -2;
	int8_t x128 = 3;
	int32_t t31 = -7;

	t31 = (x125==(x126^(x127&x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MAX;
	static uint16_t x130 = UINT16_MAX;
	uint16_t x132 = 974U;
	int32_t t32 = 1007633;

	t32 = (x129==(x130^(x131&x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x133 = INT64_MIN;
	int32_t x134 = INT32_MAX;
	uint32_t x135 = 1001U;
	static uint8_t x136 = 30U;
	int32_t t33 = 334364438;

	t33 = (x133==(x134^(x135&x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x138 = INT8_MIN;
	volatile int8_t x139 = 4;
	static int32_t t34 = 7955720;

	t34 = (x137==(x138^(x139&x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x141 = 4LLU;
	static int64_t x142 = INT64_MAX;
	int64_t x143 = INT64_MIN;
	volatile int64_t x144 = INT64_MAX;
	int32_t t35 = 550106528;

	t35 = (x141==(x142^(x143&x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x147 = 19;
	volatile uint32_t x148 = 177U;

	t36 = (x145==(x146^(x147&x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x150 = UINT16_MAX;
	int16_t x151 = INT16_MIN;

	t37 = (x149==(x150^(x151&x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x153 = -677730647LL;
	int64_t x154 = 10803LL;
	static uint32_t x155 = UINT32_MAX;
	volatile uint8_t x156 = 11U;
	static int32_t t38 = -45;

	t38 = (x153==(x154^(x155&x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x157 = UINT16_MAX;
	static int64_t x159 = -1LL;
	int64_t x160 = INT64_MIN;

	t39 = (x157==(x158^(x159&x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x161 = INT64_MIN;
	uint32_t x162 = 23U;
	int16_t x163 = -7;
	static uint8_t x164 = 49U;
	int32_t t40 = 1;

	t40 = (x161==(x162^(x163&x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x165 = -811;
	int16_t x166 = 4329;
	static int8_t x167 = INT8_MIN;
	static int8_t x168 = INT8_MAX;
	static int32_t t41 = -220825902;

	t41 = (x165==(x166^(x167&x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x170 = -2869;
	uint32_t x171 = 52781746U;
	static int64_t x172 = INT64_MIN;
	int32_t t42 = 2;

	t42 = (x169==(x170^(x171&x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -1;
	static int32_t x176 = INT32_MAX;
	volatile int32_t t43 = -8799;

	t43 = (x173==(x174^(x175&x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x177 = INT64_MIN;
	volatile int16_t x178 = INT16_MIN;
	int16_t x179 = INT16_MIN;
	static int32_t x180 = -641045;

	t44 = (x177==(x178^(x179&x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = -1LL;
	static uint64_t x182 = 711412242292LLU;
	uint8_t x183 = 1U;
	volatile uint16_t x184 = 2808U;
	int32_t t45 = 434786405;

	t45 = (x181==(x182^(x183&x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x186 = INT32_MIN;
	static int64_t x187 = -130990927151655LL;
	static int16_t x188 = -3;
	volatile int32_t t46 = -38;

	t46 = (x185==(x186^(x187&x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	static uint64_t x190 = 5177LLU;
	int32_t x191 = INT32_MIN;
	static int8_t x192 = 0;

	t47 = (x189==(x190^(x191&x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x193 = INT64_MIN;
	int16_t x195 = INT16_MIN;
	int32_t t48 = 336176443;

	t48 = (x193==(x194^(x195&x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x197 = -37582511883773LL;
	uint64_t x198 = 16980133343LLU;
	volatile int16_t x199 = INT16_MIN;
	volatile int64_t x200 = INT64_MIN;
	volatile int32_t t49 = -30865568;

	t49 = (x197==(x198^(x199&x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MAX;
	volatile int64_t x202 = INT64_MIN;
	static int16_t x203 = -1;
	int16_t x204 = -1;
	static int32_t t50 = -116396;

	t50 = (x201==(x202^(x203&x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -1LL;
	static int32_t x206 = -26596161;
	uint32_t x207 = 538U;
	static int32_t t51 = -2;

	t51 = (x205==(x206^(x207&x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MAX;
	static volatile int32_t x210 = INT32_MIN;
	static uint64_t x211 = UINT64_MAX;
	int8_t x212 = INT8_MIN;
	int32_t t52 = -197396774;

	t52 = (x209==(x210^(x211&x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = 16657;
	int16_t x214 = 144;
	volatile uint64_t x215 = UINT64_MAX;
	volatile int32_t x216 = 3833397;
	volatile int32_t t53 = -153572192;

	t53 = (x213==(x214^(x215&x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x217 = -1;
	int16_t x218 = -1096;
	static int64_t x219 = -404801161LL;
	int64_t x220 = INT64_MAX;
	volatile int32_t t54 = -25524;

	t54 = (x217==(x218^(x219&x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = 17;
	volatile int8_t x222 = 60;
	uint64_t x223 = 10635481088LLU;
	uint32_t x224 = 1994656U;

	t55 = (x221==(x222^(x223&x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MIN;
	int16_t x226 = -151;
	static int32_t t56 = -4689;

	t56 = (x225==(x226^(x227&x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 28066972591LLU;
	static int8_t x230 = -1;
	static int8_t x231 = 5;
	static volatile int32_t t57 = 5386;

	t57 = (x229==(x230^(x231&x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = 1;
	int32_t x235 = 374918850;
	uint32_t x236 = 2U;
	int32_t t58 = 4034151;

	t58 = (x233==(x234^(x235&x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = 1U;
	uint16_t x238 = 396U;
	int16_t x239 = 144;
	uint8_t x240 = 1U;
	int32_t t59 = -1008257112;

	t59 = (x237==(x238^(x239&x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MIN;
	int8_t x242 = -1;
	uint64_t x243 = 64540863LLU;
	int64_t x244 = -1LL;
	static volatile int32_t t60 = -3529945;

	t60 = (x241==(x242^(x243&x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x245 = INT8_MIN;
	uint8_t x246 = 23U;
	uint8_t x247 = 3U;
	volatile int8_t x248 = INT8_MIN;

	t61 = (x245==(x246^(x247&x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -1;
	int8_t x250 = INT8_MIN;
	int64_t x251 = -1LL;
	uint64_t x252 = 2262938156745591381LLU;
	int32_t t62 = 1;

	t62 = (x249==(x250^(x251&x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = UINT32_MAX;
	static int16_t x254 = -1;
	static volatile int8_t x255 = -4;
	uint16_t x256 = 110U;
	int32_t t63 = -486;

	t63 = (x253==(x254^(x255&x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x258 = INT16_MIN;
	volatile uint8_t x259 = 7U;
	uint8_t x260 = 22U;
	int32_t t64 = 14;

	t64 = (x257==(x258^(x259&x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x261 = 40588163496123578LLU;
	static int8_t x262 = INT8_MAX;
	uint64_t x263 = 115372LLU;
	uint8_t x264 = 4U;
	volatile int32_t t65 = 13;

	t65 = (x261==(x262^(x263&x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = UINT32_MAX;
	uint16_t x266 = UINT16_MAX;
	int32_t x267 = -1;
	static int16_t x268 = 98;

	t66 = (x265==(x266^(x267&x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = 7025511168171735810LLU;
	int8_t x270 = -1;
	static int64_t x271 = 10561814LL;
	int16_t x272 = 5048;
	volatile int32_t t67 = 0;

	t67 = (x269==(x270^(x271&x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x273 = INT8_MIN;
	int8_t x274 = INT8_MIN;
	static int8_t x275 = -1;
	int16_t x276 = INT16_MAX;
	static int32_t t68 = 19835;

	t68 = (x273==(x274^(x275&x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x277 = 5093020U;
	int32_t x278 = INT32_MIN;
	int64_t x279 = -1LL;
	uint8_t x280 = 14U;
	int32_t t69 = 115;

	t69 = (x277==(x278^(x279&x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x282 = INT32_MIN;
	uint8_t x283 = 0U;
	volatile int32_t t70 = 175469;

	t70 = (x281==(x282^(x283&x284)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x285 = INT64_MIN;
	int64_t x287 = INT64_MAX;
	int8_t x288 = INT8_MIN;
	static volatile int32_t t71 = -16;

	t71 = (x285==(x286^(x287&x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	int32_t x290 = INT32_MIN;
	int32_t x292 = INT32_MIN;
	int32_t t72 = -3796489;

	t72 = (x289==(x290^(x291&x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = 0U;
	int8_t x294 = INT8_MIN;
	int64_t x295 = -3LL;
	int32_t x296 = INT32_MIN;
	static volatile int32_t t73 = 443364532;

	t73 = (x293==(x294^(x295&x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x299 = UINT16_MAX;
	static int32_t x300 = INT32_MIN;
	static int32_t t74 = -41606231;

	t74 = (x297==(x298^(x299&x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x301 = INT32_MIN;
	volatile uint32_t x302 = UINT32_MAX;
	volatile uint64_t x304 = UINT64_MAX;
	int32_t t75 = -513821296;

	t75 = (x301==(x302^(x303&x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MAX;
	uint32_t x306 = 283U;
	uint32_t x307 = 7453680U;
	volatile int8_t x308 = 2;

	t76 = (x305==(x306^(x307&x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x309 = 1874U;
	static uint8_t x310 = 122U;
	uint32_t x311 = 17U;
	int64_t x312 = INT64_MIN;
	volatile int32_t t77 = -255;

	t77 = (x309==(x310^(x311&x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = -1;
	uint32_t x314 = 26U;
	int32_t x315 = INT32_MIN;
	static volatile int32_t t78 = -34;

	t78 = (x313==(x314^(x315&x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint64_t x318 = UINT64_MAX;
	static int16_t x319 = 0;
	int16_t x320 = INT16_MIN;
	static int32_t t79 = -23939200;

	t79 = (x317==(x318^(x319&x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x323 = 275U;
	int16_t x324 = INT16_MIN;
	volatile int32_t t80 = 1;

	t80 = (x321==(x322^(x323&x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x325 = UINT64_MAX;
	static int16_t x326 = INT16_MIN;
	int16_t x327 = INT16_MAX;
	uint16_t x328 = 1U;
	volatile int32_t t81 = 1069;

	t81 = (x325==(x326^(x327&x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -1;
	uint32_t x330 = 10034420U;
	volatile uint8_t x331 = UINT8_MAX;
	int16_t x332 = INT16_MIN;
	volatile int32_t t82 = 966312306;

	t82 = (x329==(x330^(x331&x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MAX;
	uint16_t x334 = 7589U;
	uint64_t x336 = 14LLU;
	volatile int32_t t83 = -150107703;

	t83 = (x333==(x334^(x335&x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = UINT32_MAX;
	int64_t x338 = -1LL;
	int32_t t84 = 145;

	t84 = (x337==(x338^(x339&x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = -2;
	uint16_t x342 = 487U;
	int8_t x344 = INT8_MIN;

	t85 = (x341==(x342^(x343&x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = 122901LL;
	uint16_t x346 = 2U;
	int32_t x347 = 7037;
	int32_t x348 = INT32_MAX;
	static volatile int32_t t86 = 65287110;

	t86 = (x345==(x346^(x347&x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = -1LL;
	static volatile uint16_t x352 = UINT16_MAX;

	t87 = (x349==(x350^(x351&x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = 0;
	uint16_t x354 = UINT16_MAX;
	int64_t x355 = -68730013490376837LL;
	int32_t t88 = 1150485;

	t88 = (x353==(x354^(x355&x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	static int32_t x358 = INT32_MIN;
	int64_t x359 = INT64_MAX;
	volatile uint64_t x360 = UINT64_MAX;
	int32_t t89 = 263;

	t89 = (x357==(x358^(x359&x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MIN;
	volatile int16_t x363 = 3018;
	static uint16_t x364 = 12196U;
	volatile int32_t t90 = -3;

	t90 = (x361==(x362^(x363&x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x365 = 4105430590484598278LL;
	volatile int16_t x366 = 7117;
	uint32_t x367 = UINT32_MAX;

	t91 = (x365==(x366^(x367&x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MAX;
	static int16_t x370 = INT16_MIN;
	static int8_t x371 = -12;
	uint32_t x372 = UINT32_MAX;
	static volatile int32_t t92 = -5262243;

	t92 = (x369==(x370^(x371&x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x373 = -1LL;
	int64_t x374 = -1LL;
	volatile int8_t x375 = -1;
	uint8_t x376 = 6U;
	int32_t t93 = -284;

	t93 = (x373==(x374^(x375&x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x378 = INT16_MIN;
	int64_t x379 = -91794LL;
	int8_t x380 = INT8_MIN;

	t94 = (x377==(x378^(x379&x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x382 = -205;
	static uint64_t x383 = UINT64_MAX;
	uint8_t x384 = 29U;
	int32_t t95 = 7208;

	t95 = (x381==(x382^(x383&x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x385 = 0;
	int16_t x386 = 15;
	uint8_t x387 = 27U;
	static uint32_t x388 = 70870U;
	volatile int32_t t96 = 27;

	t96 = (x385==(x386^(x387&x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x390 = -19LL;
	uint16_t x391 = 94U;
	int32_t x392 = INT32_MIN;

	t97 = (x389==(x390^(x391&x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = -1;

	t98 = (x393==(x394^(x395&x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x398 = INT64_MIN;
	static int64_t x399 = 1308137LL;
	volatile uint8_t x400 = 9U;
	int32_t t99 = -579741570;

	t99 = (x397==(x398^(x399&x400)));

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

