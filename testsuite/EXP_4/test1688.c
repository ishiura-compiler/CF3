#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 5;
int64_t x10 = INT64_MIN;
int64_t x13 = INT64_MIN;
volatile int8_t x14 = INT8_MIN;
int16_t x15 = 3;
static int8_t x18 = INT8_MAX;
int16_t x20 = -1;
int64_t t5 = -624LL;
volatile int32_t x25 = INT32_MAX;
int8_t x28 = -1;
int32_t x32 = INT32_MAX;
int32_t x34 = 13;
volatile uint16_t x38 = UINT16_MAX;
uint16_t x51 = UINT16_MAX;
uint8_t x55 = 2U;
static int8_t x57 = 1;
uint64_t x62 = UINT64_MAX;
uint8_t x75 = 2U;
uint32_t x78 = 4991632U;
volatile uint32_t x84 = 805504543U;
int8_t x87 = 2;
int16_t x88 = -1;
uint64_t x93 = 219LLU;
uint64_t x96 = 1654399868084LLU;
static uint32_t x102 = 2335966U;
static int64_t t26 = -17573716001308LL;
int8_t x114 = -1;
int64_t x123 = -1LL;
int32_t t30 = -24;
uint32_t x125 = 15U;
int8_t x135 = INT8_MAX;
volatile uint32_t x141 = UINT32_MAX;
int16_t x151 = INT16_MAX;
int8_t x152 = INT8_MIN;
uint8_t x155 = 1U;
int8_t x162 = INT8_MIN;
int64_t x164 = -1LL;
int32_t t41 = -58;
uint16_t x173 = 62U;
uint32_t x186 = 4469U;
volatile uint16_t x190 = UINT16_MAX;
static int64_t x192 = INT64_MIN;
static int64_t x197 = 1LL;
static int16_t x198 = -255;
int64_t t49 = -6229104806327281LL;
int64_t t50 = -2080783833182LL;
int16_t x208 = 1;
int64_t t51 = 880388444LL;
static int8_t x212 = INT8_MIN;
static volatile int16_t x213 = -1;
uint64_t x214 = UINT64_MAX;
int64_t x218 = INT64_MIN;
volatile uint8_t x219 = UINT8_MAX;
static volatile int64_t t54 = 1155492LL;
static int64_t x221 = INT64_MIN;
uint32_t x223 = UINT32_MAX;
uint64_t x224 = UINT64_MAX;
int32_t x231 = INT32_MIN;
static int8_t x232 = INT8_MIN;
int32_t t57 = -3721;
uint32_t x235 = UINT32_MAX;
int16_t x236 = INT16_MIN;
volatile uint32_t t58 = 3U;
volatile int64_t x237 = INT64_MAX;
static int64_t t59 = -97030051LL;
uint32_t x250 = UINT32_MAX;
int8_t x253 = INT8_MAX;
uint32_t x260 = UINT32_MAX;
int64_t x271 = INT64_MIN;
static volatile int32_t t67 = -14057;
static uint32_t x273 = UINT32_MAX;
static int64_t x282 = 42110842982821533LL;
volatile int64_t t70 = 85084790284330LL;
static int64_t x290 = 1LL;
uint64_t x291 = UINT64_MAX;
int32_t x294 = 227480;
volatile uint64_t t73 = 11038327245305160LLU;
int32_t x301 = -1;
uint8_t x305 = 87U;
static volatile int32_t t76 = 892;
int32_t x309 = INT32_MIN;
int16_t x312 = INT16_MIN;
int8_t x315 = INT8_MAX;
int16_t x316 = INT16_MAX;
static int64_t x319 = INT64_MAX;
static uint32_t t79 = 120U;
uint64_t x325 = 1861LLU;
static uint8_t x326 = 4U;
int64_t x329 = INT64_MIN;
static volatile int64_t t82 = INT64_MIN;
int64_t x334 = INT64_MIN;
static int8_t x336 = INT8_MAX;
volatile int64_t x344 = -1LL;
static uint8_t x345 = UINT8_MAX;
int32_t x346 = -5733896;
int64_t x348 = 463LL;
static volatile int32_t t86 = 682;
static volatile int32_t t87 = 8;
uint8_t x356 = 43U;
volatile int32_t t88 = -3841861;
uint8_t x359 = 13U;
static volatile int16_t x367 = INT16_MAX;
static volatile int16_t x371 = -2286;
int16_t x381 = 3453;
int8_t x385 = INT8_MAX;
int16_t x389 = INT16_MAX;
uint32_t t97 = 209679606U;
static int32_t x393 = INT32_MAX;
uint8_t x394 = UINT8_MAX;
static int32_t x398 = INT32_MIN;
int32_t x399 = -21351991;


void f0(void) {
	int16_t x1 = INT16_MAX;
	int8_t x2 = INT8_MIN;
	static int32_t x3 = INT32_MIN;
	int16_t x4 = -1;

	t0 = (x1&(x2^(x3<=x4)));

	if (t0 != 32641) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = 0;
	uint64_t x6 = UINT64_MAX;
	int16_t x7 = -1;
	int16_t x8 = INT16_MIN;
	uint64_t t1 = 1LLU;

	t1 = (x5&(x6^(x7<=x8)));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x9 = 1U;
	static volatile uint32_t x11 = UINT32_MAX;
	int8_t x12 = -1;
	int64_t t2 = -1567287351LL;

	t2 = (x9&(x10^(x11<=x12)));

	if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x16 = 18406279;
	int64_t t3 = INT64_MIN;

	t3 = (x13&(x14^(x15<=x16)));

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int16_t x19 = 502;
	volatile int32_t t4 = -9;

	t4 = (x17&(x18^(x19<=x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 12117;
	int64_t x22 = 27732340743940LL;
	int32_t x23 = INT32_MAX;
	uint64_t x24 = 92404088LLU;

	t5 = (x21&(x22^(x23<=x24)));

	if (t5 != 3844LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x26 = 0U;
	static volatile uint64_t x27 = 493080670LLU;
	int32_t t6 = 19090;

	t6 = (x25&(x26^(x27<=x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 5;
	uint8_t x30 = UINT8_MAX;
	uint16_t x31 = UINT16_MAX;
	int32_t t7 = 9;

	t7 = (x29&(x30^(x31<=x32)));

	if (t7 != 4) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = 4728312476LL;
	volatile int64_t x35 = -1LL;
	uint8_t x36 = 0U;
	volatile int64_t t8 = -46349517589745LL;

	t8 = (x33&(x34^(x35<=x36)));

	if (t8 != 12LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = INT32_MAX;
	static volatile int32_t x39 = -1;
	int64_t x40 = 609356129LL;
	static volatile int32_t t9 = -3879;

	t9 = (x37&(x38^(x39<=x40)));

	if (t9 != 65534) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	int64_t x42 = INT64_MIN;
	int8_t x43 = INT8_MIN;
	uint32_t x44 = 219297U;
	volatile int64_t t10 = INT64_MIN;

	t10 = (x41&(x42^(x43<=x44)));

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	int64_t x46 = INT64_MIN;
	int16_t x47 = 0;
	int16_t x48 = INT16_MAX;
	static int64_t t11 = INT64_MIN;

	t11 = (x45&(x46^(x47<=x48)));

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	uint16_t x50 = UINT16_MAX;
	static int8_t x52 = -1;
	volatile int32_t t12 = 1661;

	t12 = (x49&(x50^(x51<=x52)));

	if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = INT32_MIN;
	int64_t x54 = INT64_MAX;
	volatile uint64_t x56 = 1170646371925166LLU;
	int64_t t13 = 23797888LL;

	t13 = (x53&(x54^(x55<=x56)));

	if (t13 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x58 = UINT8_MAX;
	int16_t x59 = -1;
	int8_t x60 = INT8_MIN;
	volatile int32_t t14 = 838;

	t14 = (x57&(x58^(x59<=x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 3;
	volatile int64_t x63 = INT64_MAX;
	int64_t x64 = INT64_MIN;
	uint64_t t15 = 5285LLU;

	t15 = (x61&(x62^(x63<=x64)));

	if (t15 != 3LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 2U;
	static int64_t x66 = INT64_MIN;
	static uint32_t x67 = 10463311U;
	int16_t x68 = 12;
	volatile int64_t t16 = 85867LL;

	t16 = (x65&(x66^(x67<=x68)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	static int32_t x70 = INT32_MIN;
	static int64_t x71 = INT64_MIN;
	static int8_t x72 = INT8_MIN;
	int64_t t17 = INT64_MIN;

	t17 = (x69&(x70^(x71<=x72)));

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MAX;
	int8_t x74 = 2;
	int64_t x76 = INT64_MIN;
	volatile int32_t t18 = -1119935;

	t18 = (x73&(x74^(x75<=x76)));

	if (t18 != 2) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = 252LL;
	static uint16_t x79 = UINT16_MAX;
	uint64_t x80 = 47128209LLU;
	volatile int64_t t19 = 66695269282LL;

	t19 = (x77&(x78^(x79<=x80)));

	if (t19 != 144LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x81 = 0;
	int64_t x82 = -1LL;
	uint64_t x83 = 93LLU;
	int64_t t20 = 257345012310LL;

	t20 = (x81&(x82^(x83<=x84)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 20U;
	uint64_t x86 = 548425065220316181LLU;
	uint64_t t21 = 353791LLU;

	t21 = (x85&(x86^(x87<=x88)));

	if (t21 != 20LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -1;
	int64_t x90 = INT64_MIN;
	volatile int16_t x91 = 3;
	volatile int8_t x92 = 33;
	int64_t t22 = 88639038LL;

	t22 = (x89&(x90^(x91<=x92)));

	if (t22 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x94 = INT64_MAX;
	int8_t x95 = -1;
	volatile uint64_t t23 = 14864452034297671LLU;

	t23 = (x93&(x94^(x95<=x96)));

	if (t23 != 219LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -93191LL;
	uint64_t x98 = 60817884053168LLU;
	int16_t x99 = 0;
	uint64_t x100 = 556683619409144LLU;
	volatile uint64_t t24 = 72972395692LLU;

	t24 = (x97&(x98^(x99<=x100)));

	if (t24 != 60817883959985LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = UINT16_MAX;
	int64_t x103 = -1981954LL;
	volatile int64_t x104 = 1037LL;
	volatile uint32_t t25 = 21390U;

	t25 = (x101&(x102^(x103<=x104)));

	if (t25 != 42207U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = 0;
	int64_t x106 = 7292926947793980LL;
	static volatile int32_t x107 = 417041444;
	int64_t x108 = INT64_MAX;

	t26 = (x105&(x106^(x107<=x108)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x109 = -601840;
	static int32_t x110 = INT32_MIN;
	uint8_t x111 = UINT8_MAX;
	int8_t x112 = -1;
	int32_t t27 = INT32_MIN;

	t27 = (x109&(x110^(x111<=x112)));

	if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x113 = -1LL;
	int64_t x115 = INT64_MIN;
	int32_t x116 = 93;
	volatile int64_t t28 = -16773LL;

	t28 = (x113&(x114^(x115<=x116)));

	if (t28 != -2LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	volatile uint16_t x118 = 57U;
	int64_t x119 = INT64_MIN;
	int8_t x120 = INT8_MIN;
	int32_t t29 = 234327;

	t29 = (x117&(x118^(x119<=x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int32_t x121 = -13347;
	int16_t x122 = INT16_MIN;
	uint64_t x124 = 3029713780LLU;

	t30 = (x121&(x122^(x123<=x124)));

	if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x126 = 0U;
	static int32_t x127 = INT32_MIN;
	uint64_t x128 = 5533097354946LLU;
	volatile uint32_t t31 = 26U;

	t31 = (x125&(x126^(x127<=x128)));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x129 = INT8_MIN;
	volatile uint32_t x130 = UINT32_MAX;
	int8_t x131 = INT8_MIN;
	static int64_t x132 = 48113286LL;
	uint32_t t32 = 116389U;

	t32 = (x129&(x130^(x131<=x132)));

	if (t32 != 4294967168U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 5U;
	int8_t x134 = -53;
	static int32_t x136 = INT32_MIN;
	volatile int32_t t33 = -509423;

	t33 = (x133&(x134^(x135<=x136)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x137 = INT8_MIN;
	volatile uint64_t x138 = UINT64_MAX;
	int16_t x139 = -869;
	static int64_t x140 = INT64_MIN;
	uint64_t t34 = 2953LLU;

	t34 = (x137&(x138^(x139<=x140)));

	if (t34 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x142 = 30242U;
	static int64_t x143 = INT64_MIN;
	int16_t x144 = -508;
	volatile uint32_t t35 = 1085U;

	t35 = (x141&(x142^(x143<=x144)));

	if (t35 != 30243U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = UINT64_MAX;
	uint16_t x146 = UINT16_MAX;
	static uint64_t x147 = 565149952018952473LLU;
	int64_t x148 = -816749037483915905LL;
	uint64_t t36 = 118LLU;

	t36 = (x145&(x146^(x147<=x148)));

	if (t36 != 65534LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint16_t x149 = 151U;
	volatile uint8_t x150 = 1U;
	int32_t t37 = -140;

	t37 = (x149&(x150^(x151<=x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = -6;
	uint32_t x154 = UINT32_MAX;
	uint8_t x156 = 26U;
	uint32_t t38 = 19U;

	t38 = (x153&(x154^(x155<=x156)));

	if (t38 != 4294967290U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -592126;
	int8_t x158 = -1;
	static int64_t x159 = -3289LL;
	int64_t x160 = -1LL;
	static int32_t t39 = 10015;

	t39 = (x157&(x158^(x159<=x160)));

	if (t39 != -592126) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MAX;
	volatile int64_t x163 = 1269356883284683LL;
	volatile int32_t t40 = 136726082;

	t40 = (x161&(x162^(x163<=x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = -1;
	int8_t x166 = -1;
	uint32_t x167 = 7U;
	int16_t x168 = INT16_MIN;

	t41 = (x165&(x166^(x167<=x168)));

	if (t41 != -2) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	uint32_t x170 = 10812538U;
	volatile uint32_t x171 = 10683064U;
	static uint8_t x172 = 60U;
	volatile uint32_t t42 = 856311993U;

	t42 = (x169&(x170^(x171<=x172)));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x174 = 0U;
	int8_t x175 = 2;
	int64_t x176 = 4664904497LL;
	uint32_t t43 = 734U;

	t43 = (x173&(x174^(x175<=x176)));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = -47;
	uint64_t x178 = 203LLU;
	int16_t x179 = -894;
	int8_t x180 = 1;
	volatile uint64_t t44 = 1LLU;

	t44 = (x177&(x178^(x179<=x180)));

	if (t44 != 192LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MIN;
	volatile int32_t x182 = -1;
	uint32_t x183 = UINT32_MAX;
	int64_t x184 = -2434287908LL;
	volatile int32_t t45 = 8;

	t45 = (x181&(x182^(x183<=x184)));

	if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MAX;
	volatile int16_t x187 = -1;
	uint16_t x188 = UINT16_MAX;
	uint32_t t46 = 2743673U;

	t46 = (x185&(x186^(x187<=x188)));

	if (t46 != 116U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = -3;
	uint8_t x191 = 0U;
	volatile int32_t t47 = -129896;

	t47 = (x189&(x190^(x191<=x192)));

	if (t47 != 65533) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MAX;
	volatile int16_t x194 = INT16_MIN;
	int32_t x195 = 1;
	int8_t x196 = INT8_MIN;
	volatile int32_t t48 = 2426;

	t48 = (x193&(x194^(x195<=x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x199 = 4361;
	int32_t x200 = INT32_MIN;

	t49 = (x197&(x198^(x199<=x200)));

	if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = -827187437763708703LL;
	int8_t x202 = -1;
	uint32_t x203 = 14751U;
	static int32_t x204 = INT32_MIN;

	t50 = (x201&(x202^(x203<=x204)));

	if (t50 != -827187437763708704LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -1LL;
	uint8_t x206 = 109U;
	int8_t x207 = -1;

	t51 = (x205&(x206^(x207<=x208)));

	if (t51 != 108LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x209 = INT64_MIN;
	int16_t x210 = INT16_MIN;
	int8_t x211 = INT8_MIN;
	int64_t t52 = INT64_MIN;

	t52 = (x209&(x210^(x211<=x212)));

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x215 = INT32_MIN;
	volatile uint64_t x216 = UINT64_MAX;
	uint64_t t53 = 1023934LLU;

	t53 = (x213&(x214^(x215<=x216)));

	if (t53 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MAX;
	int64_t x220 = 57774997643994LL;

	t54 = (x217&(x218^(x219<=x220)));

	if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x222 = UINT64_MAX;
	uint64_t t55 = 2992011468383LLU;

	t55 = (x221&(x222^(x223<=x224)));

	if (t55 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MIN;
	volatile int64_t x226 = INT64_MIN;
	int16_t x227 = -1;
	volatile uint64_t x228 = 65476LLU;
	static int64_t t56 = INT64_MIN;

	t56 = (x225&(x226^(x227<=x228)));

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x229 = -337;
	static volatile int8_t x230 = INT8_MAX;

	t57 = (x229&(x230^(x231<=x232)));

	if (t57 != 46) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = 117U;
	static uint32_t x234 = 0U;

	t58 = (x233&(x234^(x235<=x236)));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x238 = INT16_MIN;
	uint16_t x239 = 9984U;
	int16_t x240 = INT16_MIN;

	t59 = (x237&(x238^(x239<=x240)));

	if (t59 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x241 = 1913897674U;
	static int16_t x242 = INT16_MAX;
	volatile uint8_t x243 = 3U;
	uint16_t x244 = UINT16_MAX;
	volatile uint32_t t60 = 1858U;

	t60 = (x241&(x242^(x243<=x244)));

	if (t60 != 17098U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = -898040347;
	int32_t x246 = 3302;
	uint64_t x247 = 10963LLU;
	int64_t x248 = INT64_MIN;
	static int32_t t61 = 117431805;

	t61 = (x245&(x246^(x247<=x248)));

	if (t61 != 3301) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = 1U;
	static int32_t x251 = INT32_MIN;
	static int8_t x252 = INT8_MAX;
	static volatile uint32_t t62 = 1U;

	t62 = (x249&(x250^(x251<=x252)));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x254 = -1;
	volatile int32_t x255 = INT32_MIN;
	int64_t x256 = INT64_MIN;
	int32_t t63 = 489677209;

	t63 = (x253&(x254^(x255<=x256)));

	if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x257 = -1;
	int64_t x258 = INT64_MAX;
	int8_t x259 = INT8_MAX;
	volatile int64_t t64 = 6035LL;

	t64 = (x257&(x258^(x259<=x260)));

	if (t64 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = 1;
	static int8_t x262 = INT8_MAX;
	uint16_t x263 = 2U;
	uint32_t x264 = UINT32_MAX;
	int32_t t65 = 37119;

	t65 = (x261&(x262^(x263<=x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = 149211U;
	int8_t x266 = INT8_MIN;
	static int16_t x267 = INT16_MAX;
	static volatile uint32_t x268 = UINT32_MAX;
	static uint32_t t66 = 184U;

	t66 = (x265&(x266^(x267<=x268)));

	if (t66 != 149121U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = -126;
	int16_t x270 = 4201;
	uint64_t x272 = 1964260LLU;

	t67 = (x269&(x270^(x271<=x272)));

	if (t67 != 4096) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x274 = INT64_MIN;
	volatile int64_t x275 = 20LL;
	int8_t x276 = -1;
	int64_t t68 = 568LL;

	t68 = (x273&(x274^(x275<=x276)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = 3U;
	int8_t x278 = INT8_MAX;
	static int8_t x279 = -1;
	volatile uint16_t x280 = 647U;
	int32_t t69 = -291751943;

	t69 = (x277&(x278^(x279<=x280)));

	if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = UINT32_MAX;
	static int16_t x283 = INT16_MIN;
	volatile int16_t x284 = INT16_MAX;

	t70 = (x281&(x282^(x283<=x284)));

	if (t70 != 2905534108LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MIN;
	volatile int8_t x286 = -1;
	static int64_t x287 = INT64_MIN;
	static uint8_t x288 = 0U;
	volatile int32_t t71 = INT32_MIN;

	t71 = (x285&(x286^(x287<=x288)));

	if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = 14U;
	volatile uint16_t x292 = UINT16_MAX;
	volatile int64_t t72 = -20376183601493LL;

	t72 = (x289&(x290^(x291<=x292)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x293 = UINT64_MAX;
	int64_t x295 = -1LL;
	int32_t x296 = INT32_MIN;

	t73 = (x293&(x294^(x295<=x296)));

	if (t73 != 227480LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = 2;
	int64_t x298 = 123510100853LL;
	int32_t x299 = INT32_MIN;
	int8_t x300 = INT8_MIN;
	int64_t t74 = -2908638LL;

	t74 = (x297&(x298^(x299<=x300)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x302 = -1;
	static uint16_t x303 = UINT16_MAX;
	volatile uint64_t x304 = UINT64_MAX;
	volatile int32_t t75 = -21025;

	t75 = (x301&(x302^(x303<=x304)));

	if (t75 != -2) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x306 = UINT8_MAX;
	int64_t x307 = -1LL;
	volatile int16_t x308 = -1631;

	t76 = (x305&(x306^(x307<=x308)));

	if (t76 != 87) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x310 = -138597917;
	int64_t x311 = -1LL;
	int32_t t77 = INT32_MIN;

	t77 = (x309&(x310^(x311<=x312)));

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = 293U;
	uint32_t x314 = UINT32_MAX;
	uint32_t t78 = 882U;

	t78 = (x313&(x314^(x315<=x316)));

	if (t78 != 292U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = -1;
	uint32_t x318 = 61153U;
	static int8_t x320 = INT8_MIN;

	t79 = (x317&(x318^(x319<=x320)));

	if (t79 != 61153U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = -1;
	int64_t x322 = -22888LL;
	int64_t x323 = 990035LL;
	static uint32_t x324 = 52083U;
	int64_t t80 = -404680LL;

	t80 = (x321&(x322^(x323<=x324)));

	if (t80 != -22888LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x327 = UINT16_MAX;
	int8_t x328 = INT8_MIN;
	uint64_t t81 = 2457829645161196029LLU;

	t81 = (x325&(x326^(x327<=x328)));

	if (t81 != 4LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x330 = INT64_MIN;
	int8_t x331 = 7;
	int8_t x332 = INT8_MIN;

	t82 = (x329&(x330^(x331<=x332)));

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x333 = INT64_MAX;
	static int8_t x335 = 17;
	volatile int64_t t83 = 257736LL;

	t83 = (x333&(x334^(x335<=x336)));

	if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = 58U;
	int64_t x338 = -1LL;
	uint8_t x339 = 102U;
	int8_t x340 = -1;
	static int64_t t84 = 16237LL;

	t84 = (x337&(x338^(x339<=x340)));

	if (t84 != 58LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = 14;
	int8_t x342 = -45;
	int16_t x343 = -2;
	int32_t t85 = 236980546;

	t85 = (x341&(x342^(x343<=x344)));

	if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x347 = INT8_MIN;

	t86 = (x345&(x346^(x347<=x348)));

	if (t86 != 249) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x349 = INT16_MAX;
	int32_t x350 = 1370909;
	static int8_t x351 = INT8_MIN;
	int8_t x352 = -50;

	t87 = (x349&(x350^(x351<=x352)));

	if (t87 != 27420) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = -2;
	volatile uint8_t x354 = UINT8_MAX;
	volatile int16_t x355 = INT16_MIN;

	t88 = (x353&(x354^(x355<=x356)));

	if (t88 != 254) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x357 = 3LLU;
	volatile int8_t x358 = INT8_MIN;
	int16_t x360 = INT16_MIN;
	static volatile uint64_t t89 = 24888244548228LLU;

	t89 = (x357&(x358^(x359<=x360)));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x361 = INT64_MAX;
	int8_t x362 = 1;
	int16_t x363 = INT16_MIN;
	int8_t x364 = 2;
	volatile int64_t t90 = 6528699885822351LL;

	t90 = (x361&(x362^(x363<=x364)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x365 = 114U;
	int16_t x366 = -1;
	uint64_t x368 = UINT64_MAX;
	int32_t t91 = 1035;

	t91 = (x365&(x366^(x367<=x368)));

	if (t91 != 114) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = 32;
	volatile int64_t x370 = INT64_MIN;
	int8_t x372 = 0;
	static int64_t t92 = -82399499814LL;

	t92 = (x369&(x370^(x371<=x372)));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x373 = INT64_MIN;
	int32_t x374 = -1;
	int8_t x375 = -1;
	volatile int64_t x376 = INT64_MIN;
	int64_t t93 = INT64_MIN;

	t93 = (x373&(x374^(x375<=x376)));

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x377 = -55676968296LL;
	static uint8_t x378 = 88U;
	int64_t x379 = INT64_MIN;
	volatile uint64_t x380 = 464748752LLU;
	int64_t t94 = -318LL;

	t94 = (x377&(x378^(x379<=x380)));

	if (t94 != 24LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x382 = UINT16_MAX;
	uint64_t x383 = 2224142004775662518LLU;
	uint64_t x384 = 91LLU;
	volatile int32_t t95 = -24;

	t95 = (x381&(x382^(x383<=x384)));

	if (t95 != 3453) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x386 = 0;
	static uint64_t x387 = 550476767313274025LLU;
	int32_t x388 = INT32_MIN;
	int32_t t96 = -1659890;

	t96 = (x385&(x386^(x387<=x388)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x390 = 15468219U;
	volatile int64_t x391 = INT64_MIN;
	int8_t x392 = INT8_MAX;

	t97 = (x389&(x390^(x391<=x392)));

	if (t97 != 1722U) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x395 = 75;
	int8_t x396 = -1;
	static int32_t t98 = -883917431;

	t98 = (x393&(x394^(x395<=x396)));

	if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MIN;
	static volatile uint32_t x400 = 17902U;
	static volatile int32_t t99 = INT32_MIN;

	t99 = (x397&(x398^(x399<=x400)));

	if (t99 != INT32_MIN) { NG(); } else { ; }
	
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

