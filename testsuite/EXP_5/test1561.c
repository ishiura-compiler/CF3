#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t t1 = 1;
volatile int8_t x9 = 34;
uint32_t x15 = 1607U;
int32_t x16 = INT32_MIN;
volatile int32_t t3 = 9314;
static int8_t x19 = INT8_MAX;
int8_t x27 = INT8_MIN;
volatile int32_t t6 = -1;
static int32_t x30 = INT32_MIN;
int64_t x32 = -35027523022407LL;
volatile uint16_t x34 = 11776U;
uint64_t x36 = 97822146062334811LLU;
static uint8_t x43 = UINT8_MAX;
uint64_t t12 = 205053501263LLU;
int8_t x53 = 11;
int64_t x60 = INT64_MAX;
uint16_t x62 = 6U;
uint32_t x68 = UINT32_MAX;
uint16_t x70 = 211U;
static uint64_t t20 = 5LLU;
int16_t x85 = -1;
int32_t x87 = INT32_MIN;
volatile int32_t x91 = INT32_MIN;
uint8_t x100 = 59U;
uint16_t x115 = 0U;
static int8_t x118 = 0;
static int16_t x122 = INT16_MIN;
uint8_t x125 = UINT8_MAX;
static volatile int32_t t30 = 41;
uint32_t x136 = 3U;
int32_t x137 = -25;
static int32_t x140 = INT32_MIN;
int8_t x152 = -1;
int64_t x156 = INT64_MIN;
static int64_t t36 = -383636763593LL;
uint32_t x162 = 199740817U;
int16_t x163 = INT16_MIN;
static int64_t x175 = -15579LL;
uint64_t x176 = 3LLU;
volatile int64_t t42 = INT64_MAX;
static int64_t t43 = -672135194LL;
uint8_t x192 = 12U;
static int8_t x203 = INT8_MIN;
uint64_t x204 = 3936LLU;
int16_t x205 = -2213;
uint8_t x207 = 7U;
uint8_t x208 = 48U;
static uint64_t x220 = 462LLU;
int64_t x222 = -1LL;
uint16_t x223 = UINT16_MAX;
int32_t x238 = -1;
volatile int16_t x239 = INT16_MIN;
int32_t x243 = -1;
static int64_t x244 = -514523303328336LL;
int16_t x245 = -10;
int32_t x250 = -1;
int8_t x256 = INT8_MAX;
int32_t t60 = -31;
int8_t x258 = -1;
int64_t x263 = INT64_MAX;
int32_t x265 = INT32_MIN;
int64_t t66 = 4LL;
volatile uint16_t x288 = 58U;
uint32_t x293 = 0U;
int64_t x295 = INT64_MIN;
int64_t x296 = INT64_MIN;
uint64_t t71 = 0LLU;
int16_t x304 = -1;
int64_t x305 = INT64_MAX;
uint16_t x318 = UINT16_MAX;
static uint8_t x330 = UINT8_MAX;
int8_t x333 = 5;
static uint8_t x336 = 12U;
volatile uint32_t x339 = 105894U;
int32_t x340 = INT32_MIN;
volatile int32_t x341 = INT32_MIN;
static int8_t x342 = INT8_MIN;
int64_t x344 = -1LL;
uint32_t x350 = 564054393U;
int16_t x354 = INT16_MAX;
int16_t x357 = INT16_MIN;
int32_t x367 = INT32_MAX;
int16_t x375 = -10;
int32_t t89 = 602057;
uint64_t x378 = 6LLU;
int16_t x391 = -1;
static int8_t x392 = INT8_MIN;
uint32_t x393 = 1982381U;
int8_t x394 = INT8_MAX;
int64_t x397 = INT64_MIN;
uint8_t x405 = 10U;
static volatile int64_t t97 = INT64_MIN;


void f0(void) {
	int32_t x1 = 315;
	volatile int64_t x2 = INT64_MIN;
	int8_t x3 = -1;
	int16_t x4 = INT16_MAX;
	static volatile int32_t t0 = 3;

	t0 = (x1+((x2<=x3)/x4));

	if (t0 != 315) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x5 = 236;
	static uint8_t x6 = UINT8_MAX;
	volatile int16_t x7 = -1;
	int8_t x8 = INT8_MAX;

	t1 = (x5+((x6<=x7)/x8));

	if (t1 != 236) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x10 = 5622LL;
	static int16_t x11 = 1;
	int32_t x12 = -10237;
	int32_t t2 = 4;

	t2 = (x9+((x10<=x11)/x12));

	if (t2 != 34) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = INT8_MIN;
	volatile int16_t x14 = INT16_MAX;

	t3 = (x13+((x14<=x15)/x16));

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	static int16_t x18 = -1585;
	int32_t x20 = 292626;
	volatile int32_t t4 = 164;

	t4 = (x17+((x18<=x19)/x20));

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 10;
	int32_t x22 = -1;
	static int32_t x23 = 60207;
	static volatile int16_t x24 = -1;
	int32_t t5 = -179;

	t5 = (x21+((x22<=x23)/x24));

	if (t5 != 9) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	uint32_t x26 = 19011349U;
	int32_t x28 = -1;

	t6 = (x25+((x26<=x27)/x28));

	if (t6 != -2) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x29 = -12976LL;
	static int32_t x31 = INT32_MIN;
	int64_t t7 = 16689LL;

	t7 = (x29+((x30<=x31)/x32));

	if (t7 != -12976LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 5768U;
	static uint32_t x35 = 25U;
	uint64_t t8 = 3723010249446262LLU;

	t8 = (x33+((x34<=x35)/x36));

	if (t8 != 5768LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = INT64_MIN;
	volatile int64_t x38 = INT64_MAX;
	uint32_t x39 = 91433U;
	volatile int16_t x40 = -1;
	volatile int64_t t9 = INT64_MIN;

	t9 = (x37+((x38<=x39)/x40));

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	uint64_t x42 = UINT64_MAX;
	static int8_t x44 = -25;
	volatile int64_t t10 = INT64_MAX;

	t10 = (x41+((x42<=x43)/x44));

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x45 = UINT32_MAX;
	static uint32_t x46 = UINT32_MAX;
	int8_t x47 = -1;
	volatile uint64_t x48 = 112648LLU;
	volatile uint64_t t11 = 42492860162263300LLU;

	t11 = (x45+((x46<=x47)/x48));

	if (t11 != 4294967295LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = INT16_MIN;
	int16_t x50 = -1;
	uint16_t x51 = UINT16_MAX;
	uint64_t x52 = UINT64_MAX;

	t12 = (x49+((x50<=x51)/x52));

	if (t12 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x54 = INT8_MAX;
	static uint32_t x55 = 47104996U;
	static int8_t x56 = INT8_MIN;
	int32_t t13 = 163679875;

	t13 = (x53+((x54<=x55)/x56));

	if (t13 != 11) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x57 = 12U;
	int64_t x58 = -79521555LL;
	static volatile uint64_t x59 = 1023722743566170685LLU;
	static int64_t t14 = 6608885285920399LL;

	t14 = (x57+((x58<=x59)/x60));

	if (t14 != 12LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 319165700820LLU;
	static uint32_t x63 = 6472201U;
	volatile int8_t x64 = 52;
	static uint64_t t15 = 6574760LLU;

	t15 = (x61+((x62<=x63)/x64));

	if (t15 != 319165700820LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = INT32_MIN;
	static volatile int32_t x66 = INT32_MAX;
	int64_t x67 = INT64_MIN;
	static uint32_t t16 = 6401179U;

	t16 = (x65+((x66<=x67)/x68));

	if (t16 != 2147483648U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	volatile uint8_t x71 = UINT8_MAX;
	static uint64_t x72 = 641342616466332746LLU;
	uint64_t t17 = 265LLU;

	t17 = (x69+((x70<=x71)/x72));

	if (t17 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MAX;
	uint64_t x74 = UINT64_MAX;
	int16_t x75 = INT16_MAX;
	static int32_t x76 = 37390;
	int32_t t18 = INT32_MAX;

	t18 = (x73+((x74<=x75)/x76));

	if (t18 != INT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x77 = 81U;
	int8_t x78 = -1;
	int64_t x79 = INT64_MIN;
	int64_t x80 = INT64_MIN;
	int64_t t19 = -3861021748LL;

	t19 = (x77+((x78<=x79)/x80));

	if (t19 != 81LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -124;
	volatile int16_t x82 = INT16_MAX;
	static int16_t x83 = 2697;
	uint64_t x84 = 5LLU;

	t20 = (x81+((x82<=x83)/x84));

	if (t20 != 18446744073709551492LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x86 = UINT16_MAX;
	uint8_t x88 = 9U;
	volatile int32_t t21 = -116;

	t21 = (x85+((x86<=x87)/x88));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	volatile uint16_t x90 = 14689U;
	volatile int32_t x92 = 107;
	volatile int32_t t22 = -1;

	t22 = (x89+((x90<=x91)/x92));

	if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x97 = UINT64_MAX;
	volatile uint64_t x98 = UINT64_MAX;
	static volatile uint64_t x99 = 418LLU;
	uint64_t t23 = UINT64_MAX;

	t23 = (x97+((x98<=x99)/x100));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = INT64_MIN;
	uint64_t x102 = UINT64_MAX;
	int64_t x103 = 211LL;
	static uint64_t x104 = 1525313414687444LLU;
	uint64_t t24 = 27590LLU;

	t24 = (x101+((x102<=x103)/x104));

	if (t24 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x105 = UINT8_MAX;
	static int8_t x106 = INT8_MIN;
	static volatile uint32_t x107 = 216U;
	volatile uint64_t x108 = 223429432821417LLU;
	volatile uint64_t t25 = 7627364997LLU;

	t25 = (x105+((x106<=x107)/x108));

	if (t25 != 255LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x113 = 1611032709U;
	uint32_t x114 = UINT32_MAX;
	int32_t x116 = -1;
	volatile uint32_t t26 = 6447U;

	t26 = (x113+((x114<=x115)/x116));

	if (t26 != 1611032709U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = INT16_MAX;
	int8_t x119 = INT8_MAX;
	static volatile int32_t x120 = INT32_MIN;
	int32_t t27 = 2940594;

	t27 = (x117+((x118<=x119)/x120));

	if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x121 = -1;
	int32_t x123 = INT32_MIN;
	uint8_t x124 = 3U;
	volatile int32_t t28 = 1;

	t28 = (x121+((x122<=x123)/x124));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x126 = 28U;
	int64_t x127 = INT64_MIN;
	int32_t x128 = -6;
	volatile int32_t t29 = -509;

	t29 = (x125+((x126<=x127)/x128));

	if (t29 != 255) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = -1;
	static int32_t x130 = 50484061;
	int32_t x131 = INT32_MIN;
	int8_t x132 = -12;

	t30 = (x129+((x130<=x131)/x132));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = INT8_MIN;
	static volatile int32_t x134 = INT32_MAX;
	volatile uint8_t x135 = UINT8_MAX;
	volatile uint32_t t31 = 4U;

	t31 = (x133+((x134<=x135)/x136));

	if (t31 != 4294967168U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x138 = 12968394084607LLU;
	int16_t x139 = -47;
	static int32_t t32 = -129;

	t32 = (x137+((x138<=x139)/x140));

	if (t32 != -25) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x141 = 1240864692325LLU;
	volatile int32_t x142 = -1;
	static volatile int32_t x143 = -1248;
	int8_t x144 = 17;
	static volatile uint64_t t33 = 40053604440831894LLU;

	t33 = (x141+((x142<=x143)/x144));

	if (t33 != 1240864692325LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x145 = 281871019U;
	volatile uint8_t x146 = 53U;
	static volatile uint32_t x147 = UINT32_MAX;
	static int8_t x148 = INT8_MIN;
	volatile uint32_t t34 = 704U;

	t34 = (x145+((x146<=x147)/x148));

	if (t34 != 281871019U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x149 = -1;
	static uint64_t x150 = UINT64_MAX;
	static uint32_t x151 = 23185103U;
	int32_t t35 = -5333828;

	t35 = (x149+((x150<=x151)/x152));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = INT16_MIN;
	int32_t x154 = -3769616;
	uint16_t x155 = 1043U;

	t36 = (x153+((x154<=x155)/x156));

	if (t36 != -32768LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x157 = INT8_MAX;
	uint16_t x158 = 126U;
	volatile int32_t x159 = INT32_MIN;
	uint16_t x160 = UINT16_MAX;
	static volatile int32_t t37 = 270;

	t37 = (x157+((x158<=x159)/x160));

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint16_t x161 = UINT16_MAX;
	volatile int32_t x164 = 4;
	int32_t t38 = 12645;

	t38 = (x161+((x162<=x163)/x164));

	if (t38 != 65535) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x165 = INT8_MIN;
	static uint32_t x166 = 66192U;
	int64_t x167 = INT64_MAX;
	uint32_t x168 = UINT32_MAX;
	volatile uint32_t t39 = 514062U;

	t39 = (x165+((x166<=x167)/x168));

	if (t39 != 4294967168U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x169 = INT8_MIN;
	int32_t x170 = INT32_MAX;
	static int32_t x171 = INT32_MAX;
	int64_t x172 = INT64_MIN;
	volatile int64_t t40 = 151740103818LL;

	t40 = (x169+((x170<=x171)/x172));

	if (t40 != -128LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = INT16_MIN;
	int16_t x174 = INT16_MAX;
	static volatile uint64_t t41 = 4309517503375331LLU;

	t41 = (x173+((x174<=x175)/x176));

	if (t41 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x177 = INT64_MAX;
	uint32_t x178 = 2176U;
	uint64_t x179 = 22LLU;
	int32_t x180 = -1612;

	t42 = (x177+((x178<=x179)/x180));

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x181 = 14456665851317456LL;
	static uint16_t x182 = UINT16_MAX;
	int16_t x183 = -4;
	volatile uint16_t x184 = 1U;

	t43 = (x181+((x182<=x183)/x184));

	if (t43 != 14456665851317456LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x185 = INT32_MIN;
	static uint64_t x186 = 8535682598422728955LLU;
	int64_t x187 = -1LL;
	int8_t x188 = INT8_MIN;
	int32_t t44 = INT32_MIN;

	t44 = (x185+((x186<=x187)/x188));

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x189 = -12931188406513716LL;
	static int32_t x190 = INT32_MIN;
	static uint8_t x191 = 0U;
	volatile int64_t t45 = -26040393835525LL;

	t45 = (x189+((x190<=x191)/x192));

	if (t45 != -12931188406513716LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x193 = -7;
	static volatile int32_t x194 = INT32_MIN;
	uint64_t x195 = 301647550342LLU;
	uint64_t x196 = 2760589LLU;
	volatile uint64_t t46 = 226574862084LLU;

	t46 = (x193+((x194<=x195)/x196));

	if (t46 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x197 = INT32_MIN;
	uint16_t x198 = UINT16_MAX;
	uint8_t x199 = 4U;
	int16_t x200 = -8123;
	int32_t t47 = INT32_MIN;

	t47 = (x197+((x198<=x199)/x200));

	if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = INT32_MAX;
	int16_t x202 = INT16_MIN;
	uint64_t t48 = 5687LLU;

	t48 = (x201+((x202<=x203)/x204));

	if (t48 != 2147483647LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x206 = INT8_MIN;
	static int32_t t49 = -5400277;

	t49 = (x205+((x206<=x207)/x208));

	if (t49 != -2213) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x209 = 657139457570LLU;
	uint8_t x210 = 1U;
	int16_t x211 = INT16_MAX;
	int32_t x212 = -1;
	static volatile uint64_t t50 = 208414717436828437LLU;

	t50 = (x209+((x210<=x211)/x212));

	if (t50 != 657139457569LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x213 = UINT32_MAX;
	uint8_t x214 = UINT8_MAX;
	volatile uint32_t x215 = UINT32_MAX;
	static int8_t x216 = -9;
	uint32_t t51 = UINT32_MAX;

	t51 = (x213+((x214<=x215)/x216));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x217 = 14378U;
	int8_t x218 = INT8_MIN;
	int64_t x219 = INT64_MIN;
	uint64_t t52 = 5364140LLU;

	t52 = (x217+((x218<=x219)/x220));

	if (t52 != 14378LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x221 = INT16_MAX;
	volatile int32_t x224 = INT32_MIN;
	int32_t t53 = 515387;

	t53 = (x221+((x222<=x223)/x224));

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x229 = 63927931482LLU;
	uint16_t x230 = 6759U;
	int32_t x231 = 1;
	volatile uint32_t x232 = 1U;
	volatile uint64_t t54 = 3011084452LLU;

	t54 = (x229+((x230<=x231)/x232));

	if (t54 != 63927931482LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x233 = INT8_MIN;
	int64_t x234 = INT64_MAX;
	uint8_t x235 = UINT8_MAX;
	static uint64_t x236 = UINT64_MAX;
	static volatile uint64_t t55 = 3711LLU;

	t55 = (x233+((x234<=x235)/x236));

	if (t55 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x237 = 23U;
	int32_t x240 = INT32_MAX;
	int32_t t56 = -13509;

	t56 = (x237+((x238<=x239)/x240));

	if (t56 != 23) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x241 = 0U;
	volatile int32_t x242 = 191103;
	int64_t t57 = 503270493197LL;

	t57 = (x241+((x242<=x243)/x244));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x246 = INT16_MAX;
	uint16_t x247 = 59U;
	static int32_t x248 = INT32_MIN;
	int32_t t58 = -28;

	t58 = (x245+((x246<=x247)/x248));

	if (t58 != -10) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x249 = -32555864LL;
	static uint32_t x251 = UINT32_MAX;
	int16_t x252 = INT16_MIN;
	volatile int64_t t59 = -1207LL;

	t59 = (x249+((x250<=x251)/x252));

	if (t59 != -32555864LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x253 = -1;
	uint32_t x254 = 5522242U;
	volatile int16_t x255 = INT16_MIN;

	t60 = (x253+((x254<=x255)/x256));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x257 = UINT64_MAX;
	volatile int64_t x259 = INT64_MAX;
	static int8_t x260 = INT8_MAX;
	static volatile uint64_t t61 = UINT64_MAX;

	t61 = (x257+((x258<=x259)/x260));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x261 = -3;
	uint16_t x262 = 235U;
	volatile uint64_t x264 = UINT64_MAX;
	volatile uint64_t t62 = 6LLU;

	t62 = (x261+((x262<=x263)/x264));

	if (t62 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x266 = 2LLU;
	int8_t x267 = -1;
	volatile int16_t x268 = INT16_MIN;
	volatile int32_t t63 = INT32_MIN;

	t63 = (x265+((x266<=x267)/x268));

	if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x269 = -23;
	static int64_t x270 = INT64_MIN;
	uint8_t x271 = 6U;
	int8_t x272 = INT8_MIN;
	volatile int32_t t64 = -7;

	t64 = (x269+((x270<=x271)/x272));

	if (t64 != -23) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x273 = INT32_MAX;
	uint8_t x274 = 35U;
	uint8_t x275 = 35U;
	static uint8_t x276 = 120U;
	volatile int32_t t65 = INT32_MAX;

	t65 = (x273+((x274<=x275)/x276));

	if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x277 = UINT16_MAX;
	uint32_t x278 = 12U;
	static int8_t x279 = -1;
	int64_t x280 = -1LL;

	t66 = (x277+((x278<=x279)/x280));

	if (t66 != 65534LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x281 = UINT16_MAX;
	uint8_t x282 = UINT8_MAX;
	int32_t x283 = INT32_MAX;
	int8_t x284 = 2;
	int32_t t67 = 36;

	t67 = (x281+((x282<=x283)/x284));

	if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x285 = -1LL;
	int32_t x286 = -1;
	uint16_t x287 = 7U;
	int64_t t68 = -3976956202363LL;

	t68 = (x285+((x286<=x287)/x288));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x289 = 144217998U;
	volatile int32_t x290 = -1;
	int32_t x291 = 64639471;
	int8_t x292 = -1;
	volatile uint32_t t69 = 8514892U;

	t69 = (x289+((x290<=x291)/x292));

	if (t69 != 144217997U) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x294 = INT8_MAX;
	volatile int64_t t70 = -1LL;

	t70 = (x293+((x294<=x295)/x296));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x297 = INT16_MIN;
	uint8_t x298 = UINT8_MAX;
	int8_t x299 = INT8_MIN;
	uint64_t x300 = UINT64_MAX;

	t71 = (x297+((x298<=x299)/x300));

	if (t71 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x301 = -2;
	static uint64_t x302 = UINT64_MAX;
	uint8_t x303 = 78U;
	static int32_t t72 = -447790;

	t72 = (x301+((x302<=x303)/x304));

	if (t72 != -2) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x306 = -1LL;
	volatile uint8_t x307 = 3U;
	uint32_t x308 = 38915U;
	int64_t t73 = INT64_MAX;

	t73 = (x305+((x306<=x307)/x308));

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x309 = INT64_MAX;
	static uint8_t x310 = UINT8_MAX;
	int16_t x311 = -1;
	uint64_t x312 = 11LLU;
	uint64_t t74 = 0LLU;

	t74 = (x309+((x310<=x311)/x312));

	if (t74 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x313 = 1U;
	int32_t x314 = -1;
	int8_t x315 = INT8_MIN;
	int8_t x316 = -1;
	volatile int32_t t75 = -7336;

	t75 = (x313+((x314<=x315)/x316));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x317 = 102U;
	uint32_t x319 = 7U;
	uint8_t x320 = UINT8_MAX;
	volatile int32_t t76 = 13736;

	t76 = (x317+((x318<=x319)/x320));

	if (t76 != 102) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x321 = 65673145469128LL;
	int16_t x322 = INT16_MIN;
	volatile uint64_t x323 = 124970000656351889LLU;
	uint8_t x324 = 1U;
	volatile int64_t t77 = -3175564116LL;

	t77 = (x321+((x322<=x323)/x324));

	if (t77 != 65673145469128LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x329 = INT32_MIN;
	uint32_t x331 = 219538U;
	int16_t x332 = 5;
	int32_t t78 = INT32_MIN;

	t78 = (x329+((x330<=x331)/x332));

	if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x334 = 311U;
	volatile int16_t x335 = INT16_MIN;
	int32_t t79 = -2;

	t79 = (x333+((x334<=x335)/x336));

	if (t79 != 5) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x337 = INT8_MIN;
	uint8_t x338 = 2U;
	volatile int32_t t80 = 1228;

	t80 = (x337+((x338<=x339)/x340));

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x343 = -205;
	static int64_t t81 = -275003056151655273LL;

	t81 = (x341+((x342<=x343)/x344));

	if (t81 != -2147483648LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x345 = -1983652836LL;
	uint8_t x346 = UINT8_MAX;
	int64_t x347 = -207866968914LL;
	int64_t x348 = INT64_MIN;
	static volatile int64_t t82 = -96098575281LL;

	t82 = (x345+((x346<=x347)/x348));

	if (t82 != -1983652836LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x349 = UINT64_MAX;
	uint32_t x351 = 1028U;
	int64_t x352 = 22135352463208564LL;
	volatile uint64_t t83 = UINT64_MAX;

	t83 = (x349+((x350<=x351)/x352));

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x353 = 9U;
	int32_t x355 = INT32_MIN;
	uint16_t x356 = UINT16_MAX;
	static volatile int32_t t84 = -2591;

	t84 = (x353+((x354<=x355)/x356));

	if (t84 != 9) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x358 = 39LL;
	static int32_t x359 = 2617;
	static int64_t x360 = 2757568LL;
	int64_t t85 = 453009LL;

	t85 = (x357+((x358<=x359)/x360));

	if (t85 != -32768LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x361 = -1;
	uint64_t x362 = 6LLU;
	static volatile int16_t x363 = INT16_MAX;
	uint16_t x364 = 14954U;
	int32_t t86 = 14440;

	t86 = (x361+((x362<=x363)/x364));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x365 = INT64_MAX;
	int16_t x366 = INT16_MIN;
	int8_t x368 = INT8_MIN;
	volatile int64_t t87 = INT64_MAX;

	t87 = (x365+((x366<=x367)/x368));

	if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x369 = 1270612429320240547LLU;
	int64_t x370 = 307384359833041368LL;
	static int32_t x371 = -1;
	volatile int8_t x372 = INT8_MIN;
	volatile uint64_t t88 = 79282034575LLU;

	t88 = (x369+((x370<=x371)/x372));

	if (t88 != 1270612429320240547LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x373 = -1;
	int64_t x374 = INT64_MAX;
	int16_t x376 = INT16_MIN;

	t89 = (x373+((x374<=x375)/x376));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x377 = UINT64_MAX;
	static int8_t x379 = -1;
	int8_t x380 = 1;
	volatile uint64_t t90 = 899356979LLU;

	t90 = (x377+((x378<=x379)/x380));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x381 = INT64_MIN;
	volatile int32_t x382 = -285071;
	int16_t x383 = -1;
	int16_t x384 = INT16_MIN;
	volatile int64_t t91 = INT64_MIN;

	t91 = (x381+((x382<=x383)/x384));

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x385 = INT16_MIN;
	volatile uint16_t x386 = 12U;
	volatile int16_t x387 = INT16_MIN;
	volatile uint16_t x388 = 114U;
	int32_t t92 = 59679799;

	t92 = (x385+((x386<=x387)/x388));

	if (t92 != -32768) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x389 = UINT16_MAX;
	int64_t x390 = -1LL;
	static volatile int32_t t93 = -5753;

	t93 = (x389+((x390<=x391)/x392));

	if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x395 = 0;
	uint64_t x396 = 242LLU;
	volatile uint64_t t94 = 7LLU;

	t94 = (x393+((x394<=x395)/x396));

	if (t94 != 1982381LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x398 = INT32_MIN;
	int32_t x399 = INT32_MAX;
	uint32_t x400 = 2106084653U;
	volatile int64_t t95 = INT64_MIN;

	t95 = (x397+((x398<=x399)/x400));

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x406 = INT64_MAX;
	volatile int16_t x407 = INT16_MAX;
	uint16_t x408 = 8U;
	volatile int32_t t96 = 102058887;

	t96 = (x405+((x406<=x407)/x408));

	if (t96 != 10) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x409 = INT64_MIN;
	static uint8_t x410 = UINT8_MAX;
	int8_t x411 = INT8_MIN;
	int16_t x412 = INT16_MAX;

	t97 = (x409+((x410<=x411)/x412));

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x413 = -428;
	int64_t x414 = INT64_MAX;
	volatile int64_t x415 = 440446499LL;
	int64_t x416 = INT64_MIN;
	int64_t t98 = 2376406401789720581LL;

	t98 = (x413+((x414<=x415)/x416));

	if (t98 != -428LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x417 = UINT8_MAX;
	int32_t x418 = INT32_MIN;
	int64_t x419 = -1LL;
	int16_t x420 = INT16_MAX;
	int32_t t99 = 1287237;

	t99 = (x417+((x418<=x419)/x420));

	if (t99 != 255) { NG(); } else { ; }
	
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

