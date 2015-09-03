#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x9 = 2U;
static volatile uint8_t x13 = 3U;
int64_t x14 = -204295764251006190LL;
int16_t x15 = -7;
int64_t t3 = -4747414739186LL;
volatile int32_t x20 = 3;
int64_t t4 = 161120740325LL;
int8_t x22 = INT8_MIN;
uint32_t x27 = UINT32_MAX;
volatile int64_t t6 = -6696LL;
int8_t x33 = -58;
int32_t x42 = INT32_MAX;
int64_t x53 = INT64_MIN;
static int64_t x55 = INT64_MIN;
volatile int32_t x56 = 918;
static uint64_t t13 = 42879375020683544LLU;
int32_t x60 = 956447;
volatile uint64_t x66 = UINT64_MAX;
int64_t x67 = -1LL;
volatile int8_t x73 = INT8_MAX;
uint8_t x75 = UINT8_MAX;
int16_t x78 = -15;
volatile uint8_t x81 = 82U;
uint32_t x82 = 16025362U;
int64_t x83 = INT64_MIN;
static int32_t x84 = INT32_MIN;
int8_t x86 = INT8_MAX;
uint64_t x97 = UINT64_MAX;
volatile int32_t x100 = 436525240;
int32_t x103 = INT32_MAX;
int32_t x108 = INT32_MIN;
int64_t t26 = 7LL;
uint32_t t27 = 953U;
int32_t t28 = 205;
uint32_t x119 = 7996290U;
int32_t x121 = INT32_MAX;
volatile int8_t x122 = INT8_MIN;
int32_t t30 = 65;
int32_t x125 = -976;
int8_t x128 = INT8_MIN;
uint32_t x137 = 5028406U;
int8_t x144 = -1;
volatile int32_t x149 = INT32_MIN;
int16_t x150 = INT16_MAX;
int16_t x151 = INT16_MIN;
uint16_t x154 = 2U;
int32_t x155 = -728102;
volatile uint32_t t36 = 2784U;
int8_t x157 = 0;
int64_t x159 = -1LL;
static int64_t x161 = INT64_MIN;
static int32_t x162 = -1;
int8_t x176 = -1;
int64_t x178 = INT64_MIN;
int64_t t42 = 3243607LL;
volatile int64_t x182 = -1LL;
int64_t x184 = INT64_MIN;
static int16_t x191 = INT16_MIN;
static int16_t x196 = INT16_MIN;
uint64_t t46 = 5320420LLU;
uint64_t x197 = UINT64_MAX;
uint8_t x198 = 3U;
static uint32_t x205 = 14U;
int16_t x210 = INT16_MIN;
uint32_t t50 = 3U;
int32_t x213 = -431;
volatile uint8_t x215 = UINT8_MAX;
uint32_t x216 = 0U;
static uint32_t t51 = 7U;
int64_t x218 = -1LL;
int8_t x223 = -1;
int64_t x224 = INT64_MIN;
volatile int16_t x229 = INT16_MAX;
int8_t x230 = INT8_MIN;
uint64_t x234 = 441673854LLU;
int32_t x241 = INT32_MIN;
int64_t x251 = INT64_MIN;
volatile int64_t t60 = 16929173991550277LL;
int16_t x262 = INT16_MAX;
int32_t t61 = 1304;
int64_t x266 = INT64_MIN;
uint64_t t62 = 3LLU;
volatile uint16_t x272 = UINT16_MAX;
uint32_t t63 = 3U;
volatile int16_t x279 = INT16_MIN;
static volatile uint64_t t65 = 172137290LLU;
int8_t x285 = INT8_MAX;
uint16_t x286 = UINT16_MAX;
int64_t x309 = INT64_MIN;
uint16_t x319 = UINT16_MAX;
static int8_t x330 = INT8_MAX;
int64_t x333 = INT64_MIN;
volatile int32_t x335 = -1;
int8_t x344 = INT8_MIN;
static volatile int32_t x345 = -241;
uint64_t x347 = 94214422453710917LLU;
volatile uint64_t t81 = 25972324826939362LLU;
volatile int16_t x349 = -1;
int64_t t83 = -2821425900815068LL;
uint64_t x372 = 787LLU;
static int8_t x388 = INT8_MIN;
int32_t x395 = -1;
volatile uint32_t t91 = UINT32_MAX;
volatile int64_t t92 = 125LL;
volatile int64_t x401 = 1LL;
uint16_t x404 = 83U;
int64_t t93 = 5621818090963LL;
uint64_t x406 = UINT64_MAX;
volatile uint8_t x412 = 6U;
uint8_t x413 = 8U;
int32_t x428 = INT32_MIN;
int8_t x431 = INT8_MAX;
uint64_t t99 = 1LLU;


void f0(void) {
	static volatile int32_t x1 = -245366;
	int16_t x2 = INT16_MIN;
	int8_t x3 = -54;
	volatile uint32_t x4 = 3057263U;
	uint32_t t0 = 6781800U;

	t0 = (x1-(x2^(x3|x4)));

	if (t0 != 4294689179U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	volatile uint64_t x6 = UINT64_MAX;
	uint16_t x7 = 590U;
	static volatile int64_t x8 = -245010974711701812LL;
	uint64_t t1 = 631291029997LLU;

	t1 = (x5-(x6^(x7|x8)));

	if (t1 != 18201733096850366159LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x10 = UINT64_MAX;
	uint64_t x11 = 6522830791LLU;
	volatile int8_t x12 = -1;
	uint64_t t2 = 0LLU;

	t2 = (x9-(x10^(x11|x12)));

	if (t2 != 2LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x16 = INT16_MIN;

	t3 = (x13-(x14^(x15|x16)));

	if (t3 != -204295764251006184LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	static int64_t x18 = INT64_MAX;
	int16_t x19 = INT16_MIN;

	t4 = (x17-(x18^(x19|x20)));

	if (t4 != -32764LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	int64_t x23 = INT64_MIN;
	int16_t x24 = -1;
	static volatile int64_t t5 = 64142425768151LL;

	t5 = (x21-(x22^(x23|x24)));

	if (t5 != -128LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = 7724008974494LL;
	uint8_t x26 = 7U;
	int8_t x28 = -1;

	t6 = (x25-(x26^(x27|x28)));

	if (t6 != 7719714007206LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -4656685;
	static uint16_t x30 = 3U;
	int32_t x31 = INT32_MAX;
	static int64_t x32 = INT64_MIN;
	int64_t t7 = -475746708272943494LL;

	t7 = (x29-(x30^(x31|x32)));

	if (t7 != 9223372034702635479LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = INT64_MIN;
	volatile int32_t x35 = -1;
	volatile uint32_t x36 = UINT32_MAX;
	volatile int64_t t8 = 160000016590LL;

	t8 = (x33-(x34^(x35|x36)));

	if (t8 != 9223372032559808455LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x37 = 0U;
	int8_t x38 = INT8_MAX;
	volatile int32_t x39 = INT32_MIN;
	static uint32_t x40 = UINT32_MAX;
	uint32_t t9 = 0U;

	t9 = (x37-(x38^(x39|x40)));

	if (t9 != 128U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	static int8_t x43 = 0;
	uint32_t x44 = 183256835U;
	volatile uint32_t t10 = 2U;

	t10 = (x41-(x42^(x43|x44)));

	if (t10 != 2330740483U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 410293U;
	int8_t x46 = -1;
	uint32_t x47 = 14744U;
	int16_t x48 = -142;
	uint32_t t11 = 770213933U;

	t11 = (x45-(x46^(x47|x48)));

	if (t11 != 410288U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = 117;
	int64_t x50 = -722930056246LL;
	uint16_t x51 = UINT16_MAX;
	int8_t x52 = INT8_MIN;
	volatile int64_t t12 = -7565395316LL;

	t12 = (x49-(x50^(x51|x52)));

	if (t12 != -722930056128LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x54 = 59837112944LLU;

	t13 = (x53-(x54^(x55|x56)));

	if (t13 != 18446744013872438810LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	int16_t x58 = -1;
	volatile uint64_t x59 = UINT64_MAX;
	uint64_t t14 = 3927263203069LLU;

	t14 = (x57-(x58^(x59|x60)));

	if (t14 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x61 = -1;
	int16_t x62 = 7702;
	volatile uint32_t x63 = 953746U;
	uint64_t x64 = UINT64_MAX;
	uint64_t t15 = 246426LLU;

	t15 = (x61-(x62^(x63|x64)));

	if (t15 != 7702LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = -228605643397796LL;
	volatile uint16_t x68 = UINT16_MAX;
	uint64_t t16 = 293697734925LLU;

	t16 = (x65-(x66^(x67|x68)));

	if (t16 != 18446515468066153820LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	int32_t x70 = -5025649;
	int64_t x71 = INT64_MIN;
	int32_t x72 = INT32_MIN;
	int64_t t17 = -77LL;

	t17 = (x69-(x70^(x71|x72)));

	if (t17 != -4289941647LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x74 = INT32_MIN;
	static uint16_t x76 = 10968U;
	int32_t t18 = -24626;

	t18 = (x73-(x74^(x75|x76)));

	if (t18 != 2147472768) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = 1;
	uint64_t x79 = 30181011LLU;
	int8_t x80 = INT8_MIN;
	uint64_t t19 = 72861740347LLU;

	t19 = (x77-(x78^(x79|x80)));

	if (t19 != 18446744073709551519LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t t20 = 680570722LL;

	t20 = (x81-(x82^(x83|x84)));

	if (t20 != 2131458368LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	volatile int64_t x87 = -1LL;
	volatile uint64_t x88 = 6243799948444035LLU;
	static volatile uint64_t t21 = 2LLU;

	t21 = (x85-(x86^(x87|x88)));

	if (t21 != 18446744071562068096LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 3645553179LLU;
	volatile int64_t x90 = 253120453775635LL;
	int16_t x91 = 4109;
	volatile int8_t x92 = -18;
	uint64_t t22 = 16039176LLU;

	t22 = (x89-(x90^(x91|x92)));

	if (t22 != 253124099328799LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint32_t x93 = UINT32_MAX;
	int16_t x94 = -1;
	int32_t x95 = INT32_MAX;
	static uint16_t x96 = UINT16_MAX;
	static uint32_t t23 = 52058077U;

	t23 = (x93-(x94^(x95|x96)));

	if (t23 != 2147483647U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x98 = 112U;
	int16_t x99 = INT16_MIN;
	volatile uint64_t t24 = 245695LLU;

	t24 = (x97-(x98^(x99|x100)));

	if (t24 != 10039LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = UINT64_MAX;
	int8_t x102 = INT8_MIN;
	static uint64_t x104 = UINT64_MAX;
	uint64_t t25 = 1117373903645935LLU;

	t25 = (x101-(x102^(x103|x104)));

	if (t25 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x105 = INT32_MIN;
	static volatile int64_t x106 = INT64_MAX;
	static int64_t x107 = INT64_MIN;

	t26 = (x105-(x106^(x107|x108)));

	if (t26 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = UINT8_MAX;
	uint32_t x110 = 534U;
	volatile int8_t x111 = INT8_MIN;
	int8_t x112 = INT8_MIN;

	t27 = (x109-(x110^(x111|x112)));

	if (t27 != 873U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MAX;
	uint8_t x114 = UINT8_MAX;
	int32_t x115 = -1;
	uint16_t x116 = 0U;

	t28 = (x113-(x114^(x115|x116)));

	if (t28 != 383) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	static int64_t x118 = INT64_MIN;
	static int32_t x120 = -1;
	volatile int64_t t29 = -11236747479LL;

	t29 = (x117-(x118^(x119|x120)));

	if (t29 != 9223372032559808385LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x123 = 606U;
	int8_t x124 = -3;

	t30 = (x121-(x122^(x123|x124)));

	if (t30 != 2147483520) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x126 = INT8_MIN;
	volatile uint32_t x127 = UINT32_MAX;
	uint32_t t31 = 246U;

	t31 = (x125-(x126^(x127|x128)));

	if (t31 != 4294966193U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -1;
	uint32_t x130 = 235671U;
	uint32_t x131 = UINT32_MAX;
	uint8_t x132 = UINT8_MAX;
	uint32_t t32 = 2838787U;

	t32 = (x129-(x130^(x131|x132)));

	if (t32 != 235671U) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x138 = INT16_MIN;
	uint8_t x139 = UINT8_MAX;
	uint64_t x140 = UINT64_MAX;
	volatile uint64_t t33 = 18947530708207147LLU;

	t33 = (x137-(x138^(x139|x140)));

	if (t33 != 4995639LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x141 = 121U;
	uint16_t x142 = 1U;
	volatile int32_t x143 = -11;
	int32_t t34 = -755;

	t34 = (x141-(x142^(x143|x144)));

	if (t34 != 123) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x152 = 191579LLU;
	volatile uint64_t t35 = 32011034375940LLU;

	t35 = (x149-(x150^(x151|x152)));

	if (t35 != 18446744071562095708LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x153 = UINT32_MAX;
	int32_t x156 = INT32_MIN;

	t36 = (x153-(x154^(x155|x156)));

	if (t36 != 728103U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x158 = -305634;
	uint16_t x160 = 28U;
	static int64_t t37 = 172399LL;

	t37 = (x157-(x158^(x159|x160)));

	if (t37 != -305633LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x163 = -1;
	int32_t x164 = INT32_MAX;
	int64_t t38 = INT64_MIN;

	t38 = (x161-(x162^(x163|x164)));

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x165 = -11;
	volatile int64_t x166 = INT64_MIN;
	static int64_t x167 = 117953001319149332LL;
	int16_t x168 = INT16_MIN;
	volatile int64_t t39 = -140730075LL;

	t39 = (x165-(x166^(x167|x168)));

	if (t39 != -9223372036854755103LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x169 = -1LL;
	int64_t x170 = -1LL;
	volatile int64_t x171 = -1LL;
	volatile int32_t x172 = INT32_MIN;
	volatile int64_t t40 = -327512LL;

	t40 = (x169-(x170^(x171|x172)));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x173 = -1LL;
	int8_t x174 = 1;
	uint8_t x175 = UINT8_MAX;
	int64_t t41 = 30080LL;

	t41 = (x173-(x174^(x175|x176)));

	if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x177 = UINT32_MAX;
	uint8_t x179 = UINT8_MAX;
	int64_t x180 = INT64_MAX;

	t42 = (x177-(x178^(x179|x180)));

	if (t42 != 4294967296LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x181 = 11U;
	uint8_t x183 = UINT8_MAX;
	int64_t t43 = -1LL;

	t43 = (x181-(x182^(x183|x184)));

	if (t43 != -9223372036854775541LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x185 = -1LL;
	volatile int8_t x186 = 1;
	uint32_t x187 = 20548U;
	static volatile int16_t x188 = 5909;
	volatile int64_t t44 = -162014185LL;

	t44 = (x185-(x186^(x187|x188)));

	if (t44 != -22357LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x189 = INT64_MIN;
	volatile int32_t x190 = 87763829;
	uint64_t x192 = UINT64_MAX;
	volatile uint64_t t45 = 7855740425988106199LLU;

	t45 = (x189-(x190^(x191|x192)));

	if (t45 != 9223372036942539638LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x193 = 66904497;
	static uint16_t x194 = UINT16_MAX;
	uint64_t x195 = 0LLU;

	t46 = (x193-(x194^(x195|x196)));

	if (t46 != 66937266LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x199 = 111U;
	volatile uint8_t x200 = UINT8_MAX;
	volatile uint64_t t47 = 3812970502389LLU;

	t47 = (x197-(x198^(x199|x200)));

	if (t47 != 18446744073709551363LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x201 = UINT64_MAX;
	int16_t x202 = INT16_MAX;
	int32_t x203 = -10;
	int32_t x204 = INT32_MIN;
	volatile uint64_t t48 = 40203453283LLU;

	t48 = (x201-(x202^(x203|x204)));

	if (t48 != 32758LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x206 = UINT8_MAX;
	volatile int64_t x207 = INT64_MIN;
	volatile int32_t x208 = INT32_MIN;
	int64_t t49 = -14LL;

	t49 = (x205-(x206^(x207|x208)));

	if (t49 != 2147483407LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x209 = 1U;
	uint32_t x211 = UINT32_MAX;
	volatile int32_t x212 = INT32_MAX;

	t50 = (x209-(x210^(x211|x212)));

	if (t50 != 4294934530U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x214 = -2;

	t51 = (x213-(x214^(x215|x216)));

	if (t51 != 4294967120U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x217 = INT32_MIN;
	static int16_t x219 = INT16_MIN;
	static int64_t x220 = INT64_MIN;
	volatile int64_t t52 = 21323565LL;

	t52 = (x217-(x218^(x219|x220)));

	if (t52 != -2147516415LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x221 = -1;
	int64_t x222 = INT64_MAX;
	int64_t t53 = INT64_MAX;

	t53 = (x221-(x222^(x223|x224)));

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x231 = -1;
	int32_t x232 = 2575;
	volatile int32_t t54 = 153924;

	t54 = (x229-(x230^(x231|x232)));

	if (t54 != 32640) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x233 = -3405;
	volatile int64_t x235 = 1623016340LL;
	int8_t x236 = -1;
	volatile uint64_t t55 = 1116706LLU;

	t55 = (x233-(x234^(x235|x236)));

	if (t55 != 441670450LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x242 = 13;
	int64_t x243 = -1LL;
	volatile int16_t x244 = 60;
	int64_t t56 = -1LL;

	t56 = (x241-(x242^(x243|x244)));

	if (t56 != -2147483634LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x245 = UINT8_MAX;
	static volatile int16_t x246 = INT16_MAX;
	volatile uint16_t x247 = 22U;
	int8_t x248 = INT8_MIN;
	static volatile int32_t t57 = -1;

	t57 = (x245-(x246^(x247|x248)));

	if (t57 != 32918) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x249 = INT16_MAX;
	uint16_t x250 = UINT16_MAX;
	int32_t x252 = -8724;
	static volatile int64_t t58 = -49191486LL;

	t58 = (x249-(x250^(x251|x252)));

	if (t58 != 89580LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x253 = INT16_MAX;
	volatile uint8_t x254 = 7U;
	volatile int8_t x255 = INT8_MAX;
	uint64_t x256 = UINT64_MAX;
	uint64_t t59 = 16432360842879LLU;

	t59 = (x253-(x254^(x255|x256)));

	if (t59 != 32775LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x257 = INT32_MAX;
	uint32_t x258 = UINT32_MAX;
	int32_t x259 = -1;
	static int64_t x260 = 0LL;

	t60 = (x257-(x258^(x259|x260)));

	if (t60 != 6442450943LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x261 = INT16_MIN;
	int32_t x263 = INT32_MIN;
	int16_t x264 = INT16_MAX;

	t61 = (x261-(x262^(x263|x264)));

	if (t61 != 2147450880) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x265 = -1LL;
	int64_t x267 = 448828399857948LL;
	uint64_t x268 = UINT64_MAX;

	t62 = (x265-(x266^(x267|x268)));

	if (t62 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x269 = INT8_MIN;
	uint32_t x270 = 158009U;
	int32_t x271 = 81312;

	t63 = (x269-(x270^(x271|x272)));

	if (t63 != 4294731962U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x273 = -310053679;
	uint64_t x274 = UINT64_MAX;
	int8_t x275 = INT8_MIN;
	volatile uint64_t x276 = 4787511490515LLU;
	volatile uint64_t t64 = 16098LLU;

	t64 = (x273-(x274^(x275|x276)));

	if (t64 != 18446744073399497893LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x277 = 1;
	int16_t x278 = 1174;
	uint64_t x280 = 173267910944774LLU;

	t65 = (x277-(x278^(x279|x280)));

	if (t65 != 4977LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x281 = INT8_MIN;
	int32_t x282 = INT32_MIN;
	volatile int32_t x283 = INT32_MIN;
	int64_t x284 = INT64_MAX;
	int64_t t66 = 4655940617654LL;

	t66 = (x281-(x282^(x283|x284)));

	if (t66 != -2147483775LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x287 = 74716628607902447LLU;
	volatile int16_t x288 = -20;
	volatile uint64_t t67 = 2147LLU;

	t67 = (x285-(x286^(x287|x288)));

	if (t67 != 65647LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x289 = -301317464LL;
	int16_t x290 = INT16_MIN;
	uint8_t x291 = 122U;
	static int8_t x292 = INT8_MIN;
	int64_t t68 = -39LL;

	t68 = (x289-(x290^(x291|x292)));

	if (t68 != -301350226LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x293 = -4;
	int32_t x294 = INT32_MIN;
	int16_t x295 = INT16_MIN;
	volatile uint8_t x296 = 9U;
	int32_t t69 = 553023477;

	t69 = (x293-(x294^(x295|x296)));

	if (t69 != -2147450893) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x297 = UINT8_MAX;
	int64_t x298 = -1LL;
	volatile int8_t x299 = INT8_MIN;
	static uint8_t x300 = 1U;
	int64_t t70 = 377391LL;

	t70 = (x297-(x298^(x299|x300)));

	if (t70 != 129LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x301 = 52487917714LL;
	uint8_t x302 = UINT8_MAX;
	int64_t x303 = -1LL;
	int8_t x304 = INT8_MAX;
	int64_t t71 = 0LL;

	t71 = (x301-(x302^(x303|x304)));

	if (t71 != 52487917970LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x305 = 49;
	int16_t x306 = -3208;
	static int32_t x307 = -1;
	volatile int8_t x308 = INT8_MIN;
	static int32_t t72 = -31;

	t72 = (x305-(x306^(x307|x308)));

	if (t72 != -3158) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x310 = 834U;
	int16_t x311 = -107;
	int8_t x312 = -2;
	int64_t t73 = -15657515705591LL;

	t73 = (x309-(x310^(x311|x312)));

	if (t73 != -9223372036854774973LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x313 = 20;
	volatile uint64_t x314 = UINT64_MAX;
	int64_t x315 = -830736LL;
	uint8_t x316 = UINT8_MAX;
	volatile uint64_t t74 = 22LLU;

	t74 = (x313-(x314^(x315|x316)));

	if (t74 != 18446744073708720916LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x317 = 0U;
	volatile uint32_t x318 = 12481085U;
	int32_t x320 = 0;
	uint32_t t75 = 4U;

	t75 = (x317-(x318^(x319|x320)));

	if (t75 != 4282479166U) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x321 = -1;
	uint64_t x322 = UINT64_MAX;
	int32_t x323 = INT32_MAX;
	int32_t x324 = INT32_MAX;
	uint64_t t76 = 242587709060LLU;

	t76 = (x321-(x322^(x323|x324)));

	if (t76 != 2147483647LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x329 = 533941LLU;
	int16_t x331 = INT16_MIN;
	int64_t x332 = 385LL;
	uint64_t t77 = 44969996940449631LLU;

	t77 = (x329-(x330^(x331|x332)));

	if (t77 != 566199LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x334 = UINT32_MAX;
	static int16_t x336 = INT16_MAX;
	int64_t t78 = INT64_MIN;

	t78 = (x333-(x334^(x335|x336)));

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x337 = -1;
	uint32_t x338 = 2U;
	uint16_t x339 = 1U;
	static uint32_t x340 = 62322249U;
	volatile uint32_t t79 = 290U;

	t79 = (x337-(x338^(x339|x340)));

	if (t79 != 4232645044U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x341 = INT64_MIN;
	int8_t x342 = INT8_MIN;
	uint64_t x343 = 92LLU;
	uint64_t t80 = 3224683LLU;

	t80 = (x341-(x342^(x343|x344)));

	if (t80 != 9223372036854775716LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x346 = -1;
	static int32_t x348 = INT32_MIN;

	t81 = (x345-(x346^(x347|x348)));

	if (t81 != 18446744072083369813LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x350 = UINT64_MAX;
	int16_t x351 = -532;
	uint64_t x352 = 7085521922663LLU;
	uint64_t t82 = 66900310481LLU;

	t82 = (x349-(x350^(x351|x352)));

	if (t82 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x353 = -647167843LL;
	int8_t x354 = -1;
	static uint8_t x355 = UINT8_MAX;
	int8_t x356 = -1;

	t83 = (x353-(x354^(x355|x356)));

	if (t83 != -647167843LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x357 = 58444393LLU;
	static int8_t x358 = INT8_MIN;
	volatile uint64_t x359 = UINT64_MAX;
	static int8_t x360 = INT8_MIN;
	uint64_t t84 = 13LLU;

	t84 = (x357-(x358^(x359|x360)));

	if (t84 != 58444266LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x361 = UINT64_MAX;
	static int64_t x362 = INT64_MIN;
	uint16_t x363 = 3775U;
	static volatile int16_t x364 = -1;
	volatile uint64_t t85 = 12061LLU;

	t85 = (x361-(x362^(x363|x364)));

	if (t85 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x365 = INT8_MAX;
	int32_t x366 = -732565;
	volatile int64_t x367 = INT64_MIN;
	int64_t x368 = INT64_MAX;
	volatile int64_t t86 = 316768LL;

	t86 = (x365-(x366^(x367|x368)));

	if (t86 != -732437LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x369 = 551;
	volatile int64_t x370 = INT64_MIN;
	volatile uint64_t x371 = UINT64_MAX;
	static uint64_t t87 = 166LLU;

	t87 = (x369-(x370^(x371|x372)));

	if (t87 != 9223372036854776360LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x373 = -1LL;
	int8_t x374 = INT8_MAX;
	int8_t x375 = 1;
	volatile int32_t x376 = INT32_MAX;
	int64_t t88 = -177LL;

	t88 = (x373-(x374^(x375|x376)));

	if (t88 != -2147483521LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x377 = 0;
	int32_t x378 = -442445;
	uint64_t x379 = 956109LLU;
	uint8_t x380 = UINT8_MAX;
	volatile uint64_t t89 = 3938283210927423198LLU;

	t89 = (x377-(x378^(x379|x380)));

	if (t89 != 546484LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x385 = UINT16_MAX;
	int64_t x386 = 689467758455678LL;
	int64_t x387 = INT64_MIN;
	int64_t t90 = -8257532LL;

	t90 = (x385-(x386^(x387|x388)));

	if (t90 != 689467758521089LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x393 = -1;
	uint32_t x394 = UINT32_MAX;
	int32_t x396 = INT32_MIN;

	t91 = (x393-(x394^(x395|x396)));

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x397 = INT8_MAX;
	int64_t x398 = INT64_MIN;
	int8_t x399 = INT8_MIN;
	int8_t x400 = INT8_MIN;

	t92 = (x397-(x398^(x399|x400)));

	if (t92 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x402 = INT16_MAX;
	int32_t x403 = INT32_MIN;

	t93 = (x401-(x402^(x403|x404)));

	if (t93 != 2147450965LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x405 = 3LLU;
	int16_t x407 = -5256;
	int64_t x408 = INT64_MAX;
	volatile uint64_t t94 = 81LLU;

	t94 = (x405-(x406^(x407|x408)));

	if (t94 != 3LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x409 = -4149449;
	int32_t x410 = INT32_MAX;
	volatile int32_t x411 = INT32_MIN;
	int32_t t95 = -10;

	t95 = (x409-(x410^(x411|x412)));

	if (t95 != -4149442) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x414 = INT32_MAX;
	int16_t x415 = INT16_MAX;
	uint8_t x416 = 8U;
	int32_t t96 = 26353;

	t96 = (x413-(x414^(x415|x416)));

	if (t96 != -2147450872) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x417 = -1;
	uint64_t x418 = UINT64_MAX;
	static int16_t x419 = -1;
	uint8_t x420 = 1U;
	volatile uint64_t t97 = UINT64_MAX;

	t97 = (x417-(x418^(x419|x420)));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x425 = 249198LLU;
	static int64_t x426 = -1LL;
	static int64_t x427 = -204883LL;
	volatile uint64_t t98 = 2506246263422340LLU;

	t98 = (x425-(x426^(x427|x428)));

	if (t98 != 44316LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x429 = UINT64_MAX;
	static int8_t x430 = INT8_MIN;
	volatile uint16_t x432 = 0U;

	t99 = (x429-(x430^(x431|x432)));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

