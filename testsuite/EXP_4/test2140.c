#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x10 = 407;
uint8_t x15 = 3U;
static int64_t x24 = 625342LL;
static volatile int8_t x26 = 3;
volatile int8_t x31 = -1;
uint8_t x45 = 0U;
int16_t x50 = INT16_MAX;
uint8_t x52 = UINT8_MAX;
uint32_t x53 = 7924848U;
int32_t t13 = -88493;
int32_t t14 = -563238624;
volatile int32_t x68 = INT32_MAX;
int32_t t18 = -149336328;
int8_t x79 = 0;
int16_t x80 = -1;
static volatile int16_t x86 = -1;
volatile int32_t t21 = 548837;
static int8_t x90 = INT8_MAX;
uint32_t x93 = 100025U;
int32_t t23 = 20189;
int64_t x97 = INT64_MAX;
int32_t x100 = INT32_MIN;
int32_t t25 = -68762143;
int32_t t26 = 26906906;
int32_t x125 = INT32_MIN;
int32_t t31 = -2348;
uint32_t x131 = 967017U;
int64_t x132 = 120928716029176243LL;
int16_t x133 = 77;
int16_t x136 = INT16_MIN;
static int32_t t34 = 393421879;
volatile int32_t t35 = 34;
volatile int64_t x147 = INT64_MIN;
volatile int64_t x150 = INT64_MIN;
volatile int64_t x151 = INT64_MIN;
int64_t x157 = 3937714210107806081LL;
int16_t x163 = -1;
static volatile int8_t x164 = -1;
int32_t t40 = 557330164;
int16_t x169 = INT16_MIN;
static int32_t t43 = 4;
static int64_t x184 = -1LL;
volatile int16_t x186 = INT16_MIN;
static uint16_t x188 = 58U;
int8_t x200 = INT8_MAX;
uint16_t x201 = 197U;
int32_t t51 = -3;
volatile uint32_t x216 = 52629U;
volatile int32_t t53 = 110;
int64_t x218 = INT64_MIN;
uint32_t x220 = 11U;
static int32_t x222 = -3351595;
static int8_t x224 = -1;
int16_t x236 = -1;
int32_t t59 = 5409096;
int32_t x256 = INT32_MIN;
int32_t t63 = 230;
int8_t x263 = INT8_MAX;
int32_t t65 = -51504;
volatile int16_t x267 = 8;
uint8_t x270 = UINT8_MAX;
int32_t x272 = INT32_MIN;
uint16_t x282 = 827U;
int32_t x285 = -421;
volatile int64_t x297 = INT64_MIN;
static int16_t x302 = -94;
static int8_t x309 = 4;
int8_t x310 = INT8_MIN;
int8_t x316 = 1;
uint8_t x321 = 32U;
int32_t x326 = -196;
static volatile int32_t t81 = -480078503;
int64_t x336 = INT64_MAX;
int8_t x338 = -5;
volatile int16_t x342 = 2580;
int32_t x373 = -667537875;
int64_t x374 = 4310420LL;
int32_t t93 = -232;
static int64_t x378 = -1LL;
static int32_t t95 = 21389710;
int8_t x386 = INT8_MAX;
uint32_t x389 = 3215U;
int16_t x393 = -84;
volatile int32_t t98 = -14173540;
int64_t x399 = INT64_MIN;


void f0(void) {
	int32_t x1 = -1;
	static int16_t x2 = -165;
	int16_t x3 = -1;
	uint32_t x4 = 84392U;
	volatile int32_t t0 = -3616;

	t0 = (x1==(x2<(x3^x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -7391232820749542LL;
	static uint64_t x6 = UINT64_MAX;
	uint32_t x7 = 5709U;
	uint16_t x8 = UINT16_MAX;
	static int32_t t1 = -486179661;

	t1 = (x5==(x6<(x7^x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	static uint8_t x11 = 40U;
	uint64_t x12 = 206693907683LLU;
	volatile int32_t t2 = 242732;

	t2 = (x9==(x10<(x11^x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	int16_t x14 = -1;
	static int64_t x16 = -8333522LL;
	int32_t t3 = 1536092;

	t3 = (x13==(x14<(x15^x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 1614941LLU;
	int32_t x18 = INT32_MIN;
	uint8_t x19 = 8U;
	int32_t x20 = -1;
	int32_t t4 = 381;

	t4 = (x17==(x18<(x19^x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 40U;
	volatile uint16_t x22 = UINT16_MAX;
	int32_t x23 = INT32_MIN;
	int32_t t5 = 0;

	t5 = (x21==(x22<(x23^x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = INT8_MIN;
	int16_t x27 = -30;
	static volatile int32_t x28 = INT32_MIN;
	int32_t t6 = -4629;

	t6 = (x25==(x26<(x27^x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint16_t x29 = UINT16_MAX;
	static volatile uint32_t x30 = 57U;
	volatile int64_t x32 = INT64_MIN;
	int32_t t7 = -1610;

	t7 = (x29==(x30<(x31^x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = INT32_MIN;
	int64_t x34 = 2717036729336671867LL;
	uint32_t x35 = 3234U;
	volatile int16_t x36 = -1;
	int32_t t8 = -678;

	t8 = (x33==(x34<(x35^x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -2639;
	volatile int8_t x38 = INT8_MAX;
	int32_t x39 = INT32_MAX;
	volatile uint16_t x40 = UINT16_MAX;
	volatile int32_t t9 = -2;

	t9 = (x37==(x38<(x39^x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = 1;
	uint32_t x42 = UINT32_MAX;
	int64_t x43 = 1468LL;
	static int8_t x44 = INT8_MAX;
	volatile int32_t t10 = -73643975;

	t10 = (x41==(x42<(x43^x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x46 = INT16_MIN;
	int8_t x47 = -7;
	volatile int8_t x48 = -1;
	int32_t t11 = -1;

	t11 = (x45==(x46<(x47^x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint8_t x49 = 9U;
	volatile int32_t x51 = 12465752;
	volatile int32_t t12 = -81;

	t12 = (x49==(x50<(x51^x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = INT16_MAX;
	int16_t x55 = 0;
	static uint64_t x56 = 5955LLU;

	t13 = (x53==(x54<(x55^x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MAX;
	volatile int32_t x58 = -5582;
	int16_t x59 = INT16_MIN;
	uint32_t x60 = 12148192U;

	t14 = (x57==(x58<(x59^x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = 5;
	int8_t x62 = INT8_MIN;
	int8_t x63 = INT8_MAX;
	int32_t x64 = INT32_MIN;
	volatile int32_t t15 = -366614596;

	t15 = (x61==(x62<(x63^x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -583882135673500LL;
	static int32_t x66 = -2023871;
	int64_t x67 = -1LL;
	volatile int32_t t16 = 433582632;

	t16 = (x65==(x66<(x67^x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 28U;
	static int64_t x70 = INT64_MAX;
	int64_t x71 = INT64_MIN;
	static uint16_t x72 = 16U;
	static int32_t t17 = -3698710;

	t17 = (x69==(x70<(x71^x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MAX;
	int16_t x74 = INT16_MAX;
	volatile uint8_t x75 = 0U;
	static int32_t x76 = INT32_MAX;

	t18 = (x73==(x74<(x75^x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = 12;
	static int8_t x78 = INT8_MIN;
	static volatile int32_t t19 = 19098882;

	t19 = (x77==(x78<(x79^x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x81 = -28;
	int16_t x82 = INT16_MIN;
	int8_t x83 = INT8_MIN;
	static uint64_t x84 = 3742108LLU;
	static int32_t t20 = -3538;

	t20 = (x81==(x82<(x83^x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	static int64_t x87 = INT64_MIN;
	int16_t x88 = 5;

	t21 = (x85==(x86<(x87^x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = -32587;
	int64_t x91 = INT64_MAX;
	int64_t x92 = -22252978622LL;
	volatile int32_t t22 = -59901281;

	t22 = (x89==(x90<(x91^x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x94 = 156287379965012155LLU;
	int64_t x95 = INT64_MAX;
	static int16_t x96 = 1;

	t23 = (x93==(x94<(x95^x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x98 = 52451455U;
	int8_t x99 = INT8_MIN;
	volatile int32_t t24 = 407252383;

	t24 = (x97==(x98<(x99^x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MIN;
	uint16_t x102 = 1U;
	volatile int8_t x103 = INT8_MIN;
	int16_t x104 = INT16_MIN;

	t25 = (x101==(x102<(x103^x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x105 = INT32_MIN;
	uint16_t x106 = 246U;
	uint64_t x107 = UINT64_MAX;
	int64_t x108 = -1LL;

	t26 = (x105==(x106<(x107^x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 14U;
	static int8_t x110 = INT8_MIN;
	uint64_t x111 = UINT64_MAX;
	int16_t x112 = INT16_MAX;
	static int32_t t27 = 4114575;

	t27 = (x109==(x110<(x111^x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -24;
	volatile int16_t x114 = 1810;
	volatile uint64_t x115 = 0LLU;
	int16_t x116 = -3;
	int32_t t28 = 237;

	t28 = (x113==(x114<(x115^x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = 52;
	uint8_t x118 = 58U;
	int32_t x119 = INT32_MIN;
	int8_t x120 = -1;
	volatile int32_t t29 = -7465325;

	t29 = (x117==(x118<(x119^x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MAX;
	int32_t x122 = 15;
	int64_t x123 = INT64_MIN;
	int32_t x124 = INT32_MAX;
	static int32_t t30 = 55;

	t30 = (x121==(x122<(x123^x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x126 = 200939330060745511LLU;
	static int16_t x127 = 0;
	int64_t x128 = INT64_MAX;

	t31 = (x125==(x126<(x127^x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = UINT16_MAX;
	uint64_t x130 = 83LLU;
	volatile int32_t t32 = 3;

	t32 = (x129==(x130<(x131^x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x134 = UINT16_MAX;
	int8_t x135 = 1;
	int32_t t33 = 394243;

	t33 = (x133==(x134<(x135^x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -1;
	uint64_t x138 = 12847LLU;
	int16_t x139 = -1;
	static volatile uint64_t x140 = UINT64_MAX;

	t34 = (x137==(x138<(x139^x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = 207U;
	uint64_t x142 = 3446497304702789520LLU;
	static volatile int32_t x143 = INT32_MAX;
	int64_t x144 = INT64_MIN;

	t35 = (x141==(x142<(x143^x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 16LLU;
	int16_t x146 = INT16_MAX;
	uint8_t x148 = 116U;
	static volatile int32_t t36 = 0;

	t36 = (x145==(x146<(x147^x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	uint32_t x152 = UINT32_MAX;
	volatile int32_t t37 = -10001727;

	t37 = (x149==(x150<(x151^x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = -1;
	volatile int32_t x154 = INT32_MIN;
	int16_t x155 = 0;
	volatile uint32_t x156 = 257U;
	int32_t t38 = 29;

	t38 = (x153==(x154<(x155^x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x158 = 44U;
	uint16_t x159 = UINT16_MAX;
	uint8_t x160 = 47U;
	static volatile int32_t t39 = -3;

	t39 = (x157==(x158<(x159^x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	int8_t x162 = 1;

	t40 = (x161==(x162<(x163^x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -1LL;
	static int16_t x166 = INT16_MIN;
	volatile uint16_t x167 = UINT16_MAX;
	uint32_t x168 = 217140U;
	static volatile int32_t t41 = 54402695;

	t41 = (x165==(x166<(x167^x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x170 = INT32_MIN;
	int64_t x171 = -1LL;
	int8_t x172 = -1;
	static volatile int32_t t42 = -1209990;

	t42 = (x169==(x170<(x171^x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = 134077091016949281LLU;
	int8_t x174 = -1;
	volatile int16_t x175 = 2967;
	int32_t x176 = INT32_MIN;

	t43 = (x173==(x174<(x175^x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x177 = INT64_MIN;
	int8_t x178 = -1;
	static uint16_t x179 = 22U;
	static int32_t x180 = INT32_MIN;
	int32_t t44 = 19;

	t44 = (x177==(x178<(x179^x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MIN;
	int64_t x182 = INT64_MIN;
	uint32_t x183 = 4875U;
	volatile int32_t t45 = -1001187;

	t45 = (x181==(x182<(x183^x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x185 = INT64_MAX;
	uint64_t x187 = 273176078206824648LLU;
	int32_t t46 = 0;

	t46 = (x185==(x186<(x187^x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -278826801689501671LL;
	volatile uint8_t x190 = 0U;
	int8_t x191 = INT8_MAX;
	uint32_t x192 = 208990U;
	volatile int32_t t47 = -3;

	t47 = (x189==(x190<(x191^x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x193 = -1;
	int16_t x194 = -4062;
	int16_t x195 = 1;
	static int32_t x196 = INT32_MIN;
	volatile int32_t t48 = -5695500;

	t48 = (x193==(x194<(x195^x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x197 = 94LL;
	static volatile int16_t x198 = -1;
	volatile int32_t x199 = 227491826;
	int32_t t49 = -4632;

	t49 = (x197==(x198<(x199^x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x202 = -2LL;
	int32_t x203 = INT32_MIN;
	static int32_t x204 = INT32_MIN;
	static volatile int32_t t50 = 8339635;

	t50 = (x201==(x202<(x203^x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 14U;
	volatile int32_t x206 = 615;
	uint16_t x207 = 11553U;
	int32_t x208 = 1586;

	t51 = (x205==(x206<(x207^x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x209 = INT8_MIN;
	int64_t x210 = 135136935763687973LL;
	int8_t x211 = INT8_MIN;
	static int32_t x212 = -1;
	int32_t t52 = -30968989;

	t52 = (x209==(x210<(x211^x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = 67669112895065430LLU;
	int16_t x214 = -1;
	int8_t x215 = -1;

	t53 = (x213==(x214<(x215^x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x217 = INT64_MAX;
	static int8_t x219 = INT8_MAX;
	volatile int32_t t54 = -130;

	t54 = (x217==(x218<(x219^x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x221 = INT8_MIN;
	static uint16_t x223 = UINT16_MAX;
	int32_t t55 = -10477816;

	t55 = (x221==(x222<(x223^x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x225 = INT16_MAX;
	volatile uint32_t x226 = 1463329123U;
	static int16_t x227 = -1;
	int32_t x228 = -1;
	volatile int32_t t56 = 1;

	t56 = (x225==(x226<(x227^x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x229 = INT32_MIN;
	int64_t x230 = INT64_MIN;
	static int64_t x231 = -22072536LL;
	volatile int16_t x232 = INT16_MAX;
	int32_t t57 = 870;

	t57 = (x229==(x230<(x231^x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x233 = 285U;
	static uint32_t x234 = 962642U;
	int16_t x235 = INT16_MIN;
	static volatile int32_t t58 = 2;

	t58 = (x233==(x234<(x235^x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = 14;
	volatile uint16_t x238 = UINT16_MAX;
	int8_t x239 = INT8_MIN;
	int16_t x240 = -1;

	t59 = (x237==(x238<(x239^x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = 6;
	static volatile int8_t x242 = INT8_MIN;
	volatile uint64_t x243 = 519705312309LLU;
	int64_t x244 = INT64_MIN;
	volatile int32_t t60 = -14384;

	t60 = (x241==(x242<(x243^x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = -1LL;
	volatile uint16_t x246 = UINT16_MAX;
	uint16_t x247 = 2U;
	int16_t x248 = -1;
	volatile int32_t t61 = -3;

	t61 = (x245==(x246<(x247^x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = UINT8_MAX;
	volatile int16_t x250 = INT16_MIN;
	static int32_t x251 = INT32_MAX;
	int64_t x252 = INT64_MIN;
	static int32_t t62 = 5210;

	t62 = (x249==(x250<(x251^x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = 1U;
	int16_t x254 = INT16_MAX;
	int16_t x255 = -1;

	t63 = (x253==(x254<(x255^x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	static int64_t x258 = 14819LL;
	uint32_t x259 = 0U;
	static volatile uint64_t x260 = 2LLU;
	static int32_t t64 = 659007727;

	t64 = (x257==(x258<(x259^x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x261 = -3;
	int16_t x262 = INT16_MIN;
	volatile int16_t x264 = -1;

	t65 = (x261==(x262<(x263^x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x265 = 5567085581946625LLU;
	volatile int16_t x266 = -7;
	static volatile int64_t x268 = INT64_MIN;
	int32_t t66 = -768189941;

	t66 = (x265==(x266<(x267^x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -1;
	int32_t x271 = -1;
	volatile int32_t t67 = 185;

	t67 = (x269==(x270<(x271^x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MAX;
	static int8_t x274 = -1;
	static uint8_t x275 = UINT8_MAX;
	int64_t x276 = INT64_MIN;
	int32_t t68 = 1;

	t68 = (x273==(x274<(x275^x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = UINT8_MAX;
	static volatile int8_t x278 = -1;
	int64_t x279 = -941414002LL;
	int64_t x280 = 25780LL;
	static volatile int32_t t69 = -262960342;

	t69 = (x277==(x278<(x279^x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = 26545;
	int8_t x283 = INT8_MAX;
	int32_t x284 = -1;
	static volatile int32_t t70 = -704;

	t70 = (x281==(x282<(x283^x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x286 = 482U;
	uint32_t x287 = UINT32_MAX;
	int64_t x288 = -687837154893842946LL;
	int32_t t71 = -370573;

	t71 = (x285==(x286<(x287^x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x289 = 139;
	int8_t x290 = -1;
	int64_t x291 = -1LL;
	int8_t x292 = -1;
	int32_t t72 = -7795433;

	t72 = (x289==(x290<(x291^x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = 20U;
	static int8_t x294 = 26;
	volatile int32_t x295 = 19343856;
	int8_t x296 = -18;
	volatile int32_t t73 = -55;

	t73 = (x293==(x294<(x295^x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x298 = -1;
	int64_t x299 = INT64_MIN;
	volatile int64_t x300 = INT64_MIN;
	int32_t t74 = -45;

	t74 = (x297==(x298<(x299^x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x301 = 118904842825717637LL;
	uint16_t x303 = 7U;
	static volatile uint16_t x304 = UINT16_MAX;
	int32_t t75 = -3883;

	t75 = (x301==(x302<(x303^x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = 1;
	int32_t x306 = 7014;
	volatile int32_t x307 = -61509;
	static volatile int8_t x308 = INT8_MIN;
	int32_t t76 = -108347;

	t76 = (x305==(x306<(x307^x308)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x311 = UINT8_MAX;
	volatile int16_t x312 = INT16_MIN;
	volatile int32_t t77 = 551078963;

	t77 = (x309==(x310<(x311^x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MAX;
	int16_t x314 = 519;
	uint16_t x315 = 616U;
	volatile int32_t t78 = 3579573;

	t78 = (x313==(x314<(x315^x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x317 = INT16_MIN;
	uint64_t x318 = 2053394935LLU;
	static int8_t x319 = INT8_MAX;
	int8_t x320 = INT8_MIN;
	static volatile int32_t t79 = 66;

	t79 = (x317==(x318<(x319^x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x322 = INT32_MAX;
	volatile int64_t x323 = -1LL;
	volatile uint64_t x324 = 102423645755890LLU;
	int32_t t80 = 15104;

	t80 = (x321==(x322<(x323^x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = 16U;
	uint16_t x327 = 4U;
	int32_t x328 = INT32_MAX;

	t81 = (x325==(x326<(x327^x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x329 = UINT16_MAX;
	uint32_t x330 = 8010909U;
	int16_t x331 = 1329;
	int32_t x332 = INT32_MIN;
	int32_t t82 = 27;

	t82 = (x329==(x330<(x331^x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x333 = UINT16_MAX;
	uint64_t x334 = 274999344824839486LLU;
	volatile int32_t x335 = INT32_MIN;
	volatile int32_t t83 = -47043;

	t83 = (x333==(x334<(x335^x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x337 = INT16_MIN;
	volatile int8_t x339 = 19;
	static volatile int64_t x340 = -1LL;
	int32_t t84 = -22;

	t84 = (x337==(x338<(x339^x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = 1717850502000052870LLU;
	int8_t x343 = INT8_MIN;
	int16_t x344 = -1;
	static volatile int32_t t85 = -3022;

	t85 = (x341==(x342<(x343^x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint32_t x345 = UINT32_MAX;
	static volatile int16_t x346 = 1;
	uint8_t x347 = 2U;
	static volatile int32_t x348 = INT32_MAX;
	int32_t t86 = 27916;

	t86 = (x345==(x346<(x347^x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = 0;
	int16_t x350 = 487;
	int32_t x351 = -1;
	uint8_t x352 = 1U;
	volatile int32_t t87 = 1;

	t87 = (x349==(x350<(x351^x352)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = 1;
	static int16_t x354 = INT16_MAX;
	int16_t x355 = INT16_MAX;
	int16_t x356 = INT16_MAX;
	int32_t t88 = 66742868;

	t88 = (x353==(x354<(x355^x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MAX;
	int32_t x358 = INT32_MIN;
	int32_t x359 = INT32_MIN;
	volatile uint8_t x360 = 79U;
	volatile int32_t t89 = 236;

	t89 = (x357==(x358<(x359^x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MAX;
	int32_t x362 = -1887462;
	int8_t x363 = 0;
	uint8_t x364 = UINT8_MAX;
	volatile int32_t t90 = -28794;

	t90 = (x361==(x362<(x363^x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = 0;
	uint8_t x366 = UINT8_MAX;
	static int64_t x367 = 32313LL;
	uint8_t x368 = 13U;
	int32_t t91 = -1;

	t91 = (x365==(x366<(x367^x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MIN;
	int8_t x370 = -1;
	int8_t x371 = INT8_MIN;
	static uint16_t x372 = UINT16_MAX;
	int32_t t92 = -4933;

	t92 = (x369==(x370<(x371^x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x375 = -8;
	uint8_t x376 = 0U;

	t93 = (x373==(x374<(x375^x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x377 = INT8_MIN;
	volatile int32_t x379 = INT32_MIN;
	volatile int32_t x380 = 21;
	int32_t t94 = -9769;

	t94 = (x377==(x378<(x379^x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -32885063310002206LL;
	int16_t x382 = 0;
	int8_t x383 = 23;
	volatile uint64_t x384 = 2039590116539LLU;

	t95 = (x381==(x382<(x383^x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MIN;
	static int8_t x387 = 7;
	static int64_t x388 = 311375LL;
	static volatile int32_t t96 = -166862;

	t96 = (x385==(x386<(x387^x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x390 = -1LL;
	int8_t x391 = INT8_MIN;
	uint16_t x392 = 3U;
	int32_t t97 = 92940268;

	t97 = (x389==(x390<(x391^x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x394 = 30;
	uint32_t x395 = 1091272262U;
	volatile uint16_t x396 = UINT16_MAX;

	t98 = (x393==(x394<(x395^x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -1LL;
	uint16_t x398 = 4U;
	uint8_t x400 = UINT8_MAX;
	int32_t t99 = 123;

	t99 = (x397==(x398<(x399^x400)));

	if (t99 != 0) { NG(); } else { ; }
	
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
