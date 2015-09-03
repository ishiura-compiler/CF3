#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = INT8_MAX;
int32_t x4 = INT32_MIN;
static volatile int32_t t0 = 482648;
uint8_t x11 = UINT8_MAX;
uint32_t x19 = 190996524U;
volatile uint64_t t4 = 4601674884LLU;
int32_t x23 = 1835;
int32_t x27 = -444;
int16_t x32 = -439;
static int8_t x36 = INT8_MIN;
volatile int64_t t8 = 2LL;
uint32_t x44 = UINT32_MAX;
static int8_t x45 = INT8_MAX;
volatile int16_t x53 = INT16_MAX;
static int32_t t13 = -16124;
volatile int64_t x57 = INT64_MIN;
int8_t x60 = -34;
static volatile uint64_t x62 = 510989911696137LLU;
static int64_t x65 = -1LL;
int64_t x80 = INT64_MIN;
uint8_t x92 = 12U;
int8_t x94 = INT8_MIN;
uint32_t x102 = 19085973U;
volatile uint32_t t25 = 1U;
static volatile int32_t x105 = -41603106;
int32_t x109 = 410;
static int8_t x110 = 0;
volatile uint64_t x111 = UINT64_MAX;
uint16_t x119 = 5U;
int16_t x123 = INT16_MIN;
uint32_t x125 = UINT32_MAX;
uint8_t x129 = UINT8_MAX;
volatile int64_t x130 = INT64_MIN;
static int64_t t32 = 29524572441112473LL;
int64_t x140 = -71683LL;
volatile int32_t t34 = 759;
uint16_t x151 = 453U;
volatile int8_t x157 = 6;
int32_t t40 = 684623398;
volatile uint64_t x169 = 28374125602312950LLU;
int64_t x176 = INT64_MIN;
uint16_t x178 = 1U;
uint16_t x187 = 19U;
volatile int32_t t46 = -324623274;
volatile int16_t x193 = 2;
static volatile int64_t t49 = 128711LL;
static int8_t x204 = INT8_MAX;
volatile int16_t x206 = INT16_MAX;
uint64_t x208 = UINT64_MAX;
uint64_t x210 = 39582943942270694LLU;
static int16_t x215 = -1;
int64_t x223 = INT64_MIN;
int16_t x225 = 1;
int8_t x233 = INT8_MIN;
volatile int16_t x240 = 14;
int64_t x246 = -1LL;
uint8_t x248 = 3U;
volatile int64_t t61 = 2LL;
volatile int64_t x251 = INT64_MIN;
int64_t x258 = INT64_MAX;
int64_t t64 = 193814036772772611LL;
int64_t t65 = -51LL;
static volatile uint64_t t66 = 3LLU;
uint16_t x269 = 592U;
int8_t x270 = -1;
uint16_t x271 = UINT16_MAX;
int32_t t67 = 209597;
volatile uint64_t x274 = UINT64_MAX;
uint32_t x277 = UINT32_MAX;
int8_t x279 = INT8_MIN;
volatile uint32_t x284 = UINT32_MAX;
int8_t x285 = INT8_MIN;
volatile uint64_t x286 = UINT64_MAX;
int8_t x288 = -1;
static int64_t t73 = -308390055065LL;
static int64_t x299 = INT64_MIN;
uint32_t x302 = UINT32_MAX;
int64_t x312 = INT64_MIN;
volatile uint32_t t78 = 2416U;
static int8_t x323 = -1;
uint64_t x327 = 2125553817LLU;
uint64_t x328 = 61LLU;
int8_t x330 = 14;
int32_t x335 = 5511;
int8_t x344 = -1;
static int32_t x346 = INT32_MIN;
volatile int64_t x355 = 1095690494LL;
volatile int64_t t88 = -8763935168860345LL;
int32_t x357 = INT32_MIN;
static int16_t x360 = INT16_MAX;
uint64_t x366 = 14673LLU;
int32_t x367 = -3;
volatile uint64_t t92 = 19LLU;
int32_t x373 = -1;
static uint64_t x375 = UINT64_MAX;
volatile int32_t t94 = -1909;
volatile uint32_t x387 = UINT32_MAX;
int32_t x396 = -12430800;
uint32_t x397 = 46308258U;


void f0(void) {
	int8_t x1 = INT8_MAX;
	int16_t x2 = INT16_MIN;

	t0 = (x1&(x2&(x3==x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	int32_t x6 = 1;
	static int32_t x7 = -4518;
	int64_t x8 = -1LL;
	volatile int32_t t1 = 1285;

	t1 = (x5&(x6&(x7==x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 1;
	static int16_t x10 = -8777;
	volatile int16_t x12 = 1361;
	volatile int32_t t2 = 431;

	t2 = (x9&(x10&(x11==x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint64_t x13 = UINT64_MAX;
	volatile int8_t x14 = INT8_MAX;
	int16_t x15 = -315;
	uint32_t x16 = 614312389U;
	volatile uint64_t t3 = 491109LLU;

	t3 = (x13&(x14&(x15==x16)));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 571389441233110LLU;
	int16_t x18 = INT16_MIN;
	uint64_t x20 = 465186844915399975LLU;

	t4 = (x17&(x18&(x19==x20)));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	static int8_t x22 = INT8_MAX;
	int16_t x24 = -9922;
	volatile int64_t t5 = 159LL;

	t5 = (x21&(x22&(x23==x24)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	volatile int64_t x26 = 70LL;
	int32_t x28 = INT32_MAX;
	volatile int64_t t6 = 1261360LL;

	t6 = (x25&(x26&(x27==x28)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = 121;
	int32_t x30 = INT32_MIN;
	int64_t x31 = -1LL;
	volatile int32_t t7 = 0;

	t7 = (x29&(x30&(x31==x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	volatile int64_t x34 = 310200699487LL;
	uint32_t x35 = 15874769U;

	t8 = (x33&(x34&(x35==x36)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 21LLU;
	int8_t x38 = -1;
	uint32_t x39 = 30U;
	int16_t x40 = INT16_MAX;
	volatile uint64_t t9 = 20185125606LLU;

	t9 = (x37&(x38&(x39==x40)));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = UINT8_MAX;
	volatile int16_t x42 = INT16_MAX;
	int64_t x43 = INT64_MIN;
	int32_t t10 = 1022;

	t10 = (x41&(x42&(x43==x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x46 = INT16_MAX;
	uint64_t x47 = 97LLU;
	volatile int16_t x48 = -16259;
	volatile int32_t t11 = -222320;

	t11 = (x45&(x46&(x47==x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 1U;
	static uint32_t x50 = 12U;
	int64_t x51 = -87423763LL;
	volatile int32_t x52 = INT32_MIN;
	uint32_t t12 = 511712U;

	t12 = (x49&(x50&(x51==x52)));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = -244;
	static int8_t x55 = -1;
	static uint8_t x56 = UINT8_MAX;

	t13 = (x53&(x54&(x55==x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x58 = UINT32_MAX;
	int32_t x59 = INT32_MAX;
	int64_t t14 = 1LL;

	t14 = (x57&(x58&(x59==x60)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MAX;
	volatile int64_t x63 = INT64_MIN;
	int32_t x64 = INT32_MAX;
	uint64_t t15 = 5040617272LLU;

	t15 = (x61&(x62&(x63==x64)));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x66 = 5LLU;
	int64_t x67 = 139LL;
	static int8_t x68 = INT8_MAX;
	volatile uint64_t t16 = 335918439LLU;

	t16 = (x65&(x66&(x67==x68)));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -8076;
	volatile int64_t x70 = 1031393341320LL;
	uint32_t x71 = 1U;
	int8_t x72 = INT8_MIN;
	static volatile int64_t t17 = -2278LL;

	t17 = (x69&(x70&(x71==x72)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = -21;
	uint64_t x74 = 525079577LLU;
	int64_t x75 = -9701455159LL;
	int64_t x76 = INT64_MIN;
	static volatile uint64_t t18 = 123528944028LLU;

	t18 = (x73&(x74&(x75==x76)));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -1;
	int16_t x78 = INT16_MIN;
	static int8_t x79 = -1;
	static volatile int32_t t19 = -494798335;

	t19 = (x77&(x78&(x79==x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x81 = 360U;
	int16_t x82 = -1;
	int32_t x83 = INT32_MAX;
	volatile int16_t x84 = INT16_MIN;
	volatile int32_t t20 = -2;

	t20 = (x81&(x82&(x83==x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 62141U;
	volatile int64_t x86 = INT64_MIN;
	static volatile int8_t x87 = INT8_MIN;
	int8_t x88 = INT8_MIN;
	static int64_t t21 = -418698LL;

	t21 = (x85&(x86&(x87==x88)));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x89 = UINT16_MAX;
	int8_t x90 = -3;
	int32_t x91 = INT32_MAX;
	volatile int32_t t22 = 71071;

	t22 = (x89&(x90&(x91==x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 411417516U;
	int32_t x95 = INT32_MAX;
	int32_t x96 = 1523;
	uint32_t t23 = 2286327U;

	t23 = (x93&(x94&(x95==x96)));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = INT16_MIN;
	uint16_t x98 = UINT16_MAX;
	int8_t x99 = INT8_MAX;
	uint32_t x100 = 53U;
	volatile int32_t t24 = 107;

	t24 = (x97&(x98&(x99==x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 46U;
	int64_t x103 = 14871490LL;
	int64_t x104 = 21026LL;

	t25 = (x101&(x102&(x103==x104)));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x106 = -1;
	volatile uint8_t x107 = 7U;
	int64_t x108 = 1276127606161679625LL;
	volatile int32_t t26 = -494832028;

	t26 = (x105&(x106&(x107==x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x112 = 1581U;
	volatile int32_t t27 = -61203;

	t27 = (x109&(x110&(x111==x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x113 = INT32_MIN;
	int32_t x114 = INT32_MIN;
	uint8_t x115 = UINT8_MAX;
	volatile uint16_t x116 = 14833U;
	volatile int32_t t28 = 29;

	t28 = (x113&(x114&(x115==x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MAX;
	static int64_t x118 = -1LL;
	int16_t x120 = INT16_MAX;
	volatile int64_t t29 = 1843893234LL;

	t29 = (x117&(x118&(x119==x120)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x121 = 1943785160U;
	uint8_t x122 = UINT8_MAX;
	int16_t x124 = INT16_MAX;
	uint32_t t30 = 521903317U;

	t30 = (x121&(x122&(x123==x124)));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x126 = INT64_MIN;
	static volatile int32_t x127 = INT32_MIN;
	uint16_t x128 = 2U;
	int64_t t31 = -314231LL;

	t31 = (x125&(x126&(x127==x128)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x131 = INT32_MAX;
	int64_t x132 = 23092LL;

	t32 = (x129&(x130&(x131==x132)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = 94;
	volatile int32_t x134 = INT32_MIN;
	uint8_t x135 = UINT8_MAX;
	uint64_t x136 = UINT64_MAX;
	static int32_t t33 = 208718590;

	t33 = (x133&(x134&(x135==x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -420;
	volatile int32_t x138 = INT32_MIN;
	static uint32_t x139 = 8374730U;

	t34 = (x137&(x138&(x139==x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	static int8_t x142 = 13;
	static volatile int16_t x143 = INT16_MIN;
	volatile int8_t x144 = INT8_MIN;
	volatile int32_t t35 = 7425;

	t35 = (x141&(x142&(x143==x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x145 = INT8_MAX;
	int64_t x146 = INT64_MIN;
	static uint64_t x147 = 17500887LLU;
	uint64_t x148 = 176865712218479LLU;
	int64_t t36 = -152685LL;

	t36 = (x145&(x146&(x147==x148)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = 1;
	static int8_t x150 = -40;
	uint32_t x152 = UINT32_MAX;
	volatile int32_t t37 = 22;

	t37 = (x149&(x150&(x151==x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 3632U;
	volatile int8_t x154 = 0;
	uint64_t x155 = 27373076830LLU;
	int32_t x156 = 9269015;
	uint32_t t38 = 3598U;

	t38 = (x153&(x154&(x155==x156)));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x158 = UINT32_MAX;
	volatile int64_t x159 = INT64_MIN;
	int64_t x160 = INT64_MIN;
	volatile uint32_t t39 = 194U;

	t39 = (x157&(x158&(x159==x160)));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x161 = INT32_MIN;
	int32_t x162 = INT32_MIN;
	int32_t x163 = -1;
	static volatile uint64_t x164 = 188391115025955LLU;

	t40 = (x161&(x162&(x163==x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -2;
	volatile uint32_t x166 = UINT32_MAX;
	uint32_t x167 = 7400U;
	int8_t x168 = -1;
	uint32_t t41 = 19U;

	t41 = (x165&(x166&(x167==x168)));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x170 = 37U;
	int8_t x171 = INT8_MIN;
	uint16_t x172 = UINT16_MAX;
	static uint64_t t42 = 13327008414LLU;

	t42 = (x169&(x170&(x171==x172)));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x173 = 7758505LLU;
	int16_t x174 = 1009;
	static int16_t x175 = INT16_MAX;
	uint64_t t43 = 3485221679481LLU;

	t43 = (x173&(x174&(x175==x176)));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = 7;
	int8_t x179 = -18;
	static int8_t x180 = INT8_MIN;
	static int32_t t44 = 0;

	t44 = (x177&(x178&(x179==x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x181 = INT16_MAX;
	static int64_t x182 = INT64_MIN;
	static int64_t x183 = INT64_MAX;
	volatile uint64_t x184 = 98354916107LLU;
	int64_t t45 = -1397270139899543643LL;

	t45 = (x181&(x182&(x183==x184)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MAX;
	int16_t x186 = INT16_MIN;
	volatile int32_t x188 = INT32_MAX;

	t46 = (x185&(x186&(x187==x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MAX;
	static int64_t x190 = INT64_MIN;
	uint32_t x191 = 50164U;
	volatile uint16_t x192 = 3U;
	static volatile int64_t t47 = 217413LL;

	t47 = (x189&(x190&(x191==x192)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x194 = UINT16_MAX;
	uint8_t x195 = UINT8_MAX;
	volatile int64_t x196 = INT64_MIN;
	int32_t t48 = 17213;

	t48 = (x193&(x194&(x195==x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -447007431556191LL;
	int16_t x198 = -1;
	static int16_t x199 = INT16_MIN;
	int16_t x200 = -1;

	t49 = (x197&(x198&(x199==x200)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = 834777259;
	volatile int8_t x202 = INT8_MIN;
	int16_t x203 = INT16_MAX;
	int32_t t50 = -104;

	t50 = (x201&(x202&(x203==x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = 1138328;
	int64_t x207 = 1LL;
	volatile int32_t t51 = 3797933;

	t51 = (x205&(x206&(x207==x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x209 = INT16_MIN;
	static uint16_t x211 = UINT16_MAX;
	static int16_t x212 = -1;
	uint64_t t52 = 70758LLU;

	t52 = (x209&(x210&(x211==x212)));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MIN;
	int8_t x214 = -15;
	uint16_t x216 = 3112U;
	volatile int64_t t53 = -71085082265095637LL;

	t53 = (x213&(x214&(x215==x216)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x217 = INT32_MIN;
	int32_t x218 = INT32_MAX;
	static int64_t x219 = -33007607393LL;
	int32_t x220 = 154935129;
	volatile int32_t t54 = -24512218;

	t54 = (x217&(x218&(x219==x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x221 = 3278184763265252603LLU;
	int16_t x222 = -1;
	int16_t x224 = -308;
	volatile uint64_t t55 = 4559LLU;

	t55 = (x221&(x222&(x223==x224)));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x226 = INT64_MIN;
	int8_t x227 = 11;
	int16_t x228 = INT16_MAX;
	int64_t t56 = -2LL;

	t56 = (x225&(x226&(x227==x228)));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = 72;
	int16_t x230 = 573;
	volatile int32_t x231 = INT32_MAX;
	int8_t x232 = -1;
	int32_t t57 = 592879530;

	t57 = (x229&(x230&(x231==x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x234 = UINT8_MAX;
	int64_t x235 = INT64_MIN;
	uint16_t x236 = UINT16_MAX;
	volatile int32_t t58 = -55479;

	t58 = (x233&(x234&(x235==x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MAX;
	int64_t x238 = 2428565LL;
	static int32_t x239 = INT32_MIN;
	int64_t t59 = 240133447256340LL;

	t59 = (x237&(x238&(x239==x240)));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	int64_t x242 = INT64_MIN;
	uint64_t x243 = 166052727LLU;
	static int16_t x244 = 0;
	volatile int64_t t60 = 1651627685LL;

	t60 = (x241&(x242&(x243==x244)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x245 = -129;
	static volatile uint8_t x247 = 3U;

	t61 = (x245&(x246&(x247==x248)));

	if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = 1;
	uint64_t x250 = 240690841768298LLU;
	int32_t x252 = -1674;
	static uint64_t t62 = 1441207584LLU;

	t62 = (x249&(x250&(x251==x252)));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MIN;
	static volatile int32_t x254 = -1;
	volatile int16_t x255 = INT16_MIN;
	static uint64_t x256 = 451606773235257422LLU;
	volatile int32_t t63 = 344296195;

	t63 = (x253&(x254&(x255==x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x257 = INT32_MAX;
	int64_t x259 = 118558LL;
	uint16_t x260 = 455U;

	t64 = (x257&(x258&(x259==x260)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = -1;
	static volatile int64_t x262 = INT64_MAX;
	int8_t x263 = -1;
	static uint8_t x264 = UINT8_MAX;

	t65 = (x261&(x262&(x263==x264)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MIN;
	uint64_t x266 = 3641714591LLU;
	int32_t x267 = -1;
	static volatile int64_t x268 = -1LL;

	t66 = (x265&(x266&(x267==x268)));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x272 = INT8_MIN;

	t67 = (x269&(x270&(x271==x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 1U;
	int32_t x275 = 13777584;
	int16_t x276 = -1;
	static volatile uint64_t t68 = 1407627696236LLU;

	t68 = (x273&(x274&(x275==x276)));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x278 = 12U;
	volatile uint32_t x280 = 270399U;
	static volatile uint32_t t69 = 1U;

	t69 = (x277&(x278&(x279==x280)));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x281 = UINT16_MAX;
	volatile int32_t x282 = 4;
	int64_t x283 = INT64_MIN;
	int32_t t70 = -282;

	t70 = (x281&(x282&(x283==x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x287 = 1;
	volatile uint64_t t71 = 357261LLU;

	t71 = (x285&(x286&(x287==x288)));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = 0U;
	int32_t x290 = INT32_MAX;
	uint8_t x291 = 1U;
	int32_t x292 = -701;
	int32_t t72 = -7;

	t72 = (x289&(x290&(x291==x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x293 = -1;
	int64_t x294 = INT64_MIN;
	static int16_t x295 = INT16_MIN;
	int16_t x296 = -1;

	t73 = (x293&(x294&(x295==x296)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MAX;
	static int8_t x298 = INT8_MIN;
	uint32_t x300 = 346159476U;
	static int32_t t74 = -95;

	t74 = (x297&(x298&(x299==x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x301 = -1;
	uint64_t x303 = 9LLU;
	int32_t x304 = -1;
	uint32_t t75 = 126U;

	t75 = (x301&(x302&(x303==x304)));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	static uint64_t x306 = 24LLU;
	int8_t x307 = INT8_MIN;
	volatile int32_t x308 = -1;
	uint64_t t76 = 2504LLU;

	t76 = (x305&(x306&(x307==x308)));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x309 = INT32_MIN;
	uint64_t x310 = UINT64_MAX;
	static uint64_t x311 = 62779241LLU;
	volatile uint64_t t77 = 5055004456694LLU;

	t77 = (x309&(x310&(x311==x312)));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x313 = INT32_MIN;
	uint32_t x314 = 29531U;
	int8_t x315 = INT8_MAX;
	uint8_t x316 = UINT8_MAX;

	t78 = (x313&(x314&(x315==x316)));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MIN;
	int64_t x318 = -1LL;
	uint64_t x319 = UINT64_MAX;
	uint16_t x320 = 58U;
	int64_t t79 = 1LL;

	t79 = (x317&(x318&(x319==x320)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x321 = -1;
	int32_t x322 = -1;
	static volatile int32_t x324 = -1;
	volatile int32_t t80 = 15;

	t80 = (x321&(x322&(x323==x324)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = -1LL;
	uint8_t x326 = 47U;
	int64_t t81 = 2143LL;

	t81 = (x325&(x326&(x327==x328)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = 52156790;
	int64_t x331 = -69729LL;
	int16_t x332 = -1;
	volatile int32_t t82 = -2347;

	t82 = (x329&(x330&(x331==x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x333 = 1U;
	int16_t x334 = INT16_MAX;
	static uint8_t x336 = UINT8_MAX;
	volatile uint32_t t83 = 27U;

	t83 = (x333&(x334&(x335==x336)));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x337 = INT32_MIN;
	int64_t x338 = -8641LL;
	int64_t x339 = -1LL;
	static volatile int16_t x340 = -507;
	int64_t t84 = -69416920634LL;

	t84 = (x337&(x338&(x339==x340)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = 789;
	int32_t x342 = INT32_MIN;
	static int32_t x343 = INT32_MAX;
	static int32_t t85 = 4489621;

	t85 = (x341&(x342&(x343==x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = 10540U;
	static uint8_t x347 = UINT8_MAX;
	int32_t x348 = -1;
	volatile int32_t t86 = -11;

	t86 = (x345&(x346&(x347==x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MIN;
	int16_t x350 = INT16_MIN;
	int16_t x351 = -1;
	uint8_t x352 = 45U;
	volatile int32_t t87 = 6597876;

	t87 = (x349&(x350&(x351==x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x353 = -2748669716LL;
	int32_t x354 = INT32_MIN;
	static int64_t x356 = -4189446677512711073LL;

	t88 = (x353&(x354&(x355==x356)));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x358 = INT8_MIN;
	static uint8_t x359 = 79U;
	int32_t t89 = 334520;

	t89 = (x357&(x358&(x359==x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x361 = -1;
	volatile int64_t x362 = INT64_MIN;
	static int64_t x363 = INT64_MAX;
	volatile uint16_t x364 = 5U;
	int64_t t90 = 1LL;

	t90 = (x361&(x362&(x363==x364)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x365 = UINT32_MAX;
	uint8_t x368 = 92U;
	uint64_t t91 = 1323524389780041243LLU;

	t91 = (x365&(x366&(x367==x368)));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MAX;
	uint64_t x370 = UINT64_MAX;
	uint16_t x371 = 24U;
	uint64_t x372 = 11651LLU;

	t92 = (x369&(x370&(x371==x372)));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x374 = 775183U;
	static int64_t x376 = -3LL;
	uint32_t t93 = 268651U;

	t93 = (x373&(x374&(x375==x376)));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x377 = 32097U;
	int8_t x378 = 6;
	uint8_t x379 = 4U;
	static uint32_t x380 = UINT32_MAX;

	t94 = (x377&(x378&(x379==x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = -1;
	volatile int32_t x382 = INT32_MAX;
	static volatile int64_t x383 = -1LL;
	static volatile uint64_t x384 = 19964553481999LLU;
	int32_t t95 = 12;

	t95 = (x381&(x382&(x383==x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = 17;
	static int32_t x386 = -1;
	int32_t x388 = -1;
	int32_t t96 = 49;

	t96 = (x385&(x386&(x387==x388)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MIN;
	int32_t x390 = 37123;
	volatile int16_t x391 = -1;
	int8_t x392 = INT8_MIN;
	volatile int64_t t97 = 157426366841868LL;

	t97 = (x389&(x390&(x391==x392)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = 7;
	int64_t x394 = -1LL;
	uint16_t x395 = 19009U;
	static volatile int64_t t98 = 26064978LL;

	t98 = (x393&(x394&(x395==x396)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x398 = INT16_MIN;
	volatile int16_t x399 = INT16_MIN;
	int16_t x400 = INT16_MIN;
	uint32_t t99 = 11552536U;

	t99 = (x397&(x398&(x399==x400)));

	if (t99 != 0U) { NG(); } else { ; }
	
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

