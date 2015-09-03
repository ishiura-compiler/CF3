#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x8 = INT8_MIN;
int16_t x10 = INT16_MAX;
int32_t t2 = -55647;
volatile int16_t x21 = 738;
static uint16_t x26 = 17180U;
int32_t x30 = 41566;
uint32_t x46 = 36U;
int32_t x48 = 1;
uint16_t x53 = 2U;
volatile int64_t x55 = INT64_MAX;
int64_t t12 = -66217378075LL;
int16_t x57 = -15645;
int64_t x58 = -1LL;
int16_t x59 = INT16_MIN;
int32_t t14 = 433;
uint16_t x68 = UINT16_MAX;
int32_t x71 = INT32_MIN;
static int32_t x74 = -30359431;
uint32_t x75 = UINT32_MAX;
uint16_t x77 = 19016U;
int16_t x79 = INT16_MIN;
static volatile uint64_t t18 = 4852319308224LLU;
int64_t x82 = -1LL;
static int64_t t20 = -137890992565297637LL;
int8_t x91 = -22;
int8_t x94 = 5;
volatile int32_t t22 = 1073350070;
volatile int64_t x97 = -1LL;
int8_t x107 = INT8_MIN;
uint64_t t25 = 15LLU;
int8_t x109 = INT8_MAX;
int16_t x113 = INT16_MAX;
static uint32_t x114 = UINT32_MAX;
int32_t t28 = -1;
uint8_t x123 = UINT8_MAX;
volatile int32_t x142 = 94;
int8_t x146 = INT8_MIN;
static volatile int8_t x147 = INT8_MIN;
uint8_t x151 = 3U;
volatile int16_t x160 = -36;
static volatile int32_t t40 = 1957;
uint32_t x169 = 85U;
int8_t x171 = 1;
volatile uint16_t x173 = UINT16_MAX;
static volatile int8_t x174 = INT8_MIN;
uint8_t x176 = 89U;
int8_t x179 = INT8_MIN;
static int16_t x180 = INT16_MIN;
volatile int64_t t43 = 273LL;
static int64_t x185 = INT64_MIN;
int8_t x186 = -1;
int16_t x187 = -1;
static int64_t x195 = INT64_MIN;
static int64_t x198 = -2346796025452024LL;
int8_t x204 = -20;
int64_t x208 = 92457143337625813LL;
uint16_t x209 = UINT16_MAX;
uint16_t x220 = 5U;
int16_t x222 = INT16_MIN;
static int32_t x233 = INT32_MIN;
int32_t t56 = 22350692;
int16_t x239 = INT16_MIN;
int8_t x241 = INT8_MIN;
int32_t t58 = 144498159;
int16_t x248 = INT16_MIN;
static uint8_t x255 = UINT8_MAX;
int32_t x258 = -1;
static int32_t x259 = INT32_MIN;
int32_t x263 = INT32_MIN;
volatile uint64_t t63 = 12311LLU;
uint64_t x272 = UINT64_MAX;
uint16_t x279 = UINT16_MAX;
uint32_t x288 = 433125470U;
uint32_t t70 = 6432U;
int32_t x298 = -5;
volatile int16_t x299 = INT16_MIN;
uint16_t x300 = 206U;
static volatile int64_t x301 = -719216902LL;
int16_t x304 = 23;
int32_t x309 = 630099494;
int8_t x310 = INT8_MIN;
uint32_t x316 = UINT32_MAX;
volatile uint32_t t76 = 6U;
uint32_t x328 = 339392521U;
int32_t x338 = 867264291;
int64_t x341 = INT64_MIN;
int32_t x342 = -1;
int64_t x353 = INT64_MIN;
volatile int32_t x358 = INT32_MIN;
static volatile uint64_t x359 = UINT64_MAX;
int32_t x371 = -1;
static int32_t x385 = -407014718;
uint8_t x388 = 26U;
volatile uint32_t x393 = 2081808U;
int32_t x395 = -747926575;
volatile uint32_t t93 = 270462986U;
volatile int32_t t94 = -3118897;
int16_t x403 = -1;
volatile uint32_t t95 = 101U;
int64_t x405 = INT64_MIN;
static volatile int32_t t99 = -8427;


void f0(void) {
	static int32_t x1 = -231;
	uint32_t x2 = 253543948U;
	uint16_t x3 = 25715U;
	static volatile int32_t x4 = INT32_MAX;
	uint32_t t0 = 8441885U;

	t0 = (x1-(x2*(x3<=x4)));

	if (t0 != 4041423117U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = 1U;
	uint64_t x6 = 1LLU;
	static int16_t x7 = -1;
	uint64_t t1 = 7180747876921LLU;

	t1 = (x5-(x6*(x7<=x8)));

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	static uint8_t x11 = UINT8_MAX;
	volatile int8_t x12 = INT8_MIN;

	t2 = (x9-(x10*(x11<=x12)));

	if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x13 = UINT32_MAX;
	int16_t x14 = INT16_MAX;
	static volatile int64_t x15 = 110376911136LL;
	uint16_t x16 = 13U;
	uint32_t t3 = UINT32_MAX;

	t3 = (x13-(x14*(x15<=x16)));

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = INT64_MAX;
	uint8_t x18 = 1U;
	uint16_t x19 = 3748U;
	uint8_t x20 = UINT8_MAX;
	int64_t t4 = INT64_MAX;

	t4 = (x17-(x18*(x19<=x20)));

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x22 = UINT64_MAX;
	static uint64_t x23 = 2230893131LLU;
	static int8_t x24 = INT8_MIN;
	volatile uint64_t t5 = 2179896LLU;

	t5 = (x21-(x22*(x23<=x24)));

	if (t5 != 739LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = 198689240752403051LL;
	static int32_t x27 = 98;
	int32_t x28 = INT32_MIN;
	static volatile int64_t t6 = 3248560404803268715LL;

	t6 = (x25-(x26*(x27<=x28)));

	if (t6 != 198689240752403051LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 3862;
	int8_t x31 = INT8_MIN;
	static int8_t x32 = 60;
	volatile int32_t t7 = -136849;

	t7 = (x29-(x30*(x31<=x32)));

	if (t7 != -37704) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 12;
	uint8_t x34 = UINT8_MAX;
	int16_t x35 = -20;
	uint32_t x36 = 12U;
	volatile int32_t t8 = 0;

	t8 = (x33-(x34*(x35<=x36)));

	if (t8 != 12) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = UINT8_MAX;
	static uint8_t x38 = 2U;
	volatile int32_t x39 = INT32_MIN;
	static uint64_t x40 = UINT64_MAX;
	volatile int32_t t9 = 37;

	t9 = (x37-(x38*(x39<=x40)));

	if (t9 != 253) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x45 = -1LL;
	static volatile int32_t x47 = -1;
	volatile int64_t t10 = -5355640096046567LL;

	t10 = (x45-(x46*(x47<=x48)));

	if (t10 != -37LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x49 = UINT8_MAX;
	int32_t x50 = INT32_MAX;
	int32_t x51 = INT32_MAX;
	int16_t x52 = INT16_MIN;
	volatile int32_t t11 = 39;

	t11 = (x49-(x50*(x51<=x52)));

	if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x54 = -22035182328995390LL;
	static volatile uint16_t x56 = UINT16_MAX;

	t12 = (x53-(x54*(x55<=x56)));

	if (t12 != 2LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x60 = -3602390;
	volatile int64_t t13 = -277110590663207555LL;

	t13 = (x57-(x58*(x59<=x60)));

	if (t13 != -15645LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x61 = -1;
	int16_t x62 = INT16_MIN;
	int64_t x63 = INT64_MAX;
	uint8_t x64 = 6U;

	t14 = (x61-(x62*(x63<=x64)));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = 347U;
	uint16_t x66 = 5U;
	static volatile uint16_t x67 = 3199U;
	volatile int32_t t15 = 398032236;

	t15 = (x65-(x66*(x67<=x68)));

	if (t15 != 342) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = -1;
	int16_t x70 = INT16_MAX;
	uint32_t x72 = 19207U;
	volatile int32_t t16 = -39727272;

	t16 = (x69-(x70*(x71<=x72)));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = INT16_MIN;
	uint64_t x76 = 4246684LLU;
	int32_t t17 = 495329173;

	t17 = (x73-(x74*(x75<=x76)));

	if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x78 = UINT64_MAX;
	int64_t x80 = INT64_MIN;

	t18 = (x77-(x78*(x79<=x80)));

	if (t18 != 19016LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = INT16_MIN;
	int64_t x83 = -963702971980LL;
	int8_t x84 = INT8_MIN;
	int64_t t19 = 9205385294936LL;

	t19 = (x81-(x82*(x83<=x84)));

	if (t19 != -32767LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x85 = -1LL;
	static int16_t x86 = -1;
	uint8_t x87 = 23U;
	int64_t x88 = INT64_MIN;

	t20 = (x85-(x86*(x87<=x88)));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x89 = 4382LLU;
	static int16_t x90 = INT16_MAX;
	volatile int32_t x92 = INT32_MAX;
	static uint64_t t21 = 13154465106LLU;

	t21 = (x89-(x90*(x91<=x92)));

	if (t21 != 18446744073709523231LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = -1;
	static volatile int32_t x95 = -667523;
	uint8_t x96 = 0U;

	t22 = (x93-(x94*(x95<=x96)));

	if (t22 != -6) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x98 = INT16_MAX;
	static uint16_t x99 = UINT16_MAX;
	static volatile int8_t x100 = INT8_MIN;
	volatile int64_t t23 = -664912158519877LL;

	t23 = (x97-(x98*(x99<=x100)));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = 514706306LL;
	int32_t x102 = INT32_MAX;
	volatile uint32_t x103 = 363687U;
	uint32_t x104 = 24540775U;
	int64_t t24 = -1147753150218452LL;

	t24 = (x101-(x102*(x103<=x104)));

	if (t24 != -1632777341LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x105 = 12057721LLU;
	int8_t x106 = INT8_MIN;
	int64_t x108 = 1382603162580608LL;

	t25 = (x105-(x106*(x107<=x108)));

	if (t25 != 12057849LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x110 = INT8_MIN;
	volatile int32_t x111 = INT32_MIN;
	int8_t x112 = 15;
	volatile int32_t t26 = 106573;

	t26 = (x109-(x110*(x111<=x112)));

	if (t26 != 255) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x115 = 255715584648LL;
	int64_t x116 = INT64_MIN;
	uint32_t t27 = 16745U;

	t27 = (x113-(x114*(x115<=x116)));

	if (t27 != 32767U) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint16_t x117 = 373U;
	uint16_t x118 = UINT16_MAX;
	int8_t x119 = 21;
	int16_t x120 = -1;

	t28 = (x117-(x118*(x119<=x120)));

	if (t28 != 373) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x121 = UINT8_MAX;
	int8_t x122 = INT8_MAX;
	static int8_t x124 = INT8_MAX;
	volatile int32_t t29 = -63;

	t29 = (x121-(x122*(x123<=x124)));

	if (t29 != 255) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = INT64_MIN;
	int64_t x126 = INT64_MIN;
	int16_t x127 = -1;
	static uint64_t x128 = 9793LLU;
	volatile int64_t t30 = INT64_MIN;

	t30 = (x125-(x126*(x127<=x128)));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x129 = INT32_MIN;
	static volatile uint32_t x130 = 2598706U;
	int64_t x131 = INT64_MAX;
	static uint64_t x132 = 635345038309654967LLU;
	static volatile uint32_t t31 = 375120U;

	t31 = (x129-(x130*(x131<=x132)));

	if (t31 != 2147483648U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = 863601;
	volatile uint64_t x134 = 13166416100841LLU;
	static int8_t x135 = -3;
	int16_t x136 = 1;
	uint64_t t32 = 108409250986LLU;

	t32 = (x133-(x134*(x135<=x136)));

	if (t32 != 18446730907294314376LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = INT16_MAX;
	int16_t x138 = INT16_MAX;
	uint32_t x139 = UINT32_MAX;
	static uint8_t x140 = 0U;
	volatile int32_t t33 = 163238876;

	t33 = (x137-(x138*(x139<=x140)));

	if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = INT8_MIN;
	volatile uint8_t x143 = 13U;
	int16_t x144 = INT16_MIN;
	int32_t t34 = 177795847;

	t34 = (x141-(x142*(x143<=x144)));

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x145 = 1U;
	uint16_t x148 = 191U;
	volatile uint32_t t35 = 19229U;

	t35 = (x145-(x146*(x147<=x148)));

	if (t35 != 129U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x149 = UINT16_MAX;
	uint8_t x150 = 111U;
	int16_t x152 = INT16_MIN;
	volatile int32_t t36 = 14;

	t36 = (x149-(x150*(x151<=x152)));

	if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x153 = INT8_MIN;
	uint32_t x154 = 6U;
	uint64_t x155 = UINT64_MAX;
	volatile uint64_t x156 = 188LLU;
	uint32_t t37 = 3239664U;

	t37 = (x153-(x154*(x155<=x156)));

	if (t37 != 4294967168U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = -1;
	int8_t x158 = INT8_MIN;
	static int16_t x159 = INT16_MAX;
	static volatile int32_t t38 = -4148;

	t38 = (x157-(x158*(x159<=x160)));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x161 = UINT16_MAX;
	int8_t x162 = -16;
	uint16_t x163 = UINT16_MAX;
	int64_t x164 = INT64_MAX;
	volatile int32_t t39 = 14;

	t39 = (x161-(x162*(x163<=x164)));

	if (t39 != 65551) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x165 = -2;
	volatile int16_t x166 = INT16_MIN;
	int32_t x167 = 6;
	uint64_t x168 = 282LLU;

	t40 = (x165-(x166*(x167<=x168)));

	if (t40 != 32766) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x170 = 7U;
	uint8_t x172 = UINT8_MAX;
	volatile uint32_t t41 = 483409U;

	t41 = (x169-(x170*(x171<=x172)));

	if (t41 != 78U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x175 = 53605LLU;
	volatile int32_t t42 = 6800971;

	t42 = (x173-(x174*(x175<=x176)));

	if (t42 != 65535) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = 61816628113LL;
	int32_t x178 = INT32_MAX;

	t43 = (x177-(x178*(x179<=x180)));

	if (t43 != 61816628113LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x181 = 0;
	int16_t x182 = -1;
	uint8_t x183 = 1U;
	uint16_t x184 = UINT16_MAX;
	static int32_t t44 = -106;

	t44 = (x181-(x182*(x183<=x184)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint16_t x188 = UINT16_MAX;
	static volatile int64_t t45 = -1934160LL;

	t45 = (x185-(x186*(x187<=x188)));

	if (t45 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x189 = INT16_MAX;
	int8_t x190 = INT8_MIN;
	int8_t x191 = INT8_MAX;
	volatile int64_t x192 = INT64_MIN;
	static int32_t t46 = 45;

	t46 = (x189-(x190*(x191<=x192)));

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x193 = UINT64_MAX;
	volatile uint8_t x194 = UINT8_MAX;
	int32_t x196 = -1044436;
	uint64_t t47 = 633780LLU;

	t47 = (x193-(x194*(x195<=x196)));

	if (t47 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x197 = 2U;
	volatile int32_t x199 = INT32_MIN;
	static uint32_t x200 = 2015517650U;
	volatile int64_t t48 = -26782953LL;

	t48 = (x197-(x198*(x199<=x200)));

	if (t48 != 2LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x201 = 1258758LLU;
	int16_t x202 = INT16_MIN;
	volatile int32_t x203 = -3367392;
	uint64_t t49 = 400837597LLU;

	t49 = (x201-(x202*(x203<=x204)));

	if (t49 != 1291526LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x205 = INT64_MAX;
	uint8_t x206 = 1U;
	int32_t x207 = INT32_MAX;
	volatile int64_t t50 = -252112895LL;

	t50 = (x205-(x206*(x207<=x208)));

	if (t50 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x210 = UINT64_MAX;
	uint64_t x211 = 315142465690LLU;
	uint64_t x212 = 4757092676LLU;
	volatile uint64_t t51 = 90205269885558LLU;

	t51 = (x209-(x210*(x211<=x212)));

	if (t51 != 65535LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = INT32_MAX;
	uint32_t x214 = 4U;
	uint64_t x215 = 232026398LLU;
	int64_t x216 = INT64_MIN;
	uint32_t t52 = 1U;

	t52 = (x213-(x214*(x215<=x216)));

	if (t52 != 2147483643U) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x217 = INT16_MAX;
	int64_t x218 = 21430544101562LL;
	static int64_t x219 = INT64_MIN;
	volatile int64_t t53 = -573699523850123LL;

	t53 = (x217-(x218*(x219<=x220)));

	if (t53 != -21430544068795LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x221 = INT64_MIN;
	int8_t x223 = -1;
	static int32_t x224 = INT32_MIN;
	static volatile int64_t t54 = INT64_MIN;

	t54 = (x221-(x222*(x223<=x224)));

	if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x225 = 12U;
	uint8_t x226 = 119U;
	int16_t x227 = INT16_MIN;
	static int64_t x228 = INT64_MIN;
	static int32_t t55 = 405;

	t55 = (x225-(x226*(x227<=x228)));

	if (t55 != 12) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x234 = -3;
	int64_t x235 = -1LL;
	int16_t x236 = -1;

	t56 = (x233-(x234*(x235<=x236)));

	if (t56 != -2147483645) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x237 = 9852;
	static int8_t x238 = -1;
	volatile uint64_t x240 = 519350979585LLU;
	int32_t t57 = -9693;

	t57 = (x237-(x238*(x239<=x240)));

	if (t57 != 9852) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x242 = INT16_MIN;
	uint64_t x243 = 7LLU;
	int64_t x244 = INT64_MIN;

	t58 = (x241-(x242*(x243<=x244)));

	if (t58 != 32640) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x245 = INT32_MIN;
	int8_t x246 = INT8_MIN;
	static volatile int32_t x247 = -1558372;
	int32_t t59 = -333;

	t59 = (x245-(x246*(x247<=x248)));

	if (t59 != -2147483520) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x249 = INT16_MIN;
	int8_t x250 = -37;
	static int32_t x251 = 412737596;
	uint64_t x252 = 422438463297LLU;
	volatile int32_t t60 = -22152;

	t60 = (x249-(x250*(x251<=x252)));

	if (t60 != -32731) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x253 = UINT16_MAX;
	int16_t x254 = INT16_MIN;
	int64_t x256 = -1LL;
	int32_t t61 = -1215;

	t61 = (x253-(x254*(x255<=x256)));

	if (t61 != 65535) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x257 = INT32_MIN;
	volatile int8_t x260 = INT8_MIN;
	static int32_t t62 = 2;

	t62 = (x257-(x258*(x259<=x260)));

	if (t62 != -2147483647) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x261 = 68LLU;
	int8_t x262 = INT8_MAX;
	int64_t x264 = INT64_MIN;

	t63 = (x261-(x262*(x263<=x264)));

	if (t63 != 68LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x265 = -57783661;
	int64_t x266 = 431949677955640217LL;
	volatile int16_t x267 = INT16_MIN;
	int16_t x268 = -16;
	int64_t t64 = 85365479655410873LL;

	t64 = (x265-(x266*(x267<=x268)));

	if (t64 != -431949678013423878LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x269 = -1LL;
	int32_t x270 = -3069379;
	int8_t x271 = INT8_MIN;
	int64_t t65 = -102054LL;

	t65 = (x269-(x270*(x271<=x272)));

	if (t65 != 3069378LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x273 = INT32_MIN;
	uint32_t x274 = 1873504840U;
	int16_t x275 = INT16_MAX;
	uint16_t x276 = UINT16_MAX;
	static volatile uint32_t t66 = 31U;

	t66 = (x273-(x274*(x275<=x276)));

	if (t66 != 273978808U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x277 = INT8_MAX;
	uint16_t x278 = 7175U;
	uint8_t x280 = 1U;
	volatile int32_t t67 = -225401;

	t67 = (x277-(x278*(x279<=x280)));

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x281 = 588396172796LLU;
	volatile uint8_t x282 = 0U;
	uint8_t x283 = UINT8_MAX;
	volatile uint32_t x284 = 3U;
	uint64_t t68 = 10568331545631LLU;

	t68 = (x281-(x282*(x283<=x284)));

	if (t68 != 588396172796LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x285 = 72U;
	volatile int8_t x286 = -1;
	int16_t x287 = -21;
	int32_t t69 = -5774;

	t69 = (x285-(x286*(x287<=x288)));

	if (t69 != 72) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x289 = INT16_MAX;
	uint32_t x290 = UINT32_MAX;
	uint16_t x291 = UINT16_MAX;
	uint32_t x292 = 101U;

	t70 = (x289-(x290*(x291<=x292)));

	if (t70 != 32767U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x293 = INT64_MIN;
	static volatile int8_t x294 = INT8_MIN;
	uint16_t x295 = UINT16_MAX;
	static uint64_t x296 = 167106926418LLU;
	volatile int64_t t71 = 16688430043LL;

	t71 = (x293-(x294*(x295<=x296)));

	if (t71 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x297 = INT8_MAX;
	volatile int32_t t72 = -1;

	t72 = (x297-(x298*(x299<=x300)));

	if (t72 != 132) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x302 = -1;
	static volatile int64_t x303 = -30693716LL;
	volatile int64_t t73 = 24264LL;

	t73 = (x301-(x302*(x303<=x304)));

	if (t73 != -719216901LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x305 = INT16_MIN;
	int64_t x306 = 775642910LL;
	static uint16_t x307 = 1287U;
	int16_t x308 = -52;
	int64_t t74 = -4848344LL;

	t74 = (x305-(x306*(x307<=x308)));

	if (t74 != -32768LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x311 = INT16_MIN;
	uint8_t x312 = 1U;
	volatile int32_t t75 = 1;

	t75 = (x309-(x310*(x311<=x312)));

	if (t75 != 630099622) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x313 = INT32_MAX;
	uint32_t x314 = 195943950U;
	static int8_t x315 = INT8_MAX;

	t76 = (x313-(x314*(x315<=x316)));

	if (t76 != 1951539697U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x317 = INT8_MIN;
	uint16_t x318 = UINT16_MAX;
	volatile uint8_t x319 = 0U;
	static int32_t x320 = INT32_MIN;
	int32_t t77 = -267216636;

	t77 = (x317-(x318*(x319<=x320)));

	if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x321 = -130LL;
	int16_t x322 = INT16_MAX;
	static int8_t x323 = INT8_MAX;
	static uint64_t x324 = 15525495023021LLU;
	int64_t t78 = 83364004LL;

	t78 = (x321-(x322*(x323<=x324)));

	if (t78 != -32897LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x325 = -1;
	int64_t x326 = INT64_MIN;
	uint8_t x327 = UINT8_MAX;
	volatile int64_t t79 = INT64_MAX;

	t79 = (x325-(x326*(x327<=x328)));

	if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x333 = UINT8_MAX;
	int32_t x334 = -10;
	volatile int64_t x335 = INT64_MIN;
	uint16_t x336 = UINT16_MAX;
	int32_t t80 = 36;

	t80 = (x333-(x334*(x335<=x336)));

	if (t80 != 265) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x337 = INT64_MAX;
	uint32_t x339 = 566U;
	int32_t x340 = -1;
	int64_t t81 = 23160LL;

	t81 = (x337-(x338*(x339<=x340)));

	if (t81 != 9223372035987511516LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x343 = -1;
	volatile uint16_t x344 = 435U;
	volatile int64_t t82 = 150291026749566197LL;

	t82 = (x341-(x342*(x343<=x344)));

	if (t82 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x345 = 467LLU;
	static uint64_t x346 = 1LLU;
	volatile int32_t x347 = -1;
	int16_t x348 = INT16_MIN;
	uint64_t t83 = 180LLU;

	t83 = (x345-(x346*(x347<=x348)));

	if (t83 != 467LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x349 = 1;
	volatile uint8_t x350 = UINT8_MAX;
	uint64_t x351 = UINT64_MAX;
	uint8_t x352 = UINT8_MAX;
	volatile int32_t t84 = -5;

	t84 = (x349-(x350*(x351<=x352)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x354 = -1;
	volatile int8_t x355 = INT8_MAX;
	int32_t x356 = INT32_MIN;
	static int64_t t85 = INT64_MIN;

	t85 = (x353-(x354*(x355<=x356)));

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x357 = INT64_MIN;
	uint32_t x360 = 2477U;
	static int64_t t86 = INT64_MIN;

	t86 = (x357-(x358*(x359<=x360)));

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x361 = UINT32_MAX;
	volatile uint8_t x362 = 2U;
	static uint64_t x363 = 132LLU;
	volatile int16_t x364 = 7688;
	volatile uint32_t t87 = 241213027U;

	t87 = (x361-(x362*(x363<=x364)));

	if (t87 != 4294967293U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x369 = 1389667719102944LLU;
	static int64_t x370 = INT64_MAX;
	uint64_t x372 = 1240466990588155784LLU;
	uint64_t t88 = 1888678069LLU;

	t88 = (x369-(x370*(x371<=x372)));

	if (t88 != 1389667719102944LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x373 = -1LL;
	volatile int8_t x374 = -1;
	int8_t x375 = 0;
	volatile uint64_t x376 = 14074420993614LLU;
	volatile int64_t t89 = -1LL;

	t89 = (x373-(x374*(x375<=x376)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x381 = INT32_MIN;
	static volatile int8_t x382 = INT8_MIN;
	volatile int8_t x383 = 0;
	static volatile int64_t x384 = INT64_MIN;
	int32_t t90 = INT32_MIN;

	t90 = (x381-(x382*(x383<=x384)));

	if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x386 = -1;
	int32_t x387 = 11708;
	int32_t t91 = 51321798;

	t91 = (x385-(x386*(x387<=x388)));

	if (t91 != -407014718) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x389 = INT32_MIN;
	uint64_t x390 = UINT64_MAX;
	uint32_t x391 = UINT32_MAX;
	uint32_t x392 = 6U;
	volatile uint64_t t92 = 659267571769103LLU;

	t92 = (x389-(x390*(x391<=x392)));

	if (t92 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x394 = -27;
	static int64_t x396 = INT64_MIN;

	t93 = (x393-(x394*(x395<=x396)));

	if (t93 != 2081808U) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x397 = 5212U;
	int32_t x398 = INT32_MAX;
	uint8_t x399 = 55U;
	static int32_t x400 = INT32_MIN;

	t94 = (x397-(x398*(x399<=x400)));

	if (t94 != 5212) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x401 = INT16_MIN;
	uint32_t x402 = UINT32_MAX;
	static int16_t x404 = -1;

	t95 = (x401-(x402*(x403<=x404)));

	if (t95 != 4294934529U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x406 = -83316;
	int64_t x407 = INT64_MIN;
	int16_t x408 = 1;
	int64_t t96 = -60936498322052LL;

	t96 = (x405-(x406*(x407<=x408)));

	if (t96 != -9223372036854692492LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x409 = INT8_MIN;
	int64_t x410 = 1594LL;
	int16_t x411 = INT16_MIN;
	int32_t x412 = INT32_MIN;
	volatile int64_t t97 = -194LL;

	t97 = (x409-(x410*(x411<=x412)));

	if (t97 != -128LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x413 = INT32_MAX;
	int32_t x414 = -226493407;
	uint16_t x415 = 8U;
	uint8_t x416 = 0U;
	volatile int32_t t98 = INT32_MAX;

	t98 = (x413-(x414*(x415<=x416)));

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x417 = INT16_MIN;
	uint8_t x418 = 78U;
	volatile uint16_t x419 = 4U;
	int64_t x420 = INT64_MIN;

	t99 = (x417-(x418*(x419<=x420)));

	if (t99 != -32768) { NG(); } else { ; }
	
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

