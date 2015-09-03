#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x8 = 2718021864198795232LLU;
uint8_t x11 = UINT8_MAX;
static int8_t x18 = INT8_MIN;
int8_t x19 = -37;
volatile int64_t t7 = -1675018759010867807LL;
uint64_t x36 = 141124100LLU;
int16_t x37 = -1;
static int8_t x40 = INT8_MAX;
int16_t x41 = -1;
int64_t x43 = -4343777185122763554LL;
static int16_t x45 = INT16_MAX;
volatile uint32_t x54 = 89762279U;
volatile int16_t x59 = INT16_MIN;
int32_t x60 = INT32_MAX;
uint8_t x62 = UINT8_MAX;
int32_t x66 = INT32_MIN;
int32_t x73 = INT32_MAX;
static uint8_t x74 = 3U;
volatile uint32_t x84 = 12624384U;
int32_t x91 = INT32_MAX;
volatile int32_t t22 = 17;
int64_t t25 = 286591956369112LL;
int16_t x112 = INT16_MIN;
uint64_t x116 = UINT64_MAX;
uint32_t x128 = UINT32_MAX;
int64_t t31 = 1974132876485551LL;
int8_t x129 = -1;
int16_t x133 = INT16_MAX;
uint16_t x134 = UINT16_MAX;
int16_t x135 = -1;
int64_t x148 = INT64_MIN;
uint8_t x153 = 4U;
static uint16_t x155 = 14016U;
uint64_t x158 = 32987147886LLU;
int8_t x159 = INT8_MIN;
int64_t x165 = INT64_MIN;
int8_t x168 = 12;
int64_t x170 = 3239452386844554LL;
int64_t t41 = 1843044LL;
int8_t x182 = INT8_MIN;
static volatile uint32_t x183 = 1U;
int32_t x184 = 38560;
uint64_t x185 = 84542955450505159LLU;
int64_t x186 = INT64_MIN;
int64_t t46 = 1815LL;
int32_t x196 = INT32_MAX;
int16_t x197 = INT16_MIN;
int32_t x205 = INT32_MAX;
uint32_t x206 = 2U;
uint32_t x207 = UINT32_MAX;
int64_t x208 = INT64_MAX;
volatile int32_t x224 = -819719460;
volatile uint64_t x227 = 790952LLU;
uint32_t t56 = 1699U;
int64_t x238 = INT64_MIN;
uint64_t t58 = UINT64_MAX;
int8_t x244 = INT8_MAX;
int32_t x248 = -464;
uint16_t x253 = 15307U;
uint32_t x267 = 123937U;
int32_t x271 = INT32_MIN;
uint64_t x273 = 181969431007LLU;
uint16_t x275 = UINT16_MAX;
int64_t x287 = INT64_MIN;
int16_t x288 = INT16_MIN;
uint64_t x292 = 412LLU;
static uint64_t x296 = 1123270286LLU;
int16_t x306 = -12;
int32_t t74 = 874954120;
int32_t x323 = -1;
volatile int64_t t77 = 1619LL;
uint32_t t78 = 2340735U;
volatile int16_t x329 = INT16_MAX;
volatile int32_t x331 = INT32_MIN;
int32_t x336 = INT32_MIN;
volatile uint64_t x340 = UINT64_MAX;
int8_t x347 = -1;
int64_t t83 = 542500LL;
uint64_t x362 = 268091LLU;
uint64_t x364 = UINT64_MAX;
int16_t x369 = INT16_MIN;
uint16_t x374 = UINT16_MAX;
int64_t x376 = INT64_MIN;
uint16_t x378 = 111U;
int8_t x387 = INT8_MIN;
int32_t x390 = 4192;
uint8_t x396 = UINT8_MAX;
int16_t x398 = INT16_MAX;
int64_t x400 = -5260984356642LL;
static volatile int16_t x405 = -36;


void f0(void) {
	static uint8_t x1 = 3U;
	int8_t x2 = -3;
	static int32_t x3 = INT32_MIN;
	uint16_t x4 = 1U;
	volatile int32_t t0 = -409132;

	t0 = (x1|((x2|x3)/x4));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	uint16_t x6 = 15U;
	int64_t x7 = INT64_MAX;
	volatile uint64_t t1 = 96267936LLU;

	t1 = (x5|((x6|x7)/x8));

	if (t1 != 18446744073709551491LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = 0U;
	int64_t x10 = INT64_MAX;
	static int64_t x12 = 2344239748536595038LL;
	volatile int64_t t2 = 0LL;

	t2 = (x9|((x10|x11)/x12));

	if (t2 != 3LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	static volatile int32_t x14 = -29885780;
	uint8_t x15 = 1U;
	int32_t x16 = INT32_MAX;
	int32_t t3 = 416450749;

	t3 = (x13|((x14|x15)/x16));

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint8_t x17 = 15U;
	uint16_t x20 = 7U;
	volatile int32_t t4 = 1;

	t4 = (x17|((x18|x19)/x20));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	uint32_t x22 = UINT32_MAX;
	static volatile int32_t x23 = -1;
	int32_t x24 = INT32_MIN;
	uint32_t t5 = 222U;

	t5 = (x21|((x22|x23)/x24));

	if (t5 != 2147483647U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	int8_t x26 = -1;
	int16_t x27 = 3;
	uint64_t x28 = UINT64_MAX;
	uint64_t t6 = 37479LLU;

	t6 = (x25|((x26|x27)/x28));

	if (t6 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = INT8_MIN;
	volatile int32_t x30 = INT32_MIN;
	int32_t x31 = INT32_MIN;
	static int64_t x32 = INT64_MAX;

	t7 = (x29|((x30|x31)/x32));

	if (t7 != -128LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = -15021309LL;
	int32_t x34 = INT32_MAX;
	uint64_t x35 = UINT64_MAX;
	uint64_t t8 = 829153LLU;

	t8 = (x33|((x34|x35)/x36));

	if (t8 != 18446744073694542623LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = INT16_MIN;
	int64_t x39 = INT64_MIN;
	int64_t t9 = 130021229770LL;

	t9 = (x37|((x38|x39)/x40));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x42 = 3U;
	uint32_t x44 = UINT32_MAX;
	int64_t t10 = -284LL;

	t10 = (x41|((x42|x43)/x44));

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = -1;
	uint64_t x47 = 3266LLU;
	uint64_t x48 = UINT64_MAX;
	volatile uint64_t t11 = 1693165345017LLU;

	t11 = (x45|((x46|x47)/x48));

	if (t11 != 32767LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = INT16_MIN;
	int16_t x50 = INT16_MAX;
	volatile int16_t x51 = 0;
	volatile int64_t x52 = -35504401129040258LL;
	static volatile int64_t t12 = -18848073LL;

	t12 = (x49|((x50|x51)/x52));

	if (t12 != -32768LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	static int16_t x55 = INT16_MAX;
	int16_t x56 = 1;
	static volatile uint32_t t13 = UINT32_MAX;

	t13 = (x53|((x54|x55)/x56));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = UINT16_MAX;
	static int16_t x58 = INT16_MIN;
	volatile int32_t t14 = -161537;

	t14 = (x57|((x58|x59)/x60));

	if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = INT16_MIN;
	int32_t x63 = -1;
	volatile int32_t x64 = -159;
	int32_t t15 = -160862;

	t15 = (x61|((x62|x63)/x64));

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = UINT8_MAX;
	uint64_t x67 = 2425391788LLU;
	int64_t x68 = INT64_MAX;
	volatile uint64_t t16 = 842653606795LLU;

	t16 = (x65|((x66|x67)/x68));

	if (t16 != 255LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 3LLU;
	int8_t x70 = INT8_MIN;
	static int8_t x71 = INT8_MAX;
	uint64_t x72 = UINT64_MAX;
	uint64_t t17 = 1515236444365LLU;

	t17 = (x69|((x70|x71)/x72));

	if (t17 != 3LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x75 = INT8_MIN;
	int16_t x76 = INT16_MAX;
	volatile int32_t t18 = INT32_MAX;

	t18 = (x73|((x74|x75)/x76));

	if (t18 != INT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 12097610U;
	static int32_t x78 = 613252344;
	int64_t x79 = INT64_MIN;
	static int32_t x80 = INT32_MIN;
	static volatile int64_t t19 = 1464710824240LL;

	t19 = (x77|((x78|x79)/x80));

	if (t19 != 4294967295LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = INT64_MIN;
	uint64_t x82 = UINT64_MAX;
	int16_t x83 = INT16_MAX;
	uint64_t t20 = 23653LLU;

	t20 = (x81|((x82|x83)/x84));

	if (t20 != 9223373498054314233LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MAX;
	volatile int8_t x86 = INT8_MIN;
	static int64_t x87 = -1LL;
	volatile int64_t x88 = INT64_MIN;
	static int64_t t21 = -230847952964LL;

	t21 = (x85|((x86|x87)/x88));

	if (t21 != 2147483647LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = 132201468;
	int8_t x90 = -1;
	int32_t x92 = -200;

	t22 = (x89|((x90|x91)/x92));

	if (t22 != 132201468) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 1659524076LLU;
	static int8_t x94 = -13;
	uint16_t x95 = 8689U;
	int32_t x96 = INT32_MIN;
	volatile uint64_t t23 = 3884LLU;

	t23 = (x93|((x94|x95)/x96));

	if (t23 != 1659524076LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MAX;
	uint32_t x98 = 10U;
	static uint8_t x99 = 1U;
	uint16_t x100 = UINT16_MAX;
	static int64_t t24 = INT64_MAX;

	t24 = (x97|((x98|x99)/x100));

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -10836;
	static int32_t x102 = INT32_MIN;
	int64_t x103 = -2245089LL;
	int64_t x104 = 1948LL;

	t25 = (x101|((x102|x103)/x104));

	if (t25 != -84LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 19U;
	int32_t x106 = INT32_MIN;
	int64_t x107 = INT64_MIN;
	int64_t x108 = INT64_MIN;
	int64_t t26 = 19706671936266LL;

	t26 = (x105|((x106|x107)/x108));

	if (t26 != 19LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x109 = 278263LLU;
	volatile uint8_t x110 = 81U;
	int8_t x111 = INT8_MAX;
	static volatile uint64_t t27 = 55066011LLU;

	t27 = (x109|((x110|x111)/x112));

	if (t27 != 278263LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint32_t x113 = UINT32_MAX;
	int32_t x114 = 4026565;
	uint16_t x115 = 388U;
	volatile uint64_t t28 = 27315809058648089LLU;

	t28 = (x113|((x114|x115)/x116));

	if (t28 != 4294967295LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = UINT16_MAX;
	static int64_t x118 = INT64_MIN;
	int16_t x119 = INT16_MAX;
	volatile int32_t x120 = -11197;
	volatile int64_t t29 = -1LL;

	t29 = (x117|((x118|x119)/x120));

	if (t29 != 823736004050943LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	int32_t x122 = -1;
	volatile int64_t x123 = INT64_MIN;
	static volatile int8_t x124 = INT8_MIN;
	int64_t t30 = 53678980983476272LL;

	t30 = (x121|((x122|x123)/x124));

	if (t30 != -2147483648LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	int32_t x126 = INT32_MAX;
	int64_t x127 = INT64_MIN;

	t31 = (x125|((x126|x127)/x128));

	if (t31 != -128LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x130 = -6727;
	uint16_t x131 = 238U;
	static int8_t x132 = INT8_MIN;
	volatile int32_t t32 = -25403716;

	t32 = (x129|((x130|x131)/x132));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x136 = INT8_MAX;
	int32_t t33 = -2;

	t33 = (x133|((x134|x135)/x136));

	if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = INT32_MAX;
	int8_t x142 = 4;
	int8_t x143 = INT8_MIN;
	int32_t x144 = -274830214;
	volatile int32_t t34 = INT32_MAX;

	t34 = (x141|((x142|x143)/x144));

	if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = -1;
	int8_t x146 = -1;
	uint32_t x147 = 86U;
	int64_t t35 = 239219877725417LL;

	t35 = (x145|((x146|x147)/x148));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x149 = 537299738410LLU;
	int8_t x150 = -2;
	int16_t x151 = INT16_MIN;
	volatile int64_t x152 = 337214623522286351LL;
	volatile uint64_t t36 = 1289LLU;

	t36 = (x149|((x150|x151)/x152));

	if (t36 != 537299738410LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x154 = 2U;
	uint64_t x156 = UINT64_MAX;
	uint64_t t37 = 3289593584269001500LLU;

	t37 = (x153|((x154|x155)/x156));

	if (t37 != 4LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = INT32_MIN;
	uint32_t x160 = UINT32_MAX;
	static uint64_t t38 = 38397418567344LLU;

	t38 = (x157|((x158|x159)/x160));

	if (t38 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x161 = 10307469U;
	static int32_t x162 = INT32_MAX;
	int16_t x163 = INT16_MIN;
	volatile uint32_t x164 = 71852U;
	volatile uint32_t t39 = 0U;

	t39 = (x161|((x162|x163)/x164));

	if (t39 != 10350591U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x166 = 3LL;
	static int32_t x167 = -1;
	volatile int64_t t40 = INT64_MIN;

	t40 = (x165|((x166|x167)/x168));

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x169 = 463315227U;
	static int8_t x171 = -56;
	int64_t x172 = INT64_MIN;

	t41 = (x169|((x170|x171)/x172));

	if (t41 != 463315227LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x173 = -1;
	static uint32_t x174 = 232371810U;
	int32_t x175 = INT32_MAX;
	uint64_t x176 = 460966119LLU;
	static uint64_t t42 = UINT64_MAX;

	t42 = (x173|((x174|x175)/x176));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x177 = INT8_MIN;
	static uint8_t x178 = 35U;
	uint16_t x179 = 23952U;
	uint64_t x180 = UINT64_MAX;
	static volatile uint64_t t43 = 3985896843LLU;

	t43 = (x177|((x178|x179)/x180));

	if (t43 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x181 = INT16_MAX;
	uint32_t t44 = 328247680U;

	t44 = (x181|((x182|x183)/x184));

	if (t44 != 131071U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x187 = 17U;
	int32_t x188 = -1;
	volatile uint64_t t45 = 26762007LLU;

	t45 = (x185|((x186|x187)/x188));

	if (t45 != 9223372036854775791LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x189 = 11U;
	int64_t x190 = -1LL;
	uint8_t x191 = 32U;
	uint16_t x192 = 8U;

	t46 = (x189|((x190|x191)/x192));

	if (t46 != 11LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x193 = 31760447LL;
	static volatile int16_t x194 = -1;
	static uint8_t x195 = 6U;
	volatile int64_t t47 = 106LL;

	t47 = (x193|((x194|x195)/x196));

	if (t47 != 31760447LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x198 = 3323347;
	uint64_t x199 = UINT64_MAX;
	volatile uint16_t x200 = UINT16_MAX;
	uint64_t t48 = 32694233618069806LLU;

	t48 = (x197|((x198|x199)/x200));

	if (t48 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x201 = 1U;
	int64_t x202 = INT64_MIN;
	static volatile uint32_t x203 = 1122766U;
	int64_t x204 = INT64_MIN;
	int64_t t49 = 204445567972550474LL;

	t49 = (x201|((x202|x203)/x204));

	if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t t50 = 4447040358522LL;

	t50 = (x205|((x206|x207)/x208));

	if (t50 != 2147483647LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x209 = UINT16_MAX;
	int64_t x210 = -1LL;
	uint32_t x211 = UINT32_MAX;
	static uint32_t x212 = UINT32_MAX;
	int64_t t51 = 15799577227LL;

	t51 = (x209|((x210|x211)/x212));

	if (t51 != 65535LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x213 = UINT32_MAX;
	int16_t x214 = INT16_MIN;
	uint16_t x215 = UINT16_MAX;
	static volatile int32_t x216 = INT32_MIN;
	volatile uint32_t t52 = UINT32_MAX;

	t52 = (x213|((x214|x215)/x216));

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x217 = UINT8_MAX;
	volatile uint32_t x218 = UINT32_MAX;
	int32_t x219 = INT32_MIN;
	int64_t x220 = INT64_MIN;
	volatile int64_t t53 = -109673LL;

	t53 = (x217|((x218|x219)/x220));

	if (t53 != 255LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x221 = UINT16_MAX;
	uint32_t x222 = UINT32_MAX;
	int32_t x223 = -227391834;
	volatile uint32_t t54 = 1U;

	t54 = (x221|((x222|x223)/x224));

	if (t54 != 65535U) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x225 = -7;
	static int32_t x226 = -9498;
	int32_t x228 = INT32_MIN;
	volatile uint64_t t55 = 532479LLU;

	t55 = (x225|((x226|x227)/x228));

	if (t55 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x229 = INT8_MIN;
	volatile uint32_t x230 = 2820054U;
	int8_t x231 = INT8_MIN;
	volatile int16_t x232 = -1;

	t56 = (x229|((x230|x231)/x232));

	if (t56 != 4294967168U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x233 = 54021380LLU;
	int64_t x234 = INT64_MAX;
	int64_t x235 = -14496460228299LL;
	int64_t x236 = INT64_MIN;
	volatile uint64_t t57 = 14953470LLU;

	t57 = (x233|((x234|x235)/x236));

	if (t57 != 54021380LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x237 = UINT64_MAX;
	int64_t x239 = INT64_MIN;
	volatile int8_t x240 = INT8_MAX;

	t58 = (x237|((x238|x239)/x240));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x241 = INT8_MAX;
	static uint32_t x242 = 7U;
	int8_t x243 = INT8_MIN;
	uint32_t t59 = 52U;

	t59 = (x241|((x242|x243)/x244));

	if (t59 != 33818751U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x245 = INT64_MIN;
	static int64_t x246 = INT64_MIN;
	uint64_t x247 = UINT64_MAX;
	volatile uint64_t t60 = 102946243875LLU;

	t60 = (x245|((x246|x247)/x248));

	if (t60 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x249 = -1;
	int32_t x250 = INT32_MIN;
	uint16_t x251 = 6041U;
	static uint64_t x252 = 7047068134149703091LLU;
	static volatile uint64_t t61 = UINT64_MAX;

	t61 = (x249|((x250|x251)/x252));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x254 = INT8_MAX;
	int32_t x255 = -5332;
	int32_t x256 = INT32_MIN;
	int32_t t62 = 123;

	t62 = (x253|((x254|x255)/x256));

	if (t62 != 15307) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x257 = -3167;
	static int64_t x258 = INT64_MIN;
	uint64_t x259 = 2248LLU;
	uint16_t x260 = 102U;
	uint64_t t63 = 1883722LLU;

	t63 = (x257|((x258|x259)/x260));

	if (t63 != 18446744073709548535LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x261 = -4;
	int16_t x262 = INT16_MIN;
	static uint16_t x263 = UINT16_MAX;
	static uint32_t x264 = 120126192U;
	uint32_t t64 = UINT32_MAX;

	t64 = (x261|((x262|x263)/x264));

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x265 = 17;
	static int8_t x266 = INT8_MAX;
	static int16_t x268 = 30;
	volatile uint32_t t65 = 7556611U;

	t65 = (x265|((x266|x267)/x268));

	if (t65 != 4151U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x269 = INT64_MIN;
	int16_t x270 = INT16_MAX;
	static int8_t x272 = -1;
	volatile int64_t t66 = 0LL;

	t66 = (x269|((x270|x271)/x272));

	if (t66 != -9223372034707324927LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x274 = INT8_MIN;
	int64_t x276 = INT64_MAX;
	volatile uint64_t t67 = 55091285685347LLU;

	t67 = (x273|((x274|x275)/x276));

	if (t67 != 181969431007LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int64_t x277 = INT64_MAX;
	uint32_t x278 = 813U;
	int64_t x279 = -1LL;
	static int32_t x280 = INT32_MIN;
	static int64_t t68 = INT64_MAX;

	t68 = (x277|((x278|x279)/x280));

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x285 = 14;
	int16_t x286 = -1241;
	volatile int64_t t69 = -47LL;

	t69 = (x285|((x286|x287)/x288));

	if (t69 != 14LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x289 = 6U;
	volatile int16_t x290 = 487;
	int64_t x291 = INT64_MIN;
	uint64_t t70 = 244240815LLU;

	t70 = (x289|((x290|x291)/x292));

	if (t70 != 22386825332171791LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x293 = INT16_MIN;
	int64_t x294 = -1LL;
	volatile uint32_t x295 = UINT32_MAX;
	volatile uint64_t t71 = 14366LLU;

	t71 = (x293|((x294|x295)/x296));

	if (t71 != 18446744073709535889LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x297 = UINT64_MAX;
	static int16_t x298 = INT16_MAX;
	volatile int32_t x299 = INT32_MIN;
	volatile int16_t x300 = -23;
	uint64_t t72 = UINT64_MAX;

	t72 = (x297|((x298|x299)/x300));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x301 = 0U;
	int8_t x302 = INT8_MIN;
	static int32_t x303 = INT32_MAX;
	uint8_t x304 = UINT8_MAX;
	static int32_t t73 = -4448;

	t73 = (x301|((x302|x303)/x304));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x305 = INT16_MAX;
	int32_t x307 = INT32_MIN;
	volatile uint8_t x308 = UINT8_MAX;

	t74 = (x305|((x306|x307)/x308));

	if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x309 = -14985;
	static int8_t x310 = INT8_MIN;
	int16_t x311 = INT16_MIN;
	int64_t x312 = -1LL;
	volatile int64_t t75 = 52395LL;

	t75 = (x309|((x310|x311)/x312));

	if (t75 != -14857LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x317 = 546U;
	volatile int16_t x318 = 5;
	int16_t x319 = INT16_MIN;
	int32_t x320 = INT32_MIN;
	int32_t t76 = 139;

	t76 = (x317|((x318|x319)/x320));

	if (t76 != 546) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x321 = UINT32_MAX;
	int64_t x322 = -1842040743297LL;
	uint16_t x324 = 1842U;

	t77 = (x321|((x322|x323)/x324));

	if (t77 != 4294967295LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x325 = 0U;
	uint32_t x326 = UINT32_MAX;
	uint8_t x327 = 32U;
	int16_t x328 = -1;

	t78 = (x325|((x326|x327)/x328));

	if (t78 != 1U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x330 = 2166452U;
	volatile uint16_t x332 = 1378U;
	uint32_t t79 = 33192680U;

	t79 = (x329|((x330|x331)/x332));

	if (t79 != 1572863U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x333 = 394476856;
	int16_t x334 = -4;
	int64_t x335 = -1LL;
	volatile int64_t t80 = 0LL;

	t80 = (x333|((x334|x335)/x336));

	if (t80 != 394476856LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x337 = 29U;
	uint64_t x338 = UINT64_MAX;
	int8_t x339 = INT8_MIN;
	static volatile uint64_t t81 = 13LLU;

	t81 = (x337|((x338|x339)/x340));

	if (t81 != 29LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x341 = INT32_MIN;
	static int64_t x342 = INT64_MIN;
	uint64_t x343 = 58143LLU;
	static int32_t x344 = INT32_MIN;
	static uint64_t t82 = 62318LLU;

	t82 = (x341|((x342|x343)/x344));

	if (t82 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x345 = -38;
	int64_t x346 = 1071780244LL;
	int64_t x348 = INT64_MIN;

	t83 = (x345|((x346|x347)/x348));

	if (t83 != -38LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x349 = 19U;
	volatile int32_t x350 = -209;
	volatile uint32_t x351 = 31897U;
	int64_t x352 = INT64_MAX;
	volatile int64_t t84 = -3023LL;

	t84 = (x349|((x350|x351)/x352));

	if (t84 != 19LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x353 = 1889278024631607534LL;
	uint8_t x354 = 111U;
	uint64_t x355 = UINT64_MAX;
	int8_t x356 = INT8_MIN;
	uint64_t t85 = 496796829671957711LLU;

	t85 = (x353|((x354|x355)/x356));

	if (t85 != 1889278024631607535LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x357 = UINT8_MAX;
	int16_t x358 = INT16_MIN;
	int32_t x359 = INT32_MAX;
	static int16_t x360 = INT16_MIN;
	int32_t t86 = 53177;

	t86 = (x357|((x358|x359)/x360));

	if (t86 != 255) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x361 = INT32_MIN;
	volatile int8_t x363 = -1;
	volatile uint64_t t87 = 63540743LLU;

	t87 = (x361|((x362|x363)/x364));

	if (t87 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x370 = INT64_MIN;
	static uint64_t x371 = UINT64_MAX;
	int32_t x372 = INT32_MAX;
	uint64_t t88 = 479LLU;

	t88 = (x369|((x370|x371)/x372));

	if (t88 != 18446744073709518852LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x373 = -1;
	int16_t x375 = INT16_MIN;
	int64_t t89 = 47254LL;

	t89 = (x373|((x374|x375)/x376));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x377 = -1;
	int32_t x379 = INT32_MIN;
	int8_t x380 = -12;
	static volatile int32_t t90 = -216;

	t90 = (x377|((x378|x379)/x380));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x381 = 68U;
	int8_t x382 = -2;
	int16_t x383 = INT16_MIN;
	static int8_t x384 = -1;
	volatile int32_t t91 = -317265;

	t91 = (x381|((x382|x383)/x384));

	if (t91 != 70) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x385 = -1;
	int32_t x386 = -55248;
	int64_t x388 = INT64_MAX;
	int64_t t92 = 211LL;

	t92 = (x385|((x386|x387)/x388));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x389 = -6675035919097433LL;
	int16_t x391 = -12;
	int32_t x392 = -215271729;
	volatile int64_t t93 = 1LL;

	t93 = (x389|((x390|x391)/x392));

	if (t93 != -6675035919097433LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x393 = -3;
	int8_t x394 = INT8_MIN;
	int8_t x395 = INT8_MAX;
	volatile int32_t t94 = -17366;

	t94 = (x393|((x394|x395)/x396));

	if (t94 != -3) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x397 = INT16_MAX;
	static int16_t x399 = -287;
	static int64_t t95 = -3403LL;

	t95 = (x397|((x398|x399)/x400));

	if (t95 != 32767LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x401 = UINT64_MAX;
	volatile uint16_t x402 = UINT16_MAX;
	volatile uint8_t x403 = UINT8_MAX;
	int8_t x404 = INT8_MIN;
	volatile uint64_t t96 = UINT64_MAX;

	t96 = (x401|((x402|x403)/x404));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x406 = UINT16_MAX;
	static int16_t x407 = 0;
	volatile uint32_t x408 = 1284111038U;
	volatile uint32_t t97 = 2355040U;

	t97 = (x405|((x406|x407)/x408));

	if (t97 != 4294967260U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x409 = UINT64_MAX;
	int8_t x410 = INT8_MIN;
	static volatile uint32_t x411 = 2U;
	int16_t x412 = INT16_MIN;
	volatile uint64_t t98 = UINT64_MAX;

	t98 = (x409|((x410|x411)/x412));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x413 = 1U;
	volatile int64_t x414 = INT64_MIN;
	volatile int32_t x415 = -1;
	int16_t x416 = -1;
	volatile int64_t t99 = 3729LL;

	t99 = (x413|((x414|x415)/x416));

	if (t99 != 1LL) { NG(); } else { ; }
	
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

