#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x2 = INT8_MAX;
uint16_t x4 = 0U;
uint32_t x5 = 581U;
uint32_t x8 = 4322U;
volatile uint64_t x9 = 437640313225494973LLU;
int8_t x12 = INT8_MIN;
volatile int64_t t3 = 3268772257399788LL;
int32_t x21 = INT32_MIN;
volatile int8_t x26 = INT8_MIN;
int8_t x31 = INT8_MIN;
uint64_t x32 = UINT64_MAX;
int8_t x35 = INT8_MAX;
static volatile uint64_t x38 = 1095LLU;
volatile int32_t x41 = INT32_MIN;
int64_t x42 = 2374486970000LL;
static int8_t x46 = -1;
int16_t x47 = INT16_MIN;
uint32_t x53 = 1646779053U;
int64_t x60 = 9713828036LL;
volatile int32_t t15 = 405605;
static uint64_t x65 = 2029171580235762LLU;
int16_t x66 = INT16_MIN;
int16_t x67 = INT16_MAX;
int64_t x73 = INT64_MIN;
int16_t x76 = INT16_MIN;
int64_t t18 = 1199616065748837LL;
int16_t x80 = 944;
uint64_t t22 = 56783827989733LLU;
volatile uint8_t x96 = UINT8_MAX;
static int32_t x99 = -1;
volatile int32_t t24 = 28;
volatile uint8_t x102 = 114U;
int32_t x106 = -106311356;
int16_t x109 = 63;
int32_t x111 = INT32_MAX;
uint8_t x112 = 30U;
int64_t x114 = 777712104194275248LL;
static int64_t t29 = 104LL;
int32_t x130 = -19;
uint16_t x131 = UINT16_MAX;
int32_t t32 = -435952780;
volatile int8_t x135 = INT8_MIN;
static volatile uint32_t t34 = 43087222U;
volatile uint32_t x142 = 240125U;
uint8_t x146 = 62U;
static int16_t x161 = -773;
int16_t x168 = -71;
static volatile uint32_t t41 = 4884U;
uint32_t x169 = 1679588U;
static int64_t t43 = 58337951686887593LL;
volatile int64_t x178 = INT64_MIN;
int32_t x182 = 124711;
static int8_t x189 = INT8_MAX;
static int64_t x190 = INT64_MIN;
static int8_t x197 = -1;
int8_t x205 = INT8_MIN;
uint32_t x206 = 6569U;
volatile int64_t x213 = INT64_MAX;
uint64_t t55 = 507442694082LLU;
volatile uint32_t x235 = UINT32_MAX;
uint8_t x240 = UINT8_MAX;
volatile int64_t t58 = -2010LL;
volatile uint16_t x246 = UINT16_MAX;
int16_t x248 = INT16_MIN;
int32_t x249 = -1;
static uint64_t x253 = 16652235918LLU;
static int32_t x264 = INT32_MAX;
volatile uint64_t t63 = 4409946234189878894LLU;
int32_t x270 = INT32_MIN;
volatile int32_t t65 = 1161890;
volatile int16_t x273 = 1041;
uint16_t x276 = 71U;
int32_t x277 = INT32_MIN;
int32_t x283 = INT32_MIN;
int64_t x295 = INT64_MIN;
int64_t t71 = -11616403682LL;
static volatile int64_t x297 = 184LL;
int64_t t73 = -257851397LL;
volatile int8_t x307 = INT8_MIN;
static int16_t x317 = -108;
uint64_t t79 = 45702266482325LLU;
volatile int8_t x335 = 4;
volatile int64_t t81 = 5952LL;
uint16_t x340 = 102U;
int16_t x343 = INT16_MIN;
int8_t x345 = -21;
uint8_t x346 = UINT8_MAX;
int32_t x347 = INT32_MAX;
volatile int8_t x349 = 1;
uint64_t x354 = UINT64_MAX;
static uint64_t x357 = 16287232438069LLU;
int16_t x361 = INT16_MIN;
static volatile uint64_t x362 = 236LLU;
volatile uint64_t t88 = 757341484580LLU;
int64_t x397 = 144443646978LL;
uint64_t x400 = 2253420004629559LLU;
int16_t x406 = INT16_MIN;


void f0(void) {
	volatile int16_t x1 = INT16_MIN;
	uint16_t x3 = 10754U;
	int32_t t0 = -1586119;

	t0 = (x1%(x2^(x3|x4)));

	if (t0 != -137) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x6 = UINT16_MAX;
	volatile int8_t x7 = INT8_MIN;
	uint32_t t1 = 1212979U;

	t1 = (x5%(x6^(x7|x8)));

	if (t1 != 581U) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x10 = INT32_MAX;
	static uint32_t x11 = 2001U;
	static uint64_t t2 = 14398122LLU;

	t2 = (x9%(x10^(x11|x12)));

	if (t2 != 577743955LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -425180091008484LL;
	int64_t x14 = INT64_MIN;
	volatile int64_t x15 = INT64_MAX;
	uint8_t x16 = 2U;

	t3 = (x13%(x14^(x15|x16)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x17 = UINT16_MAX;
	int32_t x18 = 938;
	volatile uint8_t x19 = 1U;
	int8_t x20 = 5;
	volatile int32_t t4 = 288898;

	t4 = (x17%(x18^(x19|x20)));

	if (t4 != 468) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x22 = 1U;
	uint32_t x23 = 60163210U;
	int16_t x24 = INT16_MIN;
	static volatile uint32_t t5 = 43186U;

	t5 = (x21%(x22^(x23|x24)));

	if (t5 != 2147483648U) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x25 = INT32_MIN;
	uint16_t x27 = 708U;
	uint8_t x28 = 0U;
	static int32_t t6 = 1195;

	t6 = (x25%(x26^(x27|x28)));

	if (t6 != -548) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	volatile int32_t x30 = INT32_MIN;
	uint64_t t7 = 145LLU;

	t7 = (x29%(x30^(x31|x32)));

	if (t7 != 2LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	int32_t x34 = -1;
	volatile uint64_t x36 = 419078676576LLU;
	volatile uint64_t t8 = 3688339762LLU;

	t8 = (x33%(x34^(x35|x36)));

	if (t8 != 419078676607LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 163U;
	int64_t x39 = INT64_MIN;
	static int32_t x40 = INT32_MAX;
	volatile uint64_t t9 = 18947LLU;

	t9 = (x37%(x38^(x39|x40)));

	if (t9 != 163LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x43 = 28909037408LLU;
	int16_t x44 = -1;
	uint64_t t10 = 9091690949767762201LLU;

	t10 = (x41%(x42^(x43|x44)));

	if (t10 != 2372339486353LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 7U;
	uint64_t x48 = 39214755098342LLU;
	static volatile uint64_t t11 = 29772443833907LLU;

	t11 = (x45%(x46^(x47|x48)));

	if (t11 != 7LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	volatile uint32_t x50 = 0U;
	int16_t x51 = -1361;
	uint32_t x52 = UINT32_MAX;
	int64_t t12 = 1LL;

	t12 = (x49%(x50^(x51|x52)));

	if (t12 != -2147483648LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = 0;
	uint8_t x55 = UINT8_MAX;
	int8_t x56 = INT8_MIN;
	uint32_t t13 = 1U;

	t13 = (x53%(x54^(x55|x56)));

	if (t13 != 1646779053U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	int32_t x58 = -1;
	volatile int32_t x59 = INT32_MIN;
	static volatile int64_t t14 = 2129081438848LL;

	t14 = (x57%(x58^(x59|x60)));

	if (t14 != -128LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -2;
	static int16_t x62 = 1;
	uint16_t x63 = UINT16_MAX;
	int8_t x64 = INT8_MIN;

	t15 = (x61%(x62^(x63|x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x68 = 52077348;
	uint64_t t16 = 197204858500LLU;

	t16 = (x65%(x66^(x67|x68)));

	if (t16 != 2029171580235762LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = INT32_MIN;
	static int16_t x70 = INT16_MAX;
	int16_t x71 = 149;
	int64_t x72 = -45392373118LL;
	volatile int64_t t17 = -12950005750LL;

	t17 = (x69%(x70^(x71|x72)));

	if (t17 != -2147483648LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x74 = INT64_MAX;
	uint8_t x75 = UINT8_MAX;

	t18 = (x73%(x74^(x75|x76)));

	if (t18 != -32512LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = 18;
	int32_t x78 = INT32_MIN;
	static uint16_t x79 = UINT16_MAX;
	int32_t t19 = -5424921;

	t19 = (x77%(x78^(x79|x80)));

	if (t19 != 18) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -24818321LL;
	int16_t x82 = INT16_MIN;
	int8_t x83 = -1;
	uint32_t x84 = UINT32_MAX;
	volatile int64_t t20 = -241LL;

	t20 = (x81%(x82^(x83|x84)));

	if (t20 != -13702LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x85 = -1;
	int8_t x86 = INT8_MIN;
	int8_t x87 = INT8_MIN;
	uint64_t x88 = 12LLU;
	static uint64_t t21 = 17LLU;

	t21 = (x85%(x86^(x87|x88)));

	if (t21 != 3LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x89 = INT64_MIN;
	static volatile uint64_t x90 = 204228LLU;
	uint16_t x91 = UINT16_MAX;
	static uint64_t x92 = UINT64_MAX;

	t22 = (x89%(x90^(x91|x92)));

	if (t22 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x93 = -1LL;
	int32_t x94 = INT32_MAX;
	int64_t x95 = INT64_MIN;
	int64_t t23 = -1LL;

	t23 = (x93%(x94^(x95|x96)));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 115U;
	volatile int8_t x98 = INT8_MIN;
	static volatile uint8_t x100 = 1U;

	t24 = (x97%(x98^(x99|x100)));

	if (t24 != 115) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 2U;
	volatile uint64_t x103 = UINT64_MAX;
	static volatile uint8_t x104 = 7U;
	volatile uint64_t t25 = 4540LLU;

	t25 = (x101%(x102^(x103|x104)));

	if (t25 != 2LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = 449;
	int8_t x107 = 1;
	uint8_t x108 = 1U;
	volatile int32_t t26 = -72441;

	t26 = (x105%(x106^(x107|x108)));

	if (t26 != 449) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x110 = 287070511;
	static volatile int32_t t27 = -203377470;

	t27 = (x109%(x110^(x111|x112)));

	if (t27 != 63) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -3686;
	static uint32_t x115 = UINT32_MAX;
	int16_t x116 = -1;
	volatile int64_t t28 = 29450657020LL;

	t28 = (x113%(x114^(x115|x116)));

	if (t28 != -3686LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = -160LL;
	static int32_t x118 = -2030;
	int8_t x119 = 26;
	volatile int8_t x120 = -7;

	t29 = (x117%(x118^(x119|x120)));

	if (t29 != -160LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MIN;
	int64_t x122 = INT64_MIN;
	static int64_t x123 = INT64_MIN;
	int32_t x124 = INT32_MAX;
	volatile int64_t t30 = 3LL;

	t30 = (x121%(x122^(x123|x124)));

	if (t30 != -2LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MAX;
	static int16_t x126 = INT16_MAX;
	int32_t x127 = -1;
	volatile uint64_t x128 = 8490LLU;
	volatile uint64_t t31 = 19720598LLU;

	t31 = (x125%(x126^(x127|x128)));

	if (t31 != 127LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MIN;
	int8_t x132 = 1;

	t32 = (x129%(x130^(x131|x132)));

	if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MAX;
	int8_t x134 = 3;
	uint64_t x136 = UINT64_MAX;
	volatile uint64_t t33 = 339954316LLU;

	t33 = (x133%(x134^(x135|x136)));

	if (t33 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = 259727;
	uint32_t x138 = 33753360U;
	int16_t x139 = -1;
	int16_t x140 = INT16_MIN;

	t34 = (x137%(x138^(x139|x140)));

	if (t34 != 259727U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -27;
	static int64_t x143 = 756397430468880737LL;
	int32_t x144 = INT32_MAX;
	int64_t t35 = 5LL;

	t35 = (x141%(x142^(x143|x144)));

	if (t35 != -27LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x145 = 357U;
	static uint64_t x147 = 117291530335497829LLU;
	volatile uint64_t x148 = 4LLU;
	uint64_t t36 = 295873070673790545LLU;

	t36 = (x145%(x146^(x147|x148)));

	if (t36 != 357LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x149 = 896601274U;
	uint64_t x150 = UINT64_MAX;
	uint32_t x151 = UINT32_MAX;
	uint16_t x152 = 4057U;
	static volatile uint64_t t37 = 41029990927LLU;

	t37 = (x149%(x150^(x151|x152)));

	if (t37 != 896601274LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 12331U;
	int8_t x154 = 7;
	int64_t x155 = INT64_MIN;
	int8_t x156 = INT8_MIN;
	volatile int64_t t38 = 65774104029LL;

	t38 = (x153%(x154^(x155|x156)));

	if (t38 != 110LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x157 = INT8_MAX;
	int32_t x158 = -4390813;
	static int16_t x159 = 9;
	static volatile uint8_t x160 = UINT8_MAX;
	volatile int32_t t39 = 72552;

	t39 = (x157%(x158^(x159|x160)));

	if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x162 = INT32_MAX;
	int32_t x163 = -1;
	static int64_t x164 = INT64_MIN;
	volatile int64_t t40 = -5340132882885551LL;

	t40 = (x161%(x162^(x163|x164)));

	if (t40 != -773LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	uint32_t x166 = UINT32_MAX;
	uint8_t x167 = 4U;

	t41 = (x165%(x166^(x167|x168)));

	if (t41 != 38U) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x170 = -1LL;
	int8_t x171 = 25;
	static int64_t x172 = 1279446LL;
	volatile int64_t t42 = 0LL;

	t42 = (x169%(x170^(x171|x172)));

	if (t42 != 400132LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MAX;
	int32_t x174 = INT32_MAX;
	int64_t x175 = -12LL;
	uint32_t x176 = 101U;

	t43 = (x173%(x174^(x175|x176)));

	if (t43 != 32767LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = UINT64_MAX;
	uint32_t x179 = 20571792U;
	int32_t x180 = INT32_MAX;
	volatile uint64_t t44 = 12136117LLU;

	t44 = (x177%(x178^(x179|x180)));

	if (t44 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = UINT16_MAX;
	int8_t x183 = 3;
	int64_t x184 = INT64_MIN;
	static int64_t t45 = -42156877515LL;

	t45 = (x181%(x182^(x183|x184)));

	if (t45 != 65535LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 3U;
	uint8_t x186 = UINT8_MAX;
	volatile uint64_t x187 = 175761913LLU;
	int64_t x188 = -1LL;
	uint64_t t46 = 3513039357049572LLU;

	t46 = (x185%(x186^(x187|x188)));

	if (t46 != 3LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x191 = UINT64_MAX;
	int16_t x192 = -1;
	uint64_t t47 = 1832032110LLU;

	t47 = (x189%(x190^(x191|x192)));

	if (t47 != 127LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x198 = 192;
	int32_t x199 = -1;
	static int32_t x200 = INT32_MIN;
	int32_t t48 = 9453;

	t48 = (x197%(x198^(x199|x200)));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x201 = -1;
	uint32_t x202 = 11647614U;
	uint64_t x203 = 193092563383943LLU;
	static volatile int16_t x204 = INT16_MIN;
	volatile uint64_t t49 = 328784849276134LLU;

	t49 = (x201%(x202^(x203|x204)));

	if (t49 != 11662086LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x207 = 1;
	uint8_t x208 = 8U;
	uint32_t t50 = 3U;

	t50 = (x205%(x206^(x207|x208)));

	if (t50 != 3968U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x209 = -1LL;
	static uint64_t x210 = 50LLU;
	int8_t x211 = -1;
	int16_t x212 = 1;
	static volatile uint64_t t51 = 70004LLU;

	t51 = (x209%(x210^(x211|x212)));

	if (t51 != 50LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x214 = INT16_MAX;
	int16_t x215 = -2908;
	int32_t x216 = INT32_MIN;
	int64_t t52 = 177268582515347928LL;

	t52 = (x213%(x214^(x215|x216)));

	if (t52 != 1567LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x217 = -1LL;
	static int64_t x218 = -122029825LL;
	volatile int16_t x219 = -64;
	static uint64_t x220 = 10089561861LLU;
	uint64_t t53 = 738496866435LLU;

	t53 = (x217%(x218^(x219|x220)));

	if (t53 != 18240757LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x221 = 2186U;
	int64_t x222 = INT64_MIN;
	int32_t x223 = INT32_MIN;
	int64_t x224 = -1LL;
	volatile int64_t t54 = 29LL;

	t54 = (x221%(x222^(x223|x224)));

	if (t54 != 2186LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x225 = -1;
	int64_t x226 = 23012276556464LL;
	int32_t x227 = INT32_MIN;
	uint64_t x228 = 484362921721883408LLU;

	t55 = (x225%(x226^(x227|x228)));

	if (t55 != 23011813246559LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x229 = 854253U;
	int32_t x230 = INT32_MIN;
	int32_t x231 = -1;
	int16_t x232 = -1;
	volatile uint32_t t56 = 1U;

	t56 = (x229%(x230^(x231|x232)));

	if (t56 != 854253U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x233 = 6044;
	volatile int8_t x234 = 0;
	volatile int64_t x236 = -1LL;
	volatile int64_t t57 = 197LL;

	t57 = (x233%(x234^(x235|x236)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x237 = -36635964LL;
	volatile uint32_t x238 = 520393244U;
	uint32_t x239 = 1064550U;

	t58 = (x237%(x238^(x239|x240)));

	if (t58 != -36635964LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x245 = 0;
	volatile uint32_t x247 = 3U;
	volatile uint32_t t59 = 938169426U;

	t59 = (x245%(x246^(x247|x248)));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x250 = 11;
	int8_t x251 = -1;
	int32_t x252 = INT32_MIN;
	int32_t t60 = 7;

	t60 = (x249%(x250^(x251|x252)));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x254 = UINT8_MAX;
	int16_t x255 = -1;
	int8_t x256 = INT8_MIN;
	volatile uint64_t t61 = 11LLU;

	t61 = (x253%(x254^(x255|x256)));

	if (t61 != 16652235918LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x257 = INT16_MAX;
	volatile int8_t x258 = 26;
	int64_t x259 = -40500229931LL;
	uint32_t x260 = 0U;
	static volatile int64_t t62 = 3090519576LL;

	t62 = (x257%(x258^(x259|x260)));

	if (t62 != 32767LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x261 = INT32_MIN;
	static int32_t x262 = -1;
	uint64_t x263 = 1311LLU;

	t63 = (x261%(x262^(x263|x264)));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x265 = 72U;
	int16_t x266 = -1;
	volatile int32_t x267 = -233;
	int32_t x268 = -50537703;
	uint32_t t64 = 4784U;

	t64 = (x265%(x266^(x267|x268)));

	if (t64 != 72U) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint16_t x269 = 3U;
	static uint8_t x271 = UINT8_MAX;
	int32_t x272 = -1;

	t65 = (x269%(x270^(x271|x272)));

	if (t65 != 3) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x274 = INT32_MIN;
	static int8_t x275 = -1;
	volatile int32_t t66 = -11191652;

	t66 = (x273%(x274^(x275|x276)));

	if (t66 != 1041) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x278 = INT64_MAX;
	uint16_t x279 = UINT16_MAX;
	volatile int8_t x280 = INT8_MIN;
	int64_t t67 = 3659086082802101017LL;

	t67 = (x277%(x278^(x279|x280)));

	if (t67 != -2147483648LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x281 = INT32_MIN;
	int8_t x282 = -16;
	volatile int64_t x284 = INT64_MIN;
	static volatile int64_t t68 = 25564LL;

	t68 = (x281%(x282^(x283|x284)));

	if (t68 != -16LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x285 = 7U;
	volatile int8_t x286 = 6;
	int32_t x287 = INT32_MAX;
	int64_t x288 = INT64_MIN;
	volatile int64_t t69 = 4064330270570LL;

	t69 = (x285%(x286^(x287|x288)));

	if (t69 != 7LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x289 = UINT16_MAX;
	static uint8_t x290 = UINT8_MAX;
	static volatile int32_t x291 = INT32_MAX;
	uint64_t x292 = 104773027LLU;
	volatile uint64_t t70 = 90LLU;

	t70 = (x289%(x290^(x291|x292)));

	if (t70 != 65535LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x293 = UINT8_MAX;
	int8_t x294 = INT8_MIN;
	uint32_t x296 = 8089U;

	t71 = (x293%(x294^(x295|x296)));

	if (t71 != 255LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x298 = UINT16_MAX;
	static int16_t x299 = INT16_MIN;
	volatile uint64_t x300 = UINT64_MAX;
	static volatile uint64_t t72 = 880744490230638LLU;

	t72 = (x297%(x298^(x299|x300)));

	if (t72 != 184LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x301 = 1;
	int16_t x302 = INT16_MIN;
	static volatile int32_t x303 = INT32_MIN;
	int64_t x304 = INT64_MIN;

	t73 = (x301%(x302^(x303|x304)));

	if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x305 = 3272LLU;
	int8_t x306 = -1;
	static int16_t x308 = INT16_MIN;
	volatile uint64_t t74 = 62527555LLU;

	t74 = (x305%(x306^(x307|x308)));

	if (t74 != 97LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x309 = UINT64_MAX;
	int16_t x310 = INT16_MIN;
	int8_t x311 = -9;
	uint32_t x312 = 4U;
	volatile uint64_t t75 = 22767LLU;

	t75 = (x309%(x310^(x311|x312)));

	if (t75 != 6698LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x313 = UINT16_MAX;
	int8_t x314 = INT8_MIN;
	uint8_t x315 = UINT8_MAX;
	int64_t x316 = INT64_MIN;
	volatile int64_t t76 = -335LL;

	t76 = (x313%(x314^(x315|x316)));

	if (t76 != 65535LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x318 = 1736472;
	int64_t x319 = INT64_MIN;
	int64_t x320 = INT64_MIN;
	int64_t t77 = 1806537260752426LL;

	t77 = (x317%(x318^(x319|x320)));

	if (t77 != -108LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x321 = -7;
	int32_t x322 = INT32_MIN;
	static int32_t x323 = -187201336;
	int64_t x324 = INT64_MAX;
	volatile int64_t t78 = 2280577923802314260LL;

	t78 = (x321%(x322^(x323|x324)));

	if (t78 != -7LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x325 = 78U;
	uint64_t x326 = UINT64_MAX;
	static uint8_t x327 = 1U;
	uint64_t x328 = 6210LLU;

	t79 = (x325%(x326^(x327|x328)));

	if (t79 != 78LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x329 = -428782363LL;
	int32_t x330 = INT32_MAX;
	int64_t x331 = -89442LL;
	int64_t x332 = INT64_MAX;
	int64_t t80 = 34633725855802LL;

	t80 = (x329%(x330^(x331|x332)));

	if (t80 != -428782363LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x333 = UINT16_MAX;
	int64_t x334 = INT64_MAX;
	int16_t x336 = INT16_MIN;

	t81 = (x333%(x334^(x335|x336)));

	if (t81 != 65535LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x337 = INT16_MIN;
	int32_t x338 = INT32_MAX;
	static uint32_t x339 = 1U;
	volatile uint32_t t82 = 23246381U;

	t82 = (x337%(x338^(x339|x340)));

	if (t82 != 2147450984U) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x341 = INT64_MAX;
	int16_t x342 = INT16_MIN;
	uint32_t x344 = 837292642U;
	int64_t t83 = 984085160617062840LL;

	t83 = (x341%(x342^(x343|x344)));

	if (t83 != 2555LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x348 = INT32_MIN;
	volatile int32_t t84 = 47168211;

	t84 = (x345%(x346^(x347|x348)));

	if (t84 != -21) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x350 = INT64_MIN;
	static int32_t x351 = INT32_MIN;
	int32_t x352 = 16255;
	volatile int64_t t85 = -425227940226LL;

	t85 = (x349%(x350^(x351|x352)));

	if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x353 = -1;
	int32_t x355 = INT32_MAX;
	static uint32_t x356 = UINT32_MAX;
	static uint64_t t86 = 1024395LLU;

	t86 = (x353%(x354^(x355|x356)));

	if (t86 != 4294967295LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x358 = 44650515539662661LLU;
	uint8_t x359 = 0U;
	volatile int8_t x360 = 41;
	uint64_t t87 = 4246558421214654LLU;

	t87 = (x357%(x358^(x359|x360)));

	if (t87 != 16287232438069LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x363 = -1;
	int32_t x364 = INT32_MIN;

	t88 = (x361%(x362^(x363|x364)));

	if (t88 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x365 = -1838336924243741740LL;
	int16_t x366 = INT16_MIN;
	int8_t x367 = INT8_MAX;
	static volatile int8_t x368 = INT8_MAX;
	volatile int64_t t89 = -8913683465570LL;

	t89 = (x365%(x366^(x367|x368)));

	if (t89 != -6496LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x369 = -150LL;
	static uint32_t x370 = 291695U;
	int8_t x371 = INT8_MIN;
	int64_t x372 = INT64_MIN;
	int64_t t90 = 110LL;

	t90 = (x369%(x370^(x371|x372)));

	if (t90 != -150LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint8_t x373 = UINT8_MAX;
	volatile uint64_t x374 = UINT64_MAX;
	static int32_t x375 = 1159628;
	uint64_t x376 = 852480LLU;
	uint64_t t91 = 254LLU;

	t91 = (x373%(x374^(x375|x376)));

	if (t91 != 255LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x377 = INT8_MIN;
	uint32_t x378 = 1348U;
	int8_t x379 = INT8_MIN;
	static int16_t x380 = 378;
	volatile uint32_t t92 = 15U;

	t92 = (x377%(x378^(x379|x380)));

	if (t92 != 1218U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x381 = 17LL;
	uint64_t x382 = 231882577832LLU;
	uint32_t x383 = UINT32_MAX;
	uint32_t x384 = UINT32_MAX;
	static volatile uint64_t t93 = 83607689215156LLU;

	t93 = (x381%(x382^(x383|x384)));

	if (t93 != 17LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x385 = -1;
	volatile uint8_t x386 = 3U;
	int32_t x387 = INT32_MIN;
	static int16_t x388 = INT16_MAX;
	volatile int32_t t94 = -1223;

	t94 = (x385%(x386^(x387|x388)));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x389 = -1LL;
	int16_t x390 = -2;
	static volatile int16_t x391 = 0;
	volatile int8_t x392 = -4;
	volatile int64_t t95 = -29LL;

	t95 = (x389%(x390^(x391|x392)));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x393 = 7U;
	volatile int32_t x394 = INT32_MAX;
	int64_t x395 = -40LL;
	int64_t x396 = INT64_MAX;
	int64_t t96 = -4080648LL;

	t96 = (x393%(x394^(x395|x396)));

	if (t96 != 7LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x398 = INT32_MAX;
	int16_t x399 = INT16_MIN;
	volatile uint64_t t97 = 763848749845910LLU;

	t97 = (x397%(x398^(x399|x400)));

	if (t97 != 144443646978LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x401 = 75U;
	static uint64_t x402 = 2001LLU;
	static volatile int8_t x403 = INT8_MIN;
	uint16_t x404 = 4681U;
	volatile uint64_t t98 = 11202380786LLU;

	t98 = (x401%(x402^(x403|x404)));

	if (t98 != 75LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x405 = 2447LLU;
	uint8_t x407 = 93U;
	uint32_t x408 = UINT32_MAX;
	volatile uint64_t t99 = 42681LLU;

	t99 = (x405%(x406^(x407|x408)));

	if (t99 != 2447LLU) { NG(); } else { ; }
	
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

