#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t0 = 1LL;
int32_t x11 = -427;
uint64_t x18 = 92089208600295057LLU;
volatile int8_t x20 = INT8_MAX;
volatile uint64_t t3 = 103018257614906703LLU;
int32_t x23 = 244305163;
int32_t x24 = -1;
uint64_t t4 = 481870240LLU;
int32_t x36 = -1;
volatile int64_t x38 = INT64_MIN;
int16_t x39 = -1;
int32_t x47 = -17324102;
int8_t x51 = INT8_MAX;
uint64_t x52 = 2577LLU;
volatile int32_t x55 = -1;
uint64_t x64 = UINT64_MAX;
int16_t x65 = -1;
int64_t x81 = INT64_MIN;
volatile int16_t x82 = 226;
volatile uint64_t t19 = 1656LLU;
static volatile int16_t x91 = -1;
volatile int16_t x93 = INT16_MIN;
int64_t x97 = INT64_MIN;
static int64_t x99 = INT64_MAX;
int32_t x110 = -1;
uint32_t x117 = 254422U;
static int32_t x120 = -1;
volatile uint32_t t28 = 237U;
uint32_t x126 = 186892U;
int16_t x129 = 5582;
static int16_t x131 = -1;
volatile int16_t x144 = 0;
uint8_t x157 = UINT8_MAX;
uint32_t x158 = UINT32_MAX;
uint32_t t35 = 45U;
static int16_t x162 = 2151;
volatile uint8_t x168 = 4U;
static int32_t t39 = -17401;
uint8_t x178 = 5U;
static uint8_t x181 = 2U;
volatile int32_t x184 = -4105913;
uint32_t x186 = 3630U;
uint32_t x191 = UINT32_MAX;
static uint32_t x192 = UINT32_MAX;
int8_t x194 = INT8_MIN;
uint32_t x195 = 3022306U;
static volatile int32_t x196 = INT32_MAX;
uint32_t x198 = 30254331U;
uint32_t x204 = 1U;
uint64_t x221 = 21LLU;
volatile uint64_t t51 = 26686950830832942LLU;
static uint16_t x227 = UINT16_MAX;
uint32_t x257 = 1U;
static volatile uint64_t t60 = 469LLU;
uint16_t x265 = 63U;
int64_t x269 = -1LL;
int16_t x270 = 1;
static volatile uint32_t x274 = 77847744U;
int32_t x275 = -1;
volatile uint32_t t65 = 1387U;
uint64_t t66 = 306018987685LLU;
int8_t x290 = 2;
volatile int32_t t67 = -2256;
uint8_t x299 = 0U;
static int64_t x301 = -91666LL;
int8_t x303 = 30;
static int8_t x313 = INT8_MIN;
volatile int32_t t76 = 3;
uint8_t x329 = 0U;
static volatile int32_t t77 = -26;
volatile uint32_t t78 = 1U;
uint16_t x337 = 29195U;
int32_t t79 = -1322;
int32_t x349 = -1;
int8_t x353 = 1;
static volatile uint32_t t83 = 58U;
int64_t x360 = -1LL;
uint64_t t85 = 1048513857054129LLU;
uint32_t x366 = 7U;
int32_t x370 = INT32_MIN;
uint64_t x373 = 29150303858728LLU;
int8_t x377 = INT8_MIN;
volatile uint32_t t89 = 11926U;
volatile int32_t t90 = 38217;
int64_t x385 = -1LL;
uint8_t x387 = UINT8_MAX;
uint8_t x388 = 1U;
static int64_t t91 = -94862674773LL;
uint64_t x391 = UINT64_MAX;
uint64_t t92 = 1838LLU;
int64_t x395 = INT64_MIN;
int32_t x397 = 49;
volatile uint32_t x398 = 23433098U;
uint16_t x404 = 11U;
int32_t t95 = 449;
uint64_t x405 = 103440558021LLU;
int64_t x407 = INT64_MAX;
static int8_t x410 = -1;
volatile int32_t x415 = -1;
uint8_t x417 = UINT8_MAX;


void f0(void) {
	int32_t x1 = INT32_MAX;
	int64_t x2 = 74880LL;
	static int8_t x3 = INT8_MIN;
	int32_t x4 = INT32_MAX;

	t0 = (x1+(x2^(x3&x4)));

	if (t0 != 4294892287LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	static int16_t x6 = -1;
	volatile int16_t x7 = 15;
	int16_t x8 = 175;
	int32_t t1 = -712245;

	t1 = (x5+(x6^(x7&x8)));

	if (t1 != 2147483631) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 26U;
	int16_t x10 = INT16_MIN;
	int64_t x12 = 117456734039724383LL;
	volatile int64_t t2 = 2801LL;

	t2 = (x9+(x10^(x11&x12)));

	if (t2 != -117456734039715729LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = -1;
	uint64_t x19 = 100672985031190978LLU;

	t3 = (x17+(x18^(x19&x20)));

	if (t3 != 92089208600295122LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MAX;
	uint64_t x22 = 2LLU;

	t4 = (x21+(x22^(x23&x24)));

	if (t4 != 9223372037099080968LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = INT64_MAX;
	uint64_t x26 = 1LLU;
	uint8_t x27 = 3U;
	uint32_t x28 = 0U;
	uint64_t t5 = 147LLU;

	t5 = (x25+(x26^(x27&x28)));

	if (t5 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x29 = 25063623U;
	uint8_t x30 = UINT8_MAX;
	int8_t x31 = -59;
	static volatile int32_t x32 = INT32_MIN;
	uint32_t t6 = 3U;

	t6 = (x29+(x30^(x31&x32)));

	if (t6 != 2172547526U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = -1LL;
	int32_t x34 = INT32_MIN;
	static int32_t x35 = -1;
	volatile int64_t t7 = -46117LL;

	t7 = (x33+(x34^(x35&x36)));

	if (t7 != 2147483646LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = 4U;
	int64_t x40 = INT64_MAX;
	volatile int64_t t8 = 123628707598636LL;

	t8 = (x37+(x38^(x39&x40)));

	if (t8 != 3LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = -1;
	uint64_t x42 = 142556436LLU;
	int32_t x43 = -1;
	static int32_t x44 = INT32_MIN;
	static volatile uint64_t t9 = 21874895LLU;

	t9 = (x41+(x42^(x43&x44)));

	if (t9 != 18446744071704624403LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MIN;
	int8_t x46 = INT8_MAX;
	static int64_t x48 = -1LL;
	volatile int64_t t10 = 205LL;

	t10 = (x45+(x46^(x47&x48)));

	if (t10 != -17356859LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x49 = 117816LLU;
	static int32_t x50 = INT32_MIN;
	uint64_t t11 = 5445367LLU;

	t11 = (x49+(x50^(x51&x52)));

	if (t11 != 18446744071562185801LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x53 = 1017871804754LL;
	int16_t x54 = INT16_MAX;
	volatile int32_t x56 = INT32_MAX;
	volatile int64_t t12 = 81775LL;

	t12 = (x53+(x54^(x55&x56)));

	if (t12 != 1020019255634LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x61 = UINT32_MAX;
	int8_t x62 = INT8_MIN;
	volatile int8_t x63 = 1;
	uint64_t t13 = 79480075LLU;

	t13 = (x61+(x62^(x63&x64)));

	if (t13 != 4294967168LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x66 = UINT8_MAX;
	int32_t x67 = INT32_MAX;
	int64_t x68 = -812788849306083506LL;
	volatile int64_t t14 = 66211373259456LL;

	t14 = (x65+(x66^(x67&x68)));

	if (t14 != 263610288LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = INT8_MAX;
	int64_t x70 = INT64_MIN;
	uint16_t x71 = UINT16_MAX;
	volatile uint16_t x72 = 8U;
	volatile int64_t t15 = 230112993134LL;

	t15 = (x69+(x70^(x71&x72)));

	if (t15 != -9223372036854775673LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x73 = 3U;
	static volatile int64_t x74 = 2697869LL;
	int8_t x75 = INT8_MIN;
	int16_t x76 = INT16_MAX;
	volatile int64_t t16 = 26821527803016LL;

	t16 = (x73+(x74^(x75&x76)));

	if (t16 != 2708752LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = INT16_MAX;
	volatile int64_t x78 = -56601889687LL;
	volatile uint32_t x79 = 15U;
	static int16_t x80 = -1;
	int64_t t17 = -46LL;

	t17 = (x77+(x78^(x79&x80)));

	if (t17 != -56601856923LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x83 = INT16_MAX;
	uint32_t x84 = 21U;
	int64_t t18 = -9814773LL;

	t18 = (x81+(x82^(x83&x84)));

	if (t18 != -9223372036854775561LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x85 = 123671666650354298LLU;
	uint32_t x86 = 249624U;
	uint64_t x87 = 470650302990406157LLU;
	int8_t x88 = 1;

	t19 = (x85+(x86^(x87&x88)));

	if (t19 != 123671666650603923LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = 0;
	uint32_t x90 = 7U;
	int16_t x92 = -1;
	volatile uint32_t t20 = 519083325U;

	t20 = (x89+(x90^(x91&x92)));

	if (t20 != 4294967288U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x94 = INT8_MAX;
	static int8_t x95 = INT8_MAX;
	static int16_t x96 = INT16_MAX;
	int32_t t21 = -1724;

	t21 = (x93+(x94^(x95&x96)));

	if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x98 = UINT64_MAX;
	int32_t x100 = -10429;
	uint64_t t22 = 239779898658968LLU;

	t22 = (x97+(x98^(x99&x100)));

	if (t22 != 10428LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = INT8_MIN;
	int8_t x102 = INT8_MIN;
	uint16_t x103 = 7522U;
	volatile int8_t x104 = -1;
	int32_t t23 = 1649783;

	t23 = (x101+(x102^(x103&x104)));

	if (t23 != -7582) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x105 = 2482U;
	uint8_t x106 = 2U;
	int16_t x107 = INT16_MIN;
	volatile int16_t x108 = INT16_MIN;
	uint32_t t24 = 2925U;

	t24 = (x105+(x106^(x107&x108)));

	if (t24 != 4294937012U) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x109 = INT32_MAX;
	uint8_t x111 = UINT8_MAX;
	volatile int8_t x112 = INT8_MIN;
	static volatile int32_t t25 = -2724236;

	t25 = (x109+(x110^(x111&x112)));

	if (t25 != 2147483518) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x113 = 95407180LLU;
	volatile int16_t x114 = 198;
	int8_t x115 = INT8_MAX;
	int8_t x116 = INT8_MIN;
	static uint64_t t26 = 5383006257688763271LLU;

	t26 = (x113+(x114^(x115&x116)));

	if (t26 != 95407378LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x118 = INT16_MIN;
	uint32_t x119 = UINT32_MAX;
	volatile uint32_t t27 = 1167928127U;

	t27 = (x117+(x118^(x119&x120)));

	if (t27 != 287189U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = 28;
	uint32_t x122 = 211351U;
	static int32_t x123 = -1;
	static uint16_t x124 = 140U;

	t28 = (x121+(x122^(x123&x124)));

	if (t28 != 211255U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x125 = UINT16_MAX;
	uint8_t x127 = 38U;
	static uint8_t x128 = 79U;
	static volatile uint32_t t29 = 315565225U;

	t29 = (x125+(x126^(x127&x128)));

	if (t29 != 252425U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x130 = INT32_MAX;
	int64_t x132 = INT64_MIN;
	static int64_t t30 = 3256LL;

	t30 = (x129+(x130^(x131&x132)));

	if (t30 != -9223372034707286579LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x133 = INT32_MIN;
	volatile uint16_t x134 = UINT16_MAX;
	static int64_t x135 = INT64_MAX;
	uint32_t x136 = 27232723U;
	volatile int64_t t31 = -802037LL;

	t31 = (x133+(x134^(x135&x136)));

	if (t31 != -2120255956LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x141 = INT16_MAX;
	volatile uint64_t x142 = UINT64_MAX;
	int64_t x143 = 483065501511LL;
	uint64_t t32 = 89LLU;

	t32 = (x141+(x142^(x143&x144)));

	if (t32 != 32766LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x149 = 172U;
	static int32_t x150 = -1;
	static uint64_t x151 = UINT64_MAX;
	volatile uint32_t x152 = UINT32_MAX;
	uint64_t t33 = 7678LLU;

	t33 = (x149+(x150^(x151&x152)));

	if (t33 != 18446744069414584492LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x153 = UINT64_MAX;
	static int32_t x154 = INT32_MAX;
	int64_t x155 = INT64_MAX;
	static int8_t x156 = INT8_MAX;
	static volatile uint64_t t34 = 24823LLU;

	t34 = (x153+(x154^(x155&x156)));

	if (t34 != 2147483519LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x159 = -1;
	int32_t x160 = -1;

	t35 = (x157+(x158^(x159&x160)));

	if (t35 != 255U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x161 = 14894674938478374LLU;
	uint32_t x163 = 50141U;
	uint16_t x164 = UINT16_MAX;
	volatile uint64_t t36 = 1071851139715743879LLU;

	t36 = (x161+(x162^(x163&x164)));

	if (t36 != 14894674938530528LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x165 = 41U;
	uint16_t x166 = 13U;
	static int32_t x167 = INT32_MAX;
	static volatile int32_t t37 = -1807;

	t37 = (x165+(x166^(x167&x168)));

	if (t37 != 50) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x169 = 57LLU;
	volatile uint32_t x170 = 1589U;
	uint16_t x171 = 25528U;
	static int8_t x172 = INT8_MIN;
	volatile uint64_t t38 = 29815411191735LLU;

	t38 = (x169+(x170^(x171&x172)));

	if (t38 != 26094LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x173 = -6133;
	uint16_t x174 = 0U;
	static uint16_t x175 = UINT16_MAX;
	int8_t x176 = 1;

	t39 = (x173+(x174^(x175&x176)));

	if (t39 != -6132) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x177 = -1;
	uint32_t x179 = 55057798U;
	int16_t x180 = INT16_MIN;
	uint32_t t40 = 191498139U;

	t40 = (x177+(x178^(x179&x180)));

	if (t40 != 55050244U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x182 = -2119;
	static uint32_t x183 = 153U;
	volatile uint32_t t41 = 1155U;

	t41 = (x181+(x182^(x183&x184)));

	if (t41 != 4294965178U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x185 = 163LL;
	int16_t x187 = -68;
	volatile int64_t x188 = INT64_MAX;
	int64_t t42 = -1808914LL;

	t42 = (x185+(x186^(x187&x188)));

	if (t42 != 9223372036854772277LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x189 = UINT16_MAX;
	int32_t x190 = INT32_MIN;
	uint32_t t43 = 28U;

	t43 = (x189+(x190^(x191&x192)));

	if (t43 != 2147549182U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x193 = UINT32_MAX;
	static uint32_t t44 = 42588306U;

	t44 = (x193+(x194^(x195&x196)));

	if (t44 != 4291945057U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x197 = INT8_MAX;
	int16_t x199 = INT16_MAX;
	static int32_t x200 = 11423854;
	uint32_t t45 = 27U;

	t45 = (x197+(x198^(x199&x200)));

	if (t45 != 30274836U) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x201 = -1595814;
	uint16_t x202 = UINT16_MAX;
	int8_t x203 = INT8_MIN;
	volatile uint32_t t46 = 140298478U;

	t46 = (x201+(x202^(x203&x204)));

	if (t46 != 4293437017U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x205 = INT64_MAX;
	static uint8_t x206 = 13U;
	uint64_t x207 = 47828LLU;
	int16_t x208 = -1;
	volatile uint64_t t47 = 1948638897291348LLU;

	t47 = (x205+(x206^(x207&x208)));

	if (t47 != 9223372036854823640LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x209 = 10585242;
	int16_t x210 = -1;
	int32_t x211 = 223519;
	volatile int16_t x212 = INT16_MAX;
	volatile int32_t t48 = 842;

	t48 = (x209+(x210^(x211&x212)));

	if (t48 != 10558330) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x213 = INT32_MAX;
	int16_t x214 = INT16_MAX;
	volatile uint8_t x215 = UINT8_MAX;
	uint64_t x216 = UINT64_MAX;
	uint64_t t49 = 31LLU;

	t49 = (x213+(x214^(x215&x216)));

	if (t49 != 2147516159LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x217 = 10207026;
	uint8_t x218 = UINT8_MAX;
	uint32_t x219 = 681U;
	volatile int8_t x220 = -17;
	static volatile uint32_t t50 = 227U;

	t50 = (x217+(x218^(x219&x220)));

	if (t50 != 10207624U) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x222 = UINT8_MAX;
	uint8_t x223 = UINT8_MAX;
	volatile int8_t x224 = -14;

	t51 = (x221+(x222^(x223&x224)));

	if (t51 != 34LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x225 = -1;
	static int32_t x226 = INT32_MIN;
	int8_t x228 = -1;
	int32_t t52 = 8893778;

	t52 = (x225+(x226^(x227&x228)));

	if (t52 != -2147418114) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x229 = INT8_MIN;
	uint32_t x230 = 34316U;
	static int8_t x231 = 25;
	static uint64_t x232 = 0LLU;
	uint64_t t53 = 389473359LLU;

	t53 = (x229+(x230^(x231&x232)));

	if (t53 != 34188LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x233 = -240490;
	volatile uint32_t x234 = UINT32_MAX;
	uint8_t x235 = 76U;
	int32_t x236 = INT32_MIN;
	static volatile uint32_t t54 = 68100341U;

	t54 = (x233+(x234^(x235&x236)));

	if (t54 != 4294726805U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x237 = 0;
	volatile int32_t x238 = -1;
	uint32_t x239 = 2881460U;
	uint8_t x240 = 2U;
	static volatile uint32_t t55 = UINT32_MAX;

	t55 = (x237+(x238^(x239&x240)));

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x241 = INT16_MAX;
	int16_t x242 = INT16_MIN;
	uint64_t x243 = UINT64_MAX;
	static uint32_t x244 = UINT32_MAX;
	uint64_t t56 = 12995796955945LLU;

	t56 = (x241+(x242^(x243&x244)));

	if (t56 != 18446744069414649854LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x249 = INT32_MIN;
	uint64_t x250 = 126864382765741761LLU;
	uint32_t x251 = 683854U;
	uint32_t x252 = UINT32_MAX;
	volatile uint64_t t57 = 224043505992LLU;

	t57 = (x249+(x250^(x251&x252)));

	if (t57 != 126864380618660239LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x253 = INT16_MIN;
	static uint16_t x254 = 4U;
	static uint8_t x255 = 48U;
	int64_t x256 = INT64_MIN;
	int64_t t58 = 2LL;

	t58 = (x253+(x254^(x255&x256)));

	if (t58 != -32764LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x258 = INT16_MIN;
	int16_t x259 = -1;
	int8_t x260 = -1;
	uint32_t t59 = 468648U;

	t59 = (x257+(x258^(x259&x260)));

	if (t59 != 32768U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x261 = INT16_MIN;
	static int16_t x262 = 1;
	uint16_t x263 = UINT16_MAX;
	volatile uint64_t x264 = 1002884225262404LLU;

	t60 = (x261+(x262^(x263&x264)));

	if (t60 != 18446744073709544261LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x266 = 1;
	static int8_t x267 = INT8_MIN;
	uint16_t x268 = UINT16_MAX;
	volatile int32_t t61 = 13580722;

	t61 = (x265+(x266^(x267&x268)));

	if (t61 != 65472) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x271 = -1;
	static int32_t x272 = INT32_MIN;
	static volatile int64_t t62 = 3119531LL;

	t62 = (x269+(x270^(x271&x272)));

	if (t62 != -2147483648LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x273 = -292015138LL;
	volatile int32_t x276 = INT32_MAX;
	volatile int64_t t63 = 180252593LL;

	t63 = (x273+(x274^(x275&x276)));

	if (t63 != 1777620765LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x277 = UINT32_MAX;
	uint32_t x278 = 160762092U;
	uint16_t x279 = UINT16_MAX;
	int16_t x280 = -1;
	volatile uint32_t t64 = 9195U;

	t64 = (x277+(x278^(x279&x280)));

	if (t64 != 160823058U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x281 = INT16_MIN;
	static int32_t x282 = INT32_MIN;
	int16_t x283 = -1;
	static uint32_t x284 = 341929U;

	t65 = (x281+(x282^(x283&x284)));

	if (t65 != 2147792809U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x285 = INT64_MAX;
	uint64_t x286 = UINT64_MAX;
	uint16_t x287 = UINT16_MAX;
	int8_t x288 = INT8_MIN;

	t66 = (x285+(x286^(x287&x288)));

	if (t66 != 9223372036854710398LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x289 = -37;
	int16_t x291 = -7547;
	int32_t x292 = 1;

	t67 = (x289+(x290^(x291&x292)));

	if (t67 != -34) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x293 = 71436976238521456LL;
	volatile int64_t x294 = 14LL;
	static volatile int32_t x295 = INT32_MIN;
	volatile uint16_t x296 = 147U;
	static volatile int64_t t68 = -177122402673LL;

	t68 = (x293+(x294^(x295&x296)));

	if (t68 != 71436976238521470LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x297 = -1LL;
	uint16_t x298 = 3U;
	uint16_t x300 = 27U;
	volatile int64_t t69 = -114046LL;

	t69 = (x297+(x298^(x299&x300)));

	if (t69 != 2LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x302 = INT32_MIN;
	volatile int8_t x304 = INT8_MAX;
	volatile int64_t t70 = 42720590507LL;

	t70 = (x301+(x302^(x303&x304)));

	if (t70 != -2147575284LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint8_t x305 = 6U;
	uint32_t x306 = 1U;
	volatile int32_t x307 = 39912770;
	int8_t x308 = INT8_MIN;
	volatile uint32_t t71 = 1U;

	t71 = (x305+(x306^(x307&x308)));

	if (t71 != 39912711U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x309 = -224498162551LL;
	volatile uint64_t x310 = 843596452LLU;
	volatile int16_t x311 = INT16_MAX;
	int16_t x312 = INT16_MIN;
	uint64_t t72 = 4002455LLU;

	t72 = (x309+(x310^(x311&x312)));

	if (t72 != 18446743850054985517LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x314 = -1;
	uint16_t x315 = 3800U;
	static int32_t x316 = INT32_MAX;
	volatile int32_t t73 = 586718217;

	t73 = (x313+(x314^(x315&x316)));

	if (t73 != -3929) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x317 = INT32_MIN;
	volatile int64_t x318 = -6121633LL;
	int32_t x319 = -1;
	int32_t x320 = -1;
	volatile int64_t t74 = -35782019706LL;

	t74 = (x317+(x318^(x319&x320)));

	if (t74 != -2141362016LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x321 = INT8_MIN;
	int8_t x322 = 2;
	int32_t x323 = -1;
	uint32_t x324 = 2U;
	uint32_t t75 = 4U;

	t75 = (x321+(x322^(x323&x324)));

	if (t75 != 4294967168U) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x325 = INT8_MAX;
	volatile int32_t x326 = INT32_MIN;
	int8_t x327 = 25;
	int16_t x328 = INT16_MAX;

	t76 = (x325+(x326^(x327&x328)));

	if (t76 != -2147483496) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x330 = -19;
	int32_t x331 = INT32_MIN;
	int16_t x332 = -16;

	t77 = (x329+(x330^(x331&x332)));

	if (t77 != 2147483629) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x333 = INT16_MAX;
	volatile uint32_t x334 = 44U;
	int8_t x335 = -1;
	int16_t x336 = -5;

	t78 = (x333+(x334^(x335&x336)));

	if (t78 != 32726U) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x338 = 43U;
	uint8_t x339 = 0U;
	uint8_t x340 = 11U;

	t79 = (x337+(x338^(x339&x340)));

	if (t79 != 29238) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x341 = 985;
	uint8_t x342 = 24U;
	static int32_t x343 = 0;
	uint32_t x344 = 1U;
	uint32_t t80 = 0U;

	t80 = (x341+(x342^(x343&x344)));

	if (t80 != 1009U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x345 = -1;
	int8_t x346 = 1;
	volatile uint64_t x347 = 103338017347903LLU;
	int32_t x348 = INT32_MAX;
	uint64_t t81 = 186LLU;

	t81 = (x345+(x346^(x347&x348)));

	if (t81 != 1104206141LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x350 = INT8_MAX;
	int16_t x351 = 2;
	uint32_t x352 = 382265U;
	volatile uint32_t t82 = 3681U;

	t82 = (x349+(x350^(x351&x352)));

	if (t82 != 126U) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x354 = -1;
	static uint32_t x355 = 320615078U;
	int32_t x356 = INT32_MIN;

	t83 = (x353+(x354^(x355&x356)));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x357 = -1;
	static volatile int8_t x358 = -1;
	int64_t x359 = 14823649406830162LL;
	int64_t t84 = -15065337079LL;

	t84 = (x357+(x358^(x359&x360)));

	if (t84 != -14823649406830164LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x361 = -952293012;
	uint64_t x362 = 45524610620492LLU;
	int64_t x363 = -1LL;
	static volatile int64_t x364 = INT64_MAX;

	t85 = (x361+(x362^(x363&x364)));

	if (t85 != 9223326511291862303LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint32_t x365 = 2621621U;
	volatile int64_t x367 = -1LL;
	int16_t x368 = INT16_MIN;
	static volatile int64_t t86 = -59579222LL;

	t86 = (x365+(x366^(x367&x368)));

	if (t86 != 2588860LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x369 = INT64_MAX;
	int8_t x371 = -3;
	int8_t x372 = 21;
	int64_t t87 = 123640488LL;

	t87 = (x369+(x370^(x371&x372)));

	if (t87 != 9223372034707292180LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x374 = INT64_MIN;
	volatile int64_t x375 = INT64_MIN;
	int32_t x376 = INT32_MAX;
	uint64_t t88 = 6682933223LLU;

	t88 = (x373+(x374^(x375&x376)));

	if (t88 != 9223401187158634536LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x378 = 0U;
	int8_t x379 = INT8_MIN;
	uint32_t x380 = 25837U;

	t89 = (x377+(x378^(x379&x380)));

	if (t89 != 25600U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x381 = -1;
	volatile int32_t x382 = 23;
	int8_t x383 = -1;
	static volatile int16_t x384 = INT16_MIN;

	t90 = (x381+(x382^(x383&x384)));

	if (t90 != -32746) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x386 = INT8_MIN;

	t91 = (x385+(x386^(x387&x388)));

	if (t91 != -128LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x389 = 1820771314U;
	int64_t x390 = INT64_MIN;
	volatile int16_t x392 = INT16_MIN;

	t92 = (x389+(x390^(x391&x392)));

	if (t92 != 9223372038675514354LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x393 = 366U;
	int8_t x394 = INT8_MIN;
	int8_t x396 = 18;
	int64_t t93 = -3LL;

	t93 = (x393+(x394^(x395&x396)));

	if (t93 != 238LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x399 = INT8_MIN;
	static volatile int8_t x400 = INT8_MIN;
	uint32_t t94 = 94893U;

	t94 = (x397+(x398^(x399&x400)));

	if (t94 != 4271534139U) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x401 = 0U;
	uint16_t x402 = 114U;
	uint8_t x403 = 46U;

	t95 = (x401+(x402^(x403&x404)));

	if (t95 != 120) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x406 = -189LL;
	int64_t x408 = INT64_MAX;
	volatile uint64_t t96 = 45847318711LLU;

	t96 = (x405+(x406^(x407&x408)));

	if (t96 != 9223372140295334017LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x409 = 39U;
	int8_t x411 = -1;
	int64_t x412 = 3851693834731627519LL;
	int64_t t97 = 238943079771731LL;

	t97 = (x409+(x410^(x411&x412)));

	if (t97 != -3851693834731627481LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x413 = INT16_MIN;
	int32_t x414 = -1;
	static int8_t x416 = 15;
	static volatile int32_t t98 = 18041253;

	t98 = (x413+(x414^(x415&x416)));

	if (t98 != -32784) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x418 = 0LLU;
	int32_t x419 = -49158;
	static int32_t x420 = 62874543;
	volatile uint64_t t99 = 110520684LLU;

	t99 = (x417+(x418^(x419&x420)));

	if (t99 != 62858409LLU) { NG(); } else { ; }
	
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

