#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x6 = 4017188183LLU;
volatile int8_t x28 = INT8_MIN;
int64_t x34 = 2761LL;
static volatile int64_t t7 = 86LL;
uint32_t t8 = 418U;
uint16_t x41 = 1598U;
int16_t x52 = INT16_MIN;
int32_t x55 = INT32_MIN;
uint64_t x62 = 78386273LLU;
volatile uint64_t x63 = UINT64_MAX;
uint32_t x68 = UINT32_MAX;
static int8_t x70 = INT8_MIN;
int8_t x76 = INT8_MIN;
int8_t x78 = -1;
int32_t x80 = -1;
int32_t x85 = INT32_MIN;
volatile uint32_t t19 = 382013U;
volatile uint64_t t20 = 1587801319LLU;
int8_t x102 = INT8_MIN;
int16_t x104 = INT16_MIN;
static int16_t x107 = INT16_MIN;
volatile int16_t x110 = INT16_MIN;
int64_t x112 = -568LL;
int64_t t26 = -597055402879871LL;
int8_t x118 = INT8_MIN;
static uint64_t t29 = 8292LLU;
static int8_t x132 = 0;
int8_t x133 = -3;
int32_t x141 = INT32_MAX;
static int64_t x145 = -1LL;
uint16_t x147 = 1852U;
int64_t t34 = -29LL;
volatile uint64_t t36 = UINT64_MAX;
static volatile int8_t x159 = -3;
volatile uint64_t x165 = 85797022621436513LLU;
volatile int32_t x172 = INT32_MIN;
uint8_t x173 = 15U;
volatile int8_t x174 = 3;
int64_t x175 = 18LL;
volatile uint16_t x178 = UINT16_MAX;
volatile int16_t x183 = -1;
uint64_t x184 = 1198729729551LLU;
int16_t x187 = 6754;
int64_t x195 = 12LL;
static volatile int32_t x198 = -1;
int64_t x199 = INT64_MIN;
volatile int64_t t49 = -650994LL;
volatile int16_t x213 = INT16_MIN;
static int8_t x217 = -1;
uint16_t x230 = 2971U;
static int32_t t55 = 552209920;
volatile uint32_t t56 = 177300327U;
uint64_t t57 = 82LLU;
int32_t x241 = INT32_MAX;
int32_t x242 = -122198243;
int8_t x247 = INT8_MIN;
volatile int32_t x261 = INT32_MIN;
volatile uint64_t x265 = 0LLU;
int64_t x274 = -1LL;
int32_t x276 = INT32_MIN;
static uint32_t x277 = 499008U;
int8_t x281 = INT8_MIN;
uint8_t x284 = 0U;
int8_t x286 = INT8_MIN;
uint16_t x292 = 3117U;
int8_t x293 = INT8_MAX;
volatile int8_t x295 = INT8_MIN;
volatile int32_t x299 = -1;
int32_t x305 = INT32_MIN;
volatile uint32_t t72 = 68448U;
static int32_t x312 = INT32_MIN;
int32_t x316 = -1;
uint64_t x318 = 2002542LLU;
static volatile int32_t x319 = -1;
static int16_t x320 = -2440;
static int8_t x324 = -1;
static int32_t x327 = INT32_MIN;
int64_t t77 = -387014LL;
volatile int16_t x329 = INT16_MAX;
volatile uint32_t x332 = UINT32_MAX;
uint8_t x334 = 28U;
volatile int8_t x338 = INT8_MIN;
int8_t x341 = -1;
int64_t x343 = INT64_MIN;
int8_t x351 = 3;
int64_t t84 = 171722792911098571LL;
uint32_t x357 = 27171U;
int16_t x360 = 6874;
int16_t x363 = INT16_MIN;
uint64_t t86 = 965188348754099009LLU;
static int16_t x366 = INT16_MIN;
static volatile int64_t x368 = 62171113555619603LL;
int16_t x372 = -142;
static uint64_t x377 = 795LLU;
uint64_t t90 = 1040679497171119LLU;
int64_t t91 = 505LL;
volatile uint32_t x408 = 55774U;
int32_t x409 = 0;
int8_t x417 = INT8_MIN;


void f0(void) {
	int32_t x5 = -1;
	int64_t x7 = -1LL;
	int64_t x8 = -3148LL;
	volatile uint64_t t0 = 94LLU;

	t0 = (x5&((x6%x7)+x8));

	if (t0 != 4017185035LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = 0U;
	int16_t x10 = INT16_MIN;
	volatile int16_t x11 = 20;
	int16_t x12 = INT16_MIN;
	static volatile int32_t t1 = 836;

	t1 = (x9&((x10%x11)+x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = -1;
	int64_t x14 = -1LL;
	static int16_t x15 = -1;
	static int32_t x16 = INT32_MAX;
	int64_t t2 = -11522299LL;

	t2 = (x13&((x14%x15)+x16));

	if (t2 != 2147483647LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = 0;
	uint32_t x18 = 20579U;
	uint8_t x19 = UINT8_MAX;
	volatile int16_t x20 = 6;
	uint32_t t3 = 380752U;

	t3 = (x17&((x18%x19)+x20));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 0U;
	static uint64_t x22 = 4LLU;
	int16_t x23 = -62;
	volatile uint32_t x24 = 0U;
	uint64_t t4 = 1074438612839LLU;

	t4 = (x21&((x22%x23)+x24));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x25 = 2439242297LLU;
	int64_t x26 = INT64_MIN;
	volatile int64_t x27 = INT64_MIN;
	volatile uint64_t t5 = 8068895664785682920LLU;

	t5 = (x25&((x26%x27)+x28));

	if (t5 != 2439242240LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x29 = 60U;
	int64_t x30 = INT64_MIN;
	int16_t x31 = -1;
	volatile int64_t x32 = INT64_MIN;
	static volatile int64_t t6 = 56783279665667LL;

	t6 = (x29&((x30%x31)+x32));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = UINT8_MAX;
	int32_t x35 = -1;
	volatile int64_t x36 = INT64_MIN;

	t7 = (x33&((x34%x35)+x36));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = -53;
	static uint8_t x38 = UINT8_MAX;
	int8_t x39 = INT8_MIN;
	uint32_t x40 = 315285U;

	t8 = (x37&((x38%x39)+x40));

	if (t8 != 315392U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x42 = INT64_MIN;
	static volatile uint16_t x43 = 10U;
	volatile int64_t x44 = -3893543581LL;
	static volatile int64_t t9 = 130LL;

	t9 = (x41&((x42%x43)+x44));

	if (t9 != 1050LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = INT32_MIN;
	int32_t x50 = INT32_MIN;
	volatile uint8_t x51 = UINT8_MAX;
	volatile int32_t t10 = INT32_MIN;

	t10 = (x49&((x50%x51)+x52));

	if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = -1;
	uint16_t x54 = UINT16_MAX;
	static uint8_t x56 = 0U;
	volatile int32_t t11 = 2168;

	t11 = (x53&((x54%x55)+x56));

	if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x57 = 210U;
	uint16_t x58 = 198U;
	static int64_t x59 = -1LL;
	volatile uint32_t x60 = 2562278U;
	int64_t t12 = 52LL;

	t12 = (x57&((x58%x59)+x60));

	if (t12 != 194LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = -7921089LL;
	int8_t x64 = -1;
	uint64_t t13 = 7053450937LLU;

	t13 = (x61&((x62%x63)+x64));

	if (t13 != 75759648LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = 0;
	static uint32_t x66 = 4109U;
	uint8_t x67 = 58U;
	uint32_t t14 = 3963U;

	t14 = (x65&((x66%x67)+x68));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = 9;
	int8_t x71 = INT8_MAX;
	static uint32_t x72 = 855U;
	volatile uint32_t t15 = 0U;

	t15 = (x69&((x70%x71)+x72));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = INT16_MAX;
	int16_t x74 = -206;
	int16_t x75 = INT16_MIN;
	int32_t t16 = -21174725;

	t16 = (x73&((x74%x75)+x76));

	if (t16 != 32434) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = 158;
	uint8_t x79 = UINT8_MAX;
	volatile int32_t t17 = 8184968;

	t17 = (x77&((x78%x79)+x80));

	if (t17 != 158) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x81 = 25U;
	uint32_t x82 = 463U;
	int64_t x83 = -1LL;
	int8_t x84 = -1;
	int64_t t18 = -61200510652008289LL;

	t18 = (x81&((x82%x83)+x84));

	if (t18 != 25LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x86 = INT8_MAX;
	volatile uint32_t x87 = 281U;
	volatile int8_t x88 = -1;

	t19 = (x85&((x86%x87)+x88));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x89 = -1;
	int16_t x90 = INT16_MIN;
	int32_t x91 = 1831409;
	volatile uint64_t x92 = 226519556221951751LLU;

	t20 = (x89&((x90%x91)+x92));

	if (t20 != 226519556221918983LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x93 = -1;
	static uint8_t x94 = UINT8_MAX;
	int8_t x95 = INT8_MIN;
	int64_t x96 = -1LL;
	volatile int64_t t21 = -64956079LL;

	t21 = (x93&((x94%x95)+x96));

	if (t21 != 126LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x97 = 8U;
	int64_t x98 = -1LL;
	volatile int32_t x99 = INT32_MIN;
	static int32_t x100 = -1;
	static int64_t t22 = 3054107LL;

	t22 = (x97&((x98%x99)+x100));

	if (t22 != 8LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x101 = INT32_MIN;
	int16_t x103 = -1;
	int32_t t23 = INT32_MIN;

	t23 = (x101&((x102%x103)+x104));

	if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = INT64_MIN;
	int32_t x106 = -503826;
	static int16_t x108 = -1;
	int64_t t24 = INT64_MIN;

	t24 = (x105&((x106%x107)+x108));

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x109 = 755;
	int32_t x111 = INT32_MAX;
	int64_t t25 = 0LL;

	t25 = (x109&((x110%x111)+x112));

	if (t25 != 192LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x113 = -2;
	volatile uint32_t x114 = 8965U;
	int64_t x115 = INT64_MIN;
	volatile int64_t x116 = -115347507LL;

	t26 = (x113&((x114%x115)+x116));

	if (t26 != -115338542LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x117 = 106490209U;
	static uint64_t x119 = 106044019283LLU;
	uint32_t x120 = 1729U;
	uint64_t t27 = 214214445LLU;

	t27 = (x117&((x118%x119)+x120));

	if (t27 != 105933153LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x121 = INT32_MIN;
	static volatile int8_t x122 = INT8_MIN;
	uint16_t x123 = UINT16_MAX;
	int16_t x124 = 1164;
	int32_t t28 = -16895;

	t28 = (x121&((x122%x123)+x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = 52;
	uint64_t x126 = 32114426715LLU;
	static int16_t x127 = -1725;
	static int8_t x128 = INT8_MAX;

	t29 = (x125&((x126%x127)+x128));

	if (t29 != 16LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x129 = 4U;
	int8_t x130 = INT8_MIN;
	int32_t x131 = -116542373;
	uint32_t t30 = 466767784U;

	t30 = (x129&((x130%x131)+x132));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x134 = INT8_MIN;
	static uint8_t x135 = 5U;
	int64_t x136 = INT64_MAX;
	volatile int64_t t31 = -3158969260518443377LL;

	t31 = (x133&((x134%x135)+x136));

	if (t31 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x137 = INT32_MAX;
	int16_t x138 = INT16_MAX;
	int16_t x139 = 8709;
	static int16_t x140 = INT16_MIN;
	static int32_t t32 = -226;

	t32 = (x137&((x138%x139)+x140));

	if (t32 != 2147457520) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x142 = 4130U;
	volatile int32_t x143 = INT32_MIN;
	volatile int64_t x144 = -1LL;
	static volatile int64_t t33 = 525783792839715920LL;

	t33 = (x141&((x142%x143)+x144));

	if (t33 != 4129LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x146 = INT32_MIN;
	int8_t x148 = INT8_MAX;

	t34 = (x145&((x146%x147)+x148));

	if (t34 != -625LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x149 = INT32_MIN;
	uint64_t x150 = UINT64_MAX;
	int64_t x151 = INT64_MIN;
	int8_t x152 = 0;
	volatile uint64_t t35 = 104058LLU;

	t35 = (x149&((x150%x151)+x152));

	if (t35 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = -1;
	int32_t x154 = -1;
	int16_t x155 = 1;
	static volatile uint64_t x156 = UINT64_MAX;

	t36 = (x153&((x154%x155)+x156));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x157 = -1;
	int64_t x158 = -15131992187LL;
	int32_t x160 = -379521259;
	volatile int64_t t37 = -227LL;

	t37 = (x157&((x158%x159)+x160));

	if (t37 != -379521261LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x161 = INT16_MAX;
	uint8_t x162 = UINT8_MAX;
	int64_t x163 = INT64_MIN;
	uint16_t x164 = UINT16_MAX;
	int64_t t38 = -11633880379LL;

	t38 = (x161&((x162%x163)+x164));

	if (t38 != 254LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x166 = 150;
	int32_t x167 = -1;
	uint64_t x168 = UINT64_MAX;
	volatile uint64_t t39 = 1995302LLU;

	t39 = (x165&((x166%x167)+x168));

	if (t39 != 85797022621436513LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x169 = UINT8_MAX;
	volatile int8_t x170 = INT8_MIN;
	uint32_t x171 = 44U;
	static volatile uint32_t t40 = 1682U;

	t40 = (x169&((x170%x171)+x172));

	if (t40 != 8U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x176 = -124;
	int64_t t41 = -385932912LL;

	t41 = (x173&((x174%x175)+x176));

	if (t41 != 7LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x177 = UINT16_MAX;
	uint8_t x179 = 48U;
	int32_t x180 = INT32_MIN;
	int32_t t42 = -874;

	t42 = (x177&((x178%x179)+x180));

	if (t42 != 15) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x181 = INT16_MIN;
	uint64_t x182 = UINT64_MAX;
	volatile uint64_t t43 = 8016993486273839514LLU;

	t43 = (x181&((x182%x183)+x184));

	if (t43 != 1198729723904LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x185 = UINT32_MAX;
	int16_t x186 = -3;
	int16_t x188 = -135;
	volatile uint32_t t44 = 0U;

	t44 = (x185&((x186%x187)+x188));

	if (t44 != 4294967158U) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x189 = 506LL;
	static int16_t x190 = INT16_MAX;
	static int64_t x191 = -1LL;
	int8_t x192 = -27;
	int64_t t45 = -44348940064LL;

	t45 = (x189&((x190%x191)+x192));

	if (t45 != 480LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x193 = 8578347641080826LLU;
	int8_t x194 = INT8_MAX;
	uint8_t x196 = UINT8_MAX;
	uint64_t t46 = 35591457257145167LLU;

	t46 = (x193&((x194%x195)+x196));

	if (t46 != 258LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x197 = -1LL;
	uint16_t x200 = UINT16_MAX;
	volatile int64_t t47 = 108LL;

	t47 = (x197&((x198%x199)+x200));

	if (t47 != 65534LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x201 = 93U;
	int32_t x202 = INT32_MIN;
	int32_t x203 = INT32_MIN;
	static uint16_t x204 = 0U;
	volatile int32_t t48 = -8028818;

	t48 = (x201&((x202%x203)+x204));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x205 = 15LL;
	uint8_t x206 = 18U;
	int16_t x207 = -30;
	int64_t x208 = -1LL;

	t49 = (x205&((x206%x207)+x208));

	if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x209 = INT32_MAX;
	int8_t x210 = -1;
	uint64_t x211 = 150982LLU;
	int16_t x212 = -1;
	uint64_t t50 = 23LLU;

	t50 = (x209&((x210%x211)+x212));

	if (t50 != 27132LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x214 = -1;
	int32_t x215 = INT32_MIN;
	uint16_t x216 = UINT16_MAX;
	static volatile int32_t t51 = 1;

	t51 = (x213&((x214%x215)+x216));

	if (t51 != 32768) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x218 = UINT32_MAX;
	int32_t x219 = INT32_MIN;
	static uint64_t x220 = 105909323253951672LLU;
	static volatile uint64_t t52 = 588762LLU;

	t52 = (x217&((x218%x219)+x220));

	if (t52 != 105909325401435319LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x221 = 21;
	int64_t x222 = INT64_MIN;
	volatile int32_t x223 = -1784;
	int8_t x224 = INT8_MAX;
	volatile int64_t t53 = 192LL;

	t53 = (x221&((x222%x223)+x224));

	if (t53 != 21LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x225 = UINT8_MAX;
	int64_t x226 = INT64_MAX;
	int16_t x227 = INT16_MIN;
	static int64_t x228 = 756411595890LL;
	int64_t t54 = 382LL;

	t54 = (x225&((x226%x227)+x228));

	if (t54 != 113LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x229 = 2U;
	int8_t x231 = -1;
	uint16_t x232 = 842U;

	t55 = (x229&((x230%x231)+x232));

	if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x233 = 6U;
	int32_t x234 = 11;
	volatile int32_t x235 = -15134;
	volatile uint32_t x236 = UINT32_MAX;

	t56 = (x233&((x234%x235)+x236));

	if (t56 != 2U) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x237 = 839920549336970LLU;
	uint32_t x238 = 12862U;
	static int64_t x239 = INT64_MAX;
	int16_t x240 = INT16_MIN;

	t57 = (x237&((x238%x239)+x240));

	if (t57 != 839920549335562LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x243 = -29089413LL;
	uint8_t x244 = UINT8_MAX;
	int64_t t58 = 540197799562115653LL;

	t58 = (x241&((x242%x243)+x244));

	if (t58 != 2141643312LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x245 = UINT16_MAX;
	static int32_t x246 = INT32_MIN;
	uint32_t x248 = 176U;
	volatile uint32_t t59 = 23865012U;

	t59 = (x245&((x246%x247)+x248));

	if (t59 != 176U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x249 = 0U;
	static uint32_t x250 = 4875346U;
	volatile int64_t x251 = -1LL;
	uint16_t x252 = 2985U;
	volatile int64_t t60 = 232955999742130863LL;

	t60 = (x249&((x250%x251)+x252));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x257 = -12;
	uint8_t x258 = 1U;
	static int16_t x259 = -1;
	int8_t x260 = INT8_MIN;
	static volatile int32_t t61 = 625;

	t61 = (x257&((x258%x259)+x260));

	if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x262 = -1;
	volatile int8_t x263 = INT8_MAX;
	volatile int16_t x264 = -1;
	int32_t t62 = INT32_MIN;

	t62 = (x261&((x262%x263)+x264));

	if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x266 = -1;
	int32_t x267 = 3125635;
	int64_t x268 = -1LL;
	volatile uint64_t t63 = 1144917LLU;

	t63 = (x265&((x266%x267)+x268));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x273 = INT64_MIN;
	uint32_t x275 = 373U;
	int64_t t64 = INT64_MIN;

	t64 = (x273&((x274%x275)+x276));

	if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x278 = -1LL;
	int32_t x279 = INT32_MAX;
	int16_t x280 = INT16_MAX;
	static int64_t t65 = 7985LL;

	t65 = (x277&((x278%x279)+x280));

	if (t65 != 7488LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x282 = 16U;
	int16_t x283 = INT16_MIN;
	volatile int32_t t66 = 148;

	t66 = (x281&((x282%x283)+x284));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x285 = 0U;
	int32_t x287 = -21;
	uint64_t x288 = 736878LLU;
	uint64_t t67 = 26LLU;

	t67 = (x285&((x286%x287)+x288));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x289 = INT8_MAX;
	int8_t x290 = INT8_MIN;
	uint16_t x291 = 5286U;
	volatile int32_t t68 = -132712589;

	t68 = (x289&((x290%x291)+x292));

	if (t68 != 45) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x294 = INT32_MIN;
	int32_t x296 = -18862266;
	volatile int32_t t69 = 0;

	t69 = (x293&((x294%x295)+x296));

	if (t69 != 70) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x297 = 5;
	int16_t x298 = -650;
	int16_t x300 = -1;
	static int32_t t70 = 9;

	t70 = (x297&((x298%x299)+x300));

	if (t70 != 5) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x301 = INT16_MIN;
	uint32_t x302 = UINT32_MAX;
	int32_t x303 = 2;
	int8_t x304 = 1;
	volatile uint32_t t71 = 3627439U;

	t71 = (x301&((x302%x303)+x304));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x306 = INT32_MIN;
	int32_t x307 = 59549;
	uint32_t x308 = UINT32_MAX;

	t72 = (x305&((x306%x307)+x308));

	if (t72 != 2147483648U) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x309 = 917586578308LLU;
	int8_t x310 = -6;
	int64_t x311 = INT64_MAX;
	static volatile uint64_t t73 = 1756884994116LLU;

	t73 = (x309&((x310%x311)+x312));

	if (t73 != 915439094656LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x313 = -6;
	int8_t x314 = -1;
	volatile int32_t x315 = 38;
	volatile int32_t t74 = 1;

	t74 = (x313&((x314%x315)+x316));

	if (t74 != -6) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x317 = -164246LL;
	uint64_t t75 = 5979734LLU;

	t75 = (x317&((x318%x319)+x320));

	if (t75 != 1836130LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x321 = 26U;
	volatile int8_t x322 = -1;
	static int16_t x323 = INT16_MIN;
	uint32_t t76 = 214092U;

	t76 = (x321&((x322%x323)+x324));

	if (t76 != 26U) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x325 = UINT16_MAX;
	int64_t x326 = INT64_MIN;
	volatile int16_t x328 = 1;

	t77 = (x325&((x326%x327)+x328));

	if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x330 = UINT16_MAX;
	int32_t x331 = INT32_MIN;
	static uint32_t t78 = 152U;

	t78 = (x329&((x330%x331)+x332));

	if (t78 != 32766U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x333 = UINT32_MAX;
	static uint64_t x335 = UINT64_MAX;
	static volatile int16_t x336 = -1;
	uint64_t t79 = 121385LLU;

	t79 = (x333&((x334%x335)+x336));

	if (t79 != 27LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x337 = INT64_MAX;
	volatile uint32_t x339 = 218655U;
	int32_t x340 = -1;
	volatile int64_t t80 = 3315093667896LL;

	t80 = (x337&((x338%x339)+x340));

	if (t80 != 145657LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x342 = 24284LLU;
	int32_t x344 = 2;
	volatile uint64_t t81 = 30440LLU;

	t81 = (x341&((x342%x343)+x344));

	if (t81 != 24286LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x345 = -1;
	int8_t x346 = 14;
	uint16_t x347 = 198U;
	int16_t x348 = INT16_MIN;
	volatile int32_t t82 = -1;

	t82 = (x345&((x346%x347)+x348));

	if (t82 != -32754) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x349 = 0U;
	int16_t x350 = 3;
	volatile uint64_t x352 = 2955887LLU;
	uint64_t t83 = 1909477695LLU;

	t83 = (x349&((x350%x351)+x352));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x353 = -1;
	static volatile uint16_t x354 = 1009U;
	int32_t x355 = INT32_MIN;
	int64_t x356 = INT64_MIN;

	t84 = (x353&((x354%x355)+x356));

	if (t84 != -9223372036854774799LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x358 = INT64_MAX;
	int64_t x359 = 7658203797688LL;
	volatile int64_t t85 = -56747082193973028LL;

	t85 = (x357&((x358%x359)+x360));

	if (t85 != 33LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x361 = INT32_MIN;
	uint64_t x362 = UINT64_MAX;
	static uint8_t x364 = 70U;

	t86 = (x361&((x362%x363)+x364));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x365 = 1U;
	uint64_t x367 = 1575LLU;
	static volatile uint64_t t87 = 3124550249LLU;

	t87 = (x365&((x366%x367)+x368));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x369 = -1;
	volatile uint32_t x370 = UINT32_MAX;
	int16_t x371 = INT16_MAX;
	volatile uint32_t t88 = 104U;

	t88 = (x369&((x370%x371)+x372));

	if (t88 != 4294967157U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x373 = -10964574417923LL;
	volatile int16_t x374 = -451;
	static uint32_t x375 = UINT32_MAX;
	int16_t x376 = INT16_MIN;
	volatile int64_t t89 = 12080LL;

	t89 = (x373&((x374%x375)+x376));

	if (t89 != 477055549LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x378 = UINT8_MAX;
	int8_t x379 = -1;
	volatile int64_t x380 = INT64_MIN;

	t90 = (x377&((x378%x379)+x380));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x381 = -1;
	static int8_t x382 = INT8_MIN;
	int64_t x383 = -1LL;
	int32_t x384 = INT32_MIN;

	t91 = (x381&((x382%x383)+x384));

	if (t91 != -2147483648LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x385 = -1;
	uint16_t x386 = UINT16_MAX;
	int64_t x387 = INT64_MIN;
	uint32_t x388 = UINT32_MAX;
	static int64_t t92 = 3631748LL;

	t92 = (x385&((x386%x387)+x388));

	if (t92 != 4295032830LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x389 = UINT8_MAX;
	int16_t x390 = INT16_MIN;
	int8_t x391 = INT8_MIN;
	int32_t x392 = 1735;
	static volatile int32_t t93 = 727822;

	t93 = (x389&((x390%x391)+x392));

	if (t93 != 199) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x393 = -1;
	int8_t x394 = -1;
	int16_t x395 = -4832;
	static int8_t x396 = 0;
	static int32_t t94 = -255;

	t94 = (x393&((x394%x395)+x396));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x397 = UINT8_MAX;
	uint8_t x398 = UINT8_MAX;
	uint64_t x399 = UINT64_MAX;
	static int64_t x400 = INT64_MIN;
	uint64_t t95 = 362320748730LLU;

	t95 = (x397&((x398%x399)+x400));

	if (t95 != 255LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x405 = UINT8_MAX;
	static int64_t x406 = INT64_MIN;
	int32_t x407 = INT32_MIN;
	volatile int64_t t96 = 492698855111762LL;

	t96 = (x405&((x406%x407)+x408));

	if (t96 != 222LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x410 = 8306365789344300LLU;
	static volatile int64_t x411 = -1LL;
	volatile int32_t x412 = -112229040;
	uint64_t t97 = 1122661553764403LLU;

	t97 = (x409&((x410%x411)+x412));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x413 = 1698U;
	uint32_t x414 = 1221U;
	int8_t x415 = INT8_MIN;
	int32_t x416 = -1;
	uint32_t t98 = 191183001U;

	t98 = (x413&((x414%x415)+x416));

	if (t98 != 1152U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x418 = INT64_MIN;
	static volatile int16_t x419 = INT16_MIN;
	int8_t x420 = -1;
	int64_t t99 = -129LL;

	t99 = (x417&((x418%x419)+x420));

	if (t99 != -128LL) { NG(); } else { ; }
	
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

