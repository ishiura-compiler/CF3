#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x6 = 506117074580969645LLU;
volatile int32_t x7 = 7462561;
volatile uint16_t x24 = UINT16_MAX;
uint64_t x26 = UINT64_MAX;
volatile uint64_t t7 = 96LLU;
static volatile int32_t x52 = -1;
uint8_t x53 = 0U;
uint8_t x58 = UINT8_MAX;
volatile uint64_t t11 = 4930758645LLU;
uint8_t x63 = UINT8_MAX;
uint8_t x67 = 24U;
int64_t x69 = INT64_MIN;
int16_t x72 = -120;
static uint64_t x85 = 10936836146LLU;
static uint32_t x93 = UINT32_MAX;
volatile uint8_t x95 = 101U;
int16_t x98 = 4286;
int64_t x104 = -1LL;
int64_t t20 = -62849143LL;
volatile int64_t x106 = INT64_MIN;
int8_t x108 = 41;
uint64_t x110 = 14627LLU;
int64_t x112 = INT64_MIN;
volatile uint64_t x116 = UINT64_MAX;
static volatile int64_t x117 = INT64_MAX;
int32_t x124 = INT32_MIN;
int16_t x128 = INT16_MIN;
uint64_t x133 = 15793961645058764LLU;
uint8_t x136 = 1U;
int64_t x137 = INT64_MIN;
uint8_t x140 = 5U;
int32_t t38 = 248537;
uint64_t x186 = UINT64_MAX;
int16_t x187 = INT16_MIN;
int8_t x189 = -16;
static int32_t x190 = INT32_MIN;
static int64_t x194 = INT64_MAX;
uint8_t x198 = 4U;
static volatile int64_t t42 = INT64_MIN;
volatile int32_t x207 = 931418;
int16_t x211 = INT16_MIN;
volatile int16_t x214 = INT16_MIN;
int8_t x220 = -1;
static uint64_t x225 = 27LLU;
int16_t x228 = -1;
volatile int32_t x231 = INT32_MIN;
int8_t x236 = INT8_MIN;
static int16_t x239 = INT16_MIN;
volatile int64_t t52 = INT64_MAX;
uint64_t x251 = 1809LLU;
int16_t x252 = -1;
uint64_t x257 = UINT64_MAX;
int8_t x270 = INT8_MAX;
int8_t x272 = -1;
int8_t x273 = INT8_MIN;
volatile uint8_t x274 = UINT8_MAX;
int32_t t58 = 760916585;
int64_t x281 = INT64_MIN;
volatile int32_t x283 = 5;
int16_t x289 = INT16_MAX;
uint32_t x290 = UINT32_MAX;
volatile int64_t x291 = 3014402887498075336LL;
int64_t t62 = 2158098454576901964LL;
int32_t x298 = INT32_MIN;
uint8_t x309 = 0U;
int32_t x312 = -1;
uint64_t t65 = 3759755663069613LLU;
int8_t x317 = INT8_MIN;
int32_t x323 = 74483;
static int16_t x348 = -1;
volatile uint16_t x350 = UINT16_MAX;
int32_t x360 = INT32_MIN;
int32_t x368 = -4598342;
volatile int64_t t76 = 1806672826760545LL;
int16_t x371 = -459;
int64_t x373 = INT64_MIN;
volatile int16_t x384 = 457;
uint32_t x406 = 1171876216U;
static int8_t x407 = INT8_MAX;
uint64_t t87 = 198LLU;
int8_t x416 = 1;
static int64_t x419 = INT64_MAX;
int32_t x447 = 108;
int16_t x469 = INT16_MIN;
static int8_t x478 = 1;
int32_t x481 = 1063742;
int64_t x483 = -8335556016341LL;
int64_t x487 = -1LL;
static int16_t x488 = INT16_MIN;
uint64_t t99 = 3058815607847972LLU;


void f0(void) {
	int16_t x1 = -167;
	static volatile int64_t x2 = INT64_MIN;
	volatile int64_t x3 = INT64_MIN;
	int8_t x4 = -53;
	static volatile int64_t t0 = -50LL;

	t0 = (x1^(x2/(x3&x4)));

	if (t0 != -168LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	volatile uint8_t x8 = UINT8_MAX;
	volatile uint64_t t1 = 112024860LLU;

	t1 = (x5^(x6/(x7&x8)));

	if (t1 != 18443600489395359961LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x17 = 133LLU;
	static int8_t x18 = -1;
	volatile int16_t x19 = INT16_MAX;
	static int32_t x20 = INT32_MAX;
	volatile uint64_t t2 = 13970722671409966LLU;

	t2 = (x17^(x18/(x19&x20)));

	if (t2 != 133LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x21 = -6;
	static int32_t x22 = INT32_MIN;
	uint32_t x23 = UINT32_MAX;
	volatile uint32_t t3 = 6275U;

	t3 = (x21^(x22/(x23&x24)));

	if (t3 != 4294934522U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x25 = UINT32_MAX;
	int8_t x27 = INT8_MIN;
	static volatile int64_t x28 = -20985065LL;
	volatile uint64_t t4 = 2159913264851768LLU;

	t4 = (x25^(x26/(x27&x28)));

	if (t4 != 4294967294LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x33 = 1805985LL;
	static int8_t x34 = INT8_MIN;
	volatile int64_t x35 = 80745820LL;
	static int8_t x36 = -1;
	volatile int64_t t5 = 170969391072962LL;

	t5 = (x33^(x34/(x35&x36)));

	if (t5 != 1805985LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x37 = INT16_MIN;
	static int16_t x38 = 493;
	uint64_t x39 = 21134161520516372LLU;
	int32_t x40 = 94794762;
	volatile uint64_t t6 = 20544LLU;

	t6 = (x37^(x38/(x39&x40)));

	if (t6 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x41 = 371500573458692LL;
	static volatile uint8_t x42 = UINT8_MAX;
	uint64_t x43 = UINT64_MAX;
	static int32_t x44 = INT32_MAX;

	t7 = (x41^(x42/(x43&x44)));

	if (t7 != 371500573458692LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x45 = INT8_MAX;
	int64_t x46 = INT64_MIN;
	int32_t x47 = -14496569;
	static volatile uint32_t x48 = UINT32_MAX;
	volatile int64_t t8 = 0LL;

	t8 = (x45^(x46/(x47&x48)));

	if (t8 != -2154756353LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = INT8_MIN;
	int32_t x50 = -1;
	int64_t x51 = INT64_MIN;
	static volatile int64_t t9 = 63924109005311LL;

	t9 = (x49^(x50/(x51&x52)));

	if (t9 != -128LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x54 = -1;
	volatile int16_t x55 = -2;
	static volatile int16_t x56 = -1;
	static volatile int32_t t10 = -614917081;

	t10 = (x53^(x54/(x55&x56)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x57 = INT8_MAX;
	static uint64_t x59 = 24966LLU;
	uint64_t x60 = 8826LLU;

	t11 = (x57^(x58/(x59&x60)));

	if (t11 != 127LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x61 = -1;
	int8_t x62 = INT8_MIN;
	uint16_t x64 = 1040U;
	int32_t t12 = 1;

	t12 = (x61^(x62/(x63&x64)));

	if (t12 != 7) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x65 = -4;
	int64_t x66 = INT64_MAX;
	int32_t x68 = -15260003;
	static volatile int64_t t13 = -3814100591LL;

	t13 = (x65^(x66/(x67&x68)));

	if (t13 != -384307168202282327LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x70 = -2281523647LL;
	static int64_t x71 = INT64_MIN;
	volatile int64_t t14 = INT64_MIN;

	t14 = (x69^(x70/(x71&x72)));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x73 = 10626589003521807LL;
	static uint8_t x74 = 4U;
	uint64_t x75 = UINT64_MAX;
	uint32_t x76 = 45U;
	volatile uint64_t t15 = 614514667144565347LLU;

	t15 = (x73^(x74/(x75&x76)));

	if (t15 != 10626589003521807LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x81 = 65U;
	uint32_t x82 = UINT32_MAX;
	int8_t x83 = INT8_MIN;
	int64_t x84 = INT64_MAX;
	int64_t t16 = -49942358592081185LL;

	t16 = (x81^(x82/(x83&x84)));

	if (t16 != 65LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x86 = INT16_MAX;
	int16_t x87 = -898;
	int64_t x88 = 32317135048173313LL;
	volatile uint64_t t17 = 3464713239LLU;

	t17 = (x85^(x86/(x87&x88)));

	if (t17 != 10936836146LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x94 = 30098LL;
	int8_t x96 = 1;
	static volatile int64_t t18 = -63145004LL;

	t18 = (x93^(x94/(x95&x96)));

	if (t18 != 4294937197LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x97 = INT64_MAX;
	static int8_t x99 = INT8_MIN;
	static int8_t x100 = INT8_MIN;
	int64_t t19 = -4368959943944LL;

	t19 = (x97^(x98/(x99&x100)));

	if (t19 != -9223372036854775776LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x101 = UINT32_MAX;
	int32_t x102 = -1;
	uint8_t x103 = 36U;

	t20 = (x101^(x102/(x103&x104)));

	if (t20 != 4294967295LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x105 = -1LL;
	static int8_t x107 = -4;
	volatile int64_t t21 = -3507183767LL;

	t21 = (x105^(x106/(x107&x108)));

	if (t21 != 230584300921369394LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x109 = -12;
	int64_t x111 = -1LL;
	volatile uint64_t t22 = 407483898568LLU;

	t22 = (x109^(x110/(x111&x112)));

	if (t22 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x113 = 3U;
	uint16_t x114 = 372U;
	uint8_t x115 = UINT8_MAX;
	volatile uint64_t t23 = 23853LLU;

	t23 = (x113^(x114/(x115&x116)));

	if (t23 != 2LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x118 = 554245353U;
	int32_t x119 = INT32_MAX;
	static int32_t x120 = INT32_MAX;
	int64_t t24 = INT64_MAX;

	t24 = (x117^(x118/(x119&x120)));

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x121 = INT32_MAX;
	static uint16_t x122 = 241U;
	static int16_t x123 = -1;
	volatile int32_t t25 = INT32_MAX;

	t25 = (x121^(x122/(x123&x124)));

	if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x125 = INT8_MAX;
	int64_t x126 = -3321392600741LL;
	volatile int16_t x127 = INT16_MIN;
	int64_t t26 = -12414LL;

	t26 = (x125^(x126/(x127&x128)));

	if (t26 != 101360805LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x129 = -537196080168293439LL;
	uint64_t x130 = UINT64_MAX;
	uint16_t x131 = UINT16_MAX;
	uint64_t x132 = 7733168887370634LLU;
	uint64_t t27 = 55LLU;

	t27 = (x129^(x130/(x131&x132)));

	if (t27 != 17908112135412366425LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x134 = -1;
	int64_t x135 = 559830344925200715LL;
	volatile uint64_t t28 = 3584892970922316LLU;

	t28 = (x133^(x134/(x135&x136)));

	if (t28 != 18430950112064492851LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x138 = 18U;
	uint32_t x139 = 19217U;
	static volatile int64_t t29 = 2918606453265133LL;

	t29 = (x137^(x138/(x139&x140)));

	if (t29 != -9223372036854775790LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x145 = 81U;
	int16_t x146 = INT16_MIN;
	uint8_t x147 = 116U;
	int32_t x148 = -1;
	volatile int32_t t30 = -122398;

	t30 = (x145^(x146/(x147&x148)));

	if (t30 != -329) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x149 = INT8_MAX;
	static volatile uint8_t x150 = UINT8_MAX;
	int64_t x151 = 6004310LL;
	uint32_t x152 = 49582U;
	static int64_t t31 = 2601897268048LL;

	t31 = (x149^(x150/(x151&x152)));

	if (t31 != 127LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x157 = 6LL;
	int64_t x158 = INT64_MAX;
	uint64_t x159 = UINT64_MAX;
	static int64_t x160 = 48865559LL;
	uint64_t t32 = 32734787289716LLU;

	t32 = (x157^(x158/(x159&x160)));

	if (t32 != 188749954473LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x161 = INT8_MIN;
	uint8_t x162 = UINT8_MAX;
	uint8_t x163 = 2U;
	uint16_t x164 = UINT16_MAX;
	int32_t t33 = 8395777;

	t33 = (x161^(x162/(x163&x164)));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x165 = -1;
	int64_t x166 = INT64_MAX;
	volatile uint16_t x167 = UINT16_MAX;
	uint32_t x168 = UINT32_MAX;
	volatile int64_t t34 = -23679LL;

	t34 = (x165^(x166/(x167&x168)));

	if (t34 != -140739635871745LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x169 = UINT8_MAX;
	volatile int32_t x170 = INT32_MIN;
	int16_t x171 = INT16_MIN;
	int64_t x172 = -1LL;
	volatile int64_t t35 = 18019LL;

	t35 = (x169^(x170/(x171&x172)));

	if (t35 != 65791LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x173 = UINT32_MAX;
	static int8_t x174 = 0;
	int16_t x175 = INT16_MIN;
	volatile int64_t x176 = 34093967475889115LL;
	static volatile int64_t t36 = -12340LL;

	t36 = (x173^(x174/(x175&x176)));

	if (t36 != 4294967295LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x177 = INT16_MIN;
	uint16_t x178 = 123U;
	volatile int64_t x179 = INT64_MIN;
	static volatile int64_t x180 = INT64_MIN;
	static int64_t t37 = 8907LL;

	t37 = (x177^(x178/(x179&x180)));

	if (t37 != -32768LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x181 = INT8_MIN;
	uint16_t x182 = 1U;
	uint8_t x183 = UINT8_MAX;
	volatile int16_t x184 = INT16_MAX;

	t38 = (x181^(x182/(x183&x184)));

	if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x185 = -70;
	int32_t x188 = INT32_MAX;
	uint64_t t39 = 441327634230826079LLU;

	t39 = (x185^(x186/(x187&x188)));

	if (t39 != 18446744065119485880LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x191 = -1;
	int64_t x192 = 85009211809LL;
	int64_t t40 = -125LL;

	t40 = (x189^(x190/(x191&x192)));

	if (t40 != -16LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x193 = 1;
	int64_t x195 = -1LL;
	static uint16_t x196 = 80U;
	static int64_t t41 = -222184LL;

	t41 = (x193^(x194/(x195&x196)));

	if (t41 != 115292150460684696LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x197 = INT64_MIN;
	static volatile int32_t x199 = INT32_MIN;
	int32_t x200 = -1;

	t42 = (x197^(x198/(x199&x200)));

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x201 = 0U;
	int64_t x202 = INT64_MIN;
	volatile int32_t x203 = INT32_MAX;
	int32_t x204 = -1131;
	volatile int64_t t43 = 8187707632LL;

	t43 = (x201^(x202/(x203&x204)));

	if (t43 != -4294969558LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x205 = 1U;
	int32_t x206 = INT32_MIN;
	uint32_t x208 = 413U;
	volatile uint32_t t44 = 1993377U;

	t44 = (x205^(x206/(x207&x208)));

	if (t44 != 89478484U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x209 = INT8_MAX;
	int32_t x210 = 1998461;
	uint64_t x212 = 1401187576826LLU;
	volatile uint64_t t45 = 952LLU;

	t45 = (x209^(x210/(x211&x212)));

	if (t45 != 127LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x213 = UINT64_MAX;
	int64_t x215 = 9456214391034888LL;
	uint64_t x216 = UINT64_MAX;
	static volatile uint64_t t46 = 3840LLU;

	t46 = (x213^(x214/(x215&x216)));

	if (t46 != 18446744073709549665LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x217 = -1;
	static int16_t x218 = INT16_MIN;
	int8_t x219 = INT8_MIN;
	volatile int32_t t47 = 13709968;

	t47 = (x217^(x218/(x219&x220)));

	if (t47 != -257) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x221 = 51;
	static int8_t x222 = 2;
	int16_t x223 = INT16_MIN;
	static int32_t x224 = INT32_MIN;
	static volatile int32_t t48 = -7730472;

	t48 = (x221^(x222/(x223&x224)));

	if (t48 != 51) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x226 = 2512U;
	int64_t x227 = INT64_MIN;
	static uint64_t t49 = 6LLU;

	t49 = (x225^(x226/(x227&x228)));

	if (t49 != 27LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x229 = 4128465612155166LLU;
	uint16_t x230 = UINT16_MAX;
	volatile int32_t x232 = -511;
	uint64_t t50 = 12481067399217LLU;

	t50 = (x229^(x230/(x231&x232)));

	if (t50 != 4128465612155166LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x233 = 97LL;
	static volatile uint64_t x234 = 241014624033019284LLU;
	volatile int8_t x235 = -1;
	volatile uint64_t t51 = 2932LLU;

	t51 = (x233^(x234/(x235&x236)));

	if (t51 != 97LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x237 = INT64_MAX;
	static uint32_t x238 = 150U;
	int16_t x240 = INT16_MIN;

	t52 = (x237^(x238/(x239&x240)));

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x249 = UINT64_MAX;
	static int16_t x250 = INT16_MAX;
	uint64_t t53 = 5834LLU;

	t53 = (x249^(x250/(x251&x252)));

	if (t53 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint8_t x258 = 1U;
	static uint64_t x259 = UINT64_MAX;
	int8_t x260 = 43;
	static volatile uint64_t t54 = UINT64_MAX;

	t54 = (x257^(x258/(x259&x260)));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x261 = -1;
	int64_t x262 = INT64_MAX;
	uint8_t x263 = 33U;
	int64_t x264 = -1LL;
	int64_t t55 = -24151125LL;

	t55 = (x261^(x262/(x263&x264)));

	if (t55 != -279496122328932601LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x265 = INT16_MIN;
	uint32_t x266 = UINT32_MAX;
	uint64_t x267 = 89048246827287235LLU;
	static uint64_t x268 = UINT64_MAX;
	volatile uint64_t t56 = 902121260702LLU;

	t56 = (x265^(x266/(x267&x268)));

	if (t56 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x269 = -3;
	uint16_t x271 = 3285U;
	int32_t t57 = -9985525;

	t57 = (x269^(x270/(x271&x272)));

	if (t57 != -3) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x275 = -1;
	int8_t x276 = INT8_MIN;

	t58 = (x273^(x274/(x275&x276)));

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x282 = 16993810LL;
	uint64_t x284 = 1LLU;
	uint64_t t59 = 62131902LLU;

	t59 = (x281^(x282/(x283&x284)));

	if (t59 != 9223372036871769618LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x285 = -6;
	int16_t x286 = 27;
	uint32_t x287 = 7U;
	static uint32_t x288 = 204017U;
	static volatile uint32_t t60 = 1006U;

	t60 = (x285^(x286/(x287&x288)));

	if (t60 != 4294967265U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x292 = INT16_MAX;
	volatile int64_t t61 = 1942639841743613LL;

	t61 = (x289^(x290/(x291&x292)));

	if (t61 != 1341565LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x293 = 10;
	int32_t x294 = -1;
	int8_t x295 = INT8_MIN;
	volatile int64_t x296 = INT64_MAX;

	t62 = (x293^(x294/(x295&x296)));

	if (t62 != 10LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x297 = -1;
	static int64_t x299 = INT64_MIN;
	volatile int32_t x300 = -120;
	volatile int64_t t63 = 32085LL;

	t63 = (x297^(x298/(x299&x300)));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x305 = INT32_MAX;
	uint8_t x306 = 1U;
	uint16_t x307 = 1408U;
	uint64_t x308 = UINT64_MAX;
	uint64_t t64 = 975572699LLU;

	t64 = (x305^(x306/(x307&x308)));

	if (t64 != 2147483647LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x310 = 420U;
	uint64_t x311 = UINT64_MAX;

	t65 = (x309^(x310/(x311&x312)));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x313 = -1LL;
	uint32_t x314 = 3560U;
	int16_t x315 = INT16_MIN;
	int8_t x316 = INT8_MIN;
	volatile int64_t t66 = -16741298117456546LL;

	t66 = (x313^(x314/(x315&x316)));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x318 = 0U;
	static int32_t x319 = 67107402;
	static uint32_t x320 = 2U;
	uint32_t t67 = 60589U;

	t67 = (x317^(x318/(x319&x320)));

	if (t67 != 4294967168U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x321 = 18LL;
	int32_t x322 = 422263;
	uint32_t x324 = UINT32_MAX;
	int64_t t68 = 1222817450156852201LL;

	t68 = (x321^(x322/(x323&x324)));

	if (t68 != 23LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x325 = -1LL;
	int16_t x326 = INT16_MIN;
	uint64_t x327 = UINT64_MAX;
	int16_t x328 = INT16_MIN;
	volatile uint64_t t69 = 2027509175056899LLU;

	t69 = (x325^(x326/(x327&x328)));

	if (t69 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x333 = 22814U;
	uint8_t x334 = 3U;
	volatile int32_t x335 = INT32_MIN;
	int16_t x336 = INT16_MIN;
	int32_t t70 = 123718538;

	t70 = (x333^(x334/(x335&x336)));

	if (t70 != 22814) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x341 = INT16_MIN;
	static uint32_t x342 = 0U;
	uint8_t x343 = UINT8_MAX;
	int8_t x344 = INT8_MIN;
	static uint32_t t71 = 1467465894U;

	t71 = (x341^(x342/(x343&x344)));

	if (t71 != 4294934528U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x345 = 351488906410352974LLU;
	volatile uint32_t x346 = 214U;
	uint64_t x347 = UINT64_MAX;
	volatile uint64_t t72 = 103988100LLU;

	t72 = (x345^(x346/(x347&x348)));

	if (t72 != 351488906410352974LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x349 = INT32_MIN;
	volatile int32_t x351 = -59008253;
	int16_t x352 = -2;
	volatile int32_t t73 = INT32_MIN;

	t73 = (x349^(x350/(x351&x352)));

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x353 = INT16_MAX;
	uint64_t x354 = 738202185008412LLU;
	int16_t x355 = INT16_MAX;
	uint64_t x356 = 7355221LLU;
	uint64_t t74 = 110LLU;

	t74 = (x353^(x354/(x355&x356)));

	if (t74 != 48601136459LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x357 = 0;
	int32_t x358 = INT32_MIN;
	uint64_t x359 = UINT64_MAX;
	uint64_t t75 = 3LLU;

	t75 = (x357^(x358/(x359&x360)));

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x365 = -4133012;
	int64_t x366 = INT64_MIN;
	static int16_t x367 = INT16_MIN;

	t76 = (x365^(x366/(x367&x368)));

	if (t76 != -1996277409408LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x369 = 914564084U;
	uint8_t x370 = UINT8_MAX;
	int16_t x372 = INT16_MAX;
	uint32_t t77 = 11041U;

	t77 = (x369^(x370/(x371&x372)));

	if (t77 != 914564084U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x374 = 3856813332659945124LLU;
	int64_t x375 = 7188248453LL;
	volatile int16_t x376 = INT16_MIN;
	static uint64_t t78 = 222704494404267581LLU;

	t78 = (x373^(x374/(x375&x376)));

	if (t78 != 9223372037391322335LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x377 = -1;
	int32_t x378 = INT32_MAX;
	int64_t x379 = -1LL;
	int8_t x380 = INT8_MIN;
	int64_t t79 = -128638744481425LL;

	t79 = (x377^(x378/(x379&x380)));

	if (t79 != 16777214LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x381 = INT32_MIN;
	int8_t x382 = -1;
	volatile int8_t x383 = INT8_MIN;
	volatile int32_t t80 = INT32_MIN;

	t80 = (x381^(x382/(x383&x384)));

	if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x385 = INT32_MIN;
	uint8_t x386 = 2U;
	volatile uint64_t x387 = 219668956103LLU;
	int16_t x388 = INT16_MAX;
	uint64_t t81 = 9LLU;

	t81 = (x385^(x386/(x387&x388)));

	if (t81 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x389 = 92U;
	int8_t x390 = -1;
	int16_t x391 = 10;
	static uint8_t x392 = 22U;
	volatile uint32_t t82 = 2U;

	t82 = (x389^(x390/(x391&x392)));

	if (t82 != 92U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x393 = INT32_MIN;
	volatile int8_t x394 = -1;
	static int32_t x395 = 111;
	int32_t x396 = -1;
	int32_t t83 = INT32_MIN;

	t83 = (x393^(x394/(x395&x396)));

	if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x397 = UINT32_MAX;
	uint16_t x398 = UINT16_MAX;
	int16_t x399 = -1;
	int32_t x400 = INT32_MAX;
	uint32_t t84 = UINT32_MAX;

	t84 = (x397^(x398/(x399&x400)));

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x401 = INT8_MIN;
	int16_t x402 = -1;
	int16_t x403 = INT16_MIN;
	int8_t x404 = INT8_MIN;
	int32_t t85 = -3952421;

	t85 = (x401^(x402/(x403&x404)));

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x405 = INT32_MIN;
	volatile int64_t x408 = -1LL;
	int64_t t86 = -26434483311880163LL;

	t86 = (x405^(x406/(x407&x408)));

	if (t86 != -2138256277LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x409 = 24U;
	int32_t x410 = INT32_MAX;
	uint64_t x411 = 79950271165886LLU;
	int32_t x412 = INT32_MIN;

	t87 = (x409^(x410/(x411&x412)));

	if (t87 != 24LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x413 = INT16_MIN;
	int16_t x414 = -1;
	uint64_t x415 = 436300182203LLU;
	static uint64_t t88 = 1LLU;

	t88 = (x413^(x414/(x415&x416)));

	if (t88 != 32767LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x417 = 28U;
	uint8_t x418 = 3U;
	static uint64_t x420 = 50269260866995581LLU;
	volatile uint64_t t89 = 13037820LLU;

	t89 = (x417^(x418/(x419&x420)));

	if (t89 != 28LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x421 = 693168LL;
	static int16_t x422 = 14220;
	uint16_t x423 = 27U;
	int32_t x424 = 34;
	int64_t t90 = 277516206588168501LL;

	t90 = (x421^(x422/(x423&x424)));

	if (t90 != 690294LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x429 = INT16_MAX;
	uint16_t x430 = UINT16_MAX;
	uint8_t x431 = 4U;
	int16_t x432 = INT16_MAX;
	volatile int32_t t91 = 6;

	t91 = (x429^(x430/(x431&x432)));

	if (t91 != 16384) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x437 = UINT16_MAX;
	static int64_t x438 = -1LL;
	int16_t x439 = INT16_MAX;
	int8_t x440 = INT8_MIN;
	volatile int64_t t92 = -4476768941301902321LL;

	t92 = (x437^(x438/(x439&x440)));

	if (t92 != 65535LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x445 = 7278999691740LLU;
	uint16_t x446 = 11313U;
	int16_t x448 = -1;
	static uint64_t t93 = 3868588345293LLU;

	t93 = (x445^(x446/(x447&x448)));

	if (t93 != 7278999691700LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x449 = 75U;
	int32_t x450 = INT32_MAX;
	uint32_t x451 = UINT32_MAX;
	int16_t x452 = INT16_MIN;
	volatile uint32_t t94 = 4901277U;

	t94 = (x449^(x450/(x451&x452)));

	if (t94 != 75U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x457 = INT32_MIN;
	int64_t x458 = INT64_MIN;
	uint64_t x459 = UINT64_MAX;
	static volatile int32_t x460 = INT32_MAX;
	uint64_t t95 = 449098656638599LLU;

	t95 = (x457^(x458/(x459&x460)));

	if (t95 != 18446744067267100674LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x470 = UINT64_MAX;
	int8_t x471 = INT8_MAX;
	volatile int8_t x472 = -21;
	static volatile uint64_t t96 = 3099985LLU;

	t96 = (x469^(x470/(x471&x472)));

	if (t96 != 18274344596385142764LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x477 = -1;
	static volatile uint16_t x479 = 12715U;
	int64_t x480 = INT64_MAX;
	int64_t t97 = -20686243LL;

	t97 = (x477^(x478/(x479&x480)));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x482 = 29640LL;
	int16_t x484 = INT16_MAX;
	volatile int64_t t98 = 641768795734477555LL;

	t98 = (x481^(x482/(x483&x484)));

	if (t98 != 1063726LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x485 = 273735720LLU;
	int8_t x486 = INT8_MIN;

	t99 = (x485^(x486/(x487&x488)));

	if (t99 != 273735720LLU) { NG(); } else { ; }
	
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

