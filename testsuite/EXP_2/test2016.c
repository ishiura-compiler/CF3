#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 0U;
int32_t x6 = INT32_MIN;
int16_t x11 = INT16_MIN;
volatile uint32_t x22 = 708554423U;
volatile uint16_t x31 = 169U;
static int32_t x37 = INT32_MAX;
volatile int32_t x40 = INT32_MAX;
uint8_t x41 = UINT8_MAX;
uint16_t x43 = UINT16_MAX;
int16_t x49 = 2;
int64_t x53 = 2034330091LL;
uint8_t x59 = 58U;
static uint8_t x61 = 70U;
static int32_t x62 = 7208444;
int64_t x67 = -1LL;
static volatile int64_t x77 = 12635667085LL;
int8_t x78 = -1;
uint16_t x88 = UINT16_MAX;
int32_t x90 = INT32_MIN;
static uint32_t x95 = 15633U;
int16_t x99 = -1;
uint64_t x101 = 617325LLU;
volatile uint16_t x103 = 0U;
uint32_t x104 = UINT32_MAX;
volatile uint64_t t23 = 510880LLU;
static volatile int16_t x109 = INT16_MIN;
uint8_t x114 = 40U;
volatile uint32_t t26 = 504757459U;
volatile int64_t t28 = -246457258784637LL;
uint32_t x129 = 76206U;
uint32_t x133 = UINT32_MAX;
int8_t x135 = -5;
int32_t x144 = 42666636;
static volatile int32_t t33 = 1068457;
uint8_t x147 = 30U;
int32_t x149 = 877964786;
static int32_t x157 = -1;
volatile int32_t x161 = -1;
static int32_t x165 = INT32_MIN;
int64_t t40 = 73701LL;
static uint64_t x177 = 633361899122333925LLU;
static int8_t x196 = -1;
int64_t x200 = INT64_MIN;
volatile int32_t t47 = -64498147;
volatile int64_t x208 = 136282058787724LL;
static int32_t x225 = 26609822;
int64_t x236 = -1LL;
int64_t x241 = INT64_MIN;
uint16_t x243 = 0U;
int32_t x244 = INT32_MIN;
static int64_t x245 = 479LL;
volatile uint64_t t58 = 113LLU;
volatile int64_t t59 = -73907LL;
volatile int32_t t61 = 20689874;
int8_t x262 = -1;
static int32_t x267 = INT32_MIN;
int32_t x276 = INT32_MIN;
static uint16_t x279 = 397U;
int64_t x287 = 93174104LL;
volatile int64_t t68 = -95038396LL;
int32_t x289 = INT32_MIN;
uint64_t t70 = 616088919619355LLU;
int16_t x304 = -1;
int16_t x315 = -1;
int32_t x319 = -253;
volatile uint32_t x320 = 11U;
uint8_t x321 = 1U;
static int32_t x324 = INT32_MIN;
static volatile uint32_t t76 = 90729U;
int16_t x337 = INT16_MAX;
static int8_t x339 = 35;
volatile uint64_t t80 = 14159687803089798LLU;
int8_t x346 = -1;
uint16_t x347 = 0U;
int16_t x359 = INT16_MAX;
static int16_t x360 = 3;
uint32_t t85 = 169910U;
volatile int16_t x364 = INT16_MIN;
static volatile int64_t x372 = INT64_MAX;
uint64_t t90 = 216996LLU;
int16_t x382 = INT16_MAX;
uint64_t x387 = 188388493778881LLU;
uint32_t x390 = UINT32_MAX;
uint16_t x398 = 25659U;
static int64_t x416 = INT64_MIN;
uint8_t x417 = 5U;
volatile int8_t x418 = -4;


void f0(void) {
	static volatile uint64_t x2 = UINT64_MAX;
	int32_t x3 = 3708;
	uint16_t x4 = UINT16_MAX;
	static uint64_t t0 = 105240LLU;

	t0 = ((x1^(x2|x3))+x4);

	if (t0 != 65534LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	int32_t x7 = -1;
	int32_t x8 = -13217;
	uint32_t t1 = 4245531U;

	t1 = ((x5^(x6|x7))+x8);

	if (t1 != 4294954079U) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	static int64_t x10 = INT64_MIN;
	int16_t x12 = -1;
	volatile int64_t t2 = 849LL;

	t2 = ((x9^(x10|x11))+x12);

	if (t2 != -4294934530LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 2137286735U;
	volatile int8_t x14 = 1;
	uint32_t x15 = 842787429U;
	int64_t x16 = INT64_MIN;
	int64_t t3 = -265740300361LL;

	t3 = ((x13^(x14|x15))+x16);

	if (t3 != -9223372035556670934LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -20351117;
	static int8_t x18 = -1;
	int16_t x19 = INT16_MIN;
	int8_t x20 = INT8_MAX;
	static volatile int32_t t4 = 169773763;

	t4 = ((x17^(x18|x19))+x20);

	if (t4 != 20351243) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MAX;
	int32_t x23 = INT32_MAX;
	static volatile uint8_t x24 = 1U;
	uint32_t t5 = 136908U;

	t5 = ((x21^(x22|x23))+x24);

	if (t5 != 2147483521U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = 1369U;
	static uint16_t x30 = UINT16_MAX;
	uint64_t x32 = 2724549559243100046LLU;
	volatile uint64_t t6 = 2091838LLU;

	t6 = ((x29^(x30|x31))+x32);

	if (t6 != 2724549559243164212LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = INT32_MIN;
	static volatile uint64_t x34 = 468903033LLU;
	static uint16_t x35 = 429U;
	static uint32_t x36 = 141972U;
	uint64_t t7 = 36LLU;

	t7 = ((x33^(x34|x35))+x36);

	if (t7 != 18446744072031113361LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x38 = 2LLU;
	int16_t x39 = -1;
	uint64_t t8 = UINT64_MAX;

	t8 = ((x37^(x38|x39))+x40);

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x42 = 7293;
	uint64_t x44 = 58629721926479LLU;
	uint64_t t9 = 4503622702988LLU;

	t9 = ((x41^(x42|x43))+x44);

	if (t9 != 58629721991759LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = INT32_MIN;
	int16_t x46 = INT16_MIN;
	static volatile int16_t x47 = 2;
	int64_t x48 = -1LL;
	volatile int64_t t10 = 423691848LL;

	t10 = ((x45^(x46|x47))+x48);

	if (t10 != 2147450881LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x50 = 0;
	int16_t x51 = -8243;
	int32_t x52 = INT32_MAX;
	int32_t t11 = 6636;

	t11 = ((x49^(x50|x51))+x52);

	if (t11 != 2147475406) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x54 = UINT32_MAX;
	volatile uint64_t x55 = UINT64_MAX;
	int64_t x56 = INT64_MIN;
	volatile uint64_t t12 = 56396462LLU;

	t12 = ((x53^(x54|x55))+x56);

	if (t12 != 9223372034820445716LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x57 = -1;
	int8_t x58 = -1;
	uint32_t x60 = 1U;
	volatile uint32_t t13 = 862732U;

	t13 = ((x57^(x58|x59))+x60);

	if (t13 != 1U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x63 = INT16_MIN;
	int8_t x64 = INT8_MIN;
	volatile int32_t t14 = 2061835;

	t14 = ((x61^(x62|x63))+x64);

	if (t14 != -710) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x65 = UINT8_MAX;
	int16_t x66 = 62;
	int8_t x68 = INT8_MIN;
	volatile int64_t t15 = -256747853669LL;

	t15 = ((x65^(x66|x67))+x68);

	if (t15 != -384LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MIN;
	volatile uint32_t x70 = UINT32_MAX;
	int32_t x71 = INT32_MAX;
	int16_t x72 = 126;
	static uint32_t t16 = 27014U;

	t16 = ((x69^(x70|x71))+x72);

	if (t16 != 253U) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x79 = 0;
	int64_t x80 = 4625394044927LL;
	int64_t t17 = 3162LL;

	t17 = ((x77^(x78|x79))+x80);

	if (t17 != 4612758377841LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = INT32_MIN;
	int32_t x82 = INT32_MIN;
	int64_t x83 = INT64_MIN;
	volatile int8_t x84 = INT8_MAX;
	volatile int64_t t18 = 318690LL;

	t18 = ((x81^(x82|x83))+x84);

	if (t18 != 127LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x85 = -185354495;
	uint16_t x86 = UINT16_MAX;
	int64_t x87 = 40232747022633LL;
	volatile int64_t t19 = 6316905270039LL;

	t19 = ((x85^(x86|x87))+x88);

	if (t19 != -40232595732227LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x89 = INT8_MIN;
	static int32_t x91 = INT32_MAX;
	int32_t x92 = INT32_MIN;
	int32_t t20 = -3228;

	t20 = ((x89^(x90|x91))+x92);

	if (t20 != -2147483521) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = 887610996;
	static volatile int64_t x94 = -112LL;
	int16_t x96 = INT16_MIN;
	volatile int64_t t21 = -294LL;

	t21 = ((x93^(x94|x95))+x96);

	if (t21 != -887643675LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x97 = 6LLU;
	static int8_t x98 = INT8_MIN;
	uint64_t x100 = UINT64_MAX;
	volatile uint64_t t22 = 3887837036685183LLU;

	t22 = ((x97^(x98|x99))+x100);

	if (t22 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x102 = -242241527;

	t23 = ((x101^(x102|x103))+x104);

	if (t23 != 4052147043LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x105 = INT8_MAX;
	uint8_t x106 = 20U;
	uint64_t x107 = 395205540574LLU;
	uint8_t x108 = UINT8_MAX;
	uint64_t t24 = 111396064263871LLU;

	t24 = ((x105^(x106|x107))+x108);

	if (t24 != 395205540768LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x110 = 47U;
	static volatile int32_t x111 = 15245602;
	volatile int16_t x112 = -107;
	int32_t t25 = 2621112;

	t25 = ((x109^(x110|x111))+x112);

	if (t25 != -15261500) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x113 = -5;
	volatile uint32_t x115 = UINT32_MAX;
	static volatile int8_t x116 = -1;

	t26 = ((x113^(x114|x115))+x116);

	if (t26 != 3U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x117 = 63752025320604LLU;
	volatile int64_t x118 = -439444LL;
	int8_t x119 = -1;
	int16_t x120 = -8;
	uint64_t t27 = 17310910LLU;

	t27 = ((x117^(x118|x119))+x120);

	if (t27 != 18446680321684231003LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x121 = 1U;
	int32_t x122 = INT32_MIN;
	int16_t x123 = INT16_MIN;
	static int64_t x124 = -7577715LL;

	t28 = ((x121^(x122|x123))+x124);

	if (t28 != -7610482LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x125 = -4805;
	int32_t x126 = INT32_MIN;
	volatile int64_t x127 = -1LL;
	uint8_t x128 = 61U;
	static int64_t t29 = 56956454647LL;

	t29 = ((x125^(x126|x127))+x128);

	if (t29 != 4865LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x130 = INT8_MIN;
	uint16_t x131 = 1843U;
	int32_t x132 = INT32_MIN;
	uint32_t t30 = 822103U;

	t30 = ((x129^(x130|x131))+x132);

	if (t30 != 2147407389U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x134 = 6369U;
	uint8_t x136 = 26U;
	volatile uint32_t t31 = 6775850U;

	t31 = ((x133^(x134|x135))+x136);

	if (t31 != 30U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x137 = 12U;
	volatile int32_t x138 = -1;
	uint32_t x139 = 931537U;
	int32_t x140 = INT32_MAX;
	uint32_t t32 = 68U;

	t32 = ((x137^(x138|x139))+x140);

	if (t32 != 2147483634U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x141 = 2U;
	volatile int16_t x142 = INT16_MAX;
	int16_t x143 = 0;

	t33 = ((x141^(x142|x143))+x144);

	if (t33 != 42699401) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x145 = 1913985922041LLU;
	int64_t x146 = INT64_MAX;
	int64_t x148 = INT64_MAX;
	volatile uint64_t t34 = 9165540106234LLU;

	t34 = ((x145^(x146|x147))+x148);

	if (t34 != 18446742159723629573LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x150 = -440;
	static int8_t x151 = INT8_MIN;
	volatile int32_t x152 = INT32_MAX;
	volatile int32_t t35 = 35;

	t35 = ((x149^(x150|x151))+x152);

	if (t35 != 1269518905) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x153 = 0;
	uint8_t x154 = 4U;
	int16_t x155 = INT16_MIN;
	uint8_t x156 = 29U;
	volatile int32_t t36 = -8139691;

	t36 = ((x153^(x154|x155))+x156);

	if (t36 != -32735) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x158 = INT16_MIN;
	int32_t x159 = -166187;
	static int8_t x160 = INT8_MIN;
	volatile int32_t t37 = 976279391;

	t37 = ((x157^(x158|x159))+x160);

	if (t37 != 2218) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x162 = -1;
	int64_t x163 = -1LL;
	volatile int16_t x164 = INT16_MIN;
	volatile int64_t t38 = 250174LL;

	t38 = ((x161^(x162|x163))+x164);

	if (t38 != -32768LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x166 = INT64_MIN;
	int16_t x167 = -1;
	int16_t x168 = INT16_MIN;
	static int64_t t39 = -648451415494146LL;

	t39 = ((x165^(x166|x167))+x168);

	if (t39 != 2147450879LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x169 = 323LL;
	volatile int16_t x170 = -1;
	int64_t x171 = INT64_MIN;
	int16_t x172 = -2290;

	t40 = ((x169^(x170|x171))+x172);

	if (t40 != -2614LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x178 = 1;
	int8_t x179 = INT8_MIN;
	static volatile int8_t x180 = INT8_MAX;
	uint64_t t41 = 1288220890631716519LLU;

	t41 = ((x177^(x178|x179))+x180);

	if (t41 != 17813382174587217891LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x181 = 50U;
	int8_t x182 = INT8_MIN;
	uint8_t x183 = 0U;
	uint16_t x184 = UINT16_MAX;
	volatile int32_t t42 = -2000;

	t42 = ((x181^(x182|x183))+x184);

	if (t42 != 65457) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x185 = INT64_MIN;
	uint16_t x186 = 1177U;
	int32_t x187 = 31628157;
	volatile int8_t x188 = INT8_MIN;
	int64_t t43 = 2438LL;

	t43 = ((x185^(x186|x187))+x188);

	if (t43 != -9223372036823146627LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x189 = INT32_MIN;
	uint8_t x190 = 61U;
	uint64_t x191 = 19893539980219372LLU;
	int16_t x192 = INT16_MAX;
	volatile uint64_t t44 = 14123461LLU;

	t44 = ((x189^(x190|x191))+x192);

	if (t44 != 18426850533455762428LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x193 = UINT64_MAX;
	uint16_t x194 = 15812U;
	volatile uint32_t x195 = UINT32_MAX;
	uint64_t t45 = 4890LLU;

	t45 = ((x193^(x194|x195))+x196);

	if (t45 != 18446744069414584319LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x197 = 15;
	static volatile int32_t x198 = INT32_MIN;
	uint64_t x199 = UINT64_MAX;
	uint64_t t46 = 1LLU;

	t46 = ((x197^(x198|x199))+x200);

	if (t46 != 9223372036854775792LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x201 = 6U;
	int32_t x202 = 500;
	int16_t x203 = INT16_MIN;
	static int8_t x204 = 2;

	t47 = ((x201^(x202|x203))+x204);

	if (t47 != -32268) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x205 = -20119342LL;
	static uint8_t x206 = 1U;
	static uint64_t x207 = 2LLU;
	static uint64_t t48 = 2448710922119449LLU;

	t48 = ((x205^(x206|x207))+x208);

	if (t48 != 136282038668381LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x209 = 2352U;
	int16_t x210 = -31;
	static int64_t x211 = -843462062518174LL;
	int16_t x212 = INT16_MIN;
	static volatile int64_t t49 = -584005303688888814LL;

	t49 = ((x209^(x210|x211))+x212);

	if (t49 != -35117LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint16_t x213 = 169U;
	uint64_t x214 = 119935724168506LLU;
	uint8_t x215 = 20U;
	static int16_t x216 = 3516;
	static volatile uint64_t t50 = 27996314738LLU;

	t50 = ((x213^(x214|x215))+x216);

	if (t50 != 119935724172115LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x217 = 36LL;
	int16_t x218 = -1;
	volatile int64_t x219 = -227582538878LL;
	uint64_t x220 = 1387685912537679LLU;
	volatile uint64_t t51 = 119955017LLU;

	t51 = ((x217^(x218|x219))+x220);

	if (t51 != 1387685912537642LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x221 = UINT16_MAX;
	int64_t x222 = 7710944252LL;
	static int64_t x223 = -1LL;
	uint8_t x224 = UINT8_MAX;
	static volatile int64_t t52 = -7211LL;

	t52 = ((x221^(x222|x223))+x224);

	if (t52 != -65281LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x226 = 13255378LLU;
	static int64_t x227 = -1LL;
	int32_t x228 = INT32_MIN;
	static volatile uint64_t t53 = 63LLU;

	t53 = ((x225^(x226|x227))+x228);

	if (t53 != 18446744071535458145LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x229 = INT64_MIN;
	int8_t x230 = -1;
	int64_t x231 = INT64_MAX;
	static int8_t x232 = INT8_MIN;
	volatile int64_t t54 = -26820671LL;

	t54 = ((x229^(x230|x231))+x232);

	if (t54 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x233 = INT8_MAX;
	static int64_t x234 = INT64_MAX;
	uint64_t x235 = UINT64_MAX;
	static volatile uint64_t t55 = 2520955865146035139LLU;

	t55 = ((x233^(x234|x235))+x236);

	if (t55 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x237 = UINT32_MAX;
	int64_t x238 = INT64_MAX;
	int64_t x239 = INT64_MAX;
	int32_t x240 = 19987;
	volatile int64_t t56 = 670863628851LL;

	t56 = ((x237^(x238|x239))+x240);

	if (t56 != 9223372032559828499LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x242 = INT64_MAX;
	int64_t t57 = -54251740399LL;

	t57 = ((x241^(x242|x243))+x244);

	if (t57 != -2147483649LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x246 = 59;
	int16_t x247 = -1995;
	uint64_t x248 = UINT64_MAX;

	t58 = ((x245^(x246|x247))+x248);

	if (t58 != 18446744073709550047LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x249 = INT16_MIN;
	int64_t x250 = -3840LL;
	static uint8_t x251 = UINT8_MAX;
	static uint32_t x252 = 73U;

	t59 = ((x249^(x250|x251))+x252);

	if (t59 != 29256LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int8_t x253 = -8;
	int8_t x254 = -1;
	volatile int32_t x255 = 42894735;
	int32_t x256 = 0;
	int32_t t60 = 95;

	t60 = ((x253^(x254|x255))+x256);

	if (t60 != 7) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x257 = 16512007;
	static volatile int32_t x258 = INT32_MIN;
	int32_t x259 = 66191;
	int8_t x260 = INT8_MIN;

	t61 = ((x257^(x258|x259))+x260);

	if (t61 != -2131036664) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x261 = INT64_MIN;
	uint32_t x263 = 1U;
	int32_t x264 = INT32_MAX;
	static volatile int64_t t62 = 10LL;

	t62 = ((x261^(x262|x263))+x264);

	if (t62 != -9223372030412324866LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x265 = -1;
	int32_t x266 = INT32_MIN;
	static int16_t x268 = -1;
	int32_t t63 = 22;

	t63 = ((x265^(x266|x267))+x268);

	if (t63 != 2147483646) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x269 = 25;
	uint64_t x270 = UINT64_MAX;
	int32_t x271 = 27;
	volatile int32_t x272 = INT32_MIN;
	static volatile uint64_t t64 = 1727813377495398218LLU;

	t64 = ((x269^(x270|x271))+x272);

	if (t64 != 18446744071562067942LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x273 = -1;
	volatile int16_t x274 = 6202;
	volatile int16_t x275 = INT16_MIN;
	static int32_t t65 = -138;

	t65 = ((x273^(x274|x275))+x276);

	if (t65 != -2147457083) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x277 = UINT64_MAX;
	uint16_t x278 = 474U;
	static int32_t x280 = -1;
	uint64_t t66 = 77168299233428256LLU;

	t66 = ((x277^(x278|x279))+x280);

	if (t66 != 18446744073709551135LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x281 = 7U;
	uint16_t x282 = 41U;
	uint32_t x283 = 459489326U;
	volatile int16_t x284 = -1;
	static uint32_t t67 = 1675817467U;

	t67 = ((x281^(x282|x283))+x284);

	if (t67 != 459489319U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x285 = 260982LL;
	int8_t x286 = INT8_MIN;
	int8_t x288 = INT8_MAX;

	t68 = ((x285^(x286|x287))+x288);

	if (t68 != -260819LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x290 = 35;
	static uint64_t x291 = UINT64_MAX;
	uint32_t x292 = 79U;
	volatile uint64_t t69 = 927LLU;

	t69 = ((x289^(x290|x291))+x292);

	if (t69 != 2147483726LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x293 = 22;
	uint64_t x294 = 131825823430LLU;
	uint32_t x295 = UINT32_MAX;
	static int64_t x296 = INT64_MAX;

	t70 = ((x293^(x294|x295))+x296);

	if (t70 != 9223372169998761960LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x297 = INT8_MAX;
	uint64_t x298 = 53LLU;
	int64_t x299 = 102048084358070313LL;
	uint64_t x300 = UINT64_MAX;
	volatile uint64_t t71 = 42846256LLU;

	t71 = ((x297^(x298|x299))+x300);

	if (t71 != 102048084358070337LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x301 = -11;
	static volatile uint8_t x302 = 46U;
	int64_t x303 = INT64_MIN;
	volatile int64_t t72 = -9588916168193LL;

	t72 = ((x301^(x302|x303))+x304);

	if (t72 != 9223372036854775770LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x309 = UINT16_MAX;
	uint16_t x310 = 361U;
	int32_t x311 = INT32_MAX;
	uint32_t x312 = UINT32_MAX;
	volatile uint32_t t73 = 212721051U;

	t73 = ((x309^(x310|x311))+x312);

	if (t73 != 2147418111U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x313 = 16079U;
	int8_t x314 = INT8_MAX;
	uint8_t x316 = 3U;
	volatile int32_t t74 = -6;

	t74 = ((x313^(x314|x315))+x316);

	if (t74 != -16077) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x317 = INT32_MIN;
	int64_t x318 = INT64_MAX;
	static int64_t t75 = 108011LL;

	t75 = ((x317^(x318|x319))+x320);

	if (t75 != 2147483658LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x322 = INT32_MAX;
	uint32_t x323 = UINT32_MAX;

	t76 = ((x321^(x322|x323))+x324);

	if (t76 != 2147483646U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x325 = 186U;
	int64_t x326 = INT64_MIN;
	int8_t x327 = 56;
	uint64_t x328 = UINT64_MAX;
	uint64_t t77 = 51480429995114LLU;

	t77 = ((x325^(x326|x327))+x328);

	if (t77 != 9223372036854775937LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x329 = INT8_MIN;
	int32_t x330 = -1;
	static int32_t x331 = INT32_MIN;
	uint16_t x332 = UINT16_MAX;
	static int32_t t78 = -4;

	t78 = ((x329^(x330|x331))+x332);

	if (t78 != 65662) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x333 = -30;
	int32_t x334 = INT32_MIN;
	uint64_t x335 = UINT64_MAX;
	int8_t x336 = INT8_MAX;
	uint64_t t79 = 25LLU;

	t79 = ((x333^(x334|x335))+x336);

	if (t79 != 156LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x338 = 106LLU;
	int16_t x340 = INT16_MAX;

	t80 = ((x337^(x338|x339))+x340);

	if (t80 != 65427LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x341 = INT8_MIN;
	volatile int32_t x342 = INT32_MIN;
	int32_t x343 = INT32_MAX;
	static uint64_t x344 = UINT64_MAX;
	uint64_t t81 = 5LLU;

	t81 = ((x341^(x342|x343))+x344);

	if (t81 != 126LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x345 = INT16_MIN;
	int8_t x348 = -1;
	int32_t t82 = -22243828;

	t82 = ((x345^(x346|x347))+x348);

	if (t82 != 32766) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint32_t x349 = 37691U;
	uint16_t x350 = UINT16_MAX;
	uint64_t x351 = 1114473LLU;
	uint64_t x352 = 71130403282779308LLU;
	volatile uint64_t t83 = 1318919308318LLU;

	t83 = ((x349^(x350|x351))+x352);

	if (t83 != 71130403283921264LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x353 = -1833;
	int64_t x354 = 8312709515206LL;
	static uint64_t x355 = 930193316189829141LLU;
	volatile int8_t x356 = -1;
	uint64_t t84 = 22697043860591616LLU;

	t84 = ((x353^(x354|x355))+x356);

	if (t84 != 17516548509371729663LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x357 = 9;
	uint32_t x358 = UINT32_MAX;

	t85 = ((x357^(x358|x359))+x360);

	if (t85 != 4294967289U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x361 = 21;
	int64_t x362 = 1712785221154298655LL;
	volatile int32_t x363 = 15;
	int64_t t86 = 2678998LL;

	t86 = ((x361^(x362|x363))+x364);

	if (t86 != 1712785221154265866LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x365 = 59451624U;
	uint64_t x366 = UINT64_MAX;
	int16_t x367 = INT16_MAX;
	static uint32_t x368 = 159418U;
	uint64_t t87 = 40238372344025LLU;

	t87 = ((x365^(x366|x367))+x368);

	if (t87 != 18446744073650259409LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x369 = UINT8_MAX;
	int8_t x370 = 56;
	int16_t x371 = INT16_MIN;
	volatile int64_t t88 = -2173576LL;

	t88 = ((x369^(x370|x371))+x372);

	if (t88 != 9223372036854743238LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x373 = UINT8_MAX;
	uint8_t x374 = 3U;
	uint64_t x375 = 9762344715177616LLU;
	uint8_t x376 = 23U;
	volatile uint64_t t89 = 721503LLU;

	t89 = ((x373^(x374|x375))+x376);

	if (t89 != 9762344715177603LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x377 = -3;
	int64_t x378 = 52730496168665LL;
	uint64_t x379 = 3284042188816LLU;
	int8_t x380 = INT8_MAX;

	t90 = ((x377^(x378|x379))+x380);

	if (t90 != 18446691306169222563LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x381 = 100905017238518LLU;
	static int8_t x383 = INT8_MAX;
	static int8_t x384 = -1;
	uint64_t t91 = 1887575875LLU;

	t91 = ((x381^(x382|x383))+x384);

	if (t91 != 100905017220104LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x385 = INT16_MAX;
	volatile int64_t x386 = INT64_MAX;
	int64_t x388 = 188LL;
	uint64_t t92 = 1082405403327471LLU;

	t92 = ((x385^(x386|x387))+x388);

	if (t92 != 9223372036854743228LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x389 = INT8_MAX;
	int64_t x391 = INT64_MIN;
	volatile int16_t x392 = -1;
	static volatile int64_t t93 = 14970545332477294LL;

	t93 = ((x389^(x390|x391))+x392);

	if (t93 != -9223372032559808641LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x393 = INT8_MIN;
	int8_t x394 = -3;
	uint16_t x395 = 58U;
	uint16_t x396 = 25958U;
	int32_t t94 = 2797561;

	t94 = ((x393^(x394|x395))+x396);

	if (t94 != 26085) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x397 = 4033LLU;
	uint8_t x399 = 32U;
	int8_t x400 = 1;
	uint64_t t95 = 889739LLU;

	t95 = ((x397^(x398|x399))+x400);

	if (t95 != 27643LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x405 = -1;
	uint32_t x406 = UINT32_MAX;
	static int16_t x407 = INT16_MIN;
	int64_t x408 = -1LL;
	volatile int64_t t96 = 791199087555LL;

	t96 = ((x405^(x406|x407))+x408);

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x409 = 1451362;
	volatile int8_t x410 = 5;
	uint32_t x411 = 391U;
	int8_t x412 = -1;
	volatile uint32_t t97 = 0U;

	t97 = ((x409^(x410|x411))+x412);

	if (t97 != 1451236U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x413 = -1LL;
	int32_t x414 = -1;
	static int8_t x415 = 6;
	static int64_t t98 = INT64_MIN;

	t98 = ((x413^(x414|x415))+x416);

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x419 = 521828678;
	static int8_t x420 = INT8_MIN;
	static int32_t t99 = 97157;

	t99 = ((x417^(x418|x419))+x420);

	if (t99 != -133) { NG(); } else { ; }
	
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

